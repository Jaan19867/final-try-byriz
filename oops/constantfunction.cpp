#include<iostream>
using namespace std;
    class Fraction{
        private:
        int numerator ;
        int denominator;
        public:
        fraction(int numerator, int denominator){
            this->numerator=numerator;
            this->denominator=denominator;
        }
        void print(){
            cout<<this->numerator<<"/"<<this->denominator<<endl;
        }
    };




    int main (){


        fraction f1(10,2);
        fraction f2(15,4);
//  fraction const f3;

    }