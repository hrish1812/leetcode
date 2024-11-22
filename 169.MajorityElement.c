int majorityElement(int* nums, int numsSize) {
    int vote = 0;
    int candidates = -1;
    for(int i=0;i<numsSize;i++){
        if(vote == 0){
            candidates=nums[i];
            vote=1;
        }
        else{
            if(candidates == nums[i]){
                vote++;
            }
            else{
                vote--;
            }
        }
    }
        int count=0;
        for(int i = 0; i < numsSize ; i++){
            if(nums[i]==candidates){
                count++;
            }
        }
            if(count>numsSize/2)
                return candidates;
            
            else
                return -1;       
}
