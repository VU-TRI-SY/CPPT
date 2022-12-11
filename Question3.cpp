#include<bits/stdc++.h>
using namespace std;
template<class T>//write one, use for every objects
double calculateAvg(T arr[], int n){
    double res = 0;
    for(int i = 0; i < n; i++){
        res += arr[i];
    }
    return res/n;
}

// int calAvg(int arr[], int n);
// double calAvg(double arr[], int n);
// float calAvg(float arr[], int n);

int main(){
    double arr[] = {1.5,2.5,3.5,4.6};
    cout << calculateAvg(arr, 4) << endl;
}