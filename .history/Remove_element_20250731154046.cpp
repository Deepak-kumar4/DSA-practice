class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // initialized a count for size 
        int count=0;
        for(int i=0;i<nums.size();i++){
            // if element is not equal to val then replace it to that element
            if(nums[i]!=val){
                nums[count]=nums[i];
                // increase the size
                count++;
            }
        }
        // return the size
        return count;
        
    }
};