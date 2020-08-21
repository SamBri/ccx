//Program to simulate shoot money code.
//Author: Samuel Brifo
//Date:20th August 2020
#include <iostream>

using namespace std;

//Have a wallet.
class Wallet
{
private:
    double amount; //amount in wallet.
public:
    Wallet(double x):amount(x){ // load wallet.
    cout <<"Wallet has been loaded"<<endl;
    }
    Wallet(){
        cout <<"Wallet has been created.";
    }
  //mutators
  friend double shootAmount(double amountShot,  Wallet& w);

};

//shoot amount
double shootAmount(double amountShot, Wallet& w)
{
    //Wallet w; //
    if(amountShot > w.amount) // prompt insufficient amount
        {cout <<"wallet amount is at insufficient:"; return w.amount;}
    else
      {
       w.amount -= amountShot; // keep the balance.
       cout <<"money has been shot!"<<endl;
       cout <<"Balance in wallet is:"<<w.amount<<endl;
         // shoot amount
         return amountShot;
       }

}

//deposit amount
void depositAmount(double getShotAmount)
{


}

//have a month
class Month
{
private:
    string certainCondition; //a month has a certain condition
    short day; //day of month
    short month; //month
    short year; //year  for shot.
    double amountShotReceived; // receive the amount shot
public:
    Month(short day, short year):this.day(day),this.year(year)
    {
        cout <<"Day:"<<day<<" "<<"Year:"<<year<<" "<<"created"<<endl;
    }

   // mutators
    void whichCertainCondition(scc){
        this.certainCondition = scc;
    }

    // accessors
    friend void viewLedger(const Month& m);

};

void viewLedger(const Month& m)
{
    cout <<"For:"<<m.certainCondition<<" "<<"Day:"<<m.day<<" "<<m.year
          <<"Amount shot:$"<<m.amountShotReceived<<
}





int main()
{
    //create a wallet.
    Wallet SamuelWallet(1000); // load with 1000 dollars

    //black friday is around the corner
     Month November(10,2020);
     November.whichCertainCondition("Black Friday.");

    //shoot 100 dollars.
     double getShotAmount = 0; //awating shot amount
     getShotAmount = shootAmount(10000,SamuelWallet);

     //shot amount booked on that date and year.







    return 0;
}
