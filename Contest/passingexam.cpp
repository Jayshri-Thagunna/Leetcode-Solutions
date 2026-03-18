/*
Passing Exams
Chef gave a series of 
3
3 exams, and scored 
X
X, 
Y
Y and 
Z
Z in them respectively, out of 
100
100 marks each.

Chef needs to get 
50
50 or more marks in at least 
2
2 out of 
3
3 exams to pass. Determine if Chef passed.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
The first line contains 
3
3 integers - 
X
X, 
Y
Y and 
Z
Z.
Output Format
For each test case, output on a new line 
Yes
Yes or 
No
No depending on whether Chef passed or not.
*/

#include<iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    
    
    for(int i = 0; i < t; i++){
        
    int x , y , z;
    cin >> x >> y >> z;
    
        
        if(x >= 50 && y >= 50){
             cout << "Yes" <<endl;
        }
        else if(y >= 50 && z >= 50 ){
            cout << "Yes" <<endl;
        }
        else if( z >= 50 && x >= 50){
            cout << "Yes" <<endl;
        }
        else{
            cout << "No" <<endl;
        }
    }
}
