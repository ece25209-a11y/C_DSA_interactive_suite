#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H
/*
 * DATA STRUCTURES INDEX
 *
 * This header aggregates all data structures used in the project.
 * The data structures appear in the following order:
 *
 * 1. Arrays
 * 2. Binary Search Tree (BST)
 * 3. Circular Queue
 * 4. Doubly Linked List
 * 5. Singly Linked List
 * 6. Threaded Binary Tree (TBT)
 * 7. Priority Queue
 *
 * Refer to the corresponding section below for structure
 * definitions and function declarations.
 */
#define HEAP_CAPACITY 100
#include <stdbool.h>
#include <stddef.h>

// For arrays
/**
 * @brief Swap adjacent pairs in an integer array.
 * @param arr The array containing values to swap.
 * @param length_of_array The number of elements in the array.
 * @return void
 */
void swap_adjacent_pairs(int arr[], int length_of_array);

/**
 * @brief Find the maximum element in an integer array.
 * @param arr The array to search.
 * @param length_of_array The number of elements in the array.
 * @return The maximum value in the array.
 */
int max_array(const int arr[], int length_of_array);

/**
 * @brief Find the minimum element in an integer array.
 * @param arr The array to search.
 * @param length_of_array The number of elements in the array.
 * @return The minimum value in the array.
 */
int min_array(const int arr[], int length_of_array);

/**
 * @brief Print the contents of an integer array.
 * @param arr The array to print.
 * @param length_of_array The number of elements in the array.
 * @return void
 */
void print_array(const int arr[], int length_of_array);

/**
 * @brief Reverse the contents of an integer array in place.
 * @param arr The array to reverse.
 * @param length_of_array The number of elements in the array.
 * @return void
 */
void reverse_array(int arr[], int length_of_array);

/**
 * @brief Run the array demonstration module.
 * @return void
 */
void array_demo(void);

// For double linked list
typedef struct doubly_ll_Node
{
    int data;
    struct doubly_ll_Node* prev;
    struct doubly_ll_Node* next;
} doubly_ll_Node;

/**
 * @brief Insert a value at the beginning of a doubly linked list.
 * @param head_ref Pointer to the head pointer of the list.
 * @param value The value to insert.
 * @return 1 on success, -1 on allocation failure.
 */
int dll_insertAtBeginning(doubly_ll_Node** head_ref, int value);

/**
 * @brief Insert a value at the end of a doubly linked list.
 * @param head_ref Pointer to the head pointer of the list.
 * @param value The value to insert.
 * @return 1 on success, -1 on allocation failure.
 */
int dll_insertAtEnd(doubly_ll_Node** head_ref, int value);

/**
 * @brief Print the elements of a doubly linked list.
 * @param head Pointer to the head of the list.
 * @return void
 */
void dll_printlist(const doubly_ll_Node* head);

/**
 * @brief Search for a key in a doubly linked list.
 * @param head Pointer to the head of the list.
 * @param key The value to search for.
 * @return The index of the key or -1 if not found.
 */
int dll_search(const doubly_ll_Node* head, int key);

/**
 * @brief Delete the first element from a doubly linked list.
 * @param head_ref Pointer to the head pointer of the list.
 * @return 1 on success, -1 if the list is empty.
 */
int dll_deleteAtBeginning(doubly_ll_Node** head_ref);

/**
 * @brief Delete the last element from a doubly linked list.
 * @param head_ref Pointer to the head pointer of the list.
 * @return 1 on success, -1 if the list is empty.
 */
int dll_deleteAtEnd(doubly_ll_Node** head_ref);

/**
 * @brief Delete the first occurrence of a key from a doubly linked list.
 * @param head_ref Pointer to the head pointer of the list.
 * @param key The value to delete.
 * @return 1 on success, -1 if not found.
 */
int dll_deleteByValue(doubly_ll_Node** head_ref, int key);

/**
 * @brief Free all nodes in a doubly linked list.
 * @param head Pointer to the head of the list.
 * @return void
 */
void delete_dll(doubly_ll_Node* head);

/**
 * @brief Run the doubly linked list demonstration module.
 * @return void
 */
void dll_demo(void);

/**
 * @brief Reverse a doubly linked list in place.
 * @param head_ref Pointer to the head pointer of the list.
 * @return 1 on success, -1 on failure.
 */
int dll_reverselist(doubly_ll_Node** head_ref);

/**
 * @brief Get the number of nodes in a doubly linked list.
 * @param head Pointer to the head of the list.
 * @return The number of nodes in the list.
 */
int dll_getLength(const doubly_ll_Node* head);

