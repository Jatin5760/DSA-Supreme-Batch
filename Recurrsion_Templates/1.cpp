#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// ============================================
// 1. BASIC RECURSION TEMPLATE
// ============================================

// Template Structure
/*
returnType function(parameters) {
    // BASE CASE - Recursion rokne ki condition
    if (base_condition) {
        return base_value;
    }
    
    // RECURSIVE CASE
    // Option 1: Process pehle, then recurse
    // Option 2: Recurse pehle, then process
    // Option 3: Recurse + process together
    
    return result;
}
*/

// ============================================
// 2. LINEAR RECURSION (Single Call)
// ============================================

// Print 1 to N (Recursion pehle, process baad mein)
void print1toN(int n) {
    if (n == 0) return;
    print1toN(n - 1);
    cout << n << " ";
}

// Print N to 1 (Process pehle, recursion baad mein)
void printNto1(int n) {
    if (n == 0) return;
    cout << n << " ";
    printNto1(n - 1);
}

// Sum of first N numbers
int sumN(int n) {
    if (n == 0) return 0;
    return n + sumN(n - 1);
}

// Factorial
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// Power function
int power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

// Reverse a number
void reverseNumber(int n) {
    if (n == 0) return;
    cout << n % 10;
    reverseNumber(n / 10);
}

// Check if number is palindrome
bool isPalindromeHelper(int n, int& rev, int temp) {
    if (n == 0) return temp == rev;
    rev = rev * 10 + n % 10;
    return isPalindromeHelper(n / 10, rev, temp);
}

bool isPalindrome(int n) {
    int rev = 0;
    return isPalindromeHelper(n, rev, n);
}

// ============================================
// 3. MULTIPLE RECURSIVE CALLS
// ============================================

// Fibonacci (2 recursive calls)
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Count ways to reach Nth stair (1 or 2 steps at a time)
int countWays(int n) {
    if (n <= 1) return 1;
    return countWays(n - 1) + countWays(n - 2);
}

// ============================================
// 4. PARAMETERIZED vs FUNCTIONAL RECURSION
// ============================================

// FUNCTIONAL: Return value se answer milta hai
int sumFunctional(int n) {
    if (n == 0) return 0;
    return n + sumFunctional(n - 1);
}

// PARAMETERIZED: Parameter mein answer store karte hai
void sumParameterized(int n, int sum) {
    if (n == 0) {
        cout << sum << endl;
        return;
    }
    sumParameterized(n - 1, sum + n);
}

// Factorial - Parameterized (Tail Recursion)
void factorialParam(int n, int result) {
    if (n == 0) {
        cout << result << endl;
        return;
    }
    factorialParam(n - 1, n * result);
}

// ============================================
// 5. ARRAY RECURSION TEMPLATES
// ============================================

// Check if array is sorted
bool isSorted(vector<int>& arr, int idx) {
    if (idx == arr.size() - 1) return true;
    return arr[idx] <= arr[idx + 1] && isSorted(arr, idx + 1);
}

// Linear Search
int linearSearch(vector<int>& arr, int idx, int target) {
    if (idx == arr.size()) return -1;
    if (arr[idx] == target) return idx;
    return linearSearch(arr, idx + 1, target);
}

// Reverse an array (Two pointers approach)
void reverseArray(vector<int>& arr, int l, int r) {
    if (l >= r) return;
    swap(arr[l], arr[r]);
    reverseArray(arr, l + 1, r - 1);
}

// Find maximum in array
int findMax(vector<int>& arr, int idx) {
    if (idx == arr.size() - 1) return arr[idx];
    return max(arr[idx], findMax(arr, idx + 1));
}

// ============================================
// 6. STRING RECURSION TEMPLATES
// ============================================

// Reverse a string
void reverseString(string& s, int l, int r) {
    if (l >= r) return;
    swap(s[l], s[r]);
    reverseString(s, l + 1, r - 1);
}

// Check if string is palindrome
bool isPalindromeString(string& s, int l, int r) {
    if (l >= r) return true;
    if (s[l] != s[r]) return false;
    return isPalindromeString(s, l + 1, r - 1);
}

// Count vowels in string
int countVowels(string& s, int idx) {
    if (idx == s.length()) return 0;
    char c = tolower(s[idx]);
    int isVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ? 1 : 0;
    return isVowel + countVowels(s, idx + 1);
}

// ============================================
// 7. SUBSEQUENCE PATTERN (Pick/Not Pick)
// ============================================

