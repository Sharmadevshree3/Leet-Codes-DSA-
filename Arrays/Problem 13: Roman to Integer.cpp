class Solution {
public:
int Value(char c)
    {
        if(c=='I') return 1;
        if(c=='V') return 5;
        if(c=='X') return 10;
        if(c=='L') return 50;
        if(c=='C') return 100;
        if(c=='D') return 500;
        if(c=='M') return 1000;
        return 0;
    }
    
    int romanToInt(string s) {
        int n=s.length();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int current = Value(s[i]);
            int next = 0;

            if(i < n-1)
                next = Value(s[i+1]);

            if(s[i]=='I')
            {
                if(current<next)
                {
                    sum-=1;
                }
                else
                {
                    sum+=1;
                }
            }
            if(s[i]=='V')
            {
                if(current<next)
                {
                    sum-=5;
                }
                else
                {
                    sum+=5;
                }
            }
            if(s[i]=='X')
            {
                if(current<next)
                {
                    sum-=10;
                }
                else
                {
                    sum+=10;
                }
            }
            if(s[i]=='L')
            {
                if(current<next)
                {
                    sum-=50;
                }
                else
                {
                    sum+=50;
                }
            }
            if(s[i]=='C')
            {
                if(current<next)
                {
                    sum-=100;
                }
                else
                {
                    sum+=100;
                }
            }
            if(s[i]=='D')
            {
                if(current<next)
                {
                    sum-=500;
                }
                else
                {
                    sum+=500;
                }
            }
            if(s[i]=='M')
            {
                if(current<next)
                {
                    sum-=1000;
                }
                else
                {
                    sum+=1000;
                }
            }
        }
        return sum;
    }
};
