#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t, n; 
    string city;

    cin >> t;
    
    while (t--){   
        cin >> n; 
        string cities[100];
        while (n--){ 
            cin >> city;
            if (count(cities, cities+100, city) == 0){ 
            }
        }
        cout << (100-count(cities, cities+100, "")) << endl;
    }
}
    
    
    /*
    int t, n = 0;
    
    string array[6] = {"HELL", "EDAS", "as", "a", "HELL", "HELL"};

    int counter = count(begin(array), end(array), "HELL");

    cout << counter << endl;
    
    
    int t, n = 0;
    string tcase;

    cin >> t;

    for (int i = 0; i < t; i++){
        cin >> n;
        int arr[n];
        for (int x = 0; n < n; x++){
            cin >> tcase;
            auto counter = find(begin[arr], end[arr], 2);

        }

    }*/
    
    /*int arr[5] = {1, 2, 3, 4, 5};
    //int a = std::begin(arr);
    cout << std::begin(arr) << endl;
    cout << std::end(arr) << endl;*/


/* PREVIOUS SOLUTION WITH CUSTOM LOOPS THROUGH THE ARRAY
int main(){
    int t, n, counter = 0;
    string tcase;

    cin >> t;

    for (int i = 0; i < t; i++){
        cin >> n;
        string array[n];
        for (int x = 0; x < n; x++){
            cin >> tcase;
            for (int y = 0; y < n; y++){
                if (array[y] == ""){
                    array[y] = tcase;
                    break;
                }
                else if (array[y] == tcase) {
                    break;
                }
            }
        }
        counter = 0;
        for (int r = 0; r < n; r++){
            if (array[r] == ""){
                break;
            }
            else{
                counter++;
            }
        }
        cout << counter << endl;
    }
}
*/