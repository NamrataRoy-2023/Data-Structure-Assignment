Paper Code: MCACC103
Paper Name: Data Structures with C
Short Answer type questions:
1. What do you understand by time–space trade-off?
Ans: A tradeoff is a situation where one thing increases and another thing 
decreases. It is a way to solve a problem in:
 Either in less time and by using more space, or
 In very little space by spending a long amount of time.
The best Algorithm is that which helps to solve a problem that requires less 
space in memory and also takes less time to generate the output. But in
general, it is not always possible to achieve both of these conditions at the 
same time.
2. Explain the Θ notation.
Ans: it represents the upper and the lower bound of the running time of an 
algorithm, it is used for analyzing the average-case complexity of an algorithm.
Let g and f be the function from the set of natural numbers to itself. The 
function f is said to be Θ(g), if there are constants c1, c2 > 0 and a natural 
number n0 such that c1* g(n) ≤ f(n) ≤ c2 * g(n) for all n ≥ n0
3. Explain the Ω notation.
Ans: Omega notation represents the lower bound of the running time of an 
algorithm. Thus, it provides the best case complexity of an algorithm.
Let g and f be the function from the set of natural numbers to itself. The 
function f is said to be Ω(g), if there is a constant c > 0 and a natural number n0 
such that c*g(n) ≤ f(n) for all n ≥ n0
4. What do you understand by the efficiency of an algorithm?
Ans: The efficiency of an algorithm refers to its ability to perform a task or 
solve a problem with optimal resource utilization, such as time and space. It is 
an essential aspect of algorithmic design and analysis, and it aims to measure 
how well an algorithm scales with input size and resource constraints.
Key components of algorithmic efficiency include:
Time Complexity:
Time complexity measures the amount of time an algorithm takes to complete 
its task as a function of the input size. Algorithms with lower time complexity 
are generally considered more efficient.
Space Complexity:
Space complexity evaluates the amount of memory or storage space an 
algorithm uses in relation to the input size. Algorithms with lower space 
complexity are considered more efficient in terms of memory usage.
Scalability:
An efficient algorithm should be scalable, meaning it can handle larger input 
sizes without a disproportionate increase in resource usage. 
5. How does a stack implemented using a linked list?
Ans: To implement a stack using the singly linked list concept, all the 
singly linked list operations should be performed based on Stack operations 
LIFO(last in first out) and with the help of that knowledge, we are going to 
implement a stack using a singly linked list. all the operations can be 
performed with the help of a top variable.
In the stack Implementation, a stack contains a top pointer. which is the 
“head” of the stack where pushing and popping items happens at the head of 
the list. The first node has a null in the link field and second node-link has the 
first node address in the link field and so on and the last node address is in the 
“top” pointer.
6. Why is the linked list used for polynomial arithmetic?
Ans: A polynomial is a collection of different terms, each comprising 
coefficients, and exponents. It can be represented using a linked list. This 
representation makes polynomial manipulation efficient.
Each node of a linked list representing polynomial constitute three 
parts:
The first part contains the value of the coefficient of the term.
The second part contains the value of the exponent.
The third part, LINK points to the next term (next node).
Consider a polynomial P(x) = 7x2 + 15x3 - 2 x2 + 9. Here 7, 15, -2, and 9 are the 
coefficients, and 4,3,2,0 are the exponents of the terms in the polynomial. On 
representing this polynomial using a linked list, we have
7. What is the basic purpose of header of the linked list?
Ans: In a linked list, the header (or head) is the first node in the list. The basic 
purpose of the header is to serve as a starting point or an entry point for the 
linked list. It contains a reference (or pointer) to the first node in the list.
The header is crucial for the operations on a linked list because it allows you to 
traverse the list starting from the beginning. When you want to perform 
operations such as inserting a new node, deleting a node, or searching for a 
specific node, you typically start at the header and follow the pointers to 
navigate through the list.
Here are some key points about the header of a linked list:
Starting Point: The header provides a starting point for traversing the linked 
list. All operations on the linked list begin with the header.
Empty List: In the case of an empty list, the header may point to null or be set 
to indicate that the list is empty.
Access to the First Node: The header contains a reference to the first node, 
allowing you to access the data stored in the first node and follow the links to 
subsequent nodes.
Modification Operations: Insertion and deletion operations typically 
involve updating the pointers in the header to maintain the integrity of the 
linked list.
8. What is Static linked list? State any two applications of it.
Ans: 
A static linked list is a type of linked list that is implemented using arrays rather 
than dynamic memory allocation for each node. In a static linked list, the 
memory for the entire list is allocated in advance, and the links between nodes 
are represented using array indices rather than pointers.
Here are two applications of static linked lists:
Memory Management:
Static linked lists are sometimes used in memory management systems where 
a fixed-size memory block is allocated in advance to represent a linked list.
Each element in the list is a structure that includes both data and an index 
pointing to the next element in the array.
This approach can be useful in systems with limited dynamic memory 
allocation capabilities or in embedded systems where memory fragmentation 
is a concern.
File Allocation Table (FAT) in File Systems:
Static linked lists are employed in File Allocation Table (FAT) structures used in 
file systems, such as FAT16 and FAT32.
In FAT, each entry in the table corresponds to a cluster on the storage device, 
and the entries are linked to represent the allocation status of clusters (free or 
in use).
The static linked list structure simplifies navigation through the clusters and 
facilitates efficient file storage and retrieval.
9. differ from a stack implemented using an array?
10. Differentiate between peek() and pop() functions.
Ans: Both peek() and pop() are functions commonly associated with 
stacks, which are abstract data types that follow the Last In, First Out (LIFO) 
principle. However, they serve different purposes:
peek():
The peek() function is used to view (or "peek" at) the top element of the 
stack without removing it.
It returns the value of the top element without actually removing it from the 
stack.
The stack remains unchanged after a peek() operation.
pop():
The pop() function is used to remove the top element from the stack.
It returns the value of the element being removed.
After a pop() operation, the stack is modified, and the top element is no 
longer present in the stack.
11. Why are parentheses not required in postfix/prefix expressions?3
Ans: Parenthesis is not required because the order of the operators in the 
postfix and prefix expressions determines the actual order of operations in 
evaluating the expression.
This is in contrast to infix notation (the standard mathematical notation), 
where parentheses are often used to explicitly indicate the order in which 
operations should be performed. In postfix and prefix notations, the structure 
of the expression naturally reflects the order of operations, making 
parentheses unnecessary.
12. Explain the terms infix expression, prefix expression, and postfix 
expression.
Ans: Infix Expression: An infix expression is a mathematical expression 
where operators are written between their operands. This is the standard 
notation used in mathematics. For example, the infix expression "3 + 4 * 5" 
means 3 plus the product of 4 and 5. In infix notation, parentheses are often 
used to indicate the order of operations.
Prefix Expression (Polish Notation): A prefix expression is a mathematical 
expression in which each operator follows all of its operands. In other words, 
the operator comes before its operands. For example, the prefix equivalent of 
the infix expression "3 + 4 * 5" is "+ 3 * 4 5". To evaluate a prefix expression, 
you start from the left, find the first operator, apply it to its operands, and then 
move on.
Postfix Expression (Reverse Polish Notation - RPN): A postfix 
expression is a mathematical expression in which each operator follows its 
operands. In postfix notation, the operator comes after its operands. For 
example, the postfix equivalent of the infix expression "3 + 4 * 5" is "3 4 5 * +". 
To evaluate a postfix expression, you start from the left, scan through the 
expression, and apply operators to their respective operands.
14. Discuss the significance and limitations of the Big O notation.
Ans: The Limitations of Big O Notation
Big O Notation is a useful tool for analyzing the performance of algorithms, but 
it has some limitations that need to be considered. These limitations include 
the following:
Approximation: Big O Notation approximates an algorithm’s running time 
rather than the exact time. The approximation may only sometimes accurately 
reflect the actual running time of an algorithm, especially for small input sizes.
Overestimation: Big O Notation tends to overestimate the running time of an 
algorithm, as it only considers the worst-case scenario. This can lead to an 
overestimation of the actual running time of an algorithm, especially for 
algorithms with better average-case time complexity.
Constant Factors: Big O Notation ignores constant factors, such as the 
efficiency of the hardware and the compiler used to run the algorithm. These 
constant factors can significantly impact the actual running time of an 
algorithm, but they are not taken into account by Big O Notation.
Unrepresentative Inputs: Big O Notation assumes that the input size is the 
only factor affecting an algorithm’s running time. However, this is only 
sometimes the case, as the input data distribution can also significantly impact 
the running time of an algorithm.
15. Give examples of functions that are in Big O?
Ans: Here are some common examples of functions and their corresponding 
Big O notations:
Constant Time: O(1)
Example: Accessing an element in an array with a known index.
No matter how large the array is, the time to access an element remains 
constant.
Logarithmic Time: O(log n)
Example: Binary search in a sorted array.
As the size of the input increases, the time required grows logarithmically.
Linear Time: O(n)
Example: Iterating through an array to find the maximum element.
The time increases linearly with the size of the input.
Linear Logarithmic Time: O(n log n)
Example: Many efficient sorting algorithms like Merge Sort and Heap Sort.
The time complexity is a product of a linear factor and a logarithmic factor.
Quadratic Time: O(n^2)
Example: Nested loops iterating over an array (e.g., Bubble Sort).
The time is proportional to the square of the input size.
Cubic Time: O(n^3)
Example: Triple nested loops iterating over an array.
The time is proportional to the cube of the input size.
Exponential Time: O(2^n)
Example: Recursive algorithms without memoization solving problems like the 
Fibonacci sequence.
The time grows exponentially with the input size.
Factorial Time: O(n!)
Example: Algorithms with factorial time complexity.
The time complexity grows at a rate of n factorial.
16. notation as well as functions that are not in Big O notation ?
Ans: Here are examples of functions and complexities that are not in Big O 
notation:
Constant Factors:
Big O notation abstracts away constant factors, so expressions like O(2n) and 
O(3n) are simplified to O(n).
Example: 2n is equivalent to n in Big O notation.
Lower Order Terms:
Big O notation focuses on the dominant term, ignoring lower order terms.
Example: O(n^2 + n) is simplified to O(n^2).
Exact Function Representation:
Big O notation provides an upper bound, not an exact representation of the 
function.
Example: Saying an algorithm has time complexity O(n^2) does not specify the 
exact number of operations; it only indicates an upper limit.
17. Which element was the pivot in the first pass?
Ans: The term "pivot" is commonly associated with quicksort, a popular sorting 
algorithm. In quicksort, the array is partitioned around a chosen pivot element.
During the first pass of the partitioning process, the algorithm selects a pivot 
element and rearranges the other elements in the array so that elements 
smaller than the pivot are to its left, and elements larger than the pivot are to 
its right. The specific choice of the pivot can affect the efficiency of the 
algorithm.
Let's assume the first element is chosen as the pivot for the first pass.
The algorithm then rearranges the array such that elements smaller than the 
pivot are moved to its left, and elements larger than the pivot are moved to its 
right.
The exact value of the pivot depends on the array elements. If the array is, for 
example, [5, 2, 9, 1, 5, 6], and the first element (5) is chosen as the pivot, the 
array might be rearranged during the first pass, and the pivot (5) could end up 
in its final sorted position.
18. Define primitive and non- primitive data structure.
Ans: Primitive Data Type
These are basic data types that are built into a programming language and are 
generally considered the most basic data types. They are called primitive 
because they are not composed of any other data types. Examples of primitive 
data types include integers, float, characters, and boolean values.
Non-primitive Data Type
These are more complex data types that are composed of primitive data types 
or other non-primitive data types. They are also referred to as composite data 
types or reference data types. Examples of non-primitive data types include 
arrays, stacks, queues, and trees.
19. In a Circular Queue implemented using an array and holding 5 elements, 
if front is equal to 3
and rear is equal to 4, then determine the position of new element to be 
added with
justification.
Ans: Given that the front is at index 3 and the rear is at index 4 in an arraybased circular queue with a size of 5, the next position for adding a new 
element would be calculated as follows:
Increment the rear index: rear = (rear + 1) % array_size
rear=(4+1)mod  5=0rear=(4+1)mod5=0
The new element would be added at index 0 in the circular queue.
20. Describe input restricted de-queue.
Ans: An Input Restricted Dequeue (Double-Ended Queue or Deque) is a type of 
deque where restrictions are imposed on the operations that can be 
performed on each end. Specifically, it allows insertions at one end (usually 
called the "rear") and deletions from both ends (front and rear), but it restricts 
insertions at the front end.
In other words, in an Input Restricted Dequeue:
Insertion (Enqueue) Operation:
Elements can be inserted (enqueued) at the rear end.
Deletion (Dequeue) Operations:
Elements can be deleted (dequeued) from both the front and rear ends.
Restriction:
Insertions are not allowed at the front end.
21. Illustrate the advantages of representing stacks using linked lists than 
arrays.
Ans: 
Representing stacks using linked lists instead of arrays offers several 
advantages. Here are some of the key advantages:
Dynamic Size:
Linked list implementations allow for dynamic memory allocation, enabling the 
stack to grow or shrink as needed. In contrast, arrays have a fixed size, and 
resizing them can be inefficient.
No Wasted Memory:
Linked lists use memory more efficiently. In an array-based implementation, 
you need to allocate a fixed size for the stack, which may lead to wasted 
memory if the actual usage is smaller than the allocated size. 
No Overflow or Underflow:
Linked lists don't suffer from overflow or underflow issues as they can 
dynamically allocate and deallocate memory. In contrast, array-based stacks 
may encounter overflow if the array is full or underflow if the array is empty.
22. Analyze if it is possible that initial value of TOP of stack is -10.
Ans: The "TOP" of a stack typically refers to the index or pointer pointing to the 
topmost element of the stack. The top element is where new elements are 
added during a push operation, and it's the first element to be removed during 
a pop operation.
In a traditional implementation of a stack using arrays, the index or 
pointer for the top of the stack should start at -1 or 0, depending on whether 
the stack is zero-based or one-based. A negative value like -10 for the initial 
value of the top of the stack doesn't possible and could lead to unexpected 
behavior or errors in the stack operations.
23. Calculate the equivalent postfix expression of the following infix 
expression: A+B*C/D.
Ans: Infix Expression: A + B * C / D
Postfix Equivalent: A B C * D / +
The equivalent postfix expression is "ABC*D/+".
24. Any exponential function will grow significantly faster (long term) than 
any polynomial
function- explain this for x2 and 2x.
Ans: The statement that any exponential function will grow significantly faster 
in the long term than any polynomial function is a generalization that holds for 
most reasonable choices of exponential and polynomial functions. Let's 
consider the specific case of x2 (a quadratic polynomial) and 2x (an exponential 
function).
As x increases, the function 2x experiences exponential growth. Each increase 
in x results in a doubling of the function's value.
As x increases, the function x2 experiences polynomial growth. Each increase 
in x results in an increase in the square of x.
In the long term, as x becomes very large:
The exponential function (2x) will eventually surpass any polynomial function 
(including x2) in terms of growth rate.
The difference in growth rates becomes increasingly significant, and 
exponential functions will eventually dominate polynomial functions
25. Can we change the size of an array at run time?
Ans: We can not change the size of your array at run time. An alternative is to 
create a new array which is larger than the existing one. Copy the elements of 
the existing array to the new array and delete the existing array.
26. Convert the following infix expressions to their postfix equivalents: A * B 
+ C / D.
Ans: Infix Expression: A * B + C / D
Postfix Equivalent: AB*CD/+
27. List out the areas in which data structures are applied extensively?
Ans: 1.Compiler Design
2.Operating System
3.Database Management System
4.Statistical analysis package
5.Numerical Analysis
6.Graphics
7.Artificial Intelligence
8.Simulation
28. What are the major data structure used in the following areas: RDBMS, 
Network data model
& Hierarchical data model?
Ans: RDBMS uses an Array data structure, - Network data model uses Graph, -
Hierarchal data model uses Trees.
29. If you are using C language to implement the heterogeneous linked list, 
what pointer type will
you use?
Ans: In C language, when implementing a heterogeneous linked list, you would 
typically use a pointer of type void* (void pointer). The void* type is a 
generic or untyped pointer that can hold the address of any data type. This 
allows you to create a linked list that can accommodate nodes containing data 
of different types.
Here's a basic example of a structure for a node in a heterogeneous linked list:
c
struct Node {
 void* data;
 struct Node* next;
};
In this example:
The void* data field allows the node to hold a pointer to data of any type.
The struct Node* next field is a pointer to the next node in the linked 
list.
30. List out few of the applications that make use of multilinked structures?
Ans: Sparse matrix,
Index generation
31. Convert the following infix expressions to their prefix equivalents: A – B + 
C
Ans: Infix Expression: A - B + C
Prefix Equivalent: + - A B C
32. If we are sorting an array of eight integers using quick sort and we have 
just finished ;
33. the first partitioning with the artay looking like this: 2, 5, 1, 7, 10, 12, 11, 9
Ans: samaj nahi aya 
34. Write down the steps to modify a node in linked list?
Ans: Modifying a node in a linked list involves updating the data or making 
changes to the pointers to maintain the connectivity of the list. Here are the 
steps to modify a node in a linked list:
Traverse to the Target Node:
Start at the head of the linked list and traverse the list until you reach the node 
you want to modify. Keep track of the current node and, if necessary, the 
previous node.
Update the Node's Data:
Once you reach the target node, update its data with the new values or 
perform the modification you intend to make.
Adjust Pointers:
If the modification involves changing the structure of the linked list (e.g., 
inserting, deleting, or rearranging nodes), adjust the pointers accordingly. This 
may include updating the "next" pointer of the previous node and the "next" 
pointer of the modified node.
35. What are the advantages of doubly linked list over singly linked list.
Ans: Reversing the doubly linked list is very easy.
It can allocate or reallocate memory easily during its execution.
As with a singly linked list, it is the easiest data structure to implement.
The traversal of this doubly linked list is bidirectional which is not possible in a 
singly linked list.
Deletion of nodes is easy as compared to a Singly Linked List. A singly linked list
deletion requires a pointer to the node and previous node to be deleted but in 
the doubly linked list, it only required the pointer which is to be deleted.’
Doubly linked lists have a low overhead compared to other data structures 
such as arrays.
Implementing graph algorithms.
36. State the advantages of circular lists over doubly linked list.
Ans: Circular linked lists and doubly linked lists are two different types of linked 
list structures, each with its own set of advantages. Here are some advantages 
of circular linked lists over doubly linked lists:
Memory Efficiency:
Circular linked lists can be more memory-efficient than doubly linked lists, 
especially when there is a need to save memory. In a circular linked list, there 
is no need for an explicit "NULL" or "nullptr" pointer at the end of the list, as 
the last node points back to the first node.
Simpler Traversal:
Traversing a circular linked list is often simpler than traversing a doubly linked 
list. Since each node points to the next node (and the last node points back to 
the first), you don't need to check for NULL pointers during traversal, 
simplifying loop conditions.
Efficient for Certain Algorithms:
Circular linked lists are particularly suitable for algorithms where the list is 
conceptually circular, such as implementing a circular buffer or representing a 
cyclic relationship between elements.
Ease of Insertion and Deletion at the Beginning and End:
Insertion and deletion at both the beginning and end of a circular linked list are 
relatively straightforward, similar to a doubly linked list. The circular structure 
allows for easy adjustment of pointers.
Implementation of Round Robin Scheduling:
Circular linked lists are often used in the implementation of round-robin 
scheduling algorithms in operating systems, where tasks or processes are 
scheduled in a circular manner.
1. Consider the queue given below which has FRONT= 1 and REAR = 5.
Now perform the following operations on the queue:
a. Add F
b. Delete two letters
c. Add G
d. Add H
e. Delete four letters
f. Add I
2. Write an algorithm to insert and delete an element in a circular queue.
→ Here, CQueue is a circular queue where to store data. Rear represents the location in which the 
data element is to be inserted and Front represents the location from which the data element is to be 
removed. Here N is the maximum size of CQueue and finally, Item is the new item to be added. 
Initially Rear = 0 and Front = 0. 
1. If Front = 0 and Rear = 0 
then Set Front := 1 and go to step 4. 
2. If Front =1 and Rear = N or Front = Rear + 1 
then Print: “Circular Queue Overflow” 
and Return. 
3. If Rear = N 
then Set Rear := 1 
and go to step 5. 
4. Set Rear := Rear + 1 
5. Set CQueue [Rear] := Item. 
6. Return. 
Here, CQueue is the place where data are stored. Rear represents the location in which the data 
element is to be inserted and Front represents the location from which the data element is to be 
removed. Front element is assigned to Item. Initially, Front = 1. 
1. If Front = 0 then Print: “Circular Queue Underflow” and Return.
2. Set Item := CQueue [Front] 
3. If Front = N then Set Front = 1 and Return. 
4. If Front = Rear then Set Front = 0 and Rear = 0 and Return. 
5. Set Front := Front + 1 
6. Return.
3. Draw the queue structure in each case when the following operations are performed on an
empty queue.
a. Add A, B, C, D, E, F
b. Delete two letters
c. Add G
d. Add H
e. Delete four letters
f. Add I
4. Explain the Implementation of Priority Queue using Linked List.
→ A Priority Queue implemented using a Linked List is a data structure where each element in the 
queue has a priority associated with it. Elements are stored in the linked list based on their priority. 
The element with the highest (or lowest, depending on implementation) priority will be at the front of 
the queue.
Implementation steps:
1. **Node Definition:** Create a node structure to hold the data and priority.
2. **Priority Queue Functions:**
 - `enqueue(item, priority)`: Insert an element into the queue based on its priority.
 - `dequeue()`: Remove and return the element with the highest priority from the queue.
 - Other functions as required, like `isEmpty()`, `peek()`, etc.
