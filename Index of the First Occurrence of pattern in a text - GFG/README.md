# Index of the First Occurrence of pattern in a text
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two strings <strong>text&nbsp;</strong>and <strong>pattern, </strong>find the first index where pattern exactly matches with any substring of text.&nbsp; </span></p>

<p><span style="font-size:18px">Return -1 if pattern doesn't exist as a substring in text.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre style="position: relative;"><span style="font-size:18px"><strong>Input:</strong>
text = gffgfg
pattern = gfg
<strong>Output: </strong>3
<strong>Explanation:</strong>  Considering 0-based indexing, substring of text from 3rd to last index is gfg.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre style="position: relative;"><span style="font-size:18px"><strong>Input:</strong>
text = gffggg
pattern = gfg
<strong>Output: </strong>-1
<strong>Explanation:</strong> pattern "gfg" does not exist in the text.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>findMatching()</strong>&nbsp;which takes the strings <strong>text </strong>and <strong>pattern</strong> as the input parameters and returns the <strong>first index of matching.</strong></span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(|text| * |pattern|)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ |text|, |pattern|&nbsp;≤&nbsp; 10<sup>3</sup></span><br>
&nbsp;</p>
</div>