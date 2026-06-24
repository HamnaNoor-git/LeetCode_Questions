class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int s1 = nums1.size();
        int s2 = nums2.size();
        int s = nums1.size() + nums2.size();
        double rr[s];

        //merging
        for(int i=0;i<s1;i++){
            rr[i]=nums1[i];
        }
        for(int i=0;i<s2;i++){
            rr[s1+i]=nums2[i];
        }

        // //unique
        // for(int i=0;i<s;i++){
        //     for(int j=0;j<s;j++){
        //         if(i==j){
        //             continue;
        //         }

        //         if(rr[i]==rr[j]){
        //             for(int k=j;k<s-1;k++){
        //                 rr[k]=rr[k+1];
        //             }
        //             s--;
        //         }
        //     }
        // }

        // for(int i=0;i<s-1;i++){
        //     int temp;
        //     if(rr[i]>rr[i+1]){
        //         temp=rr[i];
        //         rr[i]=rr[i+1];
        //         rr[i+1]=temp;
        //     }
        // }
for(int i=0;i<s-1;i++){
    for(int j=0;j<s-i-1;j++){
        if(rr[j] > rr[j+1]){
            double temp = rr[j];
            rr[j] = rr[j+1];
            rr[j+1] = temp;
        }
    }
}

        if(s%2!=0){
            return rr[(s/2)];
        }

            return (rr[(s/2)-1]+rr[(s/2)])/2;

    }
}; 
