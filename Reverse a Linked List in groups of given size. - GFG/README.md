# Reverse a Linked List in groups of given size.
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a linked list of size <strong style="user-select: auto;">N</strong>. The task is to reverse every <strong style="user-select: auto;">k</strong> nodes (where k is an input to the function) in the linked list. If the number of nodes is not a multiple of&nbsp;<em style="user-select: auto;">k</em>&nbsp;then left-out nodes, in the end, should be considered as a group and must be&nbsp;reversed (See Example 2 for clarification).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>LinkedList: 1-&gt;2-&gt;2-&gt;4-&gt;5-&gt;6-&gt;7-&gt;8
K = 4
<strong style="user-select: auto;">Output: </strong>4&nbsp;2&nbsp;2&nbsp;1&nbsp;8&nbsp;7&nbsp;6&nbsp;5 
<strong style="user-select: auto;">Explanation:</strong> 
The first 4 elements 1,2,2,4 are reversed first 
and then the next 4 elements 5,6,7,8. Hence, the 
resultant linked list is 4-&gt;2-&gt;2-&gt;1-&gt;8-&gt;7-&gt;6-&gt;5.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>LinkedList: 1-&gt;2-&gt;3-&gt;4-&gt;5
K = 3
<strong style="user-select: auto;">Output: </strong>3 2 1 5 4 
<strong style="user-select: auto;">Explanation: </strong>
The first 3 elements are 1,2,3 are reversed 
first and then elements 4,5 are reversed.Hence, 
the resultant linked list is 3-&gt;2-&gt;1-&gt;5-&gt;4.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">reverse</strong>() which should reverse the linked list in group of size <strong style="user-select: auto;">k&nbsp;</strong>and return the head of the modified linked list.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity </strong>: O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space </strong>: O(1)</span></p>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1 &lt;= N &lt;= 10<sup style="user-select: auto;">4</sup></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= k &lt;= N</span></div>
 <p style="user-select: auto;"></p>
            </div>