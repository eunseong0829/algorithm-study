# for문(for 변수 in 리스트(또는 튜플, 문자열):
# test_list = ['one', 'two', 'three']
# for i in test_list:
#     print(i) one
#              two
#              three
# a = [(1,2), (3,4), (5,6)]
# for (first, last) in a:
#     print(first + last)   3    7    11
# marks = [90, 25, 67, 45, 80]
# number = 0
# for mark in marks:
#    number = number + 1
#    if mark >= 60:
#       print('%d번 학생은 합격입니다.' % number)
#    else:
#       print('%d번 학생은 불합격입니다.' % number) 
# 1번 학생은 합격입니다.
# 2번 학생은 불합격입니다.
# 3번 학생은 합격입니다.
# 4번 학생은 불합격입니다.
# 5번 학생은 합격입니다.
# for문과 continue문
# marks = [90, 25, 67, 45, 80]
# number = 0
# for mark in marks:
#     number = number + 1
#     if mark < 60:
#         continue
#     print('%d번 학생 축하합니다 합격입니다.' % number)
# 1번 학생 축하합니다 합격입니다.
# 3번 학생 축하합니다 합격입니다.
# 5번 학생 축하합니다 합격입니다.
# range
# a = range(10)
# print(a) range(0, 10)
# add = 0
# for i in range(1,10):
#     add = add + i
# print(add) 45
# a = 0
# for b in range(1,101):
#     a = a + b
# print(a) 5050
# for와 range를 이용한 구구단
# for i in range(2,10):
#     for j in range(1,10):
#         print(i*j, end=" ") 
#     print('')
# 리스트 컴프리헨션(표현식 for 항목 in 반복가능객체 if 조건문)
# a = [1,2,3,4]
# result = []
# for num in a:
#     result.append(num*3)
# print(result) [3, 6, 9, 12]
# a = [1,2,3,4]
# result = [num*3 for num in a]
# print(result) [3, 6, 9, 12]
