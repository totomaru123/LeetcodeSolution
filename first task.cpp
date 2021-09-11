class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int i;
        int j;
	int k = 0;
	uint64_t s = 1;
	int M = (pow(2, nums.size()))-1;
     vector<vector<int>> v2;   
	for (i = 0; i <= M; i++)
	{
		k = 0;
		s = 1;
		j = i;
		while (j)
		{
			k = k+((j % 2) * s);
			s = s * 10;
			j = j / 2;
		}
		std::vector<int> v1;
		for (j = 0; j < nums.size(); j++)
		{
			if ((k % 10) == 1)
			{
				v1.push_back (nums[j]);
			}
			k = k / 10;
		}
		v2.push_back (v1);
	}



	return v2;
}
        
    };

