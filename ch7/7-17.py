def factorial (n) :
    result = 0

    if n == 0 :
        result = 1
    else :
        result = n * factorial(n-1)

    return result

for i in range(11) :
    print(f"%i! = %i"  %(i, factorial(i)))
