def mergeInsertionSort(arr):

    s = 100
    comparisons = 0

    #merge sort
    if len(arr)>s: #if array size larger than 100 use merge
        mid = len(arr)//2

        L = arr[:mid]
        R = arr[mid:]

        #Capture and accumulate comparisons from recursive calls
        comparisons += mergeInsertionSort(L)
        comparisons += mergeInsertionSort(R)

        i=0 #pointer for left
        j=0 #pointer for right
        k=0 #pointer for main arr

        while i<len(L) and j<len(R):

            if L[i] <= R[j]:
                arr[k] = L[i]
                i+=1
            else:
                arr[k] = R[j]
                j+=1
            k+=1
            comparisons += 1

        # Copy remaining elements of L[], if there are any
        while i < len(L):
            arr[k] = L[i]
            i += 1
            k += 1

        # Copy remaining elements of R[], if there are any
        while j < len(R):
            arr[k] = R[j]
            j += 1
            k += 1


    #insertion sort for s<100

    else:
        for i in range(1, len(arr)):
            
            current_value = arr[i]

            #position of last element sorted
            pos = i - 1

            # Move elements of arr[0..i-1], that are
		    # greater than key, to one position ahead
		    # of their current position
            while pos>=0:
                comparisons += 1
                if arr[pos]>current_value:
                    arr[pos+1] = arr[pos]
                    pos -= 1
                else:
                    break

            #insert curr val into correct pos
            arr[pos+1] = current_value

        
    return comparisons
        

# Code to print the list
def printList(arr):
	for i in range(len(arr)):
		print(arr[i], end=" ")
	print()

# Driver Code
# Driver Code
if __name__ == '__main__':
    arr = [12, 11, 13, 5, 6, 7]
    print("Given array is", end="\n")
    printList(arr)

    # 1. Store the returned value in a variable
    total_comparisons = mergeInsertionSort(arr)

    print("Sorted array is: ", end="\n")
    printList(arr)

    # 2. Print the variable
    print(f"\nTotal comparisons made: {total_comparisons}")

    

