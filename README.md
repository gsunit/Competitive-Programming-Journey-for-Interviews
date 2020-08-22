# Topics and notes from my CP journey

## Important
- [ ] Intro to coding style in CP: [Getting Used to Contest Style – Boplet AGI](https://boplets.com/2019/07/10/getting-used-to-contest-style-for-beginners/)

## Common

#### Moore’s voting algo

#### Tortoise and Hare algo

- [ ] [Floyd cycle detection algo proof](https://cs.stackexchange.com/a/90990/92327)

- [ ] [Detect loop in a linked list](https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/)

#### Divide and Conquer

## Sorting

#### Linear time sorting

 - [ ] [Video lecture worth watching](https://youtu.be/Nz1KZXbghj8)

 - [ ] Radix sort

 - [ ] Counting sort



## Strings

#### Manacher's Algorithm

<details>
  <summary>Notes</summary>
  
   - Finding all sub-palindromes in O(N)

   - 
  
</details>


//TODO: find better video

 - [ ] [Video explanation](https://www.youtube.com/watch?v=YVZttWzvyw8): Algorithm is not straigtforward, better to familiarize yourself first 

 - [ ] [Article](https://cp-algorithms.com/string/manacher.html): Contributed as a [PR](https://github.com/e-maxx-eng/e-maxx-eng/pull/598) in this article, what I would have written in my notes.

#### 

<details>
  <summary>Notes</summary>
  
   - //TODO:
  
</details>

 - [ ] [Video explanation](): 

#### Pattern matching

 - [ ] [Rabin-Karp](https://www.youtube.com/watch?v=qQ8vS2btsxI)

 - [ ] [Knuth-Morris-Pratt (KMP)](https://www.youtube.com/watch?v=V5-7GzOfADQ): One of the best video explanations I could find

#### Z algorithm


## Math

#### Binary exponentiation

- [ ] [Read this article completely]()

#### Sieve of Eratosthenes

<details>
  <summary>Notes</summary>
  
  - Algorithm for finding all the prime numbers in a segment [1:n] using O(nloglogn)

  - [Prime number theorem](https://primes.utm.edu/howmany.html#pnt): no. of primes less than n is approximately equal to `n/ln(n)`.

  - Let there be `k` primes less than `n`. Thus the `k ~= n/ln(n)`. Also, the kth prime no. is closest to `n`. Thus 

  ```
  k*ln(k) = {n/ln(n)}*{ln(n) - ln(ln(n))}
          ~= n
          ~= value of kth prime

          //TODO:
  ```
    
  </details>


 - [ ] [Algorithm and optimizations](https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html)

 - [ ] [Sieve in linear time](https://cp-algorithms.com/algebra/prime-sieve-linear.html)

 - [ ] [Segemented Sieve](https://www.youtube.com/watch?v=fByR5N-TseY): Quite imp from interview perspective. This video is part English and part Hindi, though a good one.
 

#### Fermat's little theorem


## Bit manipulation

- [x] [Builtin functions of GCC compiler](https://www.geeksforgeeks.org/builtin-functions-gcc-compiler/)

- [ ] (n & n-1) : Set first 1 from end to 0

- [ ] XOR to find num occurring odd no. of times

- [ ] [1's and 2's complement](https://www.geeksforgeeks.org/whats-difference-between-1s-complement-and-2s-complement/)

## Hash Table

- [ ] 

## DP

<details>
  <summary>Questions</summary>
  
| ☆   | Problem | Solution |
|-----|---------|----------|
| ★☆☆ | [Longest Common Subsequence](https://www.interviewbit.com/problems/longest-common-subsequence/) | [Link](https://github.com/gsunit/Competitive-Programming-Journey-for-Interviews/blob/master/dp/longest-common-subsequence.cpp) |
| ★☆☆ | [Longest Increasing Subsequence //TODO: ]() | [Video](https://www.youtube.com/watch?v=fV-TF4OvZpk) |
| ★★☆ | [Longest Palindromic Subsequence](https://www.interviewbit.com/problems/longest-palindromic-subsequence/) | [Link](https://github.com/gsunit/Competitive-Programming-Journey-for-Interviews/blob/master/dp/longest-palindromic-subsequence.cpp) |
| ★★☆ | [Distinct Subsequences](https://www.interviewbit.com/problems/distinct-subsequences/) | [Video](https://www.youtube.com/watch?v=NR9lLQnFjWc) |
  

  
</details>

- [ ] 0-1 knapsack

- [ ] [Traveling salesman](https://www.geeksforgeeks.org/travelling-salesman-problem-set-1/)

- [ ] [Edit distance (Levenshtein)](https://www.geeksforgeeks.org/edit-distance-dp-5/)

- [ ] [Damerau-Levenshtein distance](https://stackoverflow.com/questions/10727174/damerau-levenshtein-distance-edit-distance-with-transposition-c-implementation) Just an addition of a `transpose` function to Levenshtein distance. Think on your own first, then refer



## Graph

- [ ] [Quick Graph Construction – Boplet AGI](https://boplets.com/2019/07/17/quick-graph-construction/)

#### DFS

- [ ] Refer DFS implementation in `dfs-recursive.cpp`, `dfs-iterative.cpp`

- [ ] [Iterative DFS implementation](https://www.geeksforgeeks.org/iterative-depth-first-traversal/) comes in handy for many questions where you might not want to use recursion for DFS

- [ ] Detect cycle using DFS

#### BFS

- [ ] Detect cycle using BFS

#### Floyd-Warshall algo

<details>
  <summary>Notes</summary>
  
  - Find the length of the shortest path dij between each pair of vertices i and j

  - -ve edges allowed, but not -ve cycles

  - Although, can be used to detect -ve cycles: if the dist of a vertex v from itself is negative.

  - Before the kth iteration, the d[i][j] contains the shortest distance between nodes i & j using only the nodes {1,2,...,k-1} in between i & j.

  - Proof by induction:

    - For k=0, `d[i][j] == wt[i][j]` if there exists and edge between i and j. Otherwise, `d[i][j] == INF`

    - Let the above claim be true for k. So for (k+1)th iteration there can only be two cases
      1) path between  //TODO:
  
</details>


- [ ] [What is an intuitive explanation of the Floyd-Warshall algorithm?](https://www.quora.com/What-is-an-intuitive-explanation-of-the-Floyd-Warshall-algorithm)

- [ ] [Why is the order of the loops in Floyd-Warshall algorithm important to its correctness](https://www.quora.com/Why-is-the-order-of-the-loops-in-Floyd-Warshall-algorithm-important-to-its-correctness)
  
- [ ] [Floyd-Warshall article](https://cp-algorithms.com/graph/all-pair-shortest-path-floyd-warshall.html)


#### Minimum Spanning Tree (MST)

 - [ ] Kruskal’s algo

 - [ ] Prim’s algo

 - [ ] Disjoint set DS

 - [ ] Union-Find algo

 - [ ] UF algo w/ path compression and union by rank

- [ ] Detect Cycle using UF algo

#### Topological sort

<details>
  <summary>Questions</summary>

  - [Codeforces 510-C](https://codeforces.com/contest/510/problem/C) & [Solution](https://codeforces.com/contest/510/submission/62527560)
  
</details>


- [ ] Refer CLRS (Ch: Graphs Algorithms -> DFS)

#### Strongly connected components (Tarjan’s Algo)

<details>
  <summary>Notes</summary>

  - If a node has even a single outgoing edge, then it cannot be the one finshing last during DFS

  - Equivalently, if a node has only incoming edges and you reverse all the edges, then it will be the first one to finish.

</details>

<details>
  <summary>Questions</summary>

  - [Codeforces 427-C](https://codeforces.com/problemset/problem/427/C) & [Solution](https://codeforces.com/contest/427/submission/80524508)

  - 

</details>

- [ ] Refer CLRS (Ch: Graphs Algorithms -> DFS)

- [ ] Have a look at the implementation in `scc.cpp`


#### Bellman Ford's

<details>
  <summary>Notes</summary>

  ```
  `s`           : source vertex
  `|V|`         : num vertices
  `d[v]`        : current smallest dist of v from s
  `delta(s,v)`  : true shortest dist of v from s
  ```
  - **Iterations**: In each iteration, we go over all the edges. For each edge `e`, we update 
  ```
  d[e.second] = min (
    d[e.second],
    d[e.first] + e.cost
  );
  ```

  - **Total |V|-1 iterations**: it is guaranteed that after k iterations, all nodes reachable from S would have d[v] == delta(s,v)

  - **Correctness of algo**: any shortest path to a node v from s can have at most |V|-1 edges in it. Thus, in |V|-1 iterations, we would have d[v] == delta(s,v) for all vertices v.

  - **Existence of -ve cycle**: If in |V|th iteration there is still a relaxtion possible (observed), then there definitely exists a -ve cycle

  - **To find -ve cycle reachable from s**: During the Vth iteration, let `x` be the last vertex for which a relaxation was made. `x` either lies on the cycle or is reachable from it. Then follow `x`'s ancestors till you reach the -ve cycle. Going back |V| time from `x` will ensure that you are definitely in the -ve cycle. Then we can trace the cycle.

  - **To find any -ve cycle**: Initialize all d[v] to 0 (instead of INF), as if we were trying to find shortest path from all vertices simoltaneously. The validity of -ve cycle detection remains the same.

  - **Gotchas**: 

    - If there are -ve edges, do not relax those edges yet which end on nodes that haven't even been discovered (aren't reachable in k edges if only k iterations are done). Because those nodes will have `d[v]==INF` and then new value could be `INF-1`, `INF-2`, etc.

    - When -ve cycle are present then d[] values could overflow (going below -INF). Take care of integer overflow.

  - **Shorter path faster algorithm (SPFA)**
  
    - takes advantage of the fact that not all attempts at relaxation will work. The main idea is to create a queue containing only the vertices that were relaxed but that still could further relax their neighbors. And whenever you can relax some neighbor, you should put it in the queue.

    - This too can be used to find -ve cycle.

    - Keep count of no. of relaxations for each node. If count[v] > |V|, then -ve cycle exists.

    - Keep track of all nodes in queue using a boolean array. Add to queue only if not already present.

    - Note: relaxation happens without caring about which nodes are in the queue. The only purpose of queue is to record all nodes that have been relaxed. A node in queue might even be relaxed twice before actually being processed.
  
</details>

- [ ] [CLRS chapter on SSSS](https://edutechlearners.com/download/Introduction_to_algorithms-3rd%20Edition.pdf#page=664) has the best proofs

- [ ] [Amazing article on B-F algo](https://cp-algorithms.com/graph/bellman_ford.html), watch out for the gotchas in implementation

- [ ] [Shortest Path Faster Algorithm (SPFA)](https://cp-algorithms.com/graph/bellman_ford.html#toc-tgt-8). Also refer to [`graphs/spfa.cpp`](https://github.com/gsunit/Competitive-Programming-Journey-for-Interviews/tree/master/graph/spfa.cpp).

#### Djikstra’s

- [ ] [CLRS chapter on SSSS](https://edutechlearners.com/download/Introduction_to_algorithms-3rd%20Edition.pdf#page=664) has the best proofs

- [ ] [Implementation and proof](https://cp-algorithms.com/graph/dijkstra_sparse.html)

- [ ] [Video lecture](https://www.youtube.com/watch?v=2E7MmKv0Y24&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=17&t=0s)

#### Maxim Flow algo

#### Ford Fulkerson

#### Bipartite Graph

#### Finding negative cycles

 - [ ] [Using Bellman-Ford & using Floyd-Warshall](https://cp-algorithms.com/graph/finding-negative-cycle-in-graph.html)

#### Graph elegant solutions

- [ ] [Number of paths of length k
in a graph](https://cp-algorithms.com/algebra/binary-exp.html#toc-tgt-7). Appreciate the brilliance of the solution for unweighted graph. Then try to figure out the solution for weighted graph on your own.

## Trees

#### Heaps

<details> 
  <summary>Notes</summary>

  - `build_max_heap` runs `max_heapify` from `n/2 downto 1` only

  - Runtime of `build_max_heap` O(n) instead of O(nlogn) (). Still `heapsort` takes O(nlogn) time. See `Reference-1` and `Reference-2` below.
</details>

- [ ] `Reference-1` [Heap notes Pg14](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-006-introduction-to-algorithms-fall-2011/lecture-videos/MIT6_006F11_lec04.pdf#page=14)

- [ ] `Reference-2` [Heap notes Pg22](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-006-introduction-to-algorithms-fall-2011/lecture-videos/MIT6_006F11_lec04.pdf#page=22)

- [ ] [Heaps and Heapsort lecture](https://www.youtube.com/watch?v=B7hVxCmfPtM&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=4)

#### Binary search trees

- [ ] [BST lecture](https://www.youtube.com/watch?v=9Jry5-82I68&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=6&t=0s)

- [ ] [BST lecture notes](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-006-introduction-to-algorithms-fall-2011/lecture-videos/MIT6_006F11_lec05.pdf) (recommended after watching the lecture video)

#### Segment trees

<details>
  <summary>Notes</summary>
  
  - Used to find sum of range of indices in an array in O(logn) time. Brute force would take O(n) time for computing sum, O(1) time for value update

  - Leaf nodes are the array itself. Subsequent upper layer contain nodes which simply represent the sum of their own sub-tree.

  - Total no. of nodes in tree = n + n/2 + ... + 1 

    = (2^(logn +1) - 1)/(2-1) = 2n -1 

    = O(n) space 

  - Time complexity for update is O(logn) since only one of the leaf values changes. Then you just have to change all its ancestors upto the root.

  - `Sum(l,r)` has left borer inclusive and right border exclusive.
  
</details>

- [ ] [Intro video](https://www.youtube.com/watch?v=Ic7OO3Uw6J0)

- [ ] [Codeforces EDU - ITMO Academy - Segment Trees](https://codeforces.com/edu/course/2/lesson/4/1) You will need to login to Codeforces first. Can skip the video and go straight to the article.

- [ ] //TODO: **Advanced topic:** Lazy propagation in segment trees


## Miscellaneous

- [ ] [Huffman Coding](https://youtu.be/vt_Z6tdV81Q): Try to implement this on your own before looking at the code. It would require a mix of data structures to implement quick compression and decompression.

- [ ] Majority element using BST

- [ ] Majority element using Hashmap

- [ ] Element in LL w/ freq >= N/3



