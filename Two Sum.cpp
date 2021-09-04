class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		for (int i = 0; i<nums.size(); i++)
			for (int g = i + 1; g<nums.size(); g++)
				if (nums[i] + nums[g] == target)
					return { i,g };
		return { 0,0 };
	}
};