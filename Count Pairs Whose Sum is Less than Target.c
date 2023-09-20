//point
int compare(const void* a, const void* b){
    return (*(int*)a - *(int*)b);
}

int countPairs(int* nums, int numsSize, int target){
    int cnt = 0;
    int left = 0, right=numsSize-1;

    //point, depend compare output (-1,0,1) swap value
    qsort(nums,numsSize,sizeof(int),compare);

    while(left<right){
        if(nums[left] + nums[right] < target){
            //point, if right-left mach condiction, all member mach condiction
            cnt += right - left;
            left++;
        }else{
            right--;
        }
    }
    return cnt;
}