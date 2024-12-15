
#include <vector>
#include <algorithm>

class Solution {
public:
    // Function to merge overlapping intervals
    vector<vector<int>> merge(vector <vector<int> >& intervals) {
        // First, sort the intervals based on the starting times
       sort(intervals.begin(), intervals.end());

        // This will be the result vector for merged intervals
        vector< vector<int> > mergedIntervals;

        // Initialize the result vector with the first interval
        mergedIntervals.push_back(intervals[0]);

        // Iterate through all the intervals starting from the second one
        for (int i = 1; i < intervals.size(); ++i) {
            // If the current interval does not overlap with the last interval in the result,
            // then simply add the current interval to the result
            if (mergedIntervals.back()[1] < intervals[i][0]) {
                mergedIntervals.push_back(intervals[i]);
            } else {
                // If there is an overlap, merge the current interval with the last interval
                // in the result by updating the end time to the maximum end time seen
                mergedIntervals.back()[1] = max(mergedIntervals.back()[1], intervals[i][1]);
            }
        }
        // Return the merged intervals
        return mergedIntervals;
    }
};
