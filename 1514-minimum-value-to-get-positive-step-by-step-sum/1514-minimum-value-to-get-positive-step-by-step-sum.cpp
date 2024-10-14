class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n = nums.size() ;
        int ans ;
        vector <int> ps (n+1) ;
        ps[0] = nums[0] ;
        for ( int i =1 ; i<n ; i++)
        ps [i] = ps [i-1] + nums[i] ;
        int mini = *min_element(ps.begin(),ps.end()) ;
        if ( mini<0){
        ans = 1-mini ;}
        else{
        ans =1 ;}
        return ans ;
        
    }
};