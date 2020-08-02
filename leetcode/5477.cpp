/*
 *给你一个 n x n 的二进制网格 grid，每一次操作中，你可以选择网格的 相邻两行 进行交换。

一个符合要求的网格需要满足主对角线以上的格子全部都是 0 。

请你返回使网格满足要求的最少操作次数，如果无法使网格符合要求，请你返回 -1 。

主对角线指的是从 (1, 1) 到 (n, n) 的这些格子。
 * */
class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n    = grid.size();
        int res  = 0;
        vector<int>  zeroCnt(n,0);
        for(int i=0; i<n; i++){
            for(int j=n-1; j>=0; j--)
                if(grid[i][j]==0) zeroCnt[i]++;
                else break;
            cout << zeroCnt[i];
        }
        cout << endl;
        for(int i=0; i<n-1; i++){
            if(zeroCnt[i]>=(n-1-i)) continue;
            for(int j=i+1; j<n; j++){
                if(zeroCnt[i]>=(n-1-i)) continue;
                if(zeroCnt[i]<zeroCnt[j] || zeroCnt[i]<(n-1-i)){
                    res++;
                    int tmp = zeroCnt[i];
                    zeroCnt[i] = zeroCnt[j];
                    zeroCnt[j] = tmp;
                }
            }
        }
        for(int i=0; i<n; i++)
            if(zeroCnt[i]<(n-1-i)) res=-1;
        return res;
    }
};
