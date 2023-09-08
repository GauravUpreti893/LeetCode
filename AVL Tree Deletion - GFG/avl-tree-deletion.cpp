//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data, height;
	Node *left, *right;
	Node(int x)
	{
		data = x;
		height = 1;
		left = right = NULL;
	}
};

int setHeights(Node* n)
{
	if(!n) return 0;
	n->height = 1 + max( setHeights(n->left) , setHeights(n->right) );
	return n->height;
}

Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = new Node(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    setHeights(root);
    return root;
}

bool isBST(Node *n, int lower, int upper)
{
	if(!n) return 1;
	if( n->data <= lower || n->data >= upper ) return 0;
	return isBST(n->left, lower, n->data) && isBST(n->right, n->data, upper) ;
}

pair<int,bool> isBalanced(Node* n)
{
	if(!n) return pair<int,bool> (0,1);

	pair<int,bool> l = isBalanced(n->left);
	pair<int,bool> r = isBalanced(n->right);

	if( abs(l.first - r.first) > 1 ) return pair<int,bool> (0,0);

	return pair<int,bool> ( 1 + max(l.first , r.first) , l.second && r.second );
}

bool isBalancedBST(Node* root)
{
	if( !isBST(root, INT_MIN, INT_MAX) )
		cout<< "BST voilated, inorder traversal : ";

	else if ( ! isBalanced(root).second )
		cout<< "Unbalanced BST, inorder traversal : ";

	else return 1;
	return 0;
}

void printInorder(Node* n)
{
	if(!n) return;
	printInorder(n->left);
	cout<< n->data << " ";
	printInorder(n->right);
}

struct Node* deleteNode(struct Node* root, int data);

int main()
{
	int t;
	cin>>t;
	getchar();

	while(t--)
	{
		string s;
		getline(cin,s);
		Node* root = buildTree(s);
        
		int n;
		cin>> n;
		int ip[n];
		for(int i=0; i<n; i++)
			cin>> ip[i];
        
		for(int i=0; i<n; i++)
		{
			root = deleteNode(root, ip[i]);
			
			if( !isBalancedBST(root) )
				break;
		}
        
		if(root==NULL)
			cout<<"null";
		else
			printInorder(root);
		cout<< endl;
        
		getline(cin,s); // to deal with newline char
	}
	return 1;
}

// } Driver Code Ends


/* Node is as follows:

struct Node
{
	int data, height;
	Node *left, *right;
	Node(int x)
	{
		data = x;
		height = 1;
		left = right = NULL;
	}
};

*/



///////////*************Make a function for height next time, life will be so easy****//////////////
Node* leftRotation(Node* root)
{
    Node* x = root->right;
    Node* temp = x->left;
    x->left = root;
    root->right = temp;
    root->height = 1 + max(root->left != NULL ? root->left->height : 0, temp != NULL ? temp->height : 0);
    x->height = 1 + max(x->right != NULL ? x->right->height : 0, root->height);
    return x;
}
Node* rightRotation(Node* root)
{
    Node* x = root->left;
    Node* temp = x->right;
    x->right = root;
    root->left = temp;
    root->height = 1 + max(root->right != NULL ? root->right->height : 0,temp != NULL ? temp->height : 0);
    x->height = 1 + max(x->left != NULL ? x->left->height : 0, root->height);
    return x;
}
Node* deleteNode(Node* root, int key)
{
    //add code here,
    if (root == NULL)
    return NULL;
    if (root->data == key)
    {
        if (root->left == NULL && root->right == NULL)
        return NULL;
        if (root->left == NULL)
        {
            root = root->right;
        }
        else if (root->right == NULL)
        {
            root = root->left;
        }
        else
        {
            Node* succ = root->left, *par = root;
            while (succ->right != NULL)
            {
                par = succ;
                succ = succ->right;
            }
            swap(root->data, succ->data);
            root->left = deleteNode(root->left, succ->data);
        }
    }
    else if (root->data > key)
    root->left = deleteNode(root->left, key);
    else
    root->right = deleteNode(root->right, key);
    root->height = 1 + max((root->left != NULL) ? root->left->height : 0, (root->right!= NULL) ? root->right->height : 0); 
    int balance = (root->left ? root->left->height : 0) - (root->right ? root->right->height : 0); 
    if (balance > 1)
    {
        int bal = ((root->left->left != NULL) ? root->left->left->height : 0) - ((root->left->right != NULL) ? root->left->right->height : 0);
        if (bal < 0)
        root->left = leftRotation(root->left);
        root = rightRotation(root);
    }
    if (balance < -1)
    {
        int bal = ((root->right->left != NULL) ? root->right->left->height : 0) - ((root->right->right != NULL) ? root->right->right->height : 0);
        if (bal > 0)
        root->right = rightRotation(root->right);
        root = leftRotation(root);
    }
    return root;
}