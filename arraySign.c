int arraySign(int* nums, int numsSize) {
    int i=0;
    int p=0;
    for(i=0;i<numsSize;i++){
      if(nums[i]==0){
        return 0;
      }
      else if(nums[i]<0){
        p++;
      }
    }
    if(p%2==0){
        return 1;
    }
  return -1;
}
