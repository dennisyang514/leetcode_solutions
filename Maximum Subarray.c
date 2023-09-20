int maxSubArray(int* nums, int numsSize){
    int i, nowsum = 0, maxsum=INT_MIN;

    for (i=0; i<numsSize; i++){
        nowsum += nums[i];
        if (nowsum > maxsum) maxsum = nowsum;
        if (nowsum < 0) nowsum = 0;
    }
    return maxsum;
}