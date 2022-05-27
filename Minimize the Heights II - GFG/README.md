# Minimize the Heights II
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">arr[]</strong>&nbsp;denoting heights of <strong style="user-select: auto;">N</strong> towers and a positive integer <strong style="user-select: auto;">K</strong>, you <strong style="user-select: auto;">have to</strong> modify the height&nbsp;of each&nbsp;tower either by increasing or decreasing them by <strong style="user-select: auto;">K</strong> only <strong style="user-select: auto;">once</strong>. After modifying, height should be a <strong style="user-select: auto;">non-negative</strong> integer.&nbsp;<br style="user-select: auto;">
Find out the minimum possible difference of the height&nbsp;of shortest and longest towers after you have modified each tower.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You can find a slight modification of the problem&nbsp;<a href="https://practice.geeksforgeeks.org/problems/minimize-the-heights-i/1/" target="_blank" style="user-select: auto;">here</a>.<br style="user-select: auto;">
Note: It is compulsory to increase or decrease&nbsp;by K to each tower.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>K = 2, N = 4
Arr[] = {1, 5, 8, 10}
<strong style="user-select: auto;">Output:</strong>
5
<strong style="user-select: auto;">Explanation:</strong>
The array can be modified as 
{3, 3, 6, 8}. The difference between 
the largest and the smallest is 8-3 = 5.
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>K = 3, N = 5
Arr[] = {3, 9, 12, 16, 20}
<strong style="user-select: auto;">Output:</strong>
11
<strong style="user-select: auto;">Explanation:</strong>
The array can be modified as
{6,&nbsp;12,&nbsp;9,&nbsp;13,&nbsp;17}. The difference between 
the largest and the smallest is 17-6 = 11.&nbsp;
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">getMinDiff()</strong>&nbsp;which takes the <strong style="user-select: auto;">arr[], n</strong>&nbsp;and&nbsp;<strong style="user-select: auto;">k&nbsp;</strong>as input parameters and returns an integer&nbsp;denoting the minimum difference.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N*logN)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N)<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Constraints</strong><br style="user-select: auto;">
1 ≤ K&nbsp;≤ 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
1 ≤ N&nbsp;≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 ≤ Arr[i] ≤ 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>