/**
 * @brief Insert a value at a specific position in a doubly linked list.
 * @param head_ref Pointer to the head pointer of the list.
 * @param value The value to insert.
 * @param position The zero-based insertion position.
 * @return 1 on success, -1 on allocation failure, -2 on invalid position.
 */
int dll_insertAtPosition(doubly_ll_Node** head_ref, int value, int position);

/**
 * @brief Delete a node at a specific position in a doubly linked list.
 * @param head_ref Pointer to the head pointer of the list.
 * @param position The zero-based deletion position.
 * @return 1 on success, -1 if the list is empty, -2 on invalid position.
 */
int dll_deleteAtPosition(doubly_ll_Node** head_ref, int position);

// For single linked list
typedef struct Node
{
    int data;
    struct Node* next;
} Node;

/**
 * @brief Print the elements of a singly linked list.
 * @param head Pointer to the head of the list.
 * @return void
 */
void sll_printlist(const Node* head);

/**
 * @brief Insert a value at the end of a singly linked list.
 * @param head_ref Pointer to the head pointer of the list.
 * @param value The value to insert.
 * @return 1 on success, -1 on allocation failure.
 */
int sll_insertAtEnd(Node** head_ref, int value);

/**
 * @brief Delete the first element from a singly linked list.
 * @param head_ref Pointer to the head pointer of the list.
 * @return 1 on success, -1 if the list is empty.
 */
int sll_deleteAtBeginning(Node** head_ref);

/**
 * @brief Delete the last element from a singly linked list.
 * @param head_ref Pointer to the head pointer of the list.
 * @return 1 on success, -1 if the list is empty.
 */
int sll_deleteAtEnd(Node** head_ref);

/**
 * @brief Delete the first occurrence of a value from a singly linked list.
 * @param head_ref Pointer to the head pointer of the list.
 * @param value The value to delete.
 * @return 1 on success, -2 if the list is empty, -1 if not found.
 */
int sll_deleteByValue(Node** head_ref, int value);

/**
 * @brief Insert a value at the beginning of a singly linked list.
 * @param head_ref Pointer to the head pointer of the list.
 * @param value The value to insert.
 * @return 1 on success, -1 on allocation failure.
 */
int sll_insertAtBeginning(Node** head_ref, int value);

/**
 * @brief Run the singly linked list demonstration module.
 * @return void
 */
void sll_demo(void);

/**
 * @brief Search for a key in a singly linked list.
 * @param head Pointer to the head of the list.
 * @param key The value to search for.
 * @return The index of the key or -1 if not found.
 */
int sll_search(const Node* head, int key);

/**
 * @brief Reverse a singly linked list in place.
 * @param head_ref Pointer to the head pointer of the list.
 * @return 1 on success, -2 if empty, -1 if only one node exists.
 */
int sll_reverseList(Node** head_ref);

/**
 * @brief Free all nodes in a singly linked list.
 * @param head Pointer to the head of the list.
 * @return void
 */
void delete_sll(Node* head);

/**
 * @brief Get the number of nodes in a singly linked list.
 * @param head Pointer to the head of the list.
 * @return The number of nodes in the list.
 */
int sll_getLength(const Node* head);

/**
 * @brief Insert a value at a specific position in a singly linked list.
 * @param head_ref Pointer to the head pointer of the list.
 * @param value The value to insert.
 * @param position The zero-based insertion position.
 * @return 1 on success, -1 on allocation failure, -2 on invalid position.
 */
int sll_insertAtPosition(Node** head_ref, int value, int position);

/**
 * @brief Delete a node at a specific position in a singly linked list.
 * @param head_ref Pointer to the head pointer of the list.
 * @param position The zero-based deletion position.
 * @return 1 on success, -1 if the list is empty, -2 on invalid position.
 */
int sll_deleteAtPosition(Node** head_ref, int position);

// For Priority Queue
typedef enum
{
    MIN_HEAP = 0,
    MAX_HEAP = 1
} HeapType;

typedef struct priority_queue
{
    int size;
    HeapType heapType;
    int heap[HEAP_CAPACITY];
} priority_queue;

/**
 * @brief Allocate and initialize a priority queue.
 * @param heapType The type of heap to create (MIN_HEAP or MAX_HEAP).
 * @return Pointer to the created priority queue, or NULL on failure.
 */
priority_queue* pq_init(HeapType heapType);

/**
 * @brief Insert a value into a priority queue.
 * @param pq Pointer to the priority queue.
 * @param val The value to insert.
 * @return 1 on success, -1 on failure.
 */
