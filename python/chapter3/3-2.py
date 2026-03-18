# while문
# treehit = 0
# while treehit <10:
#     treehit = treehit + 1
#     print('나무를 %d번 찍었습니다' % treehit)
#     if treehit == 10:
#         print('나무 넘어갑니다')
# 나무를 1번 찍었습니다
# 나무를 2번 찍었습니다
# 나무를 3번 찍었습니다
# 나무를 4번 찍었습니다
# 나무를 5번 찍었습니다
# 나무를 6번 찍었습니다
# 나무를 7번 찍었습니다
# 나무를 8번 찍었습니다
# 나무를 9번 찍었습니다
# 나무를 10번 찍었습니다
# 나무 넘어갑니다
# prompt = """
# 1. Add
# 2. del
# 3. list
# 4. Quit
# enter number: """
# number = 0
# while number != 4:
#     print(prompt)
#     number = int(input()) 4가 입력될때까지 반복
# coffee = 10
# money = 300
# while money:
#     print('돈을 받았으니 커피를 줍니다')
#     coffee = coffee - 1
#     print('남은 커피의 양은 %d개입니다.' % coffee)
#     if coffee == 0:
#         print('커피가 다 떨어졌습니다 판매를 중지합니다')
#         break (조건문 빠져나오기)
# while문의 맨 처음으로 돌아가기
# a = 0
# while a < 10:
#     a = a + 1
#     if a % 2 ==0: continue
#     print(a)  1  3  5  7  9
# a = 0
# while a < 10:
#     a = a+1
#     if a % 3 == 0: continue
#     print(a) 
