#ifndef SORTING_ALGORITHMS_H
#define SORTING_ALGORITHMS_H

/**
 * @brief Run the linear search demonstration module.
 * @return The status code from the demo run.
 */
int linear_search_demo(void);

/**
 * @brief Run the binary search demonstration module.
 * @return The status code from the demo run.
 */
int binary_search_demo(void);

/**
 * @brief Run the recursive binary search demonstration module.
 * @return void
 */
void binary_search_recursive_demo(void);

/**
 * @brief Run the searching algorithms demonstration module.
 * @return void
 */
void searching_algorithms_demo(void);

/**
 * @brief Search for a value using linear search.
 * @param arr The array to search.
 * @param target The value to find.
 * @param length_of_array The number of elements in the array.
 * @return The index of the target or -1 if not found.
 */
int linear_search(int arr[], int target, int length_of_array);

/**
 * @brief Search for a value using binary search.
 * @param arr The sorted array to search.
 * @param target The value to find.
 * @param length_of_array The number of elements in the array.
 * @return The index of the target or -1 if not found.
 */
int binary_search(int arr[], int target, int length_of_array);

/**
 * @brief Search for a value using recursive binary search.
 * @param arr The sorted array to search.
 * @param target The value to find.
 * @param low The lower bound index for the current search range.
 * @param high The upper bound index for the current search range.
 * @return The index of the target or -1 if not found.
 */
int binary_search_recursive(int arr[], int target, int low, int high);

/**
 * @brief Search for a value using interpolation search.
 * @param arr The sorted array to search.
 * @param target The value to find.
 * @param length_of_array The number of elements in the array.
 * @return The index of the target or -1 if not found.
 */
int interpolation_search(int arr[], int target, int length_of_array);

/**
 * @brief Run the interpolation search demonstration module.
 * @return void
 */
void interpolation_search_demo(void);

/**
 * @brief Search for a value using jump search.
 * @param arr The sorted array to search.
 * @param target The value to find.
 * @param length_of_array The number of elements in the array.
 * @return The index of the target or -1 if not found.
 */
int jump_search(int arr[], int target, int length_of_array);

/**
 * @brief Run the jump search demonstration module.
 * @return void
 */
void jump_search_demo(void);

#endif
