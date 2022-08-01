CS4102 - Quizzes for Modules 6, 7 and 8: Topics and Information 
===============================

[Back to Main Page](../index.html)

<!---

<a name="introduction"></a>Overview
---------------------------------------

Module 1's quiz is on lectures and readings from Feb. 1 through Feb. 24.  The following topic list is a guide, and we may update it before the quiz in response to student questions.  See the slides and recordings for more details and readings associated with these topics.  A basic rule we'll try to follow is this: if it's in the readings, but we didn't mention it in lecture, it will *not* be on the quiz.
-->

Document Version: 1.0, 11/12/2021


How the Quiz Will Be Given and Other Rules
----------------------------------------------
The quizzes will first be given on paper and in-class on 11/16/2021.   You can try one or all of the quizzes in the class that day.  On the 2nd quiz day, last week of class (watch for an update) you can re-take any or all of these.  You can also re-take any or all of these during the final exam period.

The quizzes will be closed-book, closed-notes, etc.  Getting information from any electronic devices is not allowed while taking a quiz.  You will sign a pledge on each quiz paper.

It is an honor violation to communicate information about the quiz to anyone who might not have yet taken it.


Topics that might be covered on the Module 6 quiz include:
-------------------------------------------------
- Dijkstra's Shortest Path and Prim's MST algorithm
    - For both, the overall strategy, use of priority-queue, updating info about connections to nodes that might be selected next, differences between the two
    - Why decrease-key operation affects our time-complexity
    - How to use indirect heaps to make decrease-key more efficient
    - Overall time-complexity for Dijkstra's and Prim's
    - Possibly questions on proof strategy for these, including exchange argument approach 
- Module 6 Homework: could be some questions based on the HW questions

Topics that might be covered on the Module 7 quiz include:
-------------------------------------------------

- For any algorithm studied in this module, know...
    - Optimal substructure property for the problem the algorithm solves
    - Time and space complexity for the algorithm

- Greedy Algorithms (general topics)
    - Terminology: optimization problems, feasible solutions, objective function, optimal solutions, etc.
    - Greedy choice property (greedy choice): what this means, and what it is for each algorithm we studied
    - Why Dijkstra's and Prim's are greedy algorithms
    - Proving a greedy algorithm correct using an exchange argument

- Knapsack Problems
    - Greedy solution for fractional knapsack (AKA continuous)
    
- Activity Selection Problems (AKA Interval Scheduling)
    - Greedy approach for unweighted problem; proof of correctness

- Coin changing
    - The greedy algorithm
    - Understand overall structure of its proof of correctness for a given coin-set. (For  a given range, assume item chosen by greedy is not in optimal solution, then show a contradiction, etc.)
    
- Module 7 Homework: could be some questions about the Daycare problem definition and what you're asked to solve, but you should be able to answer these even if your current solution isn't working completely

Topics that might be covered on the Module 8 quiz include:
-------------------------------------------------

- For any algorithm studied in this module, know...
    - Optimal substructure property for the problem the algorithm solves
    - How to recover the values that produced the optimal value for a given input
    - Time and space complexity for the algorithm

- Dynamic Programming (general topics)
    - Good for overlapping subproblems. Good when we can't guarantee we find best solution by solving just one subproblem.
    - Finds solutions to smallest subproblems first
    - Two implementation approaches:  top-down with memoization, and bottom-up
    - For each algorithm we studied, know...
        - The recursive structure of the solution in terms of its subproblems
        - How to build the table from small solutions to the overall solution
        - How to recover the values that led to the optimal solution from the table (except for string-edit)

- Log Cutting Problem
    - Bottom-up dynamic programm (DP) solution
        
- Activity Selection Problems (AKA Interval Scheduling)
    - DP approach for weighted version
    - You DO NOT need to answer questions about time-complexity for how p(j) values are calculated
    
- 0/1 Knapsack Problems and bottom-up dynamic programm (DP) solution
    
- Coin changing
    - The DP solution (its advantage over greedy, the "i,j" problem, etc.)

- Sequence Problems: string-edit distance and LCS
	- **UPDATE as of 11/15:** There will NOT be any questions on sequence problems on the quiz! You can safely ignore the topics listed next.
	- *Note:*  Floryan lectured on string-edit distance and Horton lectured on LCS. You will be able to choose which problem to answer questions about on the quiz
    - Prefix-strings as subproblems
    - String-edit distance
        - Definition of this problem 
        - Meaning of: an alignment, gap and mismatch penalties, a match
        - The three cases of recursive structure
        - NOTE: no questions on backtracking in the table to get the edit
    - Longest-common subsequence (LCS)
        - Definition of this problem 
        - The cases of recursive structure
        
- Module 8 Homework: could be some questions about the Drainage problem definition and what you're asked to solve, including its optimal substructure property, but you should be able to answer these even if your current solution isn't working completely

    

Topics that will *not* be covered on the quiz include:
-------------------------------------------------

- Pseudo-polynomial time
- No questions on spelling in Shakespeare or Early Modern English. :-)

