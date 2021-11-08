#include <iostream>
#include <vector>

using namespace std;

class solution
{
    public : 
        //a串有b串
        bool algo(string A,string B)
        {
            if(A.size() == B.size())
            {
                A += A;
                if(A.find(B) != A.npos)
                    return true;

            }
            return false;
        }
};