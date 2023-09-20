int maxProduct(int* nums, int numsSize){
  int tmp1,tmp2;
  if(nums[0]>nums[1]){
    tmp1=nums[0];
    tmp2=nums[1];
  }else{
    tmp1=nums[1];
    tmp2=nums[0];
  }

  if (numsSize < 3) return (tmp1-1) * (tmp2-1);

  for(int i=2; i<numsSize; i++){
    if(nums[i] > tmp1){
      tmp2 = tmp1;
      tmp1=nums[i];
    }else if(nums[i] > tmp2){
      tmp2 = nums[i];
    }
  }
  return (tmp1-1) * (tmp2-1);
}