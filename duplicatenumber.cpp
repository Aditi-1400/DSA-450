class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int xorn = 0;
        for (int i = 1; i <= nums.size() - 1; i++) {

            xorn = xorn xor i;

        }

        for (int i = 0; i < nums.size(); i++) {

            xorn = xorn xor nums[i];
        }

        return xorn;

    }
};