// Print all subsequences of array
void printSubsequences(vector<int>& arr, int idx, vector<int>& curr) {
    if (idx == arr.size()) {
        for (int x : curr) cout << x << " ";
        cout << endl;
        return;
    }
    
    // NOT PICK
    printSubsequences(arr, idx + 1, curr);
    
    // PICK
    curr.push_back(arr[idx]);
    printSubsequences(arr, idx + 1, curr);
    curr.pop_back(); // Backtrack
}

// Print all subsequences of string
void printSubsequencesString(string s, int idx, string curr) {
    if (idx == s.length()) {
        cout << curr << endl;
        return;
    }
    
    // NOT PICK
    printSubsequencesString(s, idx + 1, curr);
    
    // PICK
    printSubsequencesString(s, idx + 1, curr + s[idx]);
}

// Count subsequences with sum = K
int countSubsequencesWithSum(vector<int>& arr, int idx, int sum, int target) {
    if (idx == arr.size()) {
        return (sum == target) ? 1 : 0;
    }
    
    // NOT PICK
    int notPick = countSubsequencesWithSum(arr, idx + 1, sum, target);
    
    // PICK
    int pick = countSubsequencesWithSum(arr, idx + 1, sum + arr[idx], target);
    
    return pick + notPick;
}

// Print only ONE subsequence with sum = K
bool printOneSubsequence(vector<int>& arr, int idx, vector<int>& curr, int sum, int target) {
    if (idx == arr.size()) {
        if (sum == target) {
            for (int x : curr) cout << x << " ";
            cout << endl;
            return true; // Found one, stop further recursion
        }
        return false;
    }
    
    // PICK
    curr.push_back(arr[idx]);
    if (printOneSubsequence(arr, idx + 1, curr, sum + arr[idx], target)) return true;
    curr.pop_back(); // Backtrack
    
    // NOT PICK
    if (printOneSubsequence(arr, idx + 1, curr, sum, target)) return true;
    
    return false;
}

// ============================================
// 8. COMBINATION SUM PATTERN
// ============================================

// Combination Sum (elements can be reused unlimited times)
void combinationSum(vector<int>& arr, int idx, int target, vector<int>& curr, vector<vector<int>>& ans) {
    if (idx == arr.size()) {
        if (target == 0) {
            ans.push_back(curr);
        }
        return;
    }
    
    // PICK (can pick same element again)
    if (arr[idx] <= target) {
        curr.push_back(arr[idx]);
        combinationSum(arr, idx, target - arr[idx], curr, ans); // idx same rehega
        curr.pop_back();
    }
    
    // NOT PICK (move to next)
    combinationSum(arr, idx + 1, target, curr, ans);
}

// Combination Sum 2 (each element used only once)
void combinationSum2(vector<int>& arr, int idx, int target, vector<int>& curr, vector<vector<int>>& ans) {
    if (target == 0) {
        ans.push_back(curr);
        return;
    }
    
    for (int i = idx; i < arr.size(); i++) {
        if (i > idx && arr[i] == arr[i-1]) continue; // Skip duplicates
        if (arr[i] > target) break; // Optimization
        
        curr.push_back(arr[i]);
        combinationSum2(arr, i + 1, target - arr[i], curr, ans);
        curr.pop_back();
    }
}

// ============================================
// 9. SUBSET SUM PATTERN
// ============================================

// Generate all subset sums
void subsetSums(vector<int>& arr, int idx, int sum, vector<int>& ans) {
    if (idx == arr.size()) {
        ans.push_back(sum);
        return;
    }
    
    // NOT PICK
    subsetSums(arr, idx + 1, sum, ans);
    
    // PICK
    subsetSums(arr, idx + 1, sum + arr[idx], ans);
}

// ============================================
// 10. PERMUTATION PATTERN
// ============================================

// Method 1: Using extra boolean array
void permuteWithBool(vector<int>& arr, vector<int>& curr, vector<bool>& used, vector<vector<int>>& ans) {
    if (curr.size() == arr.size()) {
        ans.push_back(curr);
        return;
    }
    
    for (int i = 0; i < arr.size(); i++) {
        if (!used[i]) {
            used[i] = true;
            curr.push_back(arr[i]);
            permuteWithBool(arr, curr, used, ans);
            curr.pop_back();
            used[i] = false; // Backtrack
        }
    }
}

// Method 2: Using swapping (Space optimized)
void permuteWithSwap(vector<int>& arr, int idx, vector<vector<int>>& ans) {
    if (idx == arr.size()) {
        ans.push_back(arr);
        return;
    }
    
    for (int i = idx; i < arr.size(); i++) {
        swap(arr[idx], arr[i]);
        permuteWithSwap(arr, idx + 1, ans);
        swap(arr[idx], arr[i]); // Backtrack
    }
}

