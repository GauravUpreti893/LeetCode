# Count the Reversals
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a string <strong style="user-select: auto;">S</strong> consisting of only opening and closing curly brackets<strong style="user-select: auto;"> '{'</strong> and<strong style="user-select: auto;"> '}',</strong>&nbsp;find out the minimum&nbsp;number of reversals required to convert the string into a balanced expression.<br style="user-select: auto;">
A reversal means changing <strong style="user-select: auto;">'{'</strong> to <strong style="user-select: auto;">'}'</strong> or vice-versa.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto; position: relative;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
S = "}{{}}{{{"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation</strong>: One way to balance is:
"<strong style="user-select: auto;">{</strong>{{}}{<strong style="user-select: auto;">}}</strong>". There is no balanced sequence
that can be formed in lesser reversals.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">â€‹<strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto; position: relative;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
S = "{{}{{{}{{}}{{"</span><span style="font-size: 18px; user-select: auto;">
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation</strong>: There's no way we can balance
this sequence of braces.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">countRev()&nbsp;</strong>which takes the string S as input parameter&nbsp;and returns the minimum number of reversals required to balance the bracket sequence. If balancing is not possible, return -1.&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(|S|).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ |S| ≤ 10<sup style="user-select: auto;">5</sup></span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>