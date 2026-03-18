# 변수(객체를 가르키는것)
# 객체(자료형의 데이터 값)
# a = [1,2,3]
# print(id(a))   2465544320896
# 리스트 복사
# a = [1,2,3]
# b = a
# print(id(a))  1548326123392
# print(id(b))  1548326123392
# a[1] = 4
# print(a) [1, 4, 3]
# print(b) [1, 4, 3]
# [:] 이용하기
# a = [1,2,3]
# b = a[:]
# a[1] = 4
# print(a) [1, 4, 3]
# print(b) [1, 2, 3]
# copy 이용하기
# from copy import copy(copy를 쓸 수있게 하는 함수)
# a = [1,2,3]
# b = copy(a)
# print(b is a) False(값은 같지만 객체가 다르다)
a = [1,2,3]
b = [1,2,3]
print( a is b)