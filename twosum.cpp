bool twoSum(vector<int>& arr, int target) {
        // code here
        
        int n = arr.size();
        unordered_set<int>s;
        for(int i=0;i<n;i++){
            int c = target - arr[i];
            if(s.find(c)!=s.end())
                return true;
            s.insert(arr[i]);
        }
        
        return false;
    }
