#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct inter
{
    int start;
    int end;

    inter() : start(0),end(0)
    {}
    inter(int x,int y) : start(x),end(y)
    {}
};

class solution
{
    public : 
        //合并区间
        static bool cmp(const inter &a,const inter &b)
        {
            return (a.start < b.start);
        }

        vector<inter > merge(vector<inter > &inter_01)
        {
            sort(inter_01.begin(),inter_01.end(),cmp);

            vector<inter > res;

            int i = 0,n = inter_01.size();
            int l,r;
            while(i < n)
            {
                l = inter_01[i].start;
                r = inter_01[i].end;
                while(i<n-1 && r>=inter_01[i+1].start)
                {
                    i++;
                    r = max(r,inter_01[i].end);
                }

                res.push_back({l,r});
                i++;
            }

            return res;
        }

};