3. **Linked List Operations:**
 - Insertion: Traverse the linked list and place the element according to its priority.
 - Deletion: Remove the element with the highest priority from the front of the linked list.
Each node in the linked list contains the data and its priority. When enqueueing an element, it is 
inserted into the appropriate position in the linked list based on its priority. When dequeuing, the 
element with the highest priority is removed and returned from the front of the linked list.
This implementation ensures that elements with higher priority are dequeued before elements with 
lower priority, allowing for efficient handling of items based on their priority levels.
5. Explain Dequeue. Explain its two variations with suitable diagrams.
→ Dequeue, short for "Double Ended Queue," is a linear data structure that allows insertion and 
deletion of elements from both ends - front and rear. It's pronounced as "deck." Dequeue supports 
operations similar to both stacks and queues, providing more flexibility in managing elements.
### Basic Operations of a Dequeue:
1. **Insertion**:
 - **Front Insertion**: Adds an element to the front of the dequeue.
 - **Rear Insertion**: Adds an element to the rear of the dequeue.
2. **Deletion**:
 - **Front Deletion**: Removes an element from the front of the dequeue.
 - **Rear Deletion**: Removes an element from the rear of the dequeue.
### Variations of Dequeue:
1. **Input-Restricted Dequeue (IR-Dequeue):**
 In an input-restricted dequeue, elements can be inserted and deleted from both ends. However, the 
