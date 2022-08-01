CS4102 - Quiz 1 Topics and Information 
===============================

[Back to Main Page](../index.html)

<a name="introduction"></a>Overview
---------------------------------------

Module 1's quiz is on lectures and readings from Feb. 1 through Feb. 24.  The following topic list is a guide, and we may update it before the quiz in response to student questions.  See the slides and recordings for more details and readings associated with these topics.  A basic rule we'll try to follow is this: if it's in the readings, but we didn't mention it in lecture, it will *not* be on the quiz.

Document Version: 1.0, March 2, 5:00pm


How the Quiz Will Be Given and Other Rules
----------------------------------------------
*Important!* Read [this document](https://docs.google.com/document/d/1EForD2P6JuUZdGUC_p5FOQI_JyZx1nXaKAsHZCtw2TU/edit?usp=sharing) for info about how the quiz will be given, what the rules are, etc.


Honor Policy for this Quiz
---------------------------------
Before you take our quiz, we’d like to remind you about our rules and the Honor Pledge (as documented in the document linked above), and your commitment to your own personal integrity. With education moving online across the country, reports of cheating on exams are in the news at UVA and everywhere.

It’s hard to explain how disappointing cheating is for a professor who’s worked hard to make a fair and reasonable exam that can be delivered online to students given this current unfortunate situation with the pandemic. The world is a tough place right now, but how individuals react, the decisions they make, and the actions they take in hard times help define who someone is. Of course we instructors would be disappointed to learn of cheating in the course, but frankly it’s not about us but about you. What you do says something (to you, to others) about the kind of person you believe you are and the kind of person you want to be.

So we urge you to be the right kind of person. You can be, you ought to want to be, you probably are all or most of the time. But making the wrong decision when you’ve been asked to commit to and pledge that you’ve followed rules for academic integrity is a mistake that damages your personal integrity in return for a grade in a class. In the long term, a grade matters much less than the kind of person you believe you are and what your actions show you to be.

We've put in a fair bit of thinking and effort to make things easier for you this term with our system of grading, the chance to re-take quizzes, etc. We need to balance the need to get an accurate assessment of your success in learning with making your lives reasaonably bearable. To take advantage of us as we're trying to do things the right way is wrong and does you damage.

All the best in these difficult times of pandemic and online learning!  We hope you do great on quizzes, projects, etc., but what we want more is for you to be good people. We believe you can be and want to be, so be that!


Sample Questions, Practice Quiz
-------------------------------------------------
(Under Construction!)

Here are some sample questions:

*Sample Q1:* In the merge algorithm shown in class for mergesort, one item from a sublist was moved after two items were compared.  For that comparison, we could choose use a < or a <=.  What affect does making a different choice in this have? Pick one of the following:

1. Merge now works in such a way that mergesort does not produce correct results.
2. Mergesort still works correctly, but its time-complexity order-class changes.
3. Mergesort still works correctly, but this may affect its stability.
4. None of the changes given in the previous choices could  occur.

*Sample Q2:* We did a type of proof to show that comparison sorts that only swap adjacent items must do a minimum number of comparisons to produce a correct result.

1. This type of proof is called a ______________ (fill in the blank).
2. True or false? This particular proof relies on a decision tree argument.
3. This proof shows that in the worst-case __________ comparisons must be done. (Give a precise formula, not an order class.)


Topics that will be covered on the quiz include:
-------------------------------------------------

- Basic Terms and concepts: algorithm, basic operation, brute-force, Worst-case, average-case, best-case
- Asymptotic growth rate; order classes; BigTheta and all the others
    - Definitions and their conceptual meaning
- Lower bounds, optimal algorithms

- Insertion sort: worst-case complexity; what are its advantages
    - The lower bound argument about sorts that only swap adjacent keys
- The divide and conquer design strategy (D&C)
    -Writing simple recursive divide and conquer algorithms
- Mergesort: its D&C strategy and recurrences
    - Need to know merge is linear, but not any details on its implementation
- Writing recurrence relations for D&C algorithms
- Reducing recurrences to closed form using the direct ("unrolling") method, substituion (including simple induction proofs)
- Using the Master theorem

- Maximum sum continguous sublist: its D&C strategy, recurrence and complexity, the combination strategy

- Quicksort:
    - What's the overall D&C strategy?
    - Partition: only algorithm in the book (the one in the slides). (This is not Hoare's partition; it's called Lomuto's partition). How it works, its worst-case, its time-coplexity etc.
    - For Quicksort, what's the recurrence of the worst-case? the best-case?
    - What leads to the worst-case? How can we prevent this? (randomized choice of pivot value, estimates of median, etc.)
    - Average case for QS:  Know the bottom line.  Don't need to know the details explained on pp. 176-178.
- Closest-pair of points problem (2D only), including strategy, time-complexity, topics related to "the strip"

- Know how Quickselect can find order statistics, and its basic time-complexity
- Understand the need for a good pivot, and that median of medians finds a good enough pivot to make Quickselect linear.
    - Under the strategy of  media of medians
    - You do not need how to derive the recurrence for its use with Quickselect or how to use induction to reduce it.

- Stablity and space complexities of sorts: insertion sort, quicksort, mergesort, heapsort

- Decision trees and lower-bound arguments for comparison sorting.

- Priority Queues, Heaps and Heapsort topics:
    - Basic questions on ADT operations for priority queues
    - Questions on the order-classes for various heap data structure operations
    - Building a heap with heapify in linear time
    - Heapsort strategy, why it's in-place.  Note: no questions on the math that gets us the order-classes for Heapsort or Build-Heap

- Strassens' matrix multiplication. Just know the general ideas that make this algorithms interesting, including the recurrences. (No details on implementation.)

Topics that will *not* be covered on the quiz include:
-------------------------------------------------
- Questions based on the Advanced HW assignments or the programming assignments

- Proving correctness using loop invariants
- The details of how merge (for mergesort) is implementated
- Nasty or time-consuming induction proofs
- The recurrence tree method for solving recurrences
- The math that gets us the average case for Quicksort
- The math that gets us the order-classes for Heapsort or Build-Heap
- The details of the matrix algebra that make Strassen's algorith calculate the right product
- Questions on the code for basic binary heap operations like Insert, Heapify, Extract-Max, etc.
- How to derive the recurrence for using median of medias with Quickselect or how to use induction to reduce it
- Trominoes