// ============================================
// 11. DIVIDE AND CONQUER PATTERN
// ============================================

// Binary Search
int binarySearch(vector<int>& arr, int l, int r, int target) {
    if (l > r) return -1;
    
    int mid = l + (r - l) / 2;
    
    if (arr[mid] == target) return mid;
    if (arr[mid] > target) return binarySearch(arr, l, mid - 1, target);
    return binarySearch(arr, mid + 1, r, target);
}

// Merge two sorted arrays
void merge(vector<int>& arr, int l, int mid, int r) {
    vector<int> temp;
    int i = l, j = mid + 1;
    
    while (i <= mid && j <= r) {
        if (arr[i] <= arr[j]) temp.push_back(arr[i++]);
        else temp.push_back(arr[j++]);
    }
    
    while (i <= mid) temp.push_back(arr[i++]);
    while (j <= r) temp.push_back(arr[j++]);
    
    for (int i = 0; i < temp.size(); i++) {
        arr[l + i] = temp[i];
    }
}

// Merge Sort
void mergeSort(vector<int>& arr, int l, int r) {
    if (l >= r) return;
    
    int mid = l + (r - l) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

// Quick Sort
int partition(vector<int>& arr, int l, int r) {
    int pivot = arr[r];
    int i = l - 1;
    
    for (int j = l; j < r; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[r]);
    return i + 1;
}

void quickSort(vector<int>& arr, int l, int r) {
    if (l < r) {
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}

// ============================================
// 12. BACKTRACKING PATTERN (Generate All)
// ============================================

// Generate all binary strings of length N
void generateBinary(int n, string curr) {
    if (curr.length() == n) {
        cout << curr << endl;
        return;
    }
    
    generateBinary(n, curr + "0");
    generateBinary(n, curr + "1");
}

// Generate all strings of length N with K ones
void generateKOnes(int n, int k, int idx, string curr) {
    if (idx == n) {
        int count = 0;
        for (char c : curr) if (c == '1') count++;
        if (count == k) cout << curr << endl;
        return;
    }
    
    generateKOnes(n, k, idx + 1, curr + "0");
    generateKOnes(n, k, idx + 1, curr + "1");
}

// Generate all balanced parentheses
void generateParentheses(int n, int open, int close, string curr, vector<string>& ans) {
    if (curr.length() == 2 * n) {
        ans.push_back(curr);
        return;
    }
    
    if (open < n) {
        generateParentheses(n, open + 1, close, curr + "(", ans);
    }
    if (close < open) {
        generateParentheses(n, open, close + 1, curr + ")", ans);
    }
}

// ============================================
// 13. ADVANCED: MEMOIZATION (DP with Recursion)
// ============================================

// Fibonacci with memoization
int fibMemo(int n, vector<int>& dp) {
    if (n <= 1) return n;
    if (dp[n] != -1) return dp[n];
    return dp[n] = fibMemo(n - 1, dp) + fibMemo(n - 2, dp);
}

// ============================================
// MAIN FUNCTION - TESTING
// ============================================

int main() {
    cout << "========== BASIC RECURSION ==========\n";
    cout << "Print 1 to 5: ";
    print1toN(5);
    cout << "\nPrint 5 to 1: ";
    printNto1(5);
    cout << "\nSum of 5: " << sumN(5) << endl;
    cout << "Factorial of 5: " << factorial(5) << endl;
    
    cout << "\n========== ARRAY RECURSION ==========\n";
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "Is sorted: " << (isSorted(arr, 0) ? "Yes" : "No") << endl;
    cout << "Max element: " << findMax(arr, 0) << endl;
    
    cout << "\n========== SUBSEQUENCES ==========\n";
    vector<int> arr2 = {1, 2, 3};
    vector<int> curr;
    cout << "All subsequences:\n";
    printSubsequences(arr2, 0, curr);
    
    cout << "\n========== PERMUTATIONS ==========\n";
    vector<int> arr3 = {1, 2, 3};
    vector<vector<int>> perms;
    permuteWithSwap(arr3, 0, perms);
    cout << "All permutations:\n";
    for (auto& p : perms) {
        for (int x : p) cout << x << " ";
        cout << endl;
    }
    
    cout << "\n========== FIBONACCI WITH MEMO ==========\n";
    int n = 10;
    vector<int> dp(n + 1, -1);
    cout << "Fibonacci of " << n << ": " << fibMemo(n, dp) << endl;
    
    return 0;
}