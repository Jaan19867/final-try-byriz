class Student{
    int Roll_Number;
    int Age;
    //default constructor
    public :
 Student(){
        cout<<" Construction Called !"<<endl;}
 void display(){
            cout<<Age<<" "<<Roll_Number<<endl;
        }
        /*Student(int r){ cout<<" Constructor 2 has been called "<<endl;
        Roll_Number=r;
        cout<<Roll_Number;}*/
        Student(int r, int a){cout<<" this_address="<<this<<endl;
            cout<<"Constructor 3 has been called "<<endl;
            Roll_Number=r;
            Age=a;
            cout<<"Roll_Number"<<Roll_Number<<"  "<<"Age"<<Age<<endl;
        }
        public:
        Student( int rollNumber){
            cout<<"Construction4 has been called "<<endl;
            
            this->Roll_Number=rollNumber;
            cout<<rollNumber<<endl;
        }
    





};