// CodeStudio First and Last Position of an Element In Sorted Array
// https://www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=PROBLEM

// int firstOccurence(vector<int>&arr, int n, int key){

//     int s = 0, e= n-1;
//     int mid = s + (e-s)/2;
//     int ans = -1;
//     while(s<=e){
//         if (arr[mid] == key){
//             ans = mid;
//             e = mid - 1;
//         }
//         else if(key>arr[mid]){
//             s = mid + 1;
//         }
//         else if(key<arr[mid]){
//             e = mid -1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// int lasttOccurence(vector<int>&arr, int n, int key){

//     int s = 0, e= n-1;
//     int mid = s + (e-s)/2;
//     int ans = -1;
//     while(s<=e){
//         if (arr[mid] == key){
//             ans = mid;
//             s = mid + 1;
//         }
//         else if(key>arr[mid]){
//             s = mid + 1;
//         }
//         else if(key<arr[mid]){
//             e = mid -1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//     pair<int,int> p;
//     p.first = firstOccurence(arr,  n, k);
//     p.second = lasttOccurence(arr, n, k);

//     return p;
// }

// Optimal & better code
/**
 pair<int, int> solve(int mid, vector<int> &arr, int k) {
    int low = mid;
    int high = mid;
    pair<int, int> ans;
    while(low >= 0 && arr[low] == k){
        low--;
    }
    while(high < arr.size() && arr[high] == k){
        high++;
    }

    ans.first = low + 1;
    ans.second = high - 1;

    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    int i = 0;
    int j = n - 1;

    while(i <= j){
        int mid = i + (j - i)/2;
        if(arr[mid] == k){
            return solve(mid, arr, k);
        }else if (arr[mid] > k){
            j = mid - 1;
        }else{
            i = mid + 1;
        }
    }


    p.first = -1;
    p.second = -1;

    return p;
}

*/