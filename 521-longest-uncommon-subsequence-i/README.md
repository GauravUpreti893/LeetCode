<h2><a href="https://leetcode.com/problems/longest-uncommon-subsequence-i/">521. Longest Uncommon Subsequence I</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two strings <code style="user-select: auto;">a</code> and <code style="user-select: auto;">b</code>, return <em style="user-select: auto;">the length of the <strong style="user-select: auto;">longest uncommon subsequence</strong> between </em><code style="user-select: auto;">a</code> <em style="user-select: auto;">and</em> <code style="user-select: auto;">b</code>. If the longest uncommon subsequence does not exist, return <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">An <strong style="user-select: auto;">uncommon subsequence</strong> between two strings is a string that is a <strong style="user-select: auto;">subsequence of one but not the other</strong>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">subsequence</strong> of a string <code style="user-select: auto;">s</code> is a string that can be obtained after deleting any number of characters from <code style="user-select: auto;">s</code>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, <code style="user-select: auto;">"abc"</code> is a subsequence of <code style="user-select: auto;">"aebdc"</code> because you can delete the underlined characters in <code style="user-select: auto;">"a<u style="user-select: auto;">e</u>b<u style="user-select: auto;">d</u>c"</code> to get <code style="user-select: auto;">"abc"</code>. Other subsequences of <code style="user-select: auto;">"aebdc"</code> include <code style="user-select: auto;">"aebdc"</code>, <code style="user-select: auto;">"aeb"</code>, and <code style="user-select: auto;">""</code> (empty string).</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> a = "aba", b = "cdc"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> One longest uncommon subsequence is "aba" because "aba" is a subsequence of "aba" but not "cdc".
Note that "cdc" is also a longest uncommon subsequence.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> a = "aaa", b = "bbb"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong>&nbsp;The longest uncommon subsequences are "aaa" and "bbb".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> a = "aaa", b = "aaa"
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong>&nbsp;Every subsequence of string a is also a subsequence of string b. Similarly, every subsequence of string b is also a subsequence of string a.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= a.length, b.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">a</code> and <code style="user-select: auto;">b</code> consist of lower-case English letters.</li>
</ul>
</div>