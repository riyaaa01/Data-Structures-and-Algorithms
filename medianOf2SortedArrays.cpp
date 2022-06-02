#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        
        int n = nums1.size();
    int m = nums2.size();
    int cnt= ((n+m)/2);
    int sm = (n+m);

    int st=0,end=n;
    while(st<=end)
    {
        int mid = st+((end-st)/2);
         int rem = cnt-mid;
        
         if(rem>m)
        {
            st=mid+1;
            continue;
        }
        if(mid>cnt)
        {
            end=mid-1;
            continue;
        }
        
        int l1 = INT_MIN,l2=INT_MIN,r1=INT_MAX,r2=INT_MAX;
        if(mid>0)
            l1 = nums1[mid-1];
        if(rem>0)
            l2 = nums2[rem-1];
        if(mid<n)
            r1=nums1[mid];
        if(rem<m)
            r2=nums2[rem];
        
        if(l1<=r2 && l2<=r1)
        {
            double x = max(l1,l2);
            double y = min(r1,r2);
            if(sm%2==0)
            return ((x+y)/2.0);
            else
                return y;
        }
        else if(l1>r2)
        end=mid-1;
        else if(l2>r1)
        st=mid+1;
    }
    return 0;
    }
int main(){
    vector<int>nums1;
    vector<int>nums2;

    nums1.push_back(1);
    nums1.push_back(3);
    nums1.push_back(5);
    nums2.push_back(2);
    nums2.push_back(4);

    double ans = findMedianSortedArrays(nums1,nums2);
    cout<<ans;
}