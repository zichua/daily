#include <iostream>
#include <string>

using namespace std;

class solution
{
    public : 
        void algo()
        {
            string s;
            getline(cin,s);
            int length = s.length();
            int i = 0 , flag = 0;

            while((length--)!=0)
            {
                if(s.at(i) == 0)
                {
                    s.at(i) == 1;
                    i++;
                }
                else
                {
                    if(i == flag)
                    {
                        flag++;
                        i++;
                    }
                    else
                    {
                        break;
                    }
                }
            }

            cout << s;
        }
};