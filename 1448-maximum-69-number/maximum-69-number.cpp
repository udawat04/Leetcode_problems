class Solution {
public:
    int maximum69Number (int num) {
        int r,ans=0;
        vector<int>arr;
        while(num!=0)
        {
            r=num%10;
            arr.push_back(r);
            num/=10;
        }
        int n=arr.size();
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]!=9)
            {
                arr[i]=9;
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            ans=(ans*10)+arr[i];
        }
        return ans;
    }
};