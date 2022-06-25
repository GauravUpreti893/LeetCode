# Remove duplicate element from sorted Linked List
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a singly linked list consisting of <strong style="user-select: auto;">N</strong> nodes. The task is to remove duplicates (nodes with duplicate values) from the given list (if exists).</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong> Try not to use extra space. Expected time complexity is <strong style="user-select: auto;">O(N)</strong>. The nodes are arranged in a <strong style="user-select: auto;">sorted </strong>way.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>LinkedList: 2-&gt;2-&gt;4-&gt;5
<strong style="user-select: auto;">Output: </strong>2 4 5<strong style="user-select: auto;">
Explanation: </strong>In the given linked list 
2 -&gt;2 -&gt; 4-&gt; 5, only 2 occurs more 
than 1 time.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>LinkedList: 2-&gt;2-&gt;2-&gt;2-&gt;2
<strong style="user-select: auto;">Output: </strong>2<strong style="user-select: auto;">
Explanation: </strong>In the given linked list 
2 -&gt;2 -&gt;2 -&gt;2 -&gt;2, 2 is the only element
and is repeated 5 times.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
The task is to complete the function&nbsp;<strong style="user-select: auto;">removeDuplicates</strong>() which should remove the duplicates from linked list and return the head of the linkedlist.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong> : O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space</strong> : O(1)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= Number of nodes &lt;= 10<sup style="user-select: auto;">4</sup></span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>