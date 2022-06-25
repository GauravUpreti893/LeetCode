# Partition a Linked List around a given value
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a linked list and a value x, partition it such that all nodes less than x come first, then all nodes with value equal to x and finally nodes with value greater than x. The original relative order of the nodes in each of the three partitions should be preserved. The partition must work in-place.</span></div>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></div>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:</span></strong>
<span style="font-size: 18px; user-select: auto;">1-&gt;4-&gt;3-&gt;2-&gt;5-&gt;2-&gt;3,
x = 3</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Output:</span></strong>
<span style="font-size: 18px; user-select: auto;">1-&gt;2-&gt;2-&gt;3-&gt;3-&gt;4-&gt;5</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Explanation: </span></strong>
<span style="font-size: 18px; user-select: auto;">Nodes with value less than 3 come first, </span>
<span style="font-size: 18px; user-select: auto;">then equal to 3 and then greater than 3.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<div style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></div>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:</span></strong>
<span style="font-size: 18px; user-select: auto;">1-&gt;4-&gt;2-&gt;10 </span>
<span style="font-size: 18px; user-select: auto;">x = 3</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Output: </span></strong>
<span style="font-size: 18px; user-select: auto;">1-&gt;2-&gt;4-&gt;10</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Explanation:</span></strong>
<span style="font-size: 18px; user-select: auto;">Nodes with value less than 3 come first,</span>
<span style="font-size: 18px; user-select: auto;">then equal to 3 and then greater than 3.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<div style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your task:</span></strong></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">partition()</strong> which takes the head of the inked list and an integer x as input, and returns the head of the modified linked list after arranging the values according to x.</span></div>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected time complexity :</strong> O(n)</span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(n)</span></div>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Constraints:</span></strong></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1 &lt;= N &lt;= 10<sup style="user-select: auto;">5</sup></span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1 &lt;= k &lt;= 10<sup style="user-select: auto;">5</sup></span></div>
 <p style="user-select: auto;"></p>
            </div>