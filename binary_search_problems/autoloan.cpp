#include <iostream>
#include <cmath>

using namespace std;

class AutoLoan {

public:
  double interestRate(double price, double monthlyPayment, int loanTerm) {
    double lo = 0;
    double hi = 100;
    double totalPayable = monthlyPayment * loanTerm;
    double interest = totalPayable - price;
    int count = 0;
    while(lo < hi) {
      if(count == 50) break;
      double rate = lo + (hi - lo) / 2;
      double guessPayable = price * pow((1 - rate/(loanTerm * 100)), loanTerm);
      cout << totalPayable << " " << guessPayable << endl;
      cout << lo << " " << hi << endl;
      cout << "rate " << rate << endl;
      if(totalPayable >= guessPayable) {
        cout << "inside if" << endl;
        lo = rate;
      } else {
        cout << "inside else" << endl;
        hi = rate;
      }
      cout << "=============" << endl;
      count++;
    }
    return lo;
  }
};

int main(int argc, char const *argv[])
{
  double price = 2000;
  double monthlyPayment = 510;
  int loanTerm = 4;
  AutoLoan * al = new AutoLoan();
  double rate = al->interestRate(price, monthlyPayment, loanTerm);
  cout << rate << endl;
  return 0;
}