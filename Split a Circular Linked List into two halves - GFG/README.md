# Split a Circular Linked List into two halves
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="text-align: justify; user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a <strong style="user-select: auto;">C</strong>irular <strong style="user-select: auto;">L</strong>inked <strong style="user-select: auto;">L</strong>ist of size <strong style="user-select: auto;">N,</strong> split it into two halves circular lists.&nbsp;If there are odd number of nodes in the given circular linked list then out of the resulting two halved lists, first&nbsp;list should have&nbsp;one&nbsp;node more than the second&nbsp;list. The resultant lists should also be circular lists and not linear lists.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>Circular LinkedList: 1-&gt;5-&gt;7
<strong style="user-select: auto;">Output:
</strong>1 5
7</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>Circular LinkedList: 2-&gt;6-&gt;1-&gt;5
<strong style="user-select: auto;">Output:
</strong>2 6
1 5
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="text-align: justify; user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Your task is to complete the given function <strong style="user-select: auto;">splitList</strong>(), which takes&nbsp;3 input parameters: The address of the head of the linked list, addresses&nbsp;of the head of the first and second halved resultant lists and&nbsp;Set the&nbsp;<strong style="user-select: auto;">head1_ref&nbsp;</strong>and&nbsp;<strong style="user-select: auto;">head2_ref</strong>&nbsp;to the first resultant&nbsp;list and second resultant list respectively.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong>: O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space</strong>: O(1)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 100</span></p>
 <p style="user-select: auto;"></p>
            </div>