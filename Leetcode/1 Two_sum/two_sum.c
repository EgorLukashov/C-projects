#include <stdio.h>
#include <stdlib.h>
//Два способа записи решения arr[i] и *arr(i)
 int* twoSum(int* nums, int numsSize, int target, int* returnSize);

 int main(){
     int arr[4]={2,7,11, 15};
     /*int a =0;
     int* size= &a;*/
     int size= 2;
     int* res=twoSum(arr,4,17,&size);
        for(int i=0; i<size;i++){
            printf("%d\n", res[i]);
        }

    return 0;
 }

/*int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize=2;
    int* resArr=malloc(numsSize * sizeof(int));
    int flag = 0;
    for(int* i=nums;i-nums<numsSize;i++) {
        for (int *j = nums+1; j - nums < numsSize; j++) {
            if(flag==0){
                if (*j + *i == target&&i!=j) {
                    *(resArr) = i - nums;
                    resArr[1] = j - nums;
                    flag=-1;
                }
            }
        }
    }
    return resArr;
}*/

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize=2;
    int* resArr=malloc(numsSize * sizeof(int));
    int flag = 0;
    for(int i=0;i<numsSize;i++) {
        for (int j =1; j < numsSize; j++) {
            if(flag==0){
                if (nums[i] + nums[j] == target && i!=j) {
                    resArr[0] = i;
                    resArr[1] = j;
                    flag=-1;
                }
            }
        }
    }
    return resArr;
}




