CS4102 - Quizzes for Modules 1, 2 and 3: Topics and Information 
===============================

[Back to Main Page](../index.html)

<!---

<a name="introduction"></a>Overview
---------------------------------------

Module 1's quiz is on lectures and readings from Feb. 1 through Feb. 24.  The following topic list is a guide, and we may update it before the quiz in response to student questions.  See the slides and recordings for more details and readings associated with these topics.  A basic rule we'll try to follow is this: if it's in the readings, but we didn't mention it in lecture, it will *not* be on the quiz.
-->

Document Version: 1.0, 9/15/2021


How the Quiz Will Be Given and Other Rules
----------------------------------------------
The quizzes will first be given on paper and in-class on 9/21/2021.   You can try one, two or three of the quizzes in the class that day.  On the 2nd quiz day, 10/7/2021, you can re-take any or all of these.  You can also re-take any or all of these during the final exam period.

The quizzes will be closed-book, closed-notes, etc.  Getting information from any electronic devices is not allowed while taking a quiz.  You will sign a pledge on each quiz paper.

It is an honor violation to communicate information about the quiz to anyone who might not have yet taken it.


Topics that might be covered on the Module 1 quiz include:
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

- Quicksort:
    - What's the overall D&C strategy?
    - Partition: only algorithm in the book (the one in the slides). (This is not Hoare's partition; it's called Lomuto's partition). How it works, its worst-case, its time-coplexity etc.
    - For Quicksort, what's the recurrence of the worst-case? the best-case?
    - What leads to the worst-case? How can we prevent this? (randomized choice of pivot value, estimates of median, etc.)
    - Average case for QS:  Know the bottom line.  Don't need to know the details explained on pp. 176-178.

- Stablity and space complexities of sorts: insertion sort, quicksort, mergesort

- Decision trees and lower-bound arguments for comparison sorting.

- About the HW for this module: make sure you understand the timing results you saw for the various experiments


Topics that might be covered on the Module 2 quiz include:
-------------------------------------------------

- Writing recurrence relations for D&C algorithms
- Reducing recurrences to closed form using the direct ("unrolling") method, substituion (including simple induction proofs)
- Using the Master theorem

- About the HW for this module: there may possibly be similar problems to what was on the HW for this module

    
Topics that might be covered on the Module 3 quiz include:
-------------------------------------------------
    
- Closest-pair of points problem, including strategy, time-complexity, topics related to "the strip"

- Strassens' matrix multiplication. Just know the general ideas that make this algorithms interesting, including the recurrences. (No details on implementation.)

- Know how Quickselect can find order statistics, and its basic time-complexity
- Understand the need for a good pivot, and that median of medians finds a good enough pivot to make Quickselect linear.
    - Understand the strategy of  median of medians
    - You do not need how to derive the recurrence for its use with Quickselect or how to use induction to reduce it.

- About the HW for this module: we will not ask about implementation details, but there may be questions about handling points in "the strip" and logic or time-complexity issues about that part of the algorithm

Topics that will *not* be covered on these quizzes include:
-------------------------------------------------

- Proving correctness using loop invariants
- The details of how merge (for mergesort) is implementated
- Nasty or time-consuming induction proofs
- The recurrence tree method for solving recurrences
- The math that gets us the average case for Quicksort
- The details of the matrix algebra that make Strassen's algorithm calculate the right product
- How to derive the recurrence for using median of medias with Quickselect 
<!---
or how to use induction to reduce it 
--->
- Trominoes
