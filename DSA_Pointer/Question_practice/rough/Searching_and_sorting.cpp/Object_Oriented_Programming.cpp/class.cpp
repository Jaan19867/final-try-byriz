

class Student{
public :
char Name ;
public:

    int Roll_Number;
    private:
    int Age;
    public: 
    void display(){
        cout<<Age<<" "<<Roll_Number<<endl;}
        int getAge(){
            return Age;
        }
        int setAge(int a){
            Age=a;
            cout<< Age;

        }
        int setpasswordforAGe(int a, int password){
            if(password!=765){ return 0;}
            Age= a;
            cout<<Age;
        }


    };

