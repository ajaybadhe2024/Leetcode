class Solution {
public:

  int getdigitsum(int num){
            int sum=0;
            while(num>0){
                sum+=(num%10);
                num/=10;
            }
            return sum;
        }

    int minSwaps(vector<int>& nums) {
        int n=nums.size();
      
        auto lambda=[&](int num1,int num2){
            int num1digitsum=getdigitsum(num1);
            int num2digitsum=getdigitsum(num2);
        
        if(num1digitsum!=num2digitsum){
            return num1digitsum<num2digitsum;
        }

       return num1<num2;
        };

        vector<int>aftersorted(nums);
         sort(begin(aftersorted), end(aftersorted), lambda);

        unordered_map<int,int>valtoInd;
        for(int i=0;i<n;i++){
            valtoInd[nums[i]]=i;
        }

        int swapcnt=0;
        for(int i=0;i<n;i++){
            int expectedval=aftersorted[i];
            int currval=nums[i];
        if(expectedval==currval)continue;

        int Ind=valtoInd[expectedval];
            nums[i]=expectedval;
            nums[Ind]=currval;

              valtoInd[expectedval] = i;
            valtoInd[currval] = Ind;

            swapcnt++;
        }
  return swapcnt;
    }
};