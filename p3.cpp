#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int n, k, c, j;
    c=0;
    cin >> n >> k;
    while(n>0) {
        cin >> j;
        if(j%k==0) c++;
        n--;
    }
    cout << c;
    return 0;
}