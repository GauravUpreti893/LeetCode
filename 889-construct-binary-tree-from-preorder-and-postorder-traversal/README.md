<h2><a href="https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal/">889. Construct Binary Tree from Preorder and Postorder Traversal</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two integer arrays, <code style="user-select: auto;">preorder</code> and <code style="user-select: auto;">postorder</code> where <code style="user-select: auto;">preorder</code> is the preorder traversal of a binary tree of <strong style="user-select: auto;">distinct</strong> values and <code style="user-select: auto;">postorder</code> is the postorder traversal of the same tree, reconstruct and return <em style="user-select: auto;">the binary tree</em>.</p>

<p style="user-select: auto;">If there exist multiple answers, you can <strong style="user-select: auto;">return any</strong> of them.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/07/24/lc-prepost.jpg" style="width: 304px; height: 265px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> preorder = [1,2,4,5,3,6,7], postorder = [4,5,2,6,7,3,1]
<strong style="user-select: auto;">Output:</strong> [1,2,3,4,5,6,7]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> preorder = [1], postorder = [1]
<strong style="user-select: auto;">Output:</strong> [1]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= preorder.length &lt;= 30</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= preorder[i] &lt;= preorder.length</code></li>
	<li style="user-select: auto;">All the values of <code style="user-select: auto;">preorder</code> are <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">postorder.length == preorder.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= postorder[i] &lt;= postorder.length</code></li>
	<li style="user-select: auto;">All the values of <code style="user-select: auto;">postorder</code> are <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;">It is guaranteed that <code style="user-select: auto;">preorder</code> and <code style="user-select: auto;">postorder</code> are the preorder traversal and postorder traversal of the same binary tree.</li>
</ul>
</div>