#include<iostream>

using namespace std;

int count(int data[], int n ){
    set<int>s;
    for(int i=0; i<n; i++)
    s.insert(data[i]);
    return s.size();
}

