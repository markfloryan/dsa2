CS4102 - Quiz 2 Topics and Information 
===============================

[Back to Main Page](../index.html)

<a name="introduction"></a>Overview
---------------------------------------

Module 2's quiz is on lectures and readings from March 1 through March 17.  The following topic list is a guide, and we may update it before the quiz in response to student questions.  See the slides and recordings for more details and readings associated with these topics.  A basic rule we'll try to follow is this: if it's in the readings, but we didn't mention it in lecture, it will *not* be on the quiz.

Document Version: 1.1, March 26, 10:00am


How the Quiz Will Be Given and Other Rules
----------------------------------------------

We will use Gradescope this time for Quiz 2 (and re-takes of Quiz 1).  Each quiz will be visible like any other assignment in your list of assignments in Gradescope during the "quiz window", which means you can start it anytime during a 30-hour time-period starting on Friday, March 26, noon (Charlottesville time).  You have 75 minutes to complete it once you start. The latest you should start is 6:00 pm on Saturday, March 27 (Charlottesville time).

So you can see what a Gradescope quiz looks like, there is a very simple  sample quiz available now you can try.

Quiz 2 and Quiz 1's re-take will each be about 10 multiple choice or T/F questions.

Just as if the quiz were being given in person during its original time-slot, we will answer Piazza and Discord questions to help you prepare for the quiz up until shortly before the quiz window opens. But we will not answer any questions when the quiz window opens until the quiz window ends. This is to be fair and not to give an advantage to those who start it later.

Honor Rules, Resources, Communication with Others
----------------------------------

The following describes what resources you can use while you take the quiz.

- You may reference the book, the notes you prepared while taking the classes, materials on the Collab and course website including slides and videos, your HW solutions, and any other resource created by you or the CS4102 staff as part of the course. (Your notes may be written, on your computer or in your own documents stored in the cloud.)
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


- Graphs
    - No specific questions on review from earlier courses, adjacency list vs. matrix, etc., but understanding these topics may be needed in other questions
    
- BFS
    - The strategy and algorithm, including use of queue, marking nodes, levels of the tree, non-tree edges, time-complexity
    - BFS and shortest path to nodes in terms of edge weights
    
- Kruskal's Minimum Spanning Tree Algorithm
    - The strategy and algorithm, how to find next edge to add to solution, use of sorting or heap
    - The need and use of set operations Union and Find in Kruskal's
    - The Find/Union data structure: the basics, union-by-rank, path-compression
    - Time complexity for Kruskal's with Find/Union and its optimizations
    
- DFS
    - The strategy and algorithm, including use of recursion, marking nodes, levels of the tree, non-tree edges, discovery/finish times, time-complexity, recognizing back-edges
    - No questions on version that uses stack, only recursive approach
    - Using DFS-sweep() to process all nodes, find connected components, etc.
    - For undirected graphs:  back-edges mean cycles; only tree and back-edges
    - For directed graphs: only back-edges mean cycles; also cross and descendant edges (know these don't indicate cycles, but you don't know how to distinguish between cross and descendent)
    - Using DFS and/or BFS for problems: is graph acyclic, finding connected components, other relatively simple problems done in lecture etc.
    
- Topological Sorting and SCCs in a Digraph
    - What the problem is Topological Sorting about, how its used to modify dependencies
    - Solution using DFS based on finish times
    - Strongly connected components: what they are, how we use DFS and a graph's transpose to find these, relation to topological sorting
    
- Dijkstra's SP and Prim's MST algorithm
    - For both, the overall strategy, use of priority-queue, update connections to nodes that might be selected next, differences between the two
    - Why decrease-key operation affects our time-complexity
    - How to use indirect heaps to make decrease-key more efficient
    - Overall time-complexity for Dijkstra's and Prim's
    - Possibly questions on proof strategy for these, including exchange argument approach    
    

Topics that will *not* be covered on the quiz include:
-------------------------------------------------

- Questions based on the Advanced HW assignments or the programming assignments
- Why Dijkstra's and Prim's are greedy algorithms
- You don't know how to distinguish between cross and descendent edges in DFS
