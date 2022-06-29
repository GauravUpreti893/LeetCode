# Stock span problem
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">The stock span problem is a financial problem where we have a series of <strong style="user-select: auto;">n</strong> daily price quotes for a stock and we need to calculate the span of stocks price for all <strong style="user-select: auto;">n</strong> days.&nbsp;<br style="user-select: auto;">
The span <strong style="user-select: auto;">S<sub style="user-select: auto;">i</sub></strong> of the stocks price on a given day <strong style="user-select: auto;">i</strong> is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day.<br style="user-select: auto;">
For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
N = 7, price[] = [100 80 60 70 60 75 85]
<strong style="user-select: auto;">Output</strong>:
1 1 1 2 1 4 6
<strong style="user-select: auto;">Explanation</strong>:
Traversing the given input span for&nbsp;100 
will be 1, 80 is smaller than 100 so the 
span is 1, 60 is smaller than 80 so the 
span is 1, 70 is greater than 60 so the 
span is 2 and so on. Hence the output will 
be 1 1 1 2 1 4 6.
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
N = 6, price[] = [10 4 5 90 120 80]
<strong style="user-select: auto;">Output</strong>:
1 1 2 4 5 1
<strong style="user-select: auto;">Explanation</strong>:
Traversing the given input span for 10 
will be 1, 4 is smaller than 10 so the 
span will be 1, 5 is greater than 4 so 
the span will be 2 and so on. Hence, the 
output will be&nbsp;1 1 2 4 5 1.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">User Task:</strong><br style="user-select: auto;">
The task is to complete the function&nbsp;<strong style="user-select: auto;">calculateSpan</strong>() which takes two parameters, an array<strong style="user-select: auto;"> price[] </strong>denoting the price of stocks, and an integer <strong style="user-select: auto;">N </strong>denoting the size of the array and number of days. This function finds the span of stock's price for all N&nbsp;days and returns an array of length <strong style="user-select: auto;">N</strong> denoting the span for the i-th day.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 ≤ C[i] ≤ 10<sup style="user-select: auto;">5</sup></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><img alt="" src="https://contribute.geeksforgeeks.org/wp-content/uploads/Stock_span.png" class="img-responsive" style="user-select: auto;"></span></p>
 <p style="user-select: auto;"></p>
            </div>