int insert(priority_queue* pq, int val);

/**
 * @brief Remove the top value from a priority queue.
 * @param pq Pointer to the priority queue.
 * @param result Output pointer for the removed value.
 * @return true if a value was extracted, false if the queue is empty.
 */
bool extractTop(priority_queue* pq, int* result);

/**
 * @brief Peek at the top value of a priority queue without removing it.
 * @param pq Pointer to the priority queue.
 * @param result Output pointer for the top value.
 * @return true if the queue is not empty, false otherwise.
 */
bool peek_pq(priority_queue* pq, int* result);

/**
 * @brief Free resources used by a priority queue.
 * @param pq Pointer to the priority queue.
 * @return void
 */
void destroy_pq(priority_queue* pq);

/**
 * @brief Display the contents of a priority queue.
 * @param pq Pointer to the priority queue.
 * @return void
 */
void display_heap(priority_queue* pq);

/**
 * @brief Run the priority queue demonstration module.
 * @return void
 */
void priority_queue_demo(void);

// For singly circular linked list
// Invariant: when non-empty, tail->next == head (the ring closes back onto head);
// when empty, head == tail == NULL and length == 0. head and tail are both tracked and
// length is cached so getLength is O(1) and positional inserts need no counting pass.
typedef struct scll_Node
{
    int data;
    struct scll_Node* next;
} scll_Node;
typedef struct scll
{
    scll_Node* head;
    scll_Node* tail;
    int length;
} scll;

/**
 * @brief Initialize a singly circular linked list.
 * @param list Pointer to the list to initialize.
 * @return void
 */
void scll_init(scll* list);

/**
 * @brief Insert a value at the beginning of a singly circular linked list.
 * @param list Pointer to the list.
 * @param value The value to insert.
 * @return 1 on success, -1 on failure.
 */
int scll_insertAtBeginning(scll* list, int value);

/**
 * @brief Insert a value at the end of a singly circular linked list.
 * @param list Pointer to the list.
 * @param value The value to insert.
 * @return 1 on success, -1 on failure.
 */
int scll_insertAtEnd(scll* list, int value);

/**
 * @brief Insert a value at a specific position in a singly circular linked list.
 * @param list Pointer to the list.
 * @param value The value to insert.
 * @param position The zero-based position in the list.
 * @return 1 on success, -1 on failure, -2 on invalid position.
 */
int scll_insertAtPosition(scll* list, int value, int position);

/**
 * @brief Delete the first element from a singly circular linked list.
 * @param list Pointer to the list.
 * @return 1 on success, -1 if the list is empty.
 */
int scll_deleteAtBeginning(scll* list);

/**
 * @brief Delete the last element from a singly circular linked list.
 * @param list Pointer to the list.
 * @return 1 on success, -1 if the list is empty.
 */
int scll_deleteAtEnd(scll* list);

/**
 * @brief Delete the first occurrence of a value from a singly circular linked list.
 * @param list Pointer to the list.
 * @param value The value to delete.
 * @return 1 on success, -1 on failure.
 */
int scll_deleteByValue(scll* list, int value);

/**
 * @brief Delete a node at a specific position in a singly circular linked list.
 * @param list Pointer to the list.
 * @param position The zero-based deletion position.
 * @return 1 on success, -1 if the list is empty, -2 on invalid position.
 */
int scll_deleteAtPosition(scll* list, int position);

/**
 * @brief Search for a value in a singly circular linked list.
 * @param list Pointer to the list.
 * @param key The value to search for.
 * @return The index of the value or -1 if not found.
 */
int scll_search(const scll* list, int key);

/**
 * @brief Get the number of nodes in a singly circular linked list.
 * @param list Pointer to the list.
 * @return The number of nodes in the list.
 */
int scll_getLength(const scll* list);

/**
 * @brief Print the contents of a singly circular linked list.
 * @param list Pointer to the list.
 * @return void
 */
void scll_printlist(const scll* list);

/**
 * @brief Free resources used by a singly circular linked list.
 * @param list Pointer to the list.
 * @return void
 */
void scll_destroy(scll* list);

/**
 * @brief Run the singly circular linked list demonstration module.
 * @return void
 */
void scll_demo(void);

// Universal non-speacial queue structure
typedef struct Queue
{
    int rear;
    int front;
    int N;
    void** arr;
} Queue;

/**
 * @brief Initialize a circular queue.
 * @param N The maximum number of elements the queue can hold.
 * @param queue_ptr Pointer to the queue structure.
 * @return 1 on success, -1 on failure.
 */
