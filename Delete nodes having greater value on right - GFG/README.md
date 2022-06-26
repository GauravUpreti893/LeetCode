# Delete nodes having greater value on right
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a singly linked list, remove all the nodes which have a greater value on their right side.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>LinkedList = 12-&gt;15-&gt;10-&gt;11-&gt;5-&gt;6-&gt;2-&gt;3
<strong style="user-select: auto;">Output: </strong>15 11 6 3<strong style="user-select: auto;">
Explanation: </strong>Since, 12, 10, 5 and 2 are
the elements which have greater elements
on the following nodes. So, after deleting
them, the linked list would like be 15,
11, 6, 3.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>LinkedList = 10-&gt;20-&gt;30-&gt;40-&gt;50-&gt;60
<strong style="user-select: auto;">Output: </strong>60
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
The task is to complete the function <strong style="user-select: auto;">compute</strong>() which should modify the list as required and return the head of the modified linked list.&nbsp;The <strong style="user-select: auto;">printing </strong>is done by the <strong style="user-select: auto;">driver </strong>code,</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ size of linked list&nbsp;≤ 1000<br style="user-select: auto;">
1 ≤ element of linked list ≤ 1000<br style="user-select: auto;">
<strong style="user-select: auto;">Note</strong>: Try to solve the problem without using any extra space.</span></p>
 <p style="user-select: auto;"></p>
            </div>