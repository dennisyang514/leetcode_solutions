int search(int* nums, int numsSize, int target){
    int head=0, end=numsSize-1, mid;
    while(head <= end){
        mid=(end + head)/2;
        if(target == nums[mid]){
            return mid;
        }else if(target > nums[mid]){
            head = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return -1;
}