using namespace std; 
#include <iostream> 

class BankAccount{
    private: 
    int accountNum; 
    string accHolderName; 
    double balance; 

    public: 
    // Constructor & Destructor
    BankAccount(int accNum = 0, string accHolderName = "NA", double balance = -1); 
    ~BankAccount(){ cout << "I am the destructor" << endl; }

    // setters 
    void setAccountNum(int accNum) { this->accountNum = accNum; }
    void setHolderName(string holderName) {this->accHolderName = holderName;}
    void setBalance(double balance) {this-> balance = balance;}

    // getters
    int getAccountNum() { return accountNum; } 
    string getHolderName() { return accHolderName; }
    double getBalance() { return balance; }

    // other funs 
    void depositAmount(double amount); 
    void widthdrawAmount(double amount); 
    void checkBalance();
};

BankAccount::BankAccount(int accNum, string accHolderName, double balance){
    cout << "I AM THE CONSTRUCTOR! :)" << endl; 
    this->accountNum = accNum; 
    this->accHolderName = accHolderName; 
    this->balance = balance; 
}

void BankAccount::depositAmount(double amount){
    this->balance = balance + amount; 
    cout << "Total Balance After Deposit = $" << balance << endl; 
}

void BankAccount::widthdrawAmount(double amount){
    this->balance = balance - amount; 
    if (balance < 0){
        cout << "Insuffcient Funds" << endl; 
        return; 
    }
    cout << "Total Balance After Widthdrawal = $" << balance << endl; 
}

void BankAccount::checkBalance(){
    cout << "Current Balance = $" << balance << endl; 
}

int main(){
    BankAccount b1;
    BankAccount b2(100, "LAIBA", 555.555);
    
    b2.depositAmount(300);
    b2.widthdrawAmount(0);
    b2.checkBalance();

    cout << b2.getAccountNum() << endl;
    cout << b2.getBalance() << endl;
    cout << b2.getHolderName() << endl; 

    //TEST OUT POINTERS!!
    cout << "----------------" << endl; 
    BankAccount *bPtr = &b1; 
    bPtr->checkBalance(); 
}