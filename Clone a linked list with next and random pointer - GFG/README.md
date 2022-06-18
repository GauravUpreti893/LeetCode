# Clone a linked list with next and random pointer
##  Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given a special&nbsp;linked list&nbsp;with&nbsp;<strong style="user-select: auto;">N </strong>nodes where each node has a&nbsp;next pointer pointing to its&nbsp;next node. You are also given&nbsp;<strong style="user-select: auto;">M</strong>&nbsp;random pointers, where you will be given <strong style="user-select: auto;">M </strong>number of pairs denoting two nodes <strong style="user-select: auto;">a</strong> and <strong style="user-select: auto;">b</strong>&nbsp;&nbsp;<strong style="user-select: auto;">i.e.&nbsp;</strong></span><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">a-&gt;arb = b.</span></strong></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Construct a copy of the given list. The copy should consist of exactly <strong style="user-select: auto;">N</strong>&nbsp;new nodes, where each new node has its value set to the value of its corresponding original node. Both the next and random pointer of the new nodes should point to new nodes in the copied list such that the pointers in the original list and copied list represent the same list state. None of the pointers in the new list should point to nodes in the original list.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">For example, if there are two nodes <strong style="user-select: auto;">X</strong> and <strong style="user-select: auto;">Y</strong> in the original list, where <strong style="user-select: auto;">X.random</strong> <strong style="user-select: auto;">--&gt;</strong> <strong style="user-select: auto;">Y</strong>, then for the corresponding two nodes <strong style="user-select: auto;">x</strong> and <strong style="user-select: auto;">y</strong> in the copied list, <strong style="user-select: auto;">x.random --&gt; y.</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Return the head of the copied linked list.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><img alt="ArbitLinked List1" class="aligncenter size-full wp-image-1254 img-responsive" src="https://contribute.geeksforgeeks.org/wp-content/uploads/clone.jpg" style="height: 160px; width: 450px; user-select: auto;" title="ArbitLinked List1"></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 4, M = 2
value = {1,2,3,4}
pairs = {{1,2},{2,4}}
<strong style="user-select: auto;">Output: </strong>1<strong style="user-select: auto;">
Explanation: </strong>In this test case, there
are 4 nodes in linked list.&nbsp; Among these
4 nodes,&nbsp; 2 nodes have arbitrary pointer
set, rest two nodes have arbitrary pointer
as NULL. Second line tells us the value
of four nodes. The third line gives the
information about arbitrary pointers.
The first node arbitrary pointer is set to
node 2.&nbsp; The second node&nbsp;arbitrary pointer
is set to node 4.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 4, M = 2
value[] = {1,3,5,9}
pairs[] = {{1,1},{3,4}}
<strong style="user-select: auto;">Output: </strong>1<strong style="user-select: auto;">
Explanation: </strong>In the given testcase ,
applying the method as stated in the
above example, the output will be 1.</span>

<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
The task is to complete the function <strong style="user-select: auto;">copyList</strong>() which takes one argument the head of the linked list to be cloned and should <strong style="user-select: auto;">return</strong> the head of the cloned linked list.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">NOTE :&nbsp;</strong><br style="user-select: auto;">
1. If there is any node whose arbitrary pointer is not given then it's by default NULL.&nbsp;<br style="user-select: auto;">
2. Your solution return an output <strong style="user-select: auto;">1</strong> if your clone linked list is correct, else it returns <strong style="user-select: auto;">0</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong> : O(n)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space </strong>: O(1)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 100<br style="user-select: auto;">
1 &lt;= M&nbsp;&lt;= N<br style="user-select: auto;">
1 &lt;= a, b &lt;= 100</span></p>
 <p style="user-select: auto;"></p>
            </div>