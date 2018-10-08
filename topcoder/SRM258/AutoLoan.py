class AutoLoan:

  def interestRate(self, price, montlyPayment, loanTerm):
    """Returns interest rate paid by the customer"""
    delta = 0.000000000000001
    lo = 0
    hi = 1000000000000000000
    tmprate = None
    while lo <= hi:
      mid = lo + (hi - lo) // 2
      tmprate = mid * delta
      finalBalance = round(self.predicate(tmprate, price, montlyPayment, loanTerm), 10)
      if finalBalance == 0:
        return tmprate * 12
      elif finalBalance > 0:
        hi = mid - 1
      else:
        lo = mid + 1
    return -1
  

  def predicate(self, rate, price, montlyPayment, loanTerm):
    balance = price
    while loanTerm > 0:
      interest = ((rate * balance) / 100)
      balance += interest
      balance -= montlyPayment
      loanTerm -= 1
    return balance


al = AutoLoan()
res = al.interestRate(6800.0, 100.0, 68)
print(res)
res = al.interestRate(2000.0, 510.0, 4)
print(res)
res = al.interestRate(15000.0, 364.0, 48)
print(res)
