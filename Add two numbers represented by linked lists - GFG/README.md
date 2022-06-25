# Add two numbers represented by linked lists
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two numbers represented by two linked lists of size <strong style="user-select: auto;">N</strong> and <strong style="user-select: auto;">M</strong>. The task is to return a sum list. </span></p>

<blockquote style="user-select: auto;">
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">The sum list is a linked list representation of the addition of two input numbers<strong style="user-select: auto;"> from the last.</strong></span></p>
</blockquote>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 2
valueN[] = {4,5}
M = 3
valueM[] = {3,4,5}
<strong style="user-select: auto;">Output: </strong>3 9 0&nbsp;&nbsp;<strong style="user-select: auto;">
Explanation: </strong>For the given two linked
list (4 5) and (3 4 5), after adding
the two linked list&nbsp;resultant linked
list will be (3&nbsp;9 0).</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 2
valueN[] = {6,3}
M = 1
valueM[] = {7}
<strong style="user-select: auto;">Output: </strong>7 0<strong style="user-select: auto;">
Explanation: </strong>For the given two linked
list (6 3) and (7), after adding the
two linked list&nbsp;resultant linked list
will be (7 0).</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your&nbsp;Task:</strong><br style="user-select: auto;">
The task is to complete the function <strong style="user-select: auto;">addTwoLists</strong>() which has node reference of both the linked lists and returns the head of the sum list. &nbsp;&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N+M)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(Max(N,M)) for the resultant list.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= N, M &lt;= 5000</span></p>
 <p style="user-select: auto;"></p>
            </div>