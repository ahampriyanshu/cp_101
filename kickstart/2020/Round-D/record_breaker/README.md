## Record Breaker (4pts, 8pts)

### Problem
Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is Vi. A day is record breaking if it satisfies both of the following conditions:
* The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.

* Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.
Note that the very first day could be a record breaking day!

Please help Isyana find out the number of record breaking days.

### Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the integer N. The second line contains N integers. The i-th integer is Vi.

### Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the number of record breaking days.

### Limits
Time limit: 20 seconds per test set.
Memory limit: 1GB.
1 ≤ T ≤ 100.
0 ≤ Vi ≤ 2 × 105.

### Test set 1
1 ≤ N ≤ 1000.

### Test set 2
1 ≤ N ≤ 2 × 105 for at most 10 test cases.
For the remaining cases, 1 ≤ N ≤ 1000.

### Sample

Input
```
4
8
1 2 0 7 2 0 2 0
6
4 8 15 16 23 42
9
3 1 4 1 5 9 2 6 5
6
9 9 9 9 9 9
```
Output
```  
Case #1: 2
Case #2: 1
Case #3: 3
Case #4: 0
```

In Sample Case #1, the bold and underlined numbers in the following represent the record breaking days: 1 2 0 7 2 0 2 0.

In Sample Case #2, only the last day is a record breaking day.

In Sample Case #3, the first, the third, and the sixth days are record breaking days.

In Sample Case #4, there is no record breaking day.

## Analysis
We can check whether the current element is the last element and, if not, if it is greater than the next element in constant time. To check whether i is a record breaking day, we also need to check whether the number of visitors of day i is greater than number of visitors from all the previous days.

### Test Set 1
For each element j such that (1 <= j < i), check that the number of visitors on day j are less than number of visitors on day i. Hence, for each day we would compare it with all the previous days and it would take O(N) time. Therefore, for N days, the time complexity of this solution would be O(N^2).

### Test Set 2
However that wouldn't be fast enough for Test Set 2, so we need a faster approach. Instead of comparing the number of visitors of day i against all the previous days one by one, we can compare the number of visitors of day i against the greatest number of visitors from all previous days. That reduces our processing time for each day from O(N) to O(1). Therefore, for N days, the time complexity of this solution would be O(N), which is sufficiently fast for both Test Set 1 and Test Set 2.

### Sample Code (C++)
```cpp
int countRecordBreakingDays(vector<int> visitors) {
  int recordBreaksCount = 0;
  int previousRecord = 0;
  for(int i = 0; i < checkpoints.size(); i++) {
     bool greaterThanPreviousDays = i == 0 || visitors[i] > previousRecord;
     bool greaterThanFollowingDay = i == checkpoints.size()-1 || visitors[i] > visitors[i+1];
     if(greaterThanPreviousDays && greaterThanFollowingDay) {
        recordBreaksCount++;
     }
     previousRecord = max(previousRecord, visitors[i]);
  }
  return recordBreaksCount;
}
```