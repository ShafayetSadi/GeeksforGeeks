#include <bits/stdc++.h>
using namespace std;

bool myCmp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second == p2.second){
        return p1.first < p2.first;
    }
    return p1.second > p2.second;
}

// Time complexity is big O(n + dlog(d)) d is total number of distinct element
vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        vector<int> ans;
        vector<pair<int, int>> vr;
        unordered_map<int, int> mp;
        
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        
        // vector<pair<int, int>> v(mp.begin(), m.end());

        for(auto it=mp.begin(); it!=mp.end(); it++){
            vr.push_back(*it);
        }
        
        sort(vr.begin(), vr.end(), myCmp);
        
        for(int i=0; i<vr.size(); i++){
            for(int j=0; j<vr[i].second; j++){
                ans.push_back(vr[i].first);
            }
        }
        return ans;
    }


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr[] = {10, 5, 20, 10, 10, 5, 20};
	int n = 7;

	vector<int> v = sortByFreq(arr, n);

	for(auto x : v){
		cout << x << " ";
	}cout << endl;

	return 0;
}	