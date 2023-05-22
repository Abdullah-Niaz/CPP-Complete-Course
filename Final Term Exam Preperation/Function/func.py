x = 20 
def f():
    global x
    x = 30
    print("Inside Function",x)
f()
print("OutSide Function",x)