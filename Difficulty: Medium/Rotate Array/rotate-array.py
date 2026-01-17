#User function Template for python3

class Solution:
    #Function to rotate an array by d elements in counter-clockwise direction. 
    def rotateArr(self, arr, d):
        #Your code here
        
        d = d % len(arr)
        arr[:] = arr[d:] + arr[:d]
        