#include<bits/stdc++.h>
using namespace std;
string one[] = { "", "one ", "two ", "three ", "four ",
                 "five ", "six ", "seven ", "eight ",
                 "nine ", "ten ", "eleven ", "twelve ",
                 "thirteen ", "fourteen ", "fifteen ",
                 "sixteen ", "seventeen ", "eighteen ",
                 "nineteen " };
string ten[] = { "", "", "twenty ", "thirty ", "forty ",
                 "fifty ", "sixty ", "seventy ", "eighty ",
                 "ninety " };
string NumberToWord(long n,string s){
string ss="";
if(n>19)
    ss+=ten[n/10]+one[n%10];
else
    ss+=one[n];
if(n)
    ss+=s;
return ss;
}
string NumberConvertToWord(int n){
   string s="";
   s+=NumberToWord( (n/10000000),"crore");
   s+=NumberToWord( (n/100000)%100,"lakh" );
   s+=NumberToWord( (n/1000)%100,"thousand" );
   s+=NumberToWord((n/100)%10,"hundred" );
   if(n>100 &&n%100)
    s+="and";
   s+=NumberToWord((n%100),"" );
   if(s=="")
    s+="zero";
   return s;
}
int main(){
long n=732;
cout<<NumberConvertToWord(n);
}
