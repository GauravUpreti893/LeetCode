# Move Last Element to Front of a Linked List
## Easy
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given the head of a Linked List. You have to move the last element to the front of the Linked List and return the list.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong></span><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">
</strong>N = 5
List = {2,5,6,2,1}<strong style="user-select: auto;">
Output:</strong></span><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">
</strong>{1,2,5,6,2}<strong style="user-select: auto;">
Explanation:
</strong>In the given linked list, the last element is 1,
after moving the last element to the front the
linked list will be {1,2,5,6,2}.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 1
List = {2}<strong style="user-select: auto;">
Output:
</strong>{2}<strong style="user-select: auto;">
Explanation:
</strong>Here 2 is the only element so, the linked list
will remain the same.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">moveToFront()</strong>&nbsp;which takes the address of the head of the linked list&nbsp;and returns the modified linked list.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N&nbsp;&lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
0 &lt;= Elements of List&nbsp;&lt;= 10<sup style="user-select: auto;">9</sup><br style="user-select: auto;">
Sum of N over all test cases doesn't exceeds 10<sup style="user-select: auto;">6</sup></span></p>
</div>