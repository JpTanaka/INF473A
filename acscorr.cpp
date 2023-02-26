#include <iostream>
#include <vector>

using namespace std;

int main() {
    const long R = 1234, C= 5678;
    vector<long> rows(R), cols(C), irows(R), icols(C);
    for(long i= 0; i<R; i++) {
        rows[i] = i;
        irows[i] = i;
    }
    for(long j= 0; j<C; j++) {
        cols[j] = icols[j] = j;
    }
    char req;
    long i, j;
    while(cin>> req) {
        switch(req) {
            case 'Q':
                cin >> i >> j;
                i--; j--;

                cout << rows[i]*C + cols[j]+1 << '\n';
                break;
            case 'R':
                cin >> i >> j;
                i--;j--;
                swap(rows[i], rows[j]);
                irows[rows[i]] = i;
                irows[rows[j]] = j;
                break;
            case 'C':
                cin >> i >> j;
                i--;j--;
                swap(cols[i], cols[j]);
                icols[cols[i]] = i;
                icols[cols[j]] = j;
                break;
            case 'W':
                int z;
                cin >> z;
                int x = (z-1)/5678; int y = (z - 1) % 5678;
                
                cout << irows[x]+1 << ' ' << icols[y]+1 << '\n';
                break;
        }
    }


    return 0;
}