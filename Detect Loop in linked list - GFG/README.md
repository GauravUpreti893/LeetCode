# Detect Loop in linked list
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a linked list of <strong style="user-select: auto;">N</strong> nodes. The task is to check if the&nbsp;linked list has a loop. Linked list can contain&nbsp;self loop.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 3
value[] = {1,3,4}
x(position at which tail is connected) = 2
<strong style="user-select: auto;">Output: </strong>True<strong style="user-select: auto;">
Explanation: </strong>In above test case N = 3.
</span><span style="font-size: 18px; user-select: auto;">The linked list with nodes N = 3 is
given. Then value of&nbsp;x=2 is given which
means last node is connected with xth
node of linked list. Therefore, there
exists a loop.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 4
value[] = {1,8,3,4}
x = 0
<strong style="user-select: auto;">Output: </strong>False<strong style="user-select: auto;">
Explanation: </strong>For N = 4 ,x = 0 means
then lastNode-&gt;next = NULL, then
the&nbsp;Linked list does not contains
any loop.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
The task is to complete the function <strong style="user-select: auto;">detectloop</strong>() which contains reference to the head as only argument. This function should return <strong style="user-select: auto;">true</strong>&nbsp;if linked list contains loop, else return <strong style="user-select: auto;">false</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 ≤ N ≤ 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
1 ≤ Data on Node ≤ 10<sup style="user-select: auto;">3</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>