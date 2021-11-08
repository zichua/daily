#include "iostream"
#include <vector>
using namespace std;

int book[10000];
class solution
{
    public :
        bool OpenAllRoom(vector<vector<int >> &rooms)
        {
            int in,i=0;
            while(cin >> in)
            {
                rooms[i++].push_back(in);
            }
            if(i==1)
                return true;

            int temp = 0;
            for(int j=0;j<i;j++)
            {
                int t = rooms[temp].at(0);
                if(book[t] == 1)
                    break;
                else
                    book[t] = 1;
                temp = t;
            }

            for(int j=0;j<i;j++)
                if(book[j] != 1)
                {
                    return false;
                }

            return true;
        }
};