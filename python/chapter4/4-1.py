# 함수(입력값을 가지고 어떤 일을 수행한 후 그 결과물을 내놓는 것)
# 함수의 구조(def는 함수를 만들때 사용되는 예약어)
# def 함수_이름(매개변수):
# 수행할 문장1
# 수행할 문장2
# def add(a,b):
#     return a + b(return은 함수의 결과값을 리턴하는 명령어)
# a = 3
# b = 4
# c = add(a,b)
# print(c) 7
# 매개변수와 인수(매개변수는 함수에 입력으로 전달된 값을 받는 함수)(인수는 함수를 호출할 때 전달되는 입력값)
# ex) def add(a,b)(a,b는 매개변수)
#         return a + b
#     print(add(3,4))(3,4는 인수)
# 입력값이 없는 함수
# def say():
#     return 'hi'
# a = say()
# print(a)  hi
# 리턴값이 없는 함수(리턴값이 없을때 add(3,4)처럼 쓰면 none가 뜬다)
# def add(a,b):
#     print("%d, %d의 합은 %d입니다." % (a,b,a + b))
# add(3,4) 3, 4의 합은 7입니다.
# 입력값도 리턴값도 없는 함수
# def say():
#     print('hi')
# say() (입력값도 리턴값도 없는 함수는 함수이름()과 같이 사용함)
# 매개변수 지정하여 호출하기
# def sub(a,b):
#     return a - b
# result = sub(a=7,b=3)
# print(result) 4
# 여러 개의 입력값을 받는 함수 만들기
# def add_many(*args):(매개변수 이름 앞에 *을 붙이면 입력값을 전부 모아 튜플값으로 만들어준다)
#     result = 0
#     for i in args:
#         result = result + i
#     return result
# result = add_many(1,2,3)
# print(result) 6
# def add_mul(choice, *args):
#     if choice == "add":
#         result = 0
#         for i in args:
#             result = result + i
#     elif choice == "mul":
#         result = 1
#         for i in args:
#             result = result * i
#     return result
# if(result = add_mul('add',1,2,3,4,5)
# print(result) 15)
# elif(result = add_mul('mul',1,2,3,4,5)
# print(result) 120)
# 키워드 매개변수 kwargs(키워드 매개변수를 사용할 때는 매개변수 앞에 **를 붙인다)
# def print_kwargs(**kwargs):
#     print(kwargs)
# print_kwargs(name='foo', age=3) {'name': 'foo', 'age': 3}
# 함수와 리턴값은 언제나 하나다
# def add_and_mul(a,b):
#     return a+b, a*b
# result = add_and_mul(3,4)
# print(result) (7, 12)
# return의 다른 쓰임새(리턴값이 없는 함수해서 return을 사용하여 함수에서 빠져나올 수 있다)
# def say_nick(nick):
#     if nick == '바보':
#         return
#     print("나의 별명은 %s입니다." % nick)
# say_nick('야호') 야호
# say_nick('바보') return문이 실행되어 함수를 빠져나옴
# 매개변수의 초깃값 미리 설정하기
# def say_mtself(name,age,man=True):
#     print("나의 이름은 %s입니다." % name)
#     print("나이는 %d살입니다." % age)
#     if man:
#         print("남자입니다")
#     else:
#         print("여자입니다")
# say_mtself("박을용", 27)
# 나의 이름은 박을용입니다.
# 나이는 27살입니다.
# 남자입니다
# say_mtself("박응선", 27, False)
# 나의 이름은 박응선입니다.
# 나이는 27살입니다.
# 여자입니다
# 함수 안에서 선언한 변수의 효력
# a = 1
# def vartest(a):
#     a = a + 1
# vartest(a)
# print(a) 1(매개변수 a는 함수안에서만 적용되고 함수 밖의 a와는 전혀 관계없다)
# 함수 안에서 함수 밖의 변수를 변경하는 법
# 1.return사용하기
# a = 1
# def vartest(a):
#     a = a + 1
#     return a
# a = vartest(a)
# print(a) 2
# 2.global 명령어 사용하기
# a = 1
# def vartest():
#     global a
#     a = a + 1
# vartest()
# print(a) 2
# lambda 예약어(lambda는 함수를 생성할 때 쓰는 예약어로, def와 공일한 역할을 하고 보통 함수를 간결하게 만들 때 사용된다)
# ex) 함수이름 = lambda 매개변수1, 매개변수2, ...: 매개변수를 이용한 표현식
# add = lambda a, b: a + b
# result = add(3,4)
# print(result) 7