int init_circ_queue(int N, Queue* queue_ptr);

/**
 * @brief Destroy a circular queue and free its resources.
 * @param queue_ptr Pointer to the queue structure.
 * @return void
 */
void destroy_circ_queue(Queue* queue_ptr);

/**
 * @brief Enqueue a value into a circular queue.
 * @param queue_ptr Pointer to the queue structure.
 * @param value Pointer to the value to store.
 * @return 1 on success, -1 if the queue is full.
 */
int enqueue(Queue* queue_ptr, void* value);

/**
 * @brief Dequeue a value from a circular queue.
 * @param queue_ptr Pointer to the queue structure.
 * @return Pointer to the dequeued value, or NULL if empty.
 */
void* dequeue(Queue* queue_ptr);

/**
 * @brief Display the contents of a circular queue.
 * @param queue_ptr Pointer to the queue structure.
 * @return void
 */
void display_circ_queue(Queue* queue_ptr);

/**
 * @brief Run the circular queue demonstration module.
 * @return void
 */
void circular_queue_demo(void);

/**
 * @brief Initialize a simple linear queue.
 * @param N The maximum number of elements the queue can hold.
 * @param queue_ptr Pointer to the queue structure.
 * @return 1 on success, -1 on failure.
 */
int init_simple_queue(int N, Queue* queue_ptr);

/**
 * @brief Destroy a simple linear queue and free its resources.
 * @param queue_ptr Pointer to the queue structure.
 * @return void
 */
void destroy_simple_queue(Queue* queue_ptr);

/**
 * @brief Enqueue a value into a simple linear queue.
 * @param queue_ptr Pointer to the queue structure.
 * @param value Pointer to the value to store.
 * @return 1 on success, -1 if the queue is full.
 */
int enqueue_simple(Queue* queue_ptr, void* value);

/**
 * @brief Dequeue a value from a simple linear queue.
 * @param queue_ptr Pointer to the queue structure.
 * @return Pointer to the dequeued value, or NULL if empty.
 */
void* dequeue_simple(Queue* queue_ptr);

/**
 * @brief Display the contents of a simple linear queue.
 * @param queue_ptr Pointer to the queue structure.
 * @return void
 */
void display_simple_queue(const Queue* queue_ptr);

/**
 * @brief Run the simple queue demonstration module.
 * @return void
 */
void simple_queue_demo(void);

/**
 * @brief Initialize a double-ended queue.
 * @param N The maximum number of elements the deque can hold.
 * @param dq Pointer to the deque structure.
 * @return 1 on success, -1 on failure.
 */
int init_deque(int N, Queue* dq);

/**
 * @brief Destroy a deque and free its resources.
 * @param dq Pointer to the deque structure.
 * @return void
 */
void destroy_deque(Queue* dq);

/**
 * @brief Insert a value at the front of a deque.
 * @param dq Pointer to the deque structure.
 * @param value Pointer to the value to store.
 * @return 1 on success, -1 if the deque is full.
 */
int deque_insert_front(Queue* dq, void* value);

/**
 * @brief Insert a value at the rear of a deque.
 * @param dq Pointer to the deque structure.
 * @param value Pointer to the value to store.
 * @return 1 on success, -1 if the deque is full.
 */
int deque_insert_rear(Queue* dq, void* value);

/**
 * @brief Delete and return the front value from a deque.
 * @param dq Pointer to the deque structure.
 * @return Pointer to the removed value, or NULL if empty.
 */
void* deque_delete_front(Queue* dq);

/**
 * @brief Delete and return the rear value from a deque.
 * @param dq Pointer to the deque structure.
 * @return Pointer to the removed value, or NULL if empty.
 */
void* deque_delete_rear(Queue* dq);

/**
 * @brief Get the front value from a deque without removing it.
 * @param dq Pointer to the deque structure.
 * @return The front value.
 */
int deque_get_front(const Queue* dq);

/**
 * @brief Get the rear value from a deque without removing it.
 * @param dq Pointer to the deque structure.
 * @return The rear value.
 */
int deque_get_rear(const Queue* dq);

/**
 * @brief Check whether a deque is empty.
 * @param dq Pointer to the deque structure.
 * @return true if empty, false otherwise.
 */
bool deque_is_empty(const Queue* dq);

/**
 * @brief Check whether a deque is full.
 * @param dq Pointer to the deque structure.
 * @return true if full, false otherwise.
 */
bool deque_is_full(const Queue* dq);

/**
 * @brief Display the contents of a deque.
 * @param dq Pointer to the deque structure.
 * @return void
 */
