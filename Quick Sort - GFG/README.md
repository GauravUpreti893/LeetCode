# Quick Sort
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Quick Sort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot.<br style="user-select: auto;">
Given an array arr[], its starting position low and its ending position high.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Implement the partition() and quickSort() functions to sort the array.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto; position: relative;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>
N = 5 
arr[] = { 4, 1, 3, 9, 7}
<strong style="user-select: auto;">Output:</strong>
1 3 4 7 9</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto; position: relative;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>
N = 9
arr[] = { 2, 1, 6, 10, 4, 1, 3, 9, 7}
<strong style="user-select: auto;">Output:</strong>
1 1 2 3 4 6 7 9 10</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the functions <strong style="user-select: auto;">partition()&nbsp; </strong>and <strong style="user-select: auto;">quickSort() </strong>which takes the array arr[], low and high as input parameters and partitions the array. Consider the last element as the pivot such that all the elements less than(or equal to) the pivot lie before it and the elements greater than it lie after the pivot.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N*logN)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
1 &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">4</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>