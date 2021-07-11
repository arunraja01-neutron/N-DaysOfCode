 #include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int pow(int base, int power){
        for(int i=1; i<power; ++i){
            base*=10;
        }
        return base;
    }
    int atoi(string str)
    {
        int num=0;
        int len = str.length();
        int length = len;
        bool cond = false;
        int i;
        if(str[0]=='-'){
            i=1;
            length--;
            cond = true;
        }
        else{
            i=0;
        }
        for(i; i<len-1; ++i){
            if(str[i]-'0'>=0 && str[i]-'0'<=9){
                int mul=pow(10,length-1);
                num+=((str[i]-'0') * mul);
                length--;
            }
            else return -1;
        }
        num+=(str[len-1]-'0');
        if(cond) return num-(num*2);
        return num;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends
