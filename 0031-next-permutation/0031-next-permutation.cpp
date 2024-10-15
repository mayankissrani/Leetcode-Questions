class Solution {
public:
    void nextPermutation(vector<int>& A) {
        // find the pivot
        int pivot = -1, n = A.size();
        for (int i = n - 1; i > 0; i--) {
            if (A[i] > A[i -1]) {
                pivot = i-1;
                break;
            }
        }

        // if pivot not found
        if (pivot == -1) {
            reverse(A.begin(), A.end());
            return;
        }
        for (int i = n - 1; i > pivot; i--) {
            if (A[i] > A[pivot]) {
                swap(A[i], A[pivot]);
                break;
            }
        }

        reverse(A.begin() + pivot + 1, A.end());
    }
};

