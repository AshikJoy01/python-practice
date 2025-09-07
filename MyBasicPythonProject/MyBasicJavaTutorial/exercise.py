def factorial(num):
    if num < 0 :
        print("Enter positive number")
        return None

    elif num == 0 or num == 1:
        return 1
    else:
        result = 1

        for i in range (1, num+1):
            result *= i
        return result

try:

    num = int(input("Whats the number?: "))
    result=factorial(num)

    if result is not None:
        print(f"The factorial of {num} is {result}")

except ValueError:
    print("Invalid input. Please enter a valid integer!")


    




