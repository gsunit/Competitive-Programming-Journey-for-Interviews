<!-- Output copied to clipboard! -->


**<h1> Topics and notes from my CP journey </h1>**

**Important**



*   Intro to coding style in CP: [https://boplets.com/2019/07/10/getting-used-to-contest-style-for-beginners/](https://boplets.com/2019/07/10/getting-used-to-contest-style-for-beginners/)
*   

**Common**



*   Moore’s voting algo
*   Tortoise and Hare algo
    *   Floyd cycle detection algo proof: [https://cs.stackexchange.com/a/90990/92327](https://cs.stackexchange.com/a/90990/92327)
    *   Detect loop in linked list: [https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/](https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/)
    *   
*   Divide and Conquer

**Bit manipulation**



*   __builtin_popcount(x)
*   __builtin_parity(x)
*   __builtin_clz(x)
*   __builtin_ctz(x)
*   (n & n-1) : Set first 1 from end to 0
*   XOR to find num occurring odd no. of times

**DP**



*   0-1 knapsack
*   Traveling salesman

**Graph**



*   Quick Graph construction techniques: [https://boplets.com/2019/07/17/quick-graph-construction/](https://boplets.com/2019/07/17/quick-graph-construction/)
*   DFS
    *   Detect cycle using DFS
    *   
*   BFS
    *   Detect cycle using BFS
*   Floyd-Warshall algo
    *   [https://www.quora.com/What-is-an-intuitive-explanation-of-the-Floyd-Warshall-algorithm](https://www.quora.com/What-is-an-intuitive-explanation-of-the-Floyd-Warshall-algorithm)
    *   [https://www.quora.com/Why-is-the-order-of-the-loops-in-Floyd-Warshall-algorithm-important-to-its-correctness](https://www.quora.com/Why-is-the-order-of-the-loops-in-Floyd-Warshall-algorithm-important-to-its-correctness)
*   Kruskal’s algo
    *   Disjoint Set DS
    *   Union Find Algo
    *   Detect Cycle using UF algo
    *   UF algo w/ path compression and union by rank
*   Prim’s algo
*   Topological sort
    *   Refer CLRS (Ch: Graphs Algorithms -> DFS)
    *   Suggested: question - [https://codeforces.com/contest/510/problem/C](https://codeforces.com/contest/510/problem/C) solution - [https://codeforces.com/contest/510/submission/62527560](https://codeforces.com/contest/510/submission/62527560)
*   Strongly connected components (Tarjan’s Algo)
    *   Refer CLRS (Ch: Graphs Algorithms -> DFS)
    *   Have a look at the implementation in `scc.cpp`
    *   Suggested: question - [https://codeforces.com/problemset/problem/427/C](https://codeforces.com/problemset/problem/427/C), solution - [https://codeforces.com/contest/427/submission/80524508](https://codeforces.com/contest/427/submission/80524508)
*   Bellman Ford’s algo
*   Djikstra’s algo
*   Maxim Flow algo
*   Ford Fulkerson
*   Bipartite Graph

**Trees**



*   Heaps

**Miscellaneous**



*   Builtin GCC functions: [https://www.geeksforgeeks.org/builtin-functions-gcc-compiler/](https://www.geeksforgeeks.org/builtin-functions-gcc-compiler/)
*   Majority element using BST
*   Majority element using Hashmap
*   Element in LL w/ freq >= N/3