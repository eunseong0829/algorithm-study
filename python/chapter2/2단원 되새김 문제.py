# 평균 점수 구하기
# 국어 = 80
# 영어 = 75
# 수학 = 55
# print((국어+영어+수학)/3)  70
# 13이 홀수인지 짝수인지
# print(1%2) 1
# print(2%2) 0
# print(3%2) 1
# print(4%2) 0
# print(13%2) 1
# 주민등록번호 나누기
# pin = "881120-1068234"
# yyyymmdd = pin[:6]
# num = pin[7:]
# print(yyyymmdd)
# print(num)
# 881120
# 1068234
# 주민등록번호 인덱싱
# pin = "881120-1068234"
# print(pin[7]) 1
# 문자열 바꾸기
# a = "a:b:c:d"
# b = a.replace(":","#")
# print(b) a#b#c#d
# a = [1,3,5,4,2]
# a.sort() 정렬
# a.reverse() 뒤집기
# print(a) [5, 4, 3, 2, 1]
# 리스트 문자열 만들기
# a = ['life', 'is', 'too', 'short']
# result = " ".join(a)
# print(result) life is too short
# 튜플 더하기
# a = (1,2,3)
# a = (1,2,3) + (4,)
# print(a) (1, 2, 3, 4)
# 딕셔너리 키
# a = dict()
# a['name'] = 'python' o
# a[('a',)] = 'python' o
# a[250] = 'python' o
# a[[1]] = 'python' x(딕셔너리는 변할 수 없는데 리스트는 변할 수 있어서 오류가 뜸)
# print(a)
# a = {'A':90, 'B':80, 'C':70}
# result = a.pop('B')
# print(a) {'A': 90, 'C': 70}
# print(result) 80
# 리스트 중복 제거
# a = [1,1,1,2,2,3,3,3,4,4,5]
# aset = set(a)
# b = list(aset)
# print(b)  [1, 2, 3, 4, 5]
# 파이썬 변수
# a = b = [1,2,3]
# a[1] = 4
# print(b) [1, 4, 3] a와 b의 자료값이 같기 떄문
