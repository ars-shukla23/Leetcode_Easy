class Solution {
public:
    int countPrimes(int n) {
        //Seive of Eratosthenes
        vector<bool>arr(n+1,true);
        int count=0;
        arr[0]=false;
        arr[1]=false;
        
        for(int i=2;i<=n/2;i++){
            if(arr[i]){
                for(int j=i*2;j<n;j+=i){
                    arr[j]=false;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]){
                count++;
            }
        }
        return count;
    }
};