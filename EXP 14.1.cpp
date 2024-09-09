#include<iostream>
#include <string> 
using namespace std;

class Uni {
    public:
    string uni = "Symbiosis: ";
    void discipline (){
        cout<<"Engineering"<<endl;
    }
};
class dep: public Uni {
    public:
    string dept = "Electronics and telecommunications ";
};

int main(){
    dep u1;
    u1.discipline();
    cout<<u1.uni+" "+u1.dept;
}
