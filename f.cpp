class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
    int ans=0;
    int i = 0;
    
    int j=0;
    for(; i<chars.size();i++)
    {
        int count = 1;
        j=i;
        while(i<n-1&&chars[i]==chars[i+1])
        {
            count++;
            i++;

        }
        if(count>1)
        {
        	chars[ans++]=chars[i];
        		string local=to_string(count);  
        		for(auto x:local) {
        			chars[ans++]=x;
        	}
            

        }
        else
        {
          chars[ans++]=chars[i];
        }
    }
        return ans;
    }
};