removal (deletion) operations are limited to one end, typically the front. This means that elements 
can only be removed from the front, but can be inserted and removed from the rear as well.
2. **Output-Restricted Dequeue (OR-Dequeue):**
 In an output-restricted dequeue, elements can be inserted and deleted from both ends, but the 
insertion operations are limited to one end, usually the rear. This means that elements can only be 
added at the rear, but can be inserted and removed from the front.
### Differences:
- **Input-Restricted Dequeue** allows removal from the front but insertion and deletion from both 
ends.
- **Output-Restricted Dequeue** allows insertion at the rear but insertion and deletion from both 
ends.
6. Consider the infix expression given as follows: 9 – ((3 * 4) + 8) / 4. Do the following using
suitable algorithm:
a. Convert to a postfix expression
b. Evaluate that postfix expression
→ Infix: 9 - ((3 * 4) + 8) / 4
Postfix: 9 3 4 * 8 + 4 / -
Evaluation of Postfix Expression:
Postfix: 9 3 4 * 8 + 4 / -
Evaluation Steps:
Push 9 onto the stack
Push 3 onto the stack
Push 4 onto the stack
Multiply 3 and 4: Pop 3 and 4, push 12 onto the stack
Push 8 onto the stack
Add 12 and 8: Pop 12 and 8, push 20 onto the stack
Push 4 onto the stack
Divide 20 by 4: Pop 20 and 4, push 5 onto the stack
Subtract 9 and 5: Pop 9 and 5, push 4 onto the stack
7. Apply the evaluation algorithm in the text to evaluate the following postfix expressions.
Assume A=1, B=2, C=3.
ABC +* CBA -+*
→ Step-by-Step Evaluation:
Token: A (Operand)
• Push the value of A (1) onto the stack: Stack = [1]
Token: B (Operand)
• Push the value of B (2) onto the stack: Stack = [1, 2]
Token: C (Operand)
• Push the value of C (3) onto the stack: Stack = [1, 2, 3]
Token: + (Operator)
• Pop C and B from the stack, perform addition: 3 + 2 = 5
• Push the result (5) onto the stack: Stack = [1, 5]
Token: * (Operator)
• Pop A and the result of the previous operation (5) from the stack, perform multiplication: 1 * 
5 = 5
• Push the result (5) onto the stack: Stack = [5]
Token: C (Operand)
• Push the value of C (3) onto the stack: Stack = [5, 3]
Token: B (Operand)
• Push the value of B (2) onto the stack: Stack = [5, 3, 2]
Token: A (Operand)
• Push the value of A (1) onto the stack: Stack = [5, 3, 2, 1]
Token: - (Operator)
• Pop B and A from the stack, perform subtraction: 2 - 1 = 1
• Push the result (1) onto the stack: Stack = [5, 3, 1]
Token: + (Operator)
• Pop the result of the previous operation (1) and C from the stack, perform addition: 1 + 3 = 4
• Push the result (4) onto the stack: Stack = [5, 4]
Token: * (Operator)
• Pop the result of the previous operation (4) and the initial result (5) from the stack, perform 
multiplication: 5 * 4 = 20
• Push the final result (20) onto the stack: Stack = [20]
Result:
The evaluation of the postfix expression 'ABC+CBA-+' with A=1, B=2, C=3 results in 20.
8. Implement a stack using single dimensional array of integers called stack of MAXSIZE 10. write
an algorithm to push following five elements into the stack and then PoP two elements from
the stack. Ensure to write accompanying algorithms like isfull() and isemPtY() as appropriate.
stack <- PUSH 35,33,42,10,14
stack -> POP 14, 10
→ #include <stdio.h>
#define MAXSIZE 10
struct Stack {
 int stack[MAXSIZE];
 int top;
};
void initStack(struct Stack *s);
int isFull(struct Stack *s);
int isEmpty(struct Stack *s);
void push(struct Stack *s, int item);
int pop(struct Stack *s);
void initStack(struct Stack *s) {
 s->top = -1;
}
int isFull(struct Stack *s) {
 return s->top == MAXSIZE - 1;
}
int isEmpty(struct Stack *s) {
 return s->top == -1;
}
void push(struct Stack *s, int item) {
 if (!isFull(s)) {
 s->top++;
 s->stack[s->top] = item;
 printf("Pushed %d into the stack.\n", item);
 } else {
 printf("Stack is full. Cannot push more elements.\n");
 }
}
int pop(struct Stack *s) {
 if (!isEmpty(s)) {
 int popped_element = s->stack[s->top];
 s->top--;
 printf("Popped %d from the stack.\n", popped_element);
 return popped_element;
 } else {
 printf("Stack is empty. Cannot pop elements.\n");
 return -1; // Returning -1 indicating failure to pop
 }
}
int main() {
 struct Stack stack;
 initStack(&stack);
 push(&stack, 35);
 push(&stack, 33);
 push(&stack, 42);
 push(&stack, 10);
 push(&stack, 14);
 pop(&stack);
 pop(&stack);
 return 0;
}
9. Write a function that accepts two stacks. Copy the contents of first stack in the second stack.
Note that the order of elements must be preserved.
→ #include <stdio.h>
#define MAXSIZE 10
struct Stack {
 int stack[MAXSIZE];
 int top;
};
void initStack(struct Stack *s);
int isFull(struct Stack *s);
int isEmpty(struct Stack *s);
void push(struct Stack *s, int item);
int pop(struct Stack *s);
void copyStack(struct Stack *source, struct Stack *destination);void initStack(struct Stack *s) {
 s->top = -1;
}
int isFull(struct Stack *s) {
 return s->top == MAXSIZE - 1;
}
int isEmpty(struct Stack *s) {
 return s->top == -1;
}
void push(struct Stack *s, int item) {
 if (!isFull(s)) {
 s->top++;
 s->stack[s->top] = item;
 } else {
 printf("Stack is full. Cannot push more elements.\n");
 }
}int pop(struct Stack *s) {
 if (!isEmpty(s)) {
 int popped_element = s->stack[s->top];
 s->top--;
 return popped_element;
 } else {
 printf("Stack is empty. Cannot pop elements.\n");
 return -1; 
 }
}
void copyStack(struct Stack *source, struct Stack *destination) {
 struct Stack temp;
 initStack(&temp);
 while (!isEmpty(source)) {
 push(&temp, pop(source));
 }
 while (!isEmpty(&temp)) {
 push(destination, pop(&temp));
 }
}
int main() {
 struct Stack stack1, stack2;
 initStack(&stack1);
 initStack(&stack2);
 push(&stack1, 1);
 push(&stack1, 2);
 push(&stack1, 3);
 push(&stack1, 4);
 push(&stack1, 5);
 copyStack(&stack1, &stack2);
 printf("Contents of the second stack (copied elements):\n");
 while (!isEmpty(&stack2)) {
 printf("%d\n", pop(&stack2));
 }
 return 0;
}
10. Convert the following infix expression into postfix expression using the suitable algorithm:
A – (B / C + (D % E * F) / G)* H
11. Explain the concept of a circular queue? How is it better than a linear queue?
→ A circular queue is a data structure that behaves like a queue but wraps around itself, forming a 
circle instead of a straight line. It has a fixed size and consists of a front and rear pointer. When an 
element is added, it is inserted at the rear and when an element is removed, it is removed from the 
front. If the rear pointer reaches the end of the queue, it wraps around to the beginning, allowing for 
efficient use of memory. In this type of queue, the element can be added in any position or can be 
deleted from any position in the array but we have to maintain the pointers which will point towards 
the front and rear end of the queue. In this queue, the rear end can be at any point in the array.
Here are the advantages of circular queue over linear queue:
• Efficient use of memory: In a circular queue, when the rear pointer reaches the end of the 
queue, it wraps around to the beginning, which allows for efficient use of memory compared 
to a linear queue.
• Easier for insertion-deletion: In the circular queue, if the queue is not fully occupied, then the 
elements can be inserted easily in the vacant locations. But in the case of a linear queue, 
insertion is not possible once the rear pointer reaches the last index even if there are empty 
locations present in the queue.
• Better performance: Circular queue offers better performance in situations where data is 
frequently added and removed from the queue as compared to a linear queue.
• Simplified implementation: Implementing a circular queue is simpler as compared to a linear 
queue as it requires less complexity and fewer conditional statements.
• Improved flexibility: With a circular queue, the front and rear pointers can move in either 
direction, allowing for greater flexibility in implementing queue operations.
• Reduced overhead: Since a circular queue requires a fixed amount of memory, it reduces the 
overhead of memory allocation and deallocation as compared to a dynamic data structure 
like a linked list-based linear queue.
12. Write an algorithm to convert an infix notation to a prefix notation.
1. Reverse the infix expression.: This makes it easier to handle parentheses.
2. Scan the reversed expression from left to right.
3. If the current character is an operand, append it to the output string.
4. If the current character is an operator, push it onto the stack.
5. If the current character is a closing parenthesis, pop all operators from the stack and append 
them to the output string until you encounter an opening parenthesis.
6. Pop the opening parenthesis from the stack.
7. Repeat steps 3-6 until the stack is empty.
8. The output string is the prefix expression.
13. Write an algorithm to evaluate a prefix notation.
1. Create a stack.
2. Scan the prefix expression from left to right.
3. If the scanned token is an operand, push it onto the stack.
4. If the scanned token is an operator, pop two operands from the stack, apply the operator to 
them, and push the result onto the stack.
5. Repeat steps 3 and 4 until the entire prefix expression has been scanned.
6. The final element on the stack is the result of the evaluation.
14. Consider the prefix expression: + – 9 2 7 * 8 / 4 12.
Apply suitable algorithm to evaluate this expression.
• Encounter 12: Push 12 onto the stack.
• Encounter 4: Push 4 onto the stack.
• Encounter /: Pop 4 and 12, perform division 4 / 12 = 0.3333, push 0.3333 onto the stack.
• Encounter 8: Push 8 onto the stack.
• Encounter *: Pop 8 and 0.3333, perform multiplication 8 * 0.3333 = 2.6664, push 2.6664 
onto the stack.
• Encounter 7: Push 7 onto the stack.
• Encounter 2: Push 2 onto the stack.
• Encounter -: Pop 2 and 7, perform subtraction 2 - 7 = -5, push -5 onto the stack.
• Encounter 9: Push 9 onto the stack.
• Encounter +: Pop 9 and -5, perform addition 9 + (-5) = 4, push 4 onto the stack.
The result of evaluating the prefix expression + - 9 2 7 * 8 / 4 12 is 4.
15. Given an array arr[1……10][1……15] with a base value of 100 and the size of each element is 1
Byte in memory find the address of arr[8][6] with the help of column-major order.
16. Write a C function to find out the maximum and second maximum number from an array of
integers.
→ #include <stdio.h>
int main() {
int n, max, max2, i, has_max2 = 0;
printf("Enter the length of the array \n");
scanf("%d", &n);
int arr[n];
printf("Enter the elements \n");
for (i = 0; i < n; i++)
scanf("%d", &arr[i]);
printf ("The array is->\n");
for (i = 0; i < n; i++)
printf("%d\t", arr[i]);
max = arr[0];
for (i = 0; i < n; i++) {
if (max < arr[i]) {
max2 = max;
max = arr[i];
}
}
for (i = 0; i < n; i++) {
if (arr[i] < max) {
if (!has_max2) {
has_max2 = 1;
max2 = arr[i];
}
else if (arr[i] > max2)
max2 = arr[i];
}
}
if (has_max2 == 1)
printf("\nLargest number = %d\n2nd Largest number = %d", max,max2);
else
printf("\nAll values are identical to %d", max);
return 0;
}
17. A Square matrix is called symmetric if for all values of i and j a[i][j] = a[j][i]. Write a program
which verifies whether a given 5 * 5 matrix is symmetric or not.
→ #include <stdio.h>
#define ROWS 5
#define COLS 5
int isSymmetric(int matrix[ROWS][COLS]) {
 int i, j;
 for (i = 0; i < ROWS; i++) {
 for (j = 0; j < COLS; j++) {
 if (matrix[i][j] != matrix[j][i]) {
 return 0; // Not symmetric
 }
 }
 }
 return 1; // Symmetric
}
int main() {
 int matrix[ROWS][COLS] = {
 {1, 2, 3, 4, 5},
 {2, 6, 7, 8, 9},
 {3, 7, 10, 11, 12},
 {4, 8, 11, 13, 14},
 {5, 9, 12, 14, 15}
 };
 if (isSymmetric(matrix)) {
 printf("The given 5x5 matrix is symmetric.\n");
 } else {
 printf("The given 5x5 matrix is not symmetric.\n");
 }
 return 0;
}
18. Write a C program for performing following operations on array: insertion, display.
→ #include <stdio.h>
#define MAX_SIZE 100
void displayArray(int arr[], int size) {
 printf("Array elements: ");
 for (int i = 0; i < size; i++) {
 printf("%d ", arr[i]);
 }
 printf("\n");
}
int insertElement(int arr[], int size, int element, int position) {
 if (size >= MAX_SIZE) {
 printf("Array is full. Cannot insert element.\n");
 return size;
 }
 if (position < 0 || position > size) {
 printf("Invalid position for insertion.\n");
 return size;
 }
 for (int i = size - 1; i >= position; i--) {
 arr[i + 1] = arr[i];
 }
 arr[position] = element;
 return size + 1;
}
int main() {
 int array[MAX_SIZE];
 int size = 0;
 int choice, element, position;
 do {
 printf("\nOperations on Array\n");
 printf("1. Insert Element\n");
 printf("2. Display Array\n");
 printf("3. Exit\n");
 printf("Enter your choice: ");
 scanf("%d", &choice);
 switch (choice) {
 case 1:
 if (size >= MAX_SIZE) {
 printf("Array is full. Cannot insert element.\n");
 break;
 }
 printf("Enter the element to insert: ");
 scanf("%d", &element);
 printf("Enter the position to insert: ");
 scanf("%d", &position);
 size = insertElement(array, size, element, position);
 break;
 case 2:
 if (size == 0) {
 printf("Array is empty.\n");
 } else {
 displayArray(array, size);
 }
 break;
 case 3:
 printf("Exiting the program.\n");
 break;
 default:
 printf("Invalid choice. Please enter a valid choice.\n");
 }
 } while (choice != 3);
 return 0;
}
19. Compare linked list with array in respect to both advantages and disadvantages.
→ Arrays:
Advantages:
1. Random Access: Elements can be accessed directly using index values, providing constant 
time access O(1).
2. Memory Efficiency: Requires less memory per element compared to linked lists due to the 
absence of additional pointers.
3. Cache Friendliness: Array elements are stored in contiguous memory locations, improving 
cache locality and access speed.
Disadvantages:
1. Fixed Size: Arrays have a fixed size defined during initialization, making it challenging to 
resize dynamically without additional overhead.
2. Insertion/Deletion Complexity: Insertion or deletion in the middle of an array requires shifting 
elements, resulting in O(n) time complexity.
3. Memory Wastage: If the array size is larger than needed, it might lead to memory wastage.
Linked Lists:
Advantages:
1. Dynamic Size: Easily resizable, as memory allocation for each element is done dynamically, 
allowing for easy insertion and deletion.
2. Efficient Insertion/Deletion: Insertion and deletion at any position are efficient (O(1) time 
complexity) compared to arrays.
3. No Wasted Memory: Memory is allocated only when needed, preventing memory wastage.
Disadvantages:
1. No Random Access: Sequential access is necessary; elements cannot be accessed directly 
using indices, which can lead to slower access times (O(n)).
2. Extra Memory Overhead: Requires additional memory for storing pointers/references, 
leading to higher memory consumption per element.
3. Cache Unfriendly: Elements are scattered across memory locations, potentially reducing 
cache efficiency compared to arrays.
20. Explain the concept of Circular Queue along with its need.
→ A Circular Queue is a linear data structure that operates like a regular queue but with a twist: the 
last element is connected to the first element, forming a circular arrangement. This arrangement 
allows efficient utilization of space in memory.
Concept:
• Circular Arrangement: In a circular queue, elements are stored in a circular manner where 
the last element is connected to the first element, creating a loop.
• Front and Rear Pointers: It maintains two pointers, front and rear, to track the front and rear 
ends of the queue, respectively.
• Full and Empty Conditions: Unlike a regular queue, a circular queue has different conditions 
for fullness and emptiness. When front and rear point to the same element, the queue is 
either full or empty, depending on the implementation.
Need for Circular Queue:
1. Optimal Use of Memory: Circular queues optimize memory usage by reusing space. When 
elements are dequeued, the space becomes available for new elements without wasting 
memory.
2. Efficient Implementation: Circular queues offer efficient implementation of a queue using 
arrays or linked lists, as it avoids the need to shift elements when enqueueing or dequeueing, 
unlike regular queues implemented using arrays.
3. Applications: Circular queues are used in scenarios where continuous processing of elements 
is needed, such as in scheduling tasks, managing buffers in operating systems, and handling 
data in networking (like managing packets in a router or managing processes in CPU 
scheduling).
21. Consider a Circular Linked List with a pointer pointing to its Head. 
Write a C program to: (a)insert a node in the front of the list 
(b) insert a node at the rear of the list.
→ #include <stdio.h>
#include <stdlib.h>
struct Node {
 int data;
 struct Node* next;
};
struct Node* createNode(int value) {
 struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
 if (newNode == NULL) {
 printf("Memory allocation failed.\n");
 exit(1);
 }
 newNode->data = value;
 newNode->next = NULL;
 return newNode;
}
void insertAtFront(struct Node** head, int value) {
 struct Node* newNode = createNode(value);
 if (*head == NULL) {
 *head = newNode;
 newNode->next = *head;
 } else {
 struct Node* temp = *head;
 while (temp->next != *head) {
 temp = temp->next;
 }
 newNode->next = *head;
 temp->next = newNode;
 *head = newNode;
 }
 printf("Inserted %d at the front of the list.\n", value);
}
void insertAtRear(struct Node** head, int value) {
 struct Node* newNode = createNode(value);
 if (*head == NULL) {
 *head = newNode;
 newNode->next = *head;
 } else {
 struct Node* temp = *head;
 while (temp->next != *head) {
 temp = temp->next;
 }
 temp->next = newNode;
 newNode->next = *head;
 }
 printf("Inserted %d at the rear of the list.\n", value);
}
void displayList(struct Node* head) {
 if (head == NULL) {
 printf("List is empty.\n");
 return;
 }
 struct Node* temp = head;
 printf("Circular Linked List: ");
 do {
 printf("%d ", temp->data);
 temp = temp->next;
 } while (temp != head);
 printf("\n");
}
int main() {
 struct Node* head = NULL;
 insertAtFront(&head, 5);
 insertAtFront(&head, 10);
 insertAtRear(&head, 15);
 insertAtRear(&head, 20);
 displayList(head);
 return 0;
}
22. Draw and explain construction of Circular queue. Write a C Program to add a new node to the
ascending order linked list.
→ A circular queue is a data structure that follows the FIFO (First In, First Out) principle and operates 
in a circular manner. It can be implemented using an array or a linked list. Below is an explanation of 
the construction of a circular queue using a linked list:
1. Node Structure:
• Each node in the circular queue contains two components: the data field and a 
pointer/reference field pointing to the next node.
• The last node's pointer points back to the first node, forming a circular structure.
2. Front and Rear Pointers:
• Maintain pointers to the front and rear elements of the queue.
• Initially, both front and rear pointers point to NULL in an empty circular queue.
3. Insertion and Deletion:
• When inserting elements:
• If the queue is empty, create a new node and set both front and rear pointers 
to this node.
• Otherwise, insert the new node at the rear and update the rear pointer to 
this new node.
• When deleting elements:
• Remove the element from the front of the queue and update the front 
pointer to the next node.
• If the queue becomes empty after deletion, set both front and rear pointers 
to NULL.
#include <stdio.h>
#include <stdlib.h>
struct Node {
 int data;
 struct Node* next;
};
struct Node* createNode(int value) {
 struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
 if (newNode == NULL) {
 printf("Memory allocation failed.\n");
 exit(1);
 }
 newNode->data = value;
 newNode->next = NULL;
 return newNode;
}
void insertInAscendingOrder(struct Node** head, int value) {
 struct Node* newNode = createNode(value);
 struct Node *current = *head, *prev = NULL;
 if (*head == NULL || (*head)->data >= value) {
 newNode->next = *head;
 *head = newNode;
 } else {
 while (current != NULL && current->data < value) {
 prev = current;
 current = current->next;
 }
 newNode->next = current;
 prev->next = newNode;
 }
 printf("Inserted %d in ascending order.\n", value);
}
void displayList(struct Node* head) {
 if (head == NULL) {
 printf("List is empty.\n");
 return;
 }
 struct Node* temp = head;
 printf("Linked List: ");
 while (temp != NULL) {
 printf("%d ", temp->data);
 temp = temp->next;
 }
 printf("\n");
}
int main() {
 struct Node* head = NULL;
 insertInAscendingOrder(&head, 5);
 insertInAscendingOrder(&head, 10);
 insertInAscendingOrder(&head, 7);
 insertInAscendingOrder(&head, 3);
 displayList(head);
 return 0;
}
23. Create a singly linked list using data fields 15, 20, 22, 58, 60. Search a node 22 from the SLL
and show procedure step-by-step with the help of diagram from start to end. Write an
algorithm to count number of nodes in singly linked list.
→
1. Initialize a variable count to 0.
2. Start at the head of the linked list.
3. While the current node is not None:
o Increment count by 1.
o Move the current node to the next node in the list.
4. Return the value of count.
24. Sort the following numbers in ascending order using Bubble sort. Given numbers: 29, 35, 3, 8,
11, 15, 56, 12, 1, 4, 85, 5 & write the output after each interaction. Describe the concept of
linked list with the terminologies: node, next pointer, null pointer and empty list.
→ Node:
• Node: It's a fundamental building block of a linked list.
• Structure: Contains two fields - a data field to hold the actual value or payload, and a pointer 
field (usually named 'next') that points to the next node in the sequence.
• Example: In a singly linked list, each node has a 'data' field to store information and a 'next' 
pointer that points to the next node in the sequence.
Next Pointer:
• Next Pointer: A pointer within each node that holds the memory address of the next node in 
the sequence.
• Functionality: Establishes the connection between nodes in the linked list, forming the 
sequence or chain.
• Example: If Node A is connected to Node B in a linked list, the 'next' pointer in Node A holds 
the memory address of Node B.
Null Pointer:
• Null Pointer: Represents a pointer that does not point to any memory location.
• Usage in Linked Lists: In the context of linked lists, a null pointer is commonly used to denote 
the end of the sequence.
• Example: In the last node of a singly linked list, the 'next' pointer often points to NULL, 
indicating the end of the list.
Empty List:
• Empty List: Refers to a linked list that contains no nodes.
• Representation: In such a scenario, the pointer representing the head (or start) of the list 
points to NULL, indicating there are no nodes in the sequence.
• Example: Before any nodes are added, the initial state of a linked list is an empty list, where 
the head pointer is NULL.
25. Write a program to sort the following sequence of eight integers 57, 27, 22, 95, 79, 45, 96
using insertion sort. In each case, keep track of the number of exchanges and comparisons
required.
→ #include <stdio.h>
void insertionSort(int arr[], int n, int *exchanges, int *comparisons) {
 for (int i = 1; i < n; i++) {
 int key = arr[i];
 int j = i - 1;
 (*comparisons)++;
 while (j >= 0 && arr[j] > key) {
 arr[j + 1] = arr[j];
 j--;
 (*exchanges)++;
 (*comparisons)++;
 }
 arr[j + 1] = key;
 }
}
void printArray(int arr[], int n) {
 printf("Sorted Sequence: ");
 for (int i = 0; i < n; i++) {
 printf("%d ", arr[i]);
 }
 printf("\n");
}
int main() {
 int arr[] = {57, 27, 22, 95, 79, 45, 96};
 int n = sizeof(arr) / sizeof(arr[0]);
 int exchanges = 0, comparisons = 0;
 printf("Original Sequence: ");
 printArray(arr, n);
 insertionSort(arr, n, &exchanges, &comparisons);
 printf("Number of exchanges: %d\n", exchanges);
 printf("Number of comparisons: %d\n", comparisons);
 printArray(arr, n);
 return 0;
}
26. What is sparse matrix? Write a C program to add two sparse matrices and explain the assumed
data structure. Write a program in C to obtain the sum of two upper triangular matrices of
order 3×3.
→ A sparse matrix is a matrix with more zero elements than non-zero elements. A common criterion 
for a matrix to be considered sparse is that the number of non-zero elements is roughly equal to the 
number of rows or columns.
#include <stdio.h>
#include <stdlib.h>
struct Element {
 int row;
 int col;
 int value;
};
struct SparseMatrix {
 int rows;
 int cols;
 int numElements;
 struct Element *elements;
};
void addSparseMatrices(struct SparseMatrix A, struct SparseMatrix B) {
 if (A.rows != B.rows || A.cols != B.cols) {
 printf("Matrices cannot be added. Dimensions are different.\n");
 return;
 }
 int sizeC = A.numElements + B.numElements;
 struct Element *result = (struct Element *)malloc(sizeC * sizeof(struct Element));
 int i = 0, j = 0, k = 0;
 while (i < A.numElements && j < B.numElements) {
 if (A.elements[i].row < B.elements[j].row ||
 (A.elements[i].row == B.elements[j].row && A.elements[i].col < B.elements[j].col)) {
 result[k++] = A.elements[i++];
 } else if (A.elements[i].row > B.elements[j].row ||
 (A.elements[i].row == B.elements[j].row && A.elements[i].col > B.elements[j].col)) {
 result[k++] = B.elements[j++];
 } else {
 result[k] = A.elements[i];
 result[k++].value += B.elements[j++].value;
 i++;
 }
 }
 while (i < A.numElements)
 result[k++] = A.elements[i++];
 while (j < B.numElements)
 result[k++] = B.elements[j++];
 printf("Resultant Sparse Matrix after addition:\n");
 printf("Row Col Value\n");
 for (int x = 0; x < k; x++) {
 printf("%3d %3d %5d\n", result[x].row, result[x].col, result[x].value);
 }
 free(result);
}
int main() {
 struct SparseMatrix A = {3, 3, 4, (struct Element[]){{0, 0, 1}, {1, 1, 2}, {2, 2, 3}, {2, 0, 4}}};
 struct SparseMatrix B = {3, 3, 3, (struct Element[]){{0, 1, 5}, {1, 1, 6}, {2, 2, 7}}};
 printf("Sparse Matrix A:\n");
 printf("Row Col Value\n");
 for (int i = 0; i < A.numElements; i++) {
 printf("%3d %3d %5d\n", A.elements[i].row, A.elements[i].col, A.elements[i].value);
 }
 printf("\nSparse Matrix B:\n");
 printf("Row Col Value\n");
 for (int i = 0; i < B.numElements; i++) {
 printf("%3d %3d %5d\n", B.elements[i].row, B.elements[i].col, B.elements[i].value);
 }
 addSparseMatrices(A, B);
 return 0;
}
#include <stdio.h>
#define SIZE 3
void sumUpperTriangularMatrices(int mat1[][SIZE], int mat2[][SIZE], int result[][SIZE]) {
 for (int i = 0; i < SIZE; i++) {
 for (int j = 0; j < SIZE; j++) {
 if (i <= j) {
 result[i][j] = mat1[i][j] + mat2[i][j];
 } else {
 result[i][j] = 0; // Lower triangular elements are zero in the sum of upper triangular matrices
 }
 }
 }
}
void displayMatrix(int mat[][SIZE]) {
 printf("Resultant Matrix:\n");
 for (int i = 0; i < SIZE; i++) {
 for (int j = 0; j < SIZE; j++) {
 printf("%d ", mat[i][j]);
 }
 printf("\n");
 }
}
int main() {
 int matrix1[SIZE][SIZE] = {
 {1, 2, 3},
 {0, 4, 5},
 {0, 0, 6}
 };
 int matrix2[SIZE][SIZE] = {
 {7, 8, 9},
 {0, 10, 11},
 {0, 0, 12}
 };
 int resultMatrix[SIZE][SIZE];
 sumUpperTriangularMatrices(matrix1, matrix2, resultMatrix);
 displayMatrix(resultMatrix);
 return 0;
}
27. A sorting algorithm is stable if it preserves the order of elements with equal keys. Which of
these algorithms—quick sort, heap sort, or merge sort are stable and Why?
→ Among the sorting algorithms mentioned—quick sort, heap sort, and merge sort—merge sort is 
the only stable sorting algorithm.
Here's why:
• Merge Sort: It is a stable sorting algorithm because it maintains the relative order of 
elements with equal keys. During the merging phase of merge sort, when combining 
subarrays, if two elements are equal, the algorithm places the element from the left subarray 
before the element from the right subarray. This preservation of the original order ensures 
stability.
• Quick Sort: Quick sort, while being a highly efficient sorting algorithm, is not inherently 
stable. It relies on partitioning elements around a pivot and swapping elements based on 
their comparison with the pivot. Due to this swapping, the original order of equal elements 
might not be preserved, making it unstable in certain implementations.
• Heap Sort: Heap sort is also not inherently stable. Although it does not rely on swapping 
adjacent elements like quick sort, the process of building a heap and extracting elements 
might change the relative order of equal elements, leading to instability.
28. Explain the Implementation of Priority Queue using Array.
→
1. Create a structure to store the element and its priority.
2. Declare an array of the structure.
3. Initialize the size of the queue to 0.
4. Implement the following functions:
o enqueue(): This function inserts an element into the queue.
o dequeue(): This function removes the element with the highest priority from the 
queue.
o peek(): This function returns the element with the highest priority without removing 
it from the queue.
5. To enqueue an element, find the appropriate position in the array based on its priority. Then, 
insert the element into that position.
6. To dequeue an element, remove the element at the front of the array.
7. To peek at the element with the highest priority, return the element at the front of the array.
29. Write short notes on Multiple Queue.
→ Multiple Queue is a concept in computer science that involves the management of multiple queues 
within a single system or application. These queues are used to handle and organize incoming data or 
tasks based on different criteria, allowing for better organization and efficient processing.
Key Characteristics of Multiple Queue:
1. Categorization of Tasks/Data: Multiple queues are used to categorize or partition tasks or 
data based on specific attributes, such as priority, type, or source.
2. Separation of Concerns: Different queues handle different types of tasks or data, allowing for 
better management and control over processing based on the nature or importance of the 
tasks.
3. Resource Allocation: Multiple queues can help in resource allocation by segregating tasks 
that require different levels of resources or processing.
4. Scheduling and Prioritization: Tasks within multiple queues can be processed based on 
predefined scheduling algorithms or priority schemes. For instance, high-priority tasks can be 
processed before lower-priority ones.
5. Improved Efficiency: By segregating tasks based on specific criteria, multiple queues enable 
more efficient handling, especially in scenarios where varied types of tasks or data need to be 
processed.
Examples of Multiple Queue Usage:
• Operating Systems: OS scheduling often involves multiple queues, such as ready queue, 
waiting queue, priority queues, etc., to manage processes based on their states or priorities.
• Network Packet Queues: In networking, routers or switches use multiple queues to handle 
incoming packets based on their quality of service (QoS) requirements, ensuring prioritization 
based on packet type or importance.
• Customer Service Centers: Service centers often employ multiple queues to handle different 
types of customer queries, such as technical support, billing, or general inquiries, allowing 
specialized handling based on query type.
• Traffic Management Systems: Traffic control systems use multiple queues to manage vehicles 
at intersections, segregating lanes based on traffic signals or vehicle types.
30. Convert the following infix expressions to their prefix equivalents: ((A – B) + D / ((E + F) * G))
31. Write an algorithm to convert an infix notation to postfix notation.
→
• Scan all the symbols one by one from left to right in the given Infix Expression.
• If the reading symbol is an operand, then immediately append it to the Postfix Expression.
• If the reading symbol is left parenthesis ‘( ‘, then Push it onto the Stack.
• If the reading symbol is right parenthesis ‘)’, then Pop all the contents of the stack until the 
respective left parenthesis is popped and append each popped symbol to Postfix Expression.
• If the reading symbol is an operator (+, –, *, /), then Push it onto the Stack. However, first, 
pop the operators which are already on the stack that have higher or equal precedence than 
the current operator and append them to the postfix. If an open parenthesis is there on top of 
the stack then push the operator into the stack.
• If the input is over, pop all the remaining symbols from the stack and append them to the 
postfix.
32. Write an algorithm to evaluate a postfix notation.
→
1. Create a stack to store operands.
2. Scan the given expression from left to right.
3. a) If the scanned character is an operand, push it into the stack.
b) If the scanned character is an operator, POP 2 operands from stack and perform 
operation and PUSH the result back to the stack.
4. Repeat step 3 till all the characters are scanned.
5. When the expression is ended, the number in the stack is the final result.
33. Compare between Linear search and Binary search.
34. Find the position of element 29 using binary search method in an array 'A' given below: A={11
, 5, 21, 3, 29, 17, 2, 43}.
→
1. Sort the Array (Ascending Order): After sorting, the array becomes: A={2, 3, 5, 11, 17, 21, 29, 
43}.
2. Binary Search:
• Initialize variables: start = 0 (start index), end = 7 (end index), mid = (start + end) / 2 =
3.
• Compare the element at index mid (A[mid]) with the target element (29).
• As A[mid] = 11 < 29, the target element (29) lies in the right half of the array.
• Update start = mid + 1 = 4, end remains the same.
• Repeat the process with the new start and end values.
• At each step, calculate mid, compare A[mid] with the target element, and update 
start or end accordingly.
• Eventually, when A[mid] equals the target element 29, return the index mid as the 
position of 29 in the array.
35. Explain Algorithm Efficiency with suitable examples as a function of n [f(n)] where n is the
input for the following cases-(i) Linear Loops (ii) Logarithmic Loops (iii) Nested Loops
(i) Linear Loops:
Example: for (int i = 0; i < n; i++) 
{ // O(1) operations } 
• Efficiency (f(n)): O(n)
• Explanation: In a linear loop, the time complexity is directly proportional to the input size (n). 
As the input grows, the time taken to execute the loop grows linearly. For example, if the loop 
iterates 'n' times, the time taken will increase linearly as 'n' increases.
(ii) Logarithmic Loops:
Example: int i = n; 
while (i > 1) 
{ // O(1) operations i = i / 2; } 
• Efficiency (f(n)): O(log n)
• Explanation: Logarithmic loops divide the input size (n) in half (or some logarithmic factor) at 
each iteration. As a result, the time taken doesn't increase linearly with input growth. For 
instance, if the loop divides 'n' by 2 repeatedly until 'i' becomes 1, the time taken will grow 
logarithmically as 'n' increases.
(iii) Nested Loops:
Example: for (int i = 0; i < n; i++) 
{ for (int j = 0; j < n; j++) 
{ // O(1) operations } } 
• Efficiency (f(n)): O(n^2)
• Explanation: Nested loops iterate through 'n' elements 'n' times. The time taken grows 
quadratically with the input size. For example, if 'n' elements are iterated 'n' times, the total 
operations performed would be 'n * n' or 'n^2', resulting in a quadratic growth in time 
complexity.
Summary:
• Linear Loops: Time complexity grows linearly with input size (O(n)).
• Logarithmic Loops: Time complexity grows logarithmically with input size (O(log n)).
• Nested Loops: Time complexity grows quadratically with input size (O(n^2)).
36. Convert the expression given below into its corresponding postfix expression and then
evaluate it. Also write a program to evaluate a postfix expression. 10 + ((7 – 5) + 10)/2
→ The infix expression: 10 + ((7 - 5) + 10)/2
Postfix expression: 10 7 5 - 10 + 2 / + 
To evaluate the postfix expression, we'll use a stack-based algorithm:
Algorithm to Evaluate Postfix Expression:
1. Initialize an empty stack to store operands.
2. Scan the postfix expression from left to right.
• If the scanned character is an operand (operand here refers to a number), push it 
onto the stack.
• If the scanned character is an operator (+, -, *, /), pop two operands from the stack, 
perform the operation, and push the result back onto the stack.
3. After scanning the entire expression, the result will be the only element left on the stack.
C Program to Evaluate Postfix Expression:
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_SIZE 100
struct Stack {
 int top;
 int items[MAX_SIZE];
};
void push(struct Stack *s, int value) {
 if (s->top == MAX_SIZE - 1) {
 printf("Stack Overflow\n");
 exit(EXIT_FAILURE);
 }
 s->items[++(s->top)] = value;
}
int pop(struct Stack *s) {
 if (s->top == -1) {
 printf("Stack Underflow\n");
 exit(EXIT_FAILURE);
 }
 return s->items[(s->top)--];
}
int evaluatePostfix(char *expression) {
 struct Stack stack;
 stack.top = -1;
 for (int i = 0; expression[i] != '\0'; i++) {
 if (isdigit(expression[i])) {
 push(&stack, expression[i] - '0'); // Convert char to int
 } else {
 int operand2 = pop(&stack);
 int operand1 = pop(&stack);
 switch (expression[i]) {
 case '+':
 push(&stack, operand1 + operand2);
 break;
 case '-':
 push(&stack, operand1 - operand2);
 break;
 case '*':
 push(&stack, operand1 * operand2);
 break;
 case '/':
 push(&stack, operand1 / operand2);
 break;
 }
 }
 }
 return pop(&stack);
}
int main() {
 char postfixExpression[] = "10 7 5 - 10 + 2 / +";
 int result = evaluatePostfix(postfixExpression);
 printf("Result of postfix expression evaluation: %d\n", result);
 return 0;
}
37. There are two arrays A and B. A contains 25 elements, whereas B contains 30 elements. Write
a function to create an array C that contains only those elements that are common to A and B.
→ #include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE_A 25
#define MAX_SIZE_B 30int existsInArray(int element, int arr[], int size) {
 for (int i = 0; i < size; i++) {
 if (arr[i] == element) {
 return 1; // Element found
 }
 }
 return 0; // Element not found
}
int* findCommonElements(int arrA[], int sizeA, int arrB[], int sizeB, int* sizeC) {
 int maxSize = (sizeA < sizeB) ? sizeA : sizeB; // Maximum possible size of array C
 int* arrC = (int*)malloc(maxSize * sizeof(int));
 if (arrC == NULL) {
 printf("Memory allocation failed.\n");
 exit(EXIT_FAILURE);
 }
 *sizeC = 0; // Initialize size of array C
 for (int i = 0; i < sizeA; i++) {
 if (existsInArray(arrA[i], arrB, sizeB)) {
 arrC[(*sizeC)++] = arrA[i];
 }
 }
 return arrC;
}
int main() {
 int A[MAX_SIZE_A] = { /* elements of array A */ };
 int B[MAX_SIZE_B] = { /* elements of array B */ };
 int sizeC = 0;
 int* C = findCommonElements(A, MAX_SIZE_A, B, MAX_SIZE_B, &sizeC);
 printf("Common elements between arrays A and B (Array C): ");
 for (int i = 0; i < sizeC; i++) {
 printf("%d ", C[i]);
 }
 printf("\n");
 free(C); // Free dynamically allocated memory for array C
 return 0;
}
