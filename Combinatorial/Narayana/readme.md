# Narayana's Algorithm (Next Lexicographical Permutation)

## Overview
Narayana's algorithm is an efficient method for generating the next lexicographical permutation of a sequence of elements. It transforms a given permutation into the next one in lexicographical order, allowing for a systematic traversal of all possible permutations.

Unlike recursive approaches, this algorithm is **iterative** and performs the transformation **in-place**, making it highly memory-efficient.

## How It Works
The algorithm follows four main steps to find the next permutation:
1.  **Find the pivot:** Identify the largest index `i` such that `elements[i] < elements[i + 1]`.
2.  **Find the successor:** Identify the largest index `j` greater than `i` such that `elements[j] > elements[i]`.
3.  **Swap:** Exchange the elements at indices `i` and `j`.
4.  **Reverse:** Reverse the sequence of elements from index `i + 1` to the end of the array.

## Complexity
* **Time Complexity:** $O(n)$ per permutation in the worst case (though often $O(1)$ amortized).
* **Space Complexity:** $O(1)$ (in-place modification).