void display_deque(const Queue* dq);

/**
 * @brief Run the deque demonstration module.
 * @return void
 */
void deque_demo(void);

// For Doubly cirular linked list

typedef struct dcll_Node
{
    int data;
    struct dcll_Node* next;
    struct dcll_Node* prev;
} dcll_Node;

typedef struct dcll
{
    dcll_Node* head;
    dcll_Node* tail;
    int length;
} dcll;

/**
 * @brief Initialize a doubly circular linked list.
 * @param list Pointer to the list to initialize.
 * @return void
 */
void dcll_init(dcll* list);

/**
 * @brief Insert a value at the beginning of a doubly circular linked list.
 * @param list Pointer to the list.
 * @param value The value to insert.
 * @return 1 on success, -1 on failure.
 */
int dcll_insertAtBeginning(dcll* list, int value);

/**
 * @brief Insert a value at the end of a doubly circular linked list.
 * @param list Pointer to the list.
 * @param value The value to insert.
 * @return 1 on success, -1 on failure.
 */
int dcll_insertAtEnd(dcll* list, int value);

/**
 * @brief Insert a value at a specific position in a doubly circular linked list.
 * @param list Pointer to the list.
 * @param value The value to insert.
 * @param position The zero-based position.
 * @return 1 on success, -1 on failure, -2 on invalid position.
 */
int dcll_insertAtPosition(dcll* list, int value, int position);

/**
 * @brief Delete the first element from a doubly circular linked list.
 * @param list Pointer to the list.
 * @return 1 on success, -1 if the list is empty.
 */
int dcll_deleteAtBeginning(dcll* list);

/**
 * @brief Delete the last element from a doubly circular linked list.
 * @param list Pointer to the list.
 * @return 1 on success, -1 if the list is empty.
 */
int dcll_deleteAtEnd(dcll* list);

/**
 * @brief Delete the first occurrence of a value from a doubly circular linked list.
 * @param list Pointer to the list.
 * @param value The value to delete.
 * @return 1 on success, -1 if not found.
 */
int dcll_deleteByValue(dcll* list, int value);

/**
 * @brief Delete a node at a specific position in a doubly circular linked list.
 * @param list Pointer to the list.
 * @param position The zero-based deletion position.
 * @return 1 on success, -1 if the list is empty, -2 on invalid position.
 */
int dcll_deleteAtPosition(dcll* list, int position);

/**
 * @brief Search for a value in a doubly circular linked list.
 * @param list Pointer to the list.
 * @param key The value to search for.
 * @return The index of the value or -1 if not found.
 */
int dcll_search(const dcll* list, int key);

/**
 * @brief Get the number of nodes in a doubly circular linked list.
 * @param list Pointer to the list.
 * @return The number of nodes in the list.
 */
int dcll_getLength(const dcll* list);

/**
 * @brief Print the contents of a doubly circular linked list.
 * @param list Pointer to the list.
 * @return void
 */
void dcll_printlist(const dcll* list);

/**
 * @brief Free resources used by a doubly circular linked list.
 * @param list Pointer to the list.
 * @return void
 */
void dcll_destroy(dcll* list);

/**
 * @brief Run the doubly circular linked list demonstration module.
 * @return void
 */
void dcll_demo(void);

// For Stack
typedef struct stack
{
    Node* top;
} stack;

/**
 * @brief Create a new stack.
 * @return Pointer to the created stack, or NULL on failure.
 */
stack* createStack(void);

/**
 * @brief Push a value onto the stack.
 * @param s Pointer to the stack.
 * @param value The value to push.
 * @return 1 on success, -1 if the stack is invalid.
 */
int push(stack* s, int value);

/**
 * @brief Pop a value from the stack.
 * @param s Pointer to the stack.
 * @return The popped value.
 */
int pop(stack* s);

/**
 * @brief Check if the stack is empty.
 * @param s Pointer to the stack.
 * @return true if empty, false otherwise.
 */
bool isEmpty(const stack* s);

/**
 * @brief Destroy a stack and free its resources.
 * @param s Pointer to the stack.
 * @return void
 */
void destroyStack(stack* s);

/**
 * @brief Peek at the top value of the stack without popping it.
 * @param s Pointer to the stack.
 * @return The top value.
 */
int peek(const stack* s);

/**
 * @brief Print the stack contents using characters.
 * @param s Pointer to the stack.
 * @return void
 */
void printStack(const stack* s);

/**
 * @brief Print the stack contents using integer values.
 * @param s Pointer to the stack.
 * @return void
 */
void printStackAsInts(const stack* s);

#endif
