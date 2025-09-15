while True:  
    print("***Temperature Converter***")
    print("1. Celsius to Fahrenheit")
    print("2. Fahrenheit to Celsius")
    print("3. Celsius to Kelvin")
    print("4. Fahrenheit to Kelvin")
    print("5. Kelvin to Celsius")
    print("6. Kelvin to Fahrenheit")
    print("7. Exit")  

    choice = input("Enter a value (1-7): ")

    if choice == "7":
        print("Goodbye!")
        break  

    try:
        num = float(input("Enter the temperature: "))

        if choice == "1":
            print(f"Celsius = {num}, Fahrenheit = {((num*9/5)+32):.2f}")
        elif choice == "2":
            print(f"Fahrenheit = {num}, Celsius = {((num-32)*5/9):.2f}")
        elif choice == "3":
            print(f"Celsius = {num}, Kelvin = {(num+273.15):.2f}")
        elif choice == "4":
            print(f"Fahrenheit = {num}, Kelvin = {((num-32)*5/9 + 273.15):.2f}")
        elif choice == "5":
            print(f"Kelvin = {num}, Celsius = {(num-273.15):.2f}")
        elif choice == "6":
            print(f"Kelvin = {num}, Fahrenheit = {((num-273.15)*9/5 + 32):.2f}")
        else:
            print("Invalid option!")

    except ValueError:
        print("Error! Enter numbers only!")
