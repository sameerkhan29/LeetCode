#include<iostream>
#include<vector>
#include<unordered_map>


using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i=0; i<nums.size(); i++){
            int n = target-nums[i];
            if(m.find(n) != m.end()) return {m[n],i};
            else m[nums[i]] = i;
        }
        return {-1};
}

int main(){
	vector<int> a = {2,5,9,6};
	int targ = 14;
	vector<int> b = twoSum(a,targ);

	cout<<b[0]<<"="<<a[b[0]]<<","<<b[1]<<"="<<a[b[1]]<<endl;

}
