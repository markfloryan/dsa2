CS4102 - Quizzes for Modules 4 and 5: Topics and Information 
===============================

[Back to Main Page](../index.html)

<!---

<a name="introduction"></a>Overview
---------------------------------------

Module 1's quiz is on lectures and readings from Feb. 1 through Feb. 24.  The following topic list is a guide, and we may update it before the quiz in response to student questions.  See the slides and recordings for more details and readings associated with these topics.  A basic rule we'll try to follow is this: if it's in the readings, but we didn't mention it in lecture, it will *not* be on the quiz.
-->

Document Version: 1.0, 10/14/2021

Note: the section the mentions the Wiring HW will be updated.


How the Quiz Will Be Given and Other Rules
----------------------------------------------
The quizzes will first be given on paper and in-class on 10/19/2021.   You can try one or both of the quizzes in the class that day.  On the 2nd quiz day, TBD (watch for an update) you can re-take any or all of these.  You can also re-take any or all of these during the final exam period.

The quizzes will be closed-book, closed-notes, etc.  Getting information from any electronic devices is not allowed while taking a quiz.  You will sign a pledge on each quiz paper.

It is an honor violation to communicate information about the quiz to anyone who might not have yet taken it.


Topics that might be covered on the Module 4 quiz include:
-------------------------------------------------

- Graphs
    - No specific questions on review from earlier courses, adjacency list vs. matrix, etc., but understanding these topics may be needed in other questions
    
- BFS
    - The strategy and algorithm, including use of queue, marking nodes, levels of the tree, non-tree edges, time-complexity
    - BFS and shortest path to nodes in terms of edge weights
    - Proofs of correctness for BFS: know the basic ideas or strategies on these (we won't ask you to reproduce these proofs)
    
- DFS
    - The strategy and algorithm, including use of recursion, marking nodes, levels of the tree, non-tree edges, discovery/finish times, time-complexity, recognizing back-edges
    - No questions on version that uses stack, only recursive approach
    - Using DFS-sweep() to process all nodes, find connected components, etc.
    - For undirected graphs:  back-edges mean cycles; edges only categorized as tree or back-edges
    - For directed graphs: only back-edges mean cycles; also cross and descendant edges (know these don't indicate cycles, but you don't know how to distinguish between cross and descendent)
    - Using DFS to find a path between two vertices (if it exists)
    - Using DFS and/or BFS for problems: is graph acyclic, finding connected components, other relatively simple problems done in lecture etc.
    - Properties of BFS and DFS trees (some HW questions focused on these trees)
    
- Topological Sorting and SCCs in a Digraph
    - What the problem is Topological Sorting about, how its used to model dependencies
    - Solution using DFS based on finish times

- Strongly connected components: what they are, how we use DFS and a graph's transpose to find these, relation to topological sorting


Topics that might be covered on the Module 5 quiz include:
-------------------------------------------------

- Kruskal's Minimum Spanning Tree Algorithm
    - The strategy and algorithm, how to find next edge to add to solution, use of sorting or heap
    - The need and use of set operations Union and Find in Kruskal's
    - The Find/Union data structure: the basics, union-by-rank, path-compression
    - Time complexity for Kruskal's with Find/Union and its optimizations
    
- Wiring Programming Homework
    - The general problem that needs to be solved, including hand calculated solutions to simple test cases.
    - The ability to describe a solution, or parts of a solution, at a high-level (e.g., describing which edges don't need to be considered, etc.).

Topics that will *not* be covered on the quiz include:
-------------------------------------------------

- We won't ask you to reproduce all the details of proofs on the correctness of BFS but may ask questions about them
- You don't know how to distinguish between cross and descendent edges in DFS

