
def show_balance(balance):

    print("******************")

    print(f"Your balance is ${balance:.2f}")

def deposit():

    try:

        amount = float(input("Enter the amount you want to deposit: "))


        if amount < 0:
            print("Thats not a valid amount")
            return 0
        
        else:
            return amount
        

    except ValueError:
        print("Invalid input! Please enter a valid input")
        return 0


def withdraw(balance):
    try:

        amount = float(input("Enter the ammount you want to withdraw: "))
        

        if amount > balance:
            print("Insufficient funds.")
            return 0
        
        elif amount < 0:
            print("Amount must be greater then $0.")
            return 0
        
        else:
            return amount
        
    except ValueError:
        print("Invalid input! Please enter a valid input")
        return 0

        

def main():


    balance = 0
    is_running = True


    while is_running:

        print("******************")

        print("Banking Program")

        print("******************")

        print("1.Show Balance")
        print("2.Deposit")
        print("3.Withdraw")

        print("******************")

        print("4.Exit")

        print("******************")



        choice = input("Enter your choice (1-4): ")



        if choice == '1':
            show_balance(balance)

        elif  choice == '2':
            balance += deposit()

        elif choice == '3':
            balance -= withdraw(balance)

        elif choice == '4':
            is_running = False

        else:
            print("Thats not a valid choice!")


    print("Thank you! Have a great day!")


if __name__ == '__main__':

    main()