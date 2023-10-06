def longestSubarrayWithSumK(a: [int], k: int) -> int:
    # Write your code here
    n=len(a)
    maxLength = 0
    start = 0
    end = -1
    currentSum = 0

    # Iterating over 'a'
    while start < n:

        # Increasing the right end
        # till our sum <= ‘k’ or we
        # are not out of bounds
        while (end + 1 < n) and (currentSum + a[end + 1] <= k):
            currentSum += a[end + 1]
            end += 1

        # We have found a subarray with the
        #  required sum.
        if currentSum == k:
            maxLength = max(maxLength, end - start + 1)

        # Shifting the start index
        currentSum -= a[start]
        start += 1

    return maxLength

    pass


"""
this is my code which has time complexity of O(n^2)

def longestSubarrayWithSumK(a: [int], k: int) -> int:
    # Write your code here
    n=len(a)
    x=0
    for i in range(n):
        sum =0
        for j in range(i,n):

            sum=sum+a[j]
            if(sum==k):
                x=(j-i+1) if x<(j-i+1) else x
                
    return x

    pass"""
