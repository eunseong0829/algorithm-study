#  문자열 만들기 ('',"",''' ''', """ """")
#  따움표 같이쓰는 법
# "python's favorite food is perl"("와 '를 안겹치게 쓰기)
# 'python\'s favorite food is perl'(같이쓰기 전 앞에 \ 붙이기)
#  문자열 줄 바꾸기(/n 붙이기)
# multiline = " Life is too short/nYou need python"
# print(multiline)
# "Life is too short
# You need python"
# 문자열 길이 구하기(len(a)뛰어쓰기포함)
# 문자열 슬라이싱(a[ : : ])
#             이상 미만 끝까지
# 문자열 포매팅 (%d는 숫자 %s는 문자)
# "I eat %d apples." %3
# 'I eat 3 apples."
# "I eat %s apples." % "five"
# "I eat five apples." 
# 문자열 정렬과 공백("??s" % "hi" 물음표 만큼의 공백이 생기고 오른쪽으로 정렬됨 왼쪽으로 할려면 -??s %)
# 소수점표현("%0.?f" % 3.4212312 ?만큼의 소수 자리가 표현 됨)
# f 문자열 포매팅(파이썬 3.6이상부터 사용가능)
# name = '홍길동'
# age = 30
# f'나의 이름은 {name}입니다. 나이는 {age}입니다.'
# '나의 이름은 홍길동입니다. 나이는 30입니다'
# f문자열 정렬
# f'{"hi":<10}' 왼쪽 정렬
# f'{"hi":>10}' 오른쪽 정렬
# f'{"hi":^10}' 가운데 정렬
# 소수점 표현
# y = 3.42134234
# f'{y:0.4f}'   
# 3.4213
#문자열 관련 함수들
# 문자 개수 세기-count (a = "hobby"    a.count('b')   2)
# 문자 위치 알려주기-find (a = "python is the best choice"    a.find('b')     14)
# 문자열 삽입-join  (",".join('abcd')      'a,b,c,d'
# 문자열 대문자 바꾸기.upper() 소문자.lower()
# 문자열 공백지우기 [왼쪽 .lstrip() 오른쪽 .rstrip() 양쪽 .strip()]
# 문자열 바꾸기-replace
# a = "Life is too short"
# a.replace("Life", " Your leg")
# 'Your leg is too short'
# 문자열 나누기-split[()안의 문자 기준으로 나눔]
# a = "Life is too short"
# a.split()
# ['Life','is','too','short']
# b = "a:b:c:d"
# b.split(':')
# ['a','b','c','d']