# 모듈
# 모듈이란 변수나 클래스를 모아 놓은 파이썬 파일이다.
# 모듈 만들기
# def add(a,b):
#     return a + b
# def sub(a,b):
    # return a - b를 mod1.py를 만들고 c:\doit디렉터리에 저장
# 모듈 불러오기
# C:\Users\pahkey>cd C:\doit 모듈을 저장한 디렉터리로 이동
# C:\doit>dir 티렉터리 안에 mod1.py 파일이 있는지 확인
# C:\doit>python 파이썬 인터프리터 실행
# import mod1 import는 이미 만들어 놓은 파이썬 모듈을 사용할 수 있게 해주는 명령어이다.
# print(mod1.add(3,4)) 7
# print(mod1.sub(4,2)) 2
# mod1.add,mod1.sub처럼 쓰지 않고 add,sub만 쓰고싶을 경우에는
# from 모듈이름 import 모듈함수같이 사용하면 된다
# from mod1 import add
# print(add(3,4)) 7
# add sub 둘 다 사용하게 하는 법 2가지
# from mod1 import add, sub
# from mod import * (*은 모든 것 이라는 뜻이다.)
# if__name__=="__main__":의 의미
# if__name__=="__main__":를 사용하면 파일을 실행할때 if__name__=="__main__":가 참이
# 되어 if문 다음 문장이 수행된다 이와 반대로 다른 파일에서 불러 실행될 때는
# if__name__=="__main__":가 거짓이 되어 if문 다음이 실행되지 않는다.
# import mod2
# print(mod2.PI) 3.141592
# a = mod2.Math()
# print(a.solv(2)) 12.566368
# print(mod2.add(mod2.PI, 4.4)) 7.5415920000000005
# print(a.solv(5))