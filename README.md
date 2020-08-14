# Topics and notes from my CP journey

### Important
- [ ] Intro to coding style in CP: [Getting Used to Contest Style – Boplet AGI](https://boplets.com/2019/07/10/getting-used-to-contest-style-for-beginners/)

### Common
- [ ] Moore’s voting algo
- [ ] Tortoise and Hare algo
  - [ ] [Floyd cycle detection algo proof](https://cs.stackexchange.com/a/90990/92327)
  - [ ] [Detect loop in a linked list](https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/)
- [ ] Divide and Conquer

### Math
- [ ] Binary exponentiation
  - [ ] [Read this article completely]()

### Bit manipulation
- [x] [Builtin functions of GCC compiler](https://www.geeksforgeeks.org/builtin-functions-gcc-compiler/)
- [ ] (n & n-1) : Set first 1 from end to 0
- [ ] XOR to find num occurring odd no. of times
- [ ] [1's and 2's complement](https://www.geeksforgeeks.org/whats-difference-between-1s-complement-and-2s-complement/)

### Hash Table
- [ ] 

### DP
- [ ] 0-1 knapsack
- [ ] Traveling salesman
- [ ] [Edit distance](https://www.geeksforgeeks.org/edit-distance-dp-5/)

### Graph
- [ ] [Quick Graph Construction – Boplet AGI](https://boplets.com/2019/07/17/quick-graph-construction/)
- [ ] DFS
  - [ ] Refer DFS implementation in `dfs-recursive.cpp`, `dfs-iterative.cpp`
  - [ ] [Iterative DFS implementation](https://www.geeksforgeeks.org/iterative-depth-first-traversal/) comes in handy for many questions where you might not want to use recursion for DFS
  - [ ] Detect cycle using DFS
- [ ] BFS
  - [ ] Detect cycle using BFS
- [ ] Floyd-Warshall algo
  - [ ] [What is an intuitive explanation of the Floyd-Warshall algorithm?](https://www.quora.com/What-is-an-intuitive-explanation-of-the-Floyd-Warshall-algorithm)
  - [ ] [Why is the order of the loops in Floyd-Warshall algorithm important to its correctness](https://www.quora.com/Why-is-the-order-of-the-loops-in-Floyd-Warshall-algorithm-important-to-its-correctness)
- [ ] Kruskal’s algo
  - [ ] Disjoint Set DS
  - [ ] Union Find Algo
  - [ ] Detect Cycle using UF algo
  - [ ] UF algo w/ path compression and union by rank
- [ ] Prim’s algo
- [ ] Topological sort
  - [ ] Refer CLRS (Ch: Graphs Algorithms -> DFS)
  - [ ] Suggested: question - https://codeforces.com/contest/510/problem/C solution - https://codeforces.com/contest/510/submission/62527560


- [ ] Strongly connected components (Tarjan’s Algo)

  <details>
    <summary>Notes</summary>
    <ul>
      <li> If a node has even a single outgoing edge, then it cannot be the one finshing last during DFS. </li>
      <li> Equivalently, if a node has only incoming edges and you reverse all the edges, then it will be the first one to finish.  </li>
    </ul> 
  
  </details>

  - [ ] Refer CLRS (Ch: Graphs Algorithms -> DFS)
  - [ ] Have a look at the implementation in `scc.cpp`
  - [ ] Suggested: question - https://codeforces.com/problemset/problem/427/C, solution - https://codeforces.com/contest/427/submission/80524508


- [ ] Bellman Ford’s algo
  - [ ] [CLRS chapter on SSSS](https://edutechlearners.com/download/Introduction_to_algorithms-3rd%20Edition.pdf#page=664) has the best proofs
  - [ ] [Amazing article on B-F algo](https://cp-algorithms.com/graph/bellman_ford.html), watch out for the gotchas in implementation
- [ ] Djikstra’s algo
  - [ ] [CLRS chapter on SSSS](https://edutechlearners.com/download/Introduction_to_algorithms-3rd%20Edition.pdf#page=664) has the best proofs
  - [ ] [Implementation and proof](https://cp-algorithms.com/graph/dijkstra_sparse.html)
  - [ ] [Video lecture](https://www.youtube.com/watch?v=2E7MmKv0Y24&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=17&t=0s)
- [ ] Maxim Flow algo
- [ ] Ford Fulkerson
- [ ] Bipartite Graph

- [ ] Graph elegant solutions
  - [ ] [Number of paths of length k
in a graph](https://cp-algorithms.com/algebra/binary-exp.html#toc-tgt-7). Appreciate the brilliance of the solution for unweighted graph. Then try to figure out the solution for weighted graph on your own.

### Trees
- [ ] Heaps
  <details> 
    <summary>Notes</summary>
    <ul>
      <li> `build_max_heap` runs `max_heapify` from `n/2 downto 1` only </li> 
      <li> Runtime of `build_max_heap` O(n) instead of O(nlogn) (). Still `heapsort` takes O(nlogn) time. See `Reference-1` and `Reference-2` below. </li>

    </ul>
  </details>

  - [ ] `Reference-1` [Heap notes Pg14](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-006-introduction-to-algorithms-fall-2011/lecture-videos/MIT6_006F11_lec04.pdf#page=14)

  - [ ] `Reference-2` [Heap notes Pg22](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-006-introduction-to-algorithms-fall-2011/lecture-videos/MIT6_006F11_lec04.pdf#page=22)

  - [ ] [Heaps and Heapsort lecture](https://www.youtube.com/watch?v=B7hVxCmfPtM&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=4)
- [ ] Binary search trees
  - [ ] [BST lecture](https://www.youtube.com/watch?v=9Jry5-82I68&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=6&t=0s)
  - [ ] [BST lecture notes](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-006-introduction-to-algorithms-fall-2011/lecture-videos/MIT6_006F11_lec05.pdf) (recommended after watching the lecture video)
- [ ] Segment trees.
  - [ ] [Codeforces EDU - ITMO Academy - Segment Trees](https://codeforces.com/edu/course/2/lesson/4/1)
  - [ ] https://codeforces.com/edu/course/2/lesson/4/1



### Miscellaneous
- [ ] Majority element using BST
- [ ] Majority element using Hashmap
- [ ] Element in LL w/ freq >= N/3



