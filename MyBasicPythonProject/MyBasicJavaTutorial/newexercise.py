import pandas as pd


dict = {
    "country": ["Brazil", "Russia", "India", "China", "South Africa"],
       "capital": ["Brasilia", "Moscow", "New Dehli", "Beijing", "Pretoria"],
       "area": [8.516, 17.10, 3.286, 9.597, 1.221],
       "population": [200.4, 143.5, 1252, 1357, 52.98]
         }


data = {
    "Name":["Ashik","Joy","Someone"],
    "Age":["23","54","34"],
    "Job":["A","B","C"]
    }

name = input("Who is asking? =")



data2 = [20,34,56,43]

result=pd.DataFrame(data,index=["1st","2nd","3rd"])


data2=pd.Series(data2,index=["a","b","c","d"])


brics = pd.DataFrame(dict,index = ["BR", "RU", "IN", "CH", "SA"])

print(brics)
print(result)
print(data2)

if name in ["Joy", "Ashik", "Rahim"]:
    print(f"Your name is {name}")
else:
    print("Error or unknown user.")
