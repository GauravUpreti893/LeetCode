# Intersection Point in Y Shapped Linked Lists
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two singly linked lists of size <strong style="user-select: auto;">N</strong> and <strong style="user-select: auto;">M, </strong>write a program to get the point where two linked lists intersect each other.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong><strong style="user-select: auto;">
</strong>LinkList1 = 3-&gt;6-&gt;9-&gt;common
LinkList2 = 10-&gt;common
common = 15-&gt;30-&gt;NULL
<strong style="user-select: auto;">Output: 1</strong>5
<strong style="user-select: auto;">Explanation:
</strong><img alt="Y ShapedLinked List" class="aligncenter size-full wp-image-2753 img-responsive" src="https://contribute.geeksforgeeks.org/wp-content/uploads/linked.jpg" style="height: 334px; width: 388px; user-select: auto;" title="Y ShapedLinked List"></span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: 
</strong>Linked List 1 = 4-&gt;1-&gt;common
Linked List 2 = 5-&gt;6-&gt;1-&gt;common
common = 8-&gt;4-&gt;5-&gt;NULL
<strong style="user-select: auto;">Output: </strong>8
<strong style="user-select: auto;">Explanation: </strong></span>

<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">4              5</strong></span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">|              |</strong></span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">1              6
</strong></span><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;"> \             /</strong></span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">  8   -----  1 </strong></span>
   <strong style="user-select: auto;">|</strong>
   <strong style="user-select: auto;">4</strong>
   <strong style="user-select: auto;">|
</strong><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">  5</strong></span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">  |</strong></span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">  NULL       </strong></span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. The task is to complete the function <strong style="user-select: auto;">intersetPoint</strong>() which takes the pointer to the head of linklist1(<strong style="user-select: auto;">head1</strong>) and linklist2(<strong style="user-select: auto;">head2</strong>) as input parameters and&nbsp;returns data value of a node where two linked lists intersect. If linked list do not merge at any point, then it should&nbsp;return <strong style="user-select: auto;">-1</strong>.</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Challenge </strong>: Try to solve the problem without using any extra space.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N+M)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N + M ≤&nbsp;2*10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
-1000&nbsp;≤&nbsp;value ≤&nbsp;1000</span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>