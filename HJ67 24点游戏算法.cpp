bool dfs(vector<double> nums) {
    if (nums.size() == 1) 
        return abs(nums[0] - 24) < 1e-6;
    
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i+1; j < nums.size(); j++) {
            double a = nums[i], b = nums[j];
            vector<double> next;
            for (int k = 0; k < nums.size(); k++) 
                if (k != i && k != j) next.push_back(nums[k]);
            
            // 尝试所有运算符
            vector<double> results = {a+b, a-b, b-a, a*b};
            if (abs(b) > 1e-6) results.push_back(a/b);
            if (abs(a) > 1e-6) results.push_back(b/a);
            
            for (double res : results) {
                next.push_back(res);
                if (dfs(next)) return true;
                next.pop_back();
            }
        }
    }
    return false;
}
