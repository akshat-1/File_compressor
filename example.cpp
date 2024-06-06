#include<bits/stdc++.h>
#include "hoffman.hpp"
#include "hoffman_decoder.hpp"
using namespace std;

int main()
{
    string str = "AKSHAT PORWAL @ IITM"; 

    encoder *ptr = new encoder(str); // declare the instance of encoder class
    ptr->solver(); // run the solver
    
    string encoded_str = ptr->get_str();
    map<char , string> key = ptr->get_key();

    cout<<encoded_str<<endl;
// 11000000110111011101001010100001101010111110000110111100101111111111000010
    for(auto it: key)
    {
        cout<< it.first<<"->"<<it.second<<endl;
    }
//  ->101
// @->11100
// A->110
// H->11101
// I->1111
// K->0000
// L->0001
// M->0010
// O->0011
// P->0100
// R->0101
// S->0110
// T->100
// W->0111

    decoder *ptr2 = new decoder(encoded_str , key);
    ptr2->solver(); //run solver

    string original_str = ptr2->get_actual_str();

    cout<<original_str<<endl;
    //AKSHAT PORWAL @ IITM

}