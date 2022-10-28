# Print leaf nodes from preorder traversal of BST
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a preorder traversal of a BST, find&nbsp;the leaf nodes of the tree without building the tree.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 2
arr = {2,1}
<strong style="user-select: auto;">Output:</strong> {1}
<strong style="user-select: auto;">Explaination:</strong> 1 is the only leaf node.
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 3
Arr = {3, 2, 4}
<strong style="user-select: auto;">Output:</strong> {2, 4}
<strong style="user-select: auto;">Explaination:</strong> 2, 4 are the leaf nodes.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">leafNodes()</strong>&nbsp;which takes the array a<strong style="user-select: auto;">rr[]</strong> and its size <strong style="user-select: auto;">N&nbsp;</strong>as input parameters&nbsp;and returns&nbsp;the leaf nodes of the tree.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(N)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
1 ≤ arr[i]&nbsp;≤ 10<sup style="user-select: auto;">3</sup></span></p>
</div>