class Solution
{
public:
    bool hasArrayTwoCandidates(int arr[], int n, int x)
    {
        sort(arr, arr + n);
        int left = 0;
        int right = n - 1;

        while (left < right)
        {
            int sum = arr[left] + arr[right];

            if (arr[left] + arr[right] == x)
            {
                return true;
            }
            else if (sum > x)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return false;
    }
};