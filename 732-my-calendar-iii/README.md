<h2><a href="https://leetcode.com/problems/my-calendar-iii/">732. My Calendar III</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A <code style="user-select: auto;">k</code>-booking happens when <code style="user-select: auto;">k</code> events have some non-empty intersection (i.e., there is some time that is common to all <code style="user-select: auto;">k</code> events.)</p>

<p style="user-select: auto;">You are given some events <code style="user-select: auto;">[start, end)</code>, after each given event, return an integer <code style="user-select: auto;">k</code> representing the maximum <code style="user-select: auto;">k</code>-booking between all the previous events.</p>

<p style="user-select: auto;">Implement the <code style="user-select: auto;">MyCalendarThree</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">MyCalendarThree()</code> Initializes the object.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">int book(int start, int end)</code> Returns an integer <code style="user-select: auto;">k</code> representing the largest integer such that there exists a <code style="user-select: auto;">k</code>-booking in the calendar.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["MyCalendarThree", "book", "book", "book", "book", "book", "book"]
[[], [10, 20], [50, 60], [10, 40], [5, 15], [5, 10], [25, 55]]
<strong style="user-select: auto;">Output</strong>
[null, 1, 1, 2, 3, 3, 3]

<strong style="user-select: auto;">Explanation</strong>
MyCalendarThree myCalendarThree = new MyCalendarThree();
myCalendarThree.book(10, 20); // return 1, The first event can be booked and is disjoint, so the maximum k-booking is a 1-booking.
myCalendarThree.book(50, 60); // return 1, The second event can be booked and is disjoint, so the maximum k-booking is a 1-booking.
myCalendarThree.book(10, 40); // return 2, The third event [10, 40) intersects the first event, and the maximum k-booking is a 2-booking.
myCalendarThree.book(5, 15); // return 3, The remaining events cause the maximum K-booking to be only a 3-booking.
myCalendarThree.book(5, 10); // return 3
myCalendarThree.book(25, 55); // return 3
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= start &lt; end &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">400</code> calls will be made to <code style="user-select: auto;">book</code>.</li>
</ul>
</div>