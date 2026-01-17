class Solution:
    def largest(self, arr):
        max = arr[0]
        for i in range(1, len(arr)):
            if(max < arr[i]):
                max = arr[i]
        return max
        
