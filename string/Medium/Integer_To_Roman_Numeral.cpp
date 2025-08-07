//PROBLEM STAEMENT -  Integer To Roman Numeral
//PROBLEM - https://www.naukri.com/code360/problems/integer-to-roman-numeral_981307
//SOLUTION:-
#include <bits/stdc++.h> 
string intToRoman(int num) {
    vector<int>val = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    vector<string>sym = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

    string ans = "";
    for(int i=0; i<13;i++){
        if(num == 0) break;
        int times = num/val[i];
        while(times--) ans += sym[i];
        num = num % val[i]; 
    }
    return ans;
}
