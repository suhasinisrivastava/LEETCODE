# Merge Without Extra Space
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two sorted arrays arr1[]&nbsp;of size N and arr2[]&nbsp;of size M. Each array is sorted in non-decreasing order. Merge the two&nbsp;arrays into one sorted array in non-decreasing order without using any extra space.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 4, M = 5
arr1[] = {1, 3, 5, 7}
arr2[] = {0, 2, 6, 8, 9}
<strong style="user-select: auto;">Output:</strong> 0 1 2 3 5 6 7 8 9
<strong style="user-select: auto;">Explanation:</strong> Since you can't use any 
extra space, modify the given arrays
to form </span>
<span style="font-size: 18px; user-select: auto;">arr1[] = {0, 1, 2, 3}
arr2[] = {5, 6, 7, 8, 9}
</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 2, M = 3
arr1[] = {10, 12}
arr2[] = {5, 18, 20}
<strong style="user-select: auto;">Output:</strong> 5 10 12 18 20
<strong style="user-select: auto;">Explanation:</strong>&nbsp;Since you can't use any
extra space, modify the given arrays
to form </span>
<span style="font-size: 18px; user-select: auto;">arr1[] = {5, 10}
arr2[] = {12, 18, 20}</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything.&nbsp;Complete the function <strong style="user-select: auto;">merge()</strong>&nbsp;which takes the two arrays&nbsp;arr1[]<strong style="user-select: auto;">, </strong>arr2[]<strong style="user-select: auto;"> </strong>and&nbsp;their sizes&nbsp;n and<strong style="user-select: auto;">&nbsp;</strong>m,&nbsp;as input parameters. The function does not return anything. Use the given arrays to sort and merge arr1[] and arr2[] in-place.&nbsp;<br style="user-select: auto;">
Note: The generated output will print all the elements of arr1[] followed by all the elements of arr2[].</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O((n+m)*log(n+m))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;=&nbsp;N, M&nbsp;&lt;= 5*10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
0 &lt;= arr1<sub style="user-select: auto;">i</sub>, arr2<sub style="user-select: auto;">i</sub>&nbsp;&lt;= 10<sup style="user-select: auto;">6</sup></span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>