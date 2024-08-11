#include <bits/stdc++.h>
using namespace std;

class SelectionSort{
    public:
    void selectionSort(vector<int> &arr){
        const int n = arr.size();
        for(int i = 0; i < n; i++){
            int minIndex = i;
            for(int j = i+1; j < n; j++){
                if(arr[j] < arr[minIndex]){
                    minIndex = j;
                }
            }
            swap(arr[i], arr[minIndex]);
        }
    }
};


int main(){
    SelectionSort ss;
    vector<int> arr = {64, 25, 12, 22, 11};
    ss.selectionSort(arr);
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}