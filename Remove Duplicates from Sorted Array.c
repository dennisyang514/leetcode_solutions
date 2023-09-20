int removeDuplicates(int* nums, int numsSize){
    int index=0;
    for(int i=0; i<numsSize; i++){
        if(nums[i] != nums[index]){
            index++;
            nums[index]=nums[i];
        }
    }
    return index + 1;
}