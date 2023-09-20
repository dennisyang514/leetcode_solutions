int removeDuplicates(int* nums, int numsSize){
    int k = 2;
    if(numsSize<=2) return numsSize;

    for(int i=2; i<numsSize; i++){
        if(nums[i] != nums[k-2]){
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}