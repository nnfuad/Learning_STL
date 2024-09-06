#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

void display(vector<int> &vector) // vectors are passed by reference as vectors can be large and itll be insufficient
{ 
    for(int i = 0 ; i<vector.size() ; i++ ){
        cout<<vector[i]<<" ";
    }
    cout<<endl;
}

void display(vector<pair<int, int> > &vector) {
    for(int i = 0; i < vector.size(); i++) {
        cout << "(" << vector[i].first << ", " << vector[i].second << ") ";
    }
    cout << endl;
}

int main(){
    vector<pair <int,int> > v_p = {{1,2},{2,3},{3,4}};
    display(v_p);

}