#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int>v;
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(auto i:v)
    {
        cout<<i<<endl;
    }
    if(v.size()==0)
        cout<<"0";
    else if(v.size()<=2)
        cout<<v[n-1];
    else
        cout<<v[n-3];
    return 0;
}
