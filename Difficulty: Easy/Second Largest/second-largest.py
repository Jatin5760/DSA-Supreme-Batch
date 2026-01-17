class Solution:
    def getSecondLargest(self, arr):
        if len(arr) < 2:
            return -1
            
        max = arr[0]
        for i in range(1, len(arr)):
            if(arr[i] > max):
                max = arr[i]
        
        secondmax = -1
        for i in range(0, len(arr)):
            if( secondmax < arr[i] and arr[i] != max):
                secondmax = arr[i]
        return secondmax
                