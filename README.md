# HackerRank 3rd Semester Algorithm Portfolio

## Student Information

**Name:**Jyothika S Angadi
**USN:** R25EM038
**Branch:** Computer Science and Engineering  
**Semester:** 3rd Semester  

## Profiles



**GitHub:** jyothikaangadi/HackerRank-3rdSem-Algorithm-Portfolio

---

## About This Portfolio

This portfolio contains five algorithmic problems completed as part of the 3rd Semester CSE algorithm activity. The solutions were implemented using C++ and focus on arrays, sorting, searching, insertion techniques, and greedy algorithms.

The objective of this portfolio is to demonstrate problem-solving ability, algorithm selection, complexity analysis, and the use of GitHub for maintaining and documenting programming solutions.

---

## Problems Completed

### 1. Mini-Max Sum

**Approach:**  
The solution calculates the total sum of the five values while simultaneously finding the minimum and maximum values. The minimum sum is obtained by excluding the maximum value, while the maximum sum is obtained by excluding the minimum value.

**Time Complexity:** O(N)

**Auxiliary Space:** O(N)

**HackerRank:**  
https://www.hackerrank.com/challenges/mini-max-sum

---

### 2. Birthday Cake Candles

**Approach:**  
The solution finds the maximum candle height and then counts how many candles have that maximum height.

**Time Complexity:** O(N)

**Auxiliary Space:** O(N)

**HackerRank:**  
https://www.hackerrank.com/challenges/birthday-cake-candles

---

### 3. Insertion Sort – Part 1

**Approach:**  
The last element is treated as the value to be inserted. Larger elements are shifted one position to the right until the correct position for the value is found.

**Time Complexity:** O(N) for the required insertion step

**Auxiliary Space:** O(N)

**HackerRank:**  
https://www.hackerrank.com/challenges/insertionsort1

---

### 4. Binary Search

**Approach:**  
Binary search is performed on a sorted array. The middle element is compared with the target. If the target is greater, the left half is discarded; if it is smaller, the right half is discarded. This process continues until the target is found or the search range becomes empty.

**Time Complexity:** O(log N)

**Auxiliary Space:** O(N)

**Coding Environment:** Online C++ Compiler

---

### 5. Mark and Toys

**Approach:**  
The toy prices are sorted in ascending order. Starting from the cheapest toy, purchases are made while the total cost remains within the available budget. This greedy strategy maximizes the number of toys purchased.

**Time Complexity:** O(N log N)

**Auxiliary Space:** O(N)

**HackerRank:**  
https://www.hackerrank.com/challenges/mark-and-toys

---

## Complexity Summary

| Problem | Approach | Time Complexity | Auxiliary Space |
|---|---|---|---|
| Mini-Max Sum | Minimum/maximum tracking | O(N) | O(N) |
| Birthday Cake Candles | Maximum and frequency counting | O(N) | O(N) |
| Insertion Sort Part 1 | Element shifting | O(N) | O(N) |
| Binary Search | Divide-and-conquer search | O(log N) | O(N) |
| Mark and Toys | Sorting + greedy selection | O(N log N) | O(N) |

---

## Alternative Approaches

### Mini-Max Sum
An alternative approach is to sort the five values and calculate the sum after excluding the first or last value. This would take O(N log N) time.

### Birthday Cake Candles
An alternative approach is to sort the array and count the occurrences of the largest value.

### Insertion Sort Part 1
A library sorting function could sort the complete array, but this would not demonstrate the insertion-shifting operation required by the problem.

### Binary Search
A recursive implementation of binary search can also be used. It still has O(log N) time complexity.

### Mark and Toys
A brute-force approach could examine different combinations of toys, but it would be much less efficient than sorting the prices and using a greedy strategy.

---

## Learning Reflection

Through this activity, I strengthened my understanding of fundamental algorithmic techniques and their practical implementation. The five problems helped me work with arrays, searching, sorting, insertion operations, and greedy decision-making. Mini-Max Sum and Birthday Cake Candles demonstrated how a single traversal can solve array-based problems efficiently. Insertion Sort helped me understand how elements can be shifted to maintain order. Binary Search showed the importance of using a sorted structure to reduce the search space from linear to logarithmic time. Mark and Toys introduced the greedy approach, where sorting the prices allows the cheapest available items to be selected first within a fixed budget.

I also learned to analyze algorithms using Big-O notation and distinguish between time complexity and auxiliary space. Using HackerRank helped me test solutions against multiple test cases and identify implementation errors. Creating the GitHub repository taught me how to organize source code into separate folders, write meaningful documentation, and maintain a clear coding portfolio. Overall, this activity improved both my problem-solving skills and my understanding of writing efficient, maintainable programs.

---

## Evidence

The portfolio includes evidence of completed HackerRank challenges, the HackerRank profile, GitHub repository structure, and Binary Search execution.
