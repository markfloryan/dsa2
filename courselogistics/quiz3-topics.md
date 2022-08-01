CS4102 - Quiz 3 Topics and Information 
===============================

[Back to Main Page](../index.html)

<a name="introduction"></a>Overview
---------------------------------------

Module 3's quiz is on lectures and readings from March 22 through April 14.  The following topic list is a guide, and we may update it before the quiz in response to student questions.  See the slides and recordings for more details and readings associated with these topics.  A basic rule we'll try to follow is this: if it's in the readings, but we didn't mention it in lecture, it will *not* be on the quiz.

Document Version: 1.1, April 21, 11:00am


How the Quiz Will Be Given and Other Rules
----------------------------------------------

We will use Gradescope this time for Quiz 3 (and re-takes of Quiz 2).  Each quiz will be visible like any other assignment in your list of assignments in Gradescope during the "quiz window", which means you can start it anytime during a 30-hour time-period starting on Friday, April 23, noon (Charlottesville time).  You have 75 minutes to complete it once you start. The latest you should start is 6:00 pm on Saturday, April 24 (Charlottesville time).

So you can see what a Gradescope quiz looks like, there is a very simple  sample quiz available now you can try.

Quiz 3 and Quiz 2's re-take will each be about 10 multiple choice or T/F questions.

Just as if the quiz were being given in person during its original time-slot, we will answer Piazza and Discord questions to help you prepare for the quiz up until shortly before the quiz window opens. But we will not answer any questions when the quiz window opens until the quiz window ends. This is to be fair and not to give an advantage to those who start it later.

Honor Rules, Resources, Communication with Others
----------------------------------

The following describes what resources you can use while you take the quiz.

- You may reference the book, the notes you prepared while taking the classes, materials on the Collab and course website including slides and videos, your HW solutions, and any other resource created by you or the CS4102 staff as part of the course. (Your notes may be written, on your computer or in your own documents stored in the cloud.)
- *Note:* There's been some confusion about this: yes, you can look at any other website online! (The items listed right above here might be your best resources, though.) But make sure you following the following restrictions while using the web.
- You may refer to postings on the class Piazza site or Discord, but you cannot ask any kind of question on these forums once you start the quiz until the end of the entire quiz window. (Other students might not have started the quiz, so this would be a breach of the honor policy.)
- Your answers must fully be your own work, with no assistance or collaboration with anyone else.
- You are not allowed to communicate with anyone other than course staff about the quiz or course material while taking it.
- After taking it you are not allowed to communicate with anyone else about the quiz if that person may not have taken it yet or if that communication might reach someone who has not taken it.
- If our tools identify solutions that appear to be too similar, we may ask you to explain your answer orally to a member of the course staff.

*Pledge:*   By submitting a CS4102 quiz, you are pledging that you have followed all rules regarding assistance, communication, and resource use described here.  (Currently there is no Gradescope question or entry about a Pledge, so the act of submitting means you're pledging.)


About the Honor Policy for this Quiz
---------------------------------
Before you take our quiz, we’d like to remind you about our rules and the Honor Pledge (as documented in the document linked above), and your commitment to your own personal integrity. With education moving online across the country, reports of cheating on exams are in the news at UVA and everywhere.

It’s hard to explain how disappointing cheating is for a professor who’s worked hard to make a fair and reasonable exam that can be delivered online to students given this current unfortunate situation with the pandemic. The world is a tough place right now, but how individuals react, the decisions they make, and the actions they take in hard times help define who someone is. Of course we instructors would be disappointed to learn of cheating in the course, but frankly it’s not about us but about you. What you do says something (to you, to others) about the kind of person you believe you are and the kind of person you want to be.

So we urge you to be the right kind of person. You can be, you ought to want to be, you probably are all or most of the time. But making the wrong decision when you’ve been asked to commit to and pledge that you’ve followed rules for academic integrity is a mistake that damages your personal integrity in return for a grade in a class. In the long term, a grade matters much less than the kind of person you believe you are and what your actions show you to be.

We've put in a fair bit of thinking and effort to make things easier for you this term with our system of grading, the chance to re-take quizzes, etc. We need to balance the need to get an accurate assessment of your success in learning with making your lives reasaonably bearable. To take advantage of us as we're trying to do things the right way is wrong and does you damage.

All the best in these difficult times of pandemic and online learning!  We hope you do great on quizzes, projects, etc., but what we want more is for you to be good people. We believe you can be and want to be, so be that!



Topics that will be covered on the quiz include:
-------------------------------------------------
- For any algorithm studied in this module, know...
    - Optimal substructure property for the problem the algorithm solves
    - Time and space complexity for the algorithm

- Greedy Algorithms (general topics)
    - Terminology: optimization problems, feasible solutions, objective function, optimal solutions, etc.
    - Greedy choice: what this means, and what it is for each algorithm we studied
    - Why Dijkstra's and Prim's are greedy algorithms
    - Proving a greedy algorithm correct using an exchange argument

- Dynamic Programming (general topics)
    - Good for overlapping subproblems. Good when we can't guarantee we find best solution by solving just one subproblem.
    - Finds solutions to smallest subproblems first
    - Two implementation approaches:  top-down with memoization, and bottom-up
    - For each algorithm we studied, know...
        - The recursive structure of the solution in terms of its subproblems
        - How to build the table from small solutions to the overall solution
        - How to recover the values that led to the optimal solution from the table (except for string-edit)

- Knapsack Problems
    - Greedy solution for fractional knapsack (AKA continuous)
    - Bottom-up dynamic programm (DP) solution
    
- Activity Selection Problems (AKA Interval Scheduling)
    - Greedy approach for unweighted problem; proof of correctness
    - DP approach for weighted version

- Coin changing
    - The greedy algorithm
    - Understand overall structure of its proof of correctness for a given coin-set. (For  a given range, assume item chosen by greedy is not in optimal solution, then show a contradiction, etc.)
    - The DP solution (its advantage over greedy, the "i,j" problem, etc.)
    
- Sequence Problems: string-edit and LCS
    - Prefix-strings as subproblems
    - String-edit distance
        - Definition of this problem 
        - Meaning of: an alignment, gap and mismatch penalties, a match
        - The three cases of recursive structure
        - NOTE: no questions on backtracking in the table to get the edit
    - Longest-common subsequence (LCS)
        - Definition of this problem 
        - The cases of recursive structure

- Pseudo-polynomial time
    - Know what this means
    - Understand when a number represents the size of something vs. a value being used
    - Know why it's the case for DP solutions for knapsack, coin-changing
    

Topics that will *not* be covered on the quiz include:
-------------------------------------------------

- Questions based on the Advanced HW assignments or the programming assignments
- You don't know how to distinguish between cross and descendent edges in DFS
- You won't be asked about the gerrymandering problem or its solution
- No questions on spelling in Shakespeare or Early Modern English. :-)

