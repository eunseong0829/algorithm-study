# 홀수 짝수 판별하기
# def is_odd(number):
#     if "%number % 2 == 1:
#         return True
#     else:
#         return False
# 모든 입력의 평균 구하기
# def avg_number(*args):
#     result = 0
#     for i in args:
#         result += i
#     return result/ len(args)
# print(avg_number(1,2))
# 프로그램 오류 수정하기 1
# input1 = input("첫 번째 숫자를 입력하세요: ")
# input2 = input("두 번째 숫자를 입력하세여: ")
# total = int(input1) + int(input2)   int라는 함수는 문자열을 숫자로 바꾸어 준다
# print("두 수의 합은 %s이다" % total)
# 출력결과가 다른것은
# 3번 문자욜에서 ,는 띄워쓰기 취급된다
# 프로그램 오류 수정하기 2
# f1 = open("test.txt", 'w')
# f1.write("Life is too short")
# f1.close()
# f2 = open("text.txt",'r')
# f2.close()
# print(f2.read())
# with open("text.txt",'w') as f1:
#     f1.write("Life is too short")
# with open("text.txt", 'r') as f2:
#     print(f2.read())
# 사용자 입력 저장하기
# user_input = input("저장할 내용을 입력하세요:")
# f = open('text.txt','a')
# f.write(user_input)
# f.write('\n')
# f.close()
# 파일의 문자욜 바꾸기
# f = open('text.txt','r')
# body = f.read()
# f.close()
# body = body.replace('java', 'python')
# f = open('text.txt', 'w')
# f.write(body)
# f.close()
# 입력값을 모두 더해 출력하기
# import sys
# arg = sys.argv[1:]
# a = 0
# for i in arg:
#     a += int(i)
# print(a)