/*
Equal Buying
Chef bought some number of sacks of flour, and some number of sacks of sugar. It is unknown exactly how many of each.

Each sack of flour weighs 
2
2 kilograms, and each sack of sugar weighs 
1
1 kilogram. It is known that the total weight of Chef's sacks of flours and sugar was 
N
N kilograms.

Is it possible that Chef bought an equal number of sacks of flour and sugar? Print 
Yes
Yes if it is possible and 
No
No otherwise.

Input Format
The first and only line contains 
1
1 integer - 
N
N.
Output Format
Output 
Yes
Yes if it was possible for Chef to buy an equal number of sacks of rice and sugar, and 
No
No otherwise.

*/

#include<iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin >> n;
    
   /* int i = n%2;
    int j = n -i;
    int num = i + j;*/
    
    if(n % 3 == 0){
        cout << "Yes";
    } else {
        cout << "No";
    }

}
