# Topics and notes from my CP journey

### Important
- [ ] Intro to coding style in CP: [Getting Used to Contest Style – Boplet AGI](https://boplets.com/2019/07/10/getting-used-to-contest-style-for-beginners/)

### Common
- [ ] Moore’s voting algo
- [ ] Tortoise and Hare algo
  - [ ] [Floyd cycle detection algo proof](https://cs.stackexchange.com/a/90990/92327)
  - [ ] [Detect loop in a linked list](https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/)
- [ ] Divide and Conquer

### Bit manipulation
- [x] [Builtin functions of GCC compiler](https://www.geeksforgeeks.org/builtin-functions-gcc-compiler/)
- [ ] (n & n-1) : Set first 1 from end to 0
- [ ] XOR to find num occurring odd no. of times
- [ ] [1's and 2's complement](https://www.geeksforgeeks.org/whats-difference-between-1s-complement-and-2s-complement/)

## Hash Table
- [ ]

### DP
- [ ] 0-1 knapsack
- [ ] Traveling salesman

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
  - [ ] Refer CLRS (Ch: Graphs Algorithms -> DFS)
  - [ ] Have a look at the implementation in `scc.cpp`
  - [ ] Suggested: question - https://codeforces.com/problemset/problem/427/C, solution - https://codeforces.com/contest/427/submission/80524508
- [ ] Bellman Ford’s algo
- [ ] Djikstra’s algo
- [ ] Maxim Flow algo
- [ ] Ford Fulkerson
- [ ] Bipartite Graph

### Trees
- [ ] Heaps
  - `build_max_heap` runs `max_heapify` from `n/2 downto 1` only
  - Runtime of `build_max_heap` O(n) instead of O(nlogn) (refer [Heap notes Pg14](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-006-introduction-to-algorithms-fall-2011/lecture-videos/MIT6_006F11_lec04.pdf#page=14)). Still `heapsort` takes O(nlogn) time (refer [Heap notes Pg22](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-006-introduction-to-algorithms-fall-2011/lecture-videos/MIT6_006F11_lec04.pdf#page=22))
  - [ ] [Heaps and Heapsort lecture](https://www.youtube.com/watch?v=B7hVxCmfPtM&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=4)
- [ ] Segment Trees.
  - [ ] [Codeforces EDU - ITMO Academy - Segment Trees](https://codeforces.com/edu/course/2/lesson/4/1)
  - [ ] https://codeforces.com/edu/course/2/lesson/4/1



### Miscellaneous
- [ ] Majority element using BST
- [ ] Majority element using Hashmap
- [ ] Element in LL w/ freq >= N/3



