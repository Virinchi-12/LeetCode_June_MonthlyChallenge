class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int p1=0,p2=n-1;
        static char temp;
        while(p1<=p2)
        {
           temp=s[p1];
            s[p1]=s[p2];
            s[p2]=temp;
            p1++;p2--;
        }
        
        
        
    }
};
