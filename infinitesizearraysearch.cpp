#include <iostream>
#include <vector>
using namespace std;

int binary(vector<int>& v, int x, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (mid >= v.size()) break; 
        
        if (v[mid] == x) {
            return 1;
        } else if (v[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return 0;
}

int search(vector<int>& v, int x) {
    if (v.empty()) return 0; 

    if (v[0] == x) {
        return 1;
    }

    int i = 1;
    while (i < v.size() && v[i] < x) {
        i *= 2;
        if(v[i]==x)
        {
            return 1;
        }
    }
    return binary(v, x, i / 2, min(i, (int)v.size() - 1));
}

int main() {
    int x;
    cout << "Enter element to search: ";
    cin >> x;

    vector<int> v;
    int num;

    cout << "Enter sorted numbers (enter -1 to stop): ";
    while (cin >> num && num != -1) {
        v.push_back(num);
    }

    int ans = search(v, x);
    if (ans == 1) {
        cout << "Found the element\n";
    } else {
        cout << "Element not found\n";
    }
}
