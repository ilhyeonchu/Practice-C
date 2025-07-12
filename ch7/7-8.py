def absoluteValue (x):
    if ( x < 0 ) :
        x = -x

    return x

# 주어진 수의 제곱근을 계산하는 함수

def squreroot (x):
    epsilon = 0.000000001
    guess = 1

    while (not (absoluteValue(guess**2 - x) < epsilon)):
        guess = (x/guess + guess) / 2

    return guess

import time

# 계산 시간 측정 시작
start = time.time()

result1 = squreroot(2.0)
result2 = squreroot(144.0)
result3 = squreroot(17.5)

# 계산 시간 측정 끝
end = time.time()

# 결과 출력
print(f"squreroot (2.0) = {result1}")
print(f"squreroot (144.0) = {result2}")
print(f"squreroot (17.5) = {result3}")

# 경과 시간 출력
print(f"Elapsed calculation time = {end - start:.9f} seconds")

'''
print (f"squreroot (2.0) = {squreroot(2.0)}")
print (f"squreroot (144.0) = {squreroot(144.0)}")
print (f"squreroot (17.5) = {squreroot(17.5)}")
'''
