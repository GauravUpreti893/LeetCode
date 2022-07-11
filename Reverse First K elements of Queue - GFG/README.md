# Reverse First K elements of Queue
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an integer <strong style="user-select: auto;">K </strong>and a&nbsp;<a href="http://www.geeksforgeeks.org/queue-data-structure/" target="_blank" style="user-select: auto;">queue</a>&nbsp;of integers, we need to reverse the order of the first<strong style="user-select: auto;"> K</strong> elements of the queue, leaving the other elements in the same relative order.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Only following standard operations are allowed on queue.</span></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">enqueue(x) : Add an item x to rear of queue</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">dequeue() : Remove an item from front of queue</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">size() : Returns number of elements in queue.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">front() : Finds front item.<br style="user-select: auto;">
	<strong style="user-select: auto;">Note:</strong> The above operations represent the general processings. In-built functions of the respective languages&nbsp;can be used to solve the problem.</span></li>
</ul>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">5 3
1 2 3 4 5

<strong style="user-select: auto;">Output: 
</strong>3 2 1 4 5
<strong style="user-select: auto;">
Explanation: 
</strong>After reversing the given
input from the 3rd position the resultant
output will be 3 2 1 4 5.
</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">4 4
4 3 2 1

<strong style="user-select: auto;">Output: 
</strong>1 2 3 4
<strong style="user-select: auto;">
Explanation: 
</strong>After reversing the given
input from the 4th position the resultant
output will be 1 2 3 4.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Complete </strong>the <strong style="user-select: auto;">provided function</strong> <strong style="user-select: auto;">modifyQueue </strong>that takes <strong style="user-select: auto;">queue and k</strong> as <strong style="user-select: auto;">parameters </strong>and <strong style="user-select: auto;">returns </strong>a <strong style="user-select: auto;">modified </strong>queue. The <strong style="user-select: auto;">printing </strong>is done <strong style="user-select: auto;">automatically </strong>by the <strong style="user-select: auto;">driver code</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong> : O(n)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space </strong>: O(n)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 1000<br style="user-select: auto;">
1 &lt;= K &lt;= N</span></p>
 <p style="user-select: auto;"></p>
            </div>