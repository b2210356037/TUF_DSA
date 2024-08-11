#include <bits/stdc++.h>

using namespace std;

class InsertionSort{
    public:
    void insertionSort(vector<int> &arr) {
        const int n = arr.size();
        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

};

int main(){
    InsertionSort is;
    vector<int> arr = {64, 25, 12, 22, 11};
    is.insertionSort(arr);
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}