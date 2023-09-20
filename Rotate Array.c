void reverse(int* nums, int start, int end){
    int tmp = 0;
    while(start<end){
        tmp = nums[end];
        nums[end] = nums[start];
        nums[start] = tmp;
        start++;
        end--;
    }
}

void rotate(int* nums, int numsSize, int k){
    k%=numsSize;
    reverse(nums, 0, numsSize-1);
    reverse(nums, 0, k-1);
    reverse(nums, k, numsSize-1);
}