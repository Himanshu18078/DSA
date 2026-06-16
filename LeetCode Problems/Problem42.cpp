#include<iostream>
#include<vector>
using namespace std;
int trap(vector<int>& height) {
    int n = height.size();

    // Array to store the maximum height seen from the left side
    int prev[n];

    // No element exists before index 0
    prev[0] = -1;

    // Track the maximum height encountered so far from the left
    int max = height[0];

    for (int i = 0; i < n; i++) {
        // Store the tallest bar to the left (including current max so far)
        prev[i] = max;

        // Update max if current bar is taller
        if (max < height[i]) {
            max = height[i];
        }
    }

    // Array to store the maximum height seen from the right side
    int next[n];

    // No element exists after the last index
    next[n - 1] = -1;

    // Track the maximum height encountered so far from the right
    max = height[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        // Store the tallest bar to the right
        next[i] = max;

        // Update max if current bar is taller
        if (max < height[i]) {
            max = height[i];
        }
    }

    // For each position, water level is limited by the
    // smaller of the tallest bars on the left and right
    int mini[n];

    for (int i = 0; i < n; i++) {
        mini[i] = min(prev[i], next[i]);
    }

    // Calculate total trapped water
    int volume = 0;

    for (int i = 1; i < n - 1; i++) {
        // Water can be trapped only if current height
        // is less than the limiting boundary height
        if (height[i] < mini[i]) {
            volume += (mini[i] - height[i]);
        }
    }

    // Return total trapped rain water
    return volume;
}