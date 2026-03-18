# 파일 읽고 쓰기
# 파일 생성하기
# f = open("새파일.txt",'w')
# f.close() 새파일.txt라는 파일이 생성됨
# 파일 열기 모드 
# r 읽기모드:파일을 읽기만 할때 사영한다.
# w 쓰기모드:파일에 내용을 쓸 때 사용한다.
# a 추가모드:파일의 마지막에 새로운 내용을 추가할 때 사용한다.
# 새파일.txt파일을 c:/doit디렉터리 생성하려면 
# f = open("C:/doit/새파일.txt",'w')
# f.close()
# f = open("C:/doit/복습.txt", 'w')
# f.close()
# 파일 쓰기 모드로 열어 내용 쓰기
# f = open("C:/doit/새파일.txt",'w')
# for i in range(1,11):
#     data = "%d번째 줄입니다.\n" %i
#     f.write(data)
# f.close()
# 파일을 읽는 여러 가지 방법
# readline 함수 이용하기
# f = open("C:/doit/새파일.txt", 'r')
# while True:
#     line = f.readline()
#     if not line: break
#     print(line)
# f.close()
# readlines 함수 이용하기(radlines 함수는 파일의 모든 줄을 읽어서 각각의 줄을 요소로 가지는 리스트를 리턴한다.)
# f = open("C:/doit/새파일.txt", 'r')
# lines = f.readlines()
# for line in lines:
#     print(line)
# f.close()
# read함수 사용하기(f.read()는 파일의 내용 전체를 문자열로 리턴하다)
# f = open("C:/doit/새파일.txt", 'r')
# data = f.read()
# print(data)
# f.close()
# 파일에 새로운 내용 추가하기
# f = open("C:/doit/새파일.txt",'a')
# for i in range(11,20):
#     data = "%d번째 줄입니다.\n" % i
#     f.write(data)
# f.close()
# with문과 함께 사용하기
# f = open("foo.txt",'w')
# f.write("life is too short, you need python")
# f.close()과 같이 open쓰면 항상 close를 해줘야된다 이걸 자동으로 해주는것이 with문 이다
# with open("foo.txt",'w') as f:
#     f.write("life is too short, you need python")