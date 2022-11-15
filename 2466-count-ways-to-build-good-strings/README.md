<h2><a href="https://leetcode.com/problems/count-ways-to-build-good-strings/">2466. Count Ways To Build Good Strings</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the integers <code style="user-select: auto;">zero</code>, <code style="user-select: auto;">one</code>, <code style="user-select: auto;">low</code>, and <code style="user-select: auto;">high</code>, we can construct a string by starting with an empty string, and then at each step perform either of the following:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Append the character <code style="user-select: auto;">'0'</code> <code style="user-select: auto;">zero</code> times.</li>
	<li style="user-select: auto;">Append the character <code style="user-select: auto;">'1'</code> <code style="user-select: auto;">one</code> times.</li>
</ul>

<p style="user-select: auto;">This can be performed any number of times.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">good</strong> string is a string constructed by the above process having a <strong style="user-select: auto;">length</strong> between <code style="user-select: auto;">low</code> and <code style="user-select: auto;">high</code> (<strong style="user-select: auto;">inclusive</strong>).</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the number of <strong style="user-select: auto;">different</strong> good strings that can be constructed satisfying these properties.</em> Since the answer can be large, return it <strong style="user-select: auto;">modulo</strong> <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> low = 3, high = 3, zero = 1, one = 1
<strong style="user-select: auto;">Output:</strong> 8
<strong style="user-select: auto;">Explanation:</strong> 
One possible valid good string is "011". 
It can be constructed as follows: "" -&gt; "0" -&gt; "01" -&gt; "011". 
All binary strings from "000" to "111" are good strings in this example.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> low = 2, high = 3, zero = 1, one = 2
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> The good strings are "00", "11", "000", "110", and "011".
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= low&nbsp;&lt;= high&nbsp;&lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= zero, one &lt;= low</code></li>
</ul>
</div>