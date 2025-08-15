#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--) {
        int n;cin>>n;
        if (n%2) {
            if (n<27) cout<<-1<<endl;
            else {
                cout<<"1 3 3 4 4 5 5 6 6 1 2 7 7 8 8 9 9 10 10 11 11 12 12 13 13 1 2 ";
                for (int i=14;i<=n/2;i++) cout<<i<<" "<<i<<" ";
                cout<<endl;
            }
        }
        else {
            for (int i=1;i<=n/2;i++) cout<<i<<" "<<i<<" ";
            cout<<endl;
        }
    }
}

/*
Note that 1 is a square number; thus, for even n
, the construction 1 1 2 2 3 3…n2 n2
 works.

For odd n
, note that there exists a color that appears at least thrice, say at positions x<y<z
. Then y−x
, z−y
 and z−x
 are all square numbers. Note that z−x=(z−y)+(y−x)
, which has the smallest solution being z−x=52=25
, and z−y,y−x=9,16
. Therefore, there is no solution if n≤25
.

We devise a solution for n=27
. By the above, we have the following posts filled in:

1 (8 blanks) 1 (15 blanks) 1 –

We can use the same color for positions 11
 and 27
, to obtain the following:

1 (8 blanks) 1 2 (14 blanks) 1 2

The remaining even-length blanks can be filled in similar to above. The result is as follows and can be hard-coded:

1 3 3 4 4 5 5 6 6 1 2 7 7 8 8 9 9 10 10 11 11 12 12 13 13 1 2

Then, for odd n≥27
, add n−272
 pairs with distance 1
 to complete the construction.

Note that there are different ways to construct this starting array for n=27
 as well.
*/
