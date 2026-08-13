class Solution {
public:

int first_occure(vector<int>& arr, int k){

     int s=0;
     int e=arr.size()-1;
   
     int ans=-1;

     while(s<=e){
         int  m=s+(e-s)/2;

     if(arr[m]==k){
ans=m;
e=m-1;
 }

 else if(arr[m]<k){
    s=m+1;
 }
 else if(arr[m]>k){
    e=m-1;
 }

}
return ans;
}

int last_occure(vector<int>& arr, int k){

     int s=0;
     int e=arr.size()-1;
   
     int ans=-1;

     while(s<=e){
         int  m=s+(e-s)/2;

     if(arr[m]==k){
ans=m;
s=m+1;
 }

 else if(arr[m]<k){
    s=m+1;
 }
 else if(arr[m]>k){
    e=m-1;
 }

}
return ans;
}

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = first_occure(nums, target);
        int last = last_occure(nums, target);

        return {first, last};
        
    }
};