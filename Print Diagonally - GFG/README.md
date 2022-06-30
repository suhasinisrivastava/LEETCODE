# Print Diagonally
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Give a N * N square matrix, return all the elements of its anti-diagonals from top to bottom. </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> 
N = 2
A = [[1, 2],
     [3, 4]]
<strong style="user-select: auto;">Output:</strong>
1 2 3 4
<strong style="user-select: auto;">Explanation:</strong> Topmost anti-diagonal is [[1, ], 
&nbsp;                                      [ , ]]
Next anti-diagonal is [[ , 2], 
â€‹                       [3,  ]]
and the last anti-diagonal is [[ ,  ], 
â€‹                               [ , 4]]
Hence, elements will be returned in the 
order {1, 2, 3, 4}.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: 
</strong>N = 3 
A = [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]
<strong style="user-select: auto;">Output:</strong> 
1 2 4 3 5 7 6 8 9
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">downwardDigonal()</strong> which takes an integer <strong style="user-select: auto;">N</strong> and a 2D matrix <strong style="user-select: auto;">A[ ][ ]</strong> as input parameters and returns the list of all elements of its anti-diagonals from top to bottom.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N*N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxillary Space:&nbsp;</strong>O(N*N)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N, M ≤ 10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
0 ≤ A[i][j] ≤ 10<sup style="user-select: auto;">6</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>