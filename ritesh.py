def quick_sort(arr):
    # Base condition: if array has 0 or 1 element, it is already sorted
    if len(arr) <= 1:
        return arr

    # Choosing the pivot element (middle element)
    pivot = arr[len(arr) // 2]

    # Elements less than pivot
    left = [x for x in arr if x < pivot]

    # Elements equal to pivot
    middle = [x for x in arr if x == pivot]

    # Elements greater than pivot
    right = [x for x in arr if x > pivot]

    # Recursively apply quick sort on left and right
    return quick_sort(left) + middle + quick_sort(right)


# Driver code
arr = [10, 7, 8, 9, 1, 5]
sorted_arr = quick_sort(arr)
print("Sorted Array:", sorted_arr)
