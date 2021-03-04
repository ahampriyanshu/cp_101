class Solution
{
public:
    vector<vector<int>> stockBuySell(vector<int> A, int n)
    {
        vector<vector<int>> ans;

        if (n == 1)
        {
            return ans;
        }

        int i = 0;
        while (i < n - 1)
        {

            while ((i < n - 1) && (A[i + 1] <= A[i]))
            {
                i++;
            }

            if (i == n - 1)
            {
                break;
            }

            int buy = i++;

            while ((i < n) && (A[i] >= A[i - 1]))
            {
                i++;
            }

            int sell = i - 1;

            vector<int> pair = {buy, sell};
            ans.push_back(pair);
        }
        return ans;
    }
};