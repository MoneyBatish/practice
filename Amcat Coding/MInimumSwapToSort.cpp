#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minSwaps(vector<int>& arr) {
    int n = arr.size();
    vector<pair<int, int>> arrPos(n);
    
    // Store the array elements with their respective positions
    for (int i = 0; i < n; i++)
        arrPos[i] = { arr[i], i };
    
    // Sort the array in ascending order
    sort(arrPos.begin(), arrPos.end());
    
    // Visited array to mark visited elements
    vector<bool> visited(n, false);
    
    int minSwaps = 0;
    
    for (int i = 0; i < n; i++) {
        // Skip already visited elements or elements in the correct position
        if (visited[i] || arrPos[i].second == i)
            continue;
        
        int cycleSize = 0;
        int j = i;
        
        // Count the size of the cycle
        while(!visited[j]) {
            visited[j] = true;
            j = arrPos[j].second;
            cycleSize++;
        }
        
        // Update the minimum swaps required
        minSwaps += cycleSize - 1;
    }
    
    return minSwaps;
}

int main() {
    vector<int> arr = { 1, 5, 4, 3, 2};
    int swaps = minSwaps(arr);
    cout << "Minimum swaps required: " << swaps << endl;
    return 0;
}
