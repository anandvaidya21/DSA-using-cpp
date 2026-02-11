// #include<bits/stdc++.h>
// using namespace std;

// void PrintName(){
//     cout<< "Hey ANAND!";
// }
// int main (){
//     PrintName(); 
//     return 0;
// }






// #include<bits/stdc++.h>
// using namespace std;

// void PrintName(string name){
//     cout << "hey" << " "<<name;
// }
// int main(){
//     string name;
//     cin >> name;
//     PrintName(name);
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

void doSomething(int num){
    cout <<num << endl;
    num+=5;
    cout<< num<< endl;
    num +=5;
    cout << num << endl;
}


int main(){
    int num = 10;
    doSomething(num);
    return 0;
}