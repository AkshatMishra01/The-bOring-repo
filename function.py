def python_function(a,b):
    print("hello i am a python function")
    a = input("enter the value in a")
    b = input("enter the value in b")
    print(a+b)
    val = a + b
    if(val > 0):
        print("the sum is positive")
        if(val % 2 == 0):
            print("the number is even")
        elif (val % 2 != 0):
            print("the number is not even")
    elif (val < 0):
        print("the number is negative")
        if(val % 2 == 0):
            print("the number is even")
        elif (val % 2 != 0):
                print("the number is not even")
    else:
        print("the number is a out of my reach")

print("hello user!!,\nlets work on a simple python function")
a = 1
b = 2
python_function(a,b)
