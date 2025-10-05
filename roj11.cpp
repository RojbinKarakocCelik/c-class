#include <iostream>

using namespace std;


class Bank_Account{
private:
    int id; 
    int password=1;
    string  name_surname;
    double balance=0.0;
    bool is_logged_in=false;
public:
    string bank;
    int account_no;

    void deposite( double money){
        
        if(money<0){
            cout<<"invalid deposite operation"<<endl;
        }
        else{
        balance=balance+money;
            cout<<money<<" TL deposite is valid"<<"\nnewbalance="<<balance<<endl;
        }

    }
    void new_name(string name){
        name_surname=name;
        cout<<"new name is "<<name<<endl;
    

    }
    void login(int passo){
        if (passo==password){
            is_logged_in=true;
            cout<<"succesfull login"<<endl;
        }
        else{
            cout<<"wrong password";
        }

    }
    void change_password(int change2){
        if(is_logged_in==true){
            password=change2;
            cout<<"password changed"<<endl;
        }
        else{
            cout<<"password can not changed,please log in first"<<endl;
        }
    }

};

int main(){
    Bank_Account roj;
    roj.bank="renas bank";
    roj.account_no=234567;
    roj.deposite(12.45);
    roj.new_name("ROJBiN");
    roj.login(1);
    roj.change_password(2456);

}
