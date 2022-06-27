# Quick Sort on Linked List
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Sort the given <strong style="user-select: auto;">L</strong>inked <strong style="user-select: auto;">L</strong>ist using quicksort. which takes <strong style="user-select: auto;">O(n^2)</strong> time in worst case and <strong style="user-select: auto;">O(nLogn)</strong> in average and best cases, otherwise you may&nbsp;get TLE.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong><br style="user-select: auto;">
In this problem, method takes 1&nbsp;argument: address of the <strong style="user-select: auto;">head</strong> of the linked list. The function should not read any input from stdin/console.<br style="user-select: auto;">
The struct Node has a data part which stores the <strong style="user-select: auto;">data</strong> and a next pointer which points to the <strong style="user-select: auto;">next</strong> element of the linked list.<br style="user-select: auto;">
There are multiple test cases. For each test case, this method will be called individually.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong><br style="user-select: auto;">
Set <strong style="user-select: auto;">*headRef</strong> to head of resultant linked list.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">User Task:</strong><br style="user-select: auto;">
The task is to complete the function&nbsp;<strong style="user-select: auto;">quickSort</strong>() which should set the *headRef to head of the resultant linked list.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=<strong style="user-select: auto;">T</strong>&lt;=100<br style="user-select: auto;">
1&lt;=<strong style="user-select: auto;">N</strong>&lt;=200</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:&nbsp;</strong>If you use "Test" or "Expected Output Button" use below example format<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Example:<br style="user-select: auto;">
Input:</strong><br style="user-select: auto;">
2<br style="user-select: auto;">
3<br style="user-select: auto;">
1 6 2<br style="user-select: auto;">
4<br style="user-select: auto;">
1 9 3 8</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong><br style="user-select: auto;">
1 2 6<br style="user-select: auto;">
1 3 8 9</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:<br style="user-select: auto;">
Testcase 1:</strong> After sorting the nodes, we have 1, 2 and 6.<br style="user-select: auto;">
<strong style="user-select: auto;">Testcase 2:</strong> After sorting the nodes, we have 1, 3, 8 and 9.</span><br style="user-select: auto;">
&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>