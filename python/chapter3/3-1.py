# if문
# if 조건문은 참이면 바로 다음 문장을 수행하고 거짓이면 else 사용한다 그러기 때문에 else문은 if문 없이 독립적으로 못쓴다
# 비교연산자 <,>,==,!=,>=,<=
# 응용
# money = 2000
# if money >= 3000:
#     print("택시를 타고 가라")
# else:
#     print("걸어가라") 걸어가라
# and(x와 y가 모두 참이어야 참), or(x와 y 둘 중 하나만 참이어도 참), not(x가 거짓이면 참이다)
# money = 2000
# card = True
# if money >= 3000 or card:
#     print("택시를 타고가라")
# else:
#     print("걸어가라")  택시를 타고가라
# in, not in
# print(1 in [1,2,3]) True
# print(1 not in [1,2,3]) False
# pocket = ['paper', 'cellphone', 'money']
# if 'money' in pocket:
#     print('택시를 타고 가라')
# else:
#     print('걸어가라') 택시를 타고 가라
# pocket = ['card']
# if 'card' not in pocket:
#     print('걸어가라')
# else:
#     print('버스를 타고 가라')
# pocket = ['paper', 'money', 'cellphone']
# 조건문 아무일도 없게하기(pass)
# if 'money' in pocket:
#     pass
# else:
#     print("카드를 꺼내라")
# 다양한 조건를 판단하는 elif(이전 조건문이 거짓일때 수행됨)
# pocket = ['paper', 'cellphone']
# card = True
# if 'money' in pocket:
#     print('택시를타고 가라')
# elif card:
#     print('택시를 타고 가라')
# else:
#     print('걸어가라') 택시를 타고 가라
# 조건부 표현식
# if score >= 60:
#     message = 'success'
# else:
#     message = 'failure'