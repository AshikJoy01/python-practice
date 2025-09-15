print("***Basic Calculator***")

print("Choose an operation.")

print("1. Addition")
print("2. Subtraction")
print("3. Multiplication")
print("4. Division")

choice = input("Enter a value(1/2/3/4): ")

try:

    num1 = float(input("Enter 1st number: "))
    num2 = float(input("Enter 2nd number: "))

    if choice == "1":
        print("Result=", num1+num2)

    elif choice == "2":
        print("Result=", num1-num2)

    elif choice == "3":
        print("Result=", num1*num2)

    elif choice == "4":

        if num2 != 0:

            print("Result=", num1/num2)

        else:

            ("Error! : 2nd number cant be Zero(0), division by Zero is not allowed.")

    else:
        print("invalid choice!")

except ValueError:
    print("Error! : Enter numbers only!")




