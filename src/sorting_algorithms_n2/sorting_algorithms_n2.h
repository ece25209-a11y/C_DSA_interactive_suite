#ifndef ALGORITHMS_H
#define ALGORITHMS_H

/**
 * @brief Run the bubble sort optimized demonstration module.
 * @return void
 */
void bubble_sort_optimized_demo(void);

/**
 * @brief Run the insertion sort demonstration module.
 * @return void
 */
void insertion_sort_demo(void);

/**
 * @brief Run the selection sort demonstration module.
 * @return void
 */
void selection_sort_demo(void);

/**
 * @brief Run the shell sort demonstration module.
 * @return void
 */
void shell_sort_demo(void);

/**
 * @brief Run the sorting algorithms demonstration module.
 * @return void
 */
void sorting_algorithms_n2_demo(void);

/**
 * @brief Sort an integer array using selection sort.
 * @param arr The array to sort.
 * @param length_of_array The number of elements in the array.
 * @return void
 */
void selection_sort(int arr[], int length_of_array);

/**
 * @brief Sort an integer array using shell sort.
 * @param arr The array to sort.
 * @param length_of_array The number of elements in the array.
 * @return void
 */
void shell_sort(int arr[], int length_of_array);

/**
 * @brief Sort an integer array using an optimized bubble sort.
 * @param arr The array to sort.
 * @param length_of_array The number of elements in the array.
 * @return void
 */
void bubble_sort_optimized(int arr[], int length_of_array);

/**
 * @brief Sort an integer array using insertion sort.
 * @param arr The array to sort.
 * @param length_of_array The number of elements in the array.
 * @return void
 */
void insertion_sort(int arr[], int length_of_array);

#endif