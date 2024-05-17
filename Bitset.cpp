#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll M =1e9+7;
const ll N =1e6+1;
ll n,m;
int32_t main()
{
    ll i,j=1,k=1;
    bitset<20>b;        //If you place a variable instead of 20, warning/error will occur. You can use constant as N/M
    ///Initialized with 0
    cout<<"After initializing:\t" <<b<<endl;      //That's how you print


    ///Set all bit to 1
    b.set();
    cout<<"After b.set():\t\t"<<b<<endl;


    ///Set all bit to 0
    b.reset();
    cout<<"After b.reset():\t"<<b<<endl;


    ///Reset a bit at index 'X'
    b.reset(1);
    cout<<"Reset bit at 1 index\t"<<b<<endl;


    ///Set a bit at index 'X'
    b.set(1);
    cout<<"Set the bit at 1 index\t"<<b<<endl;


    ///Set a bitset with binary representation of 7
    bitset<8>seven(7);
    cout<<"seven= \t\t\t"<<seven<<endl;


    ///Set according to binary string
    bitset<8>str("01101");
    cout<<"Init with string:\t"<<str<<endl;


    ///Indexing is reversed in bitset
    cout<<"0 th index:\t\t"<<str[0]<<endl;


    ///Changing value
    str[2]=0;
    cout<<"Changed 2nd index\t"<<str<<endl;


    ///Show the number of set bits
    cout<<"Number of set bits:\t"<<str.count()<<endl;


    ///Show the number of low bits
    cout<<"Number of low bits:\t"<<str.size()-str.count()<<endl;


    ///Return true is any of the bits high/1
    cout<<(str.any()?"True":"False")<<endl;


    ///Return true if all bits are low/0
    cout<<(str.none()?"True":"False")<<endl;


    ///Flip all the bits
    b.flip();
    cout<<"All bits are reversed\t"<<b<<endl;


    ///Left shift
    b<<=1;
    cout<<"After left shift\t"<<b<<endl;


    ///Right shift
    b>>=1;
    cout<<"After right shift\t"<<b<<endl;


    ///And operation(Has to be same sized)
    bitset<8>str2('1001');
    cout<<"After and\t\t"<<(str&str2)<<endl;


    ///OR operation
    cout<<"After OR\t\t"<<(str|str2)<<endl;





}

