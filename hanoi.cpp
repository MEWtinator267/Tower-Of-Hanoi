#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if(n==1){            
    // Base Case : If number of disk left in source pole is 1 then move the disk to destination pole.

         cout << "Move disk 1 from rod " << source <<  
                       " to rod " << destination <<endl;
         return;
     }

     towerOfHanoi(n-1,source,destination,auxiliary);     
     // Move n-1 disks from source pole to auxiliary pole with the help of destination pole.

     cout << "Move disk " << n << " from rod " << source << 
                           " to rod " << destination << endl; 

     towerOfHanoi(n-1,auxiliary,source,destination);      
     // Move n-1 disks from auxiliary pole to destination pole with the help of source pole.
}

int main(){
    int n;              // Number of disks
    cin>>n;
    towerOfHanoi(n,'A','B','C');

    return 0;
}
