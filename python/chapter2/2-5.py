# 딕셔너리 자료형 ex)기본 모습 {key1: value1,key2:value2 .....}
# ex) dic{'name' : 'eunseong', 'phone' : '01027980821', 'birt' : '2004'}
# 딕셔너리 쌍 추가, 삭제
# a = {1 : 'a'}
# a[2] = 'b'
# a['name'] = 'pey'
# a[3] = [1,2,3]
# del a[1]
# print(a)   {2: 'b', 'name': 'pey', 3: [1, 2, 3]}
# eunseong = {'pey' : 10, 'julliet' : 99}
# print(eunseong['pey']) 10
# 딕셔너리 만들때 주의사항
# 1. key 값 중복 x
# # a = {1:'a',1:'b'}
# # print(a)  {1: 'b'} key의 값이 중복으로 사용될시 앞에 쌍 무시
# 2. key 값 리스트 x
# key 리스트 만들기(.keys)
# a = {'name':'pey', 'phone':'01099991234','birth':'1118'}
# a.keys()    
# for k in a.keys():
#     print(k)   name
#                phone
#                birth
# print(list(a.keys()))   ['name', 'phone', 'birth']
# value 리스트 만들기(values)
# print(a.values())   dict_values(['pey', '01099991234', '1118'])
# key, value 둘 다 얻기(items)
# print(a.items())  dict_items([('name', 'pey'), ('phone', '01099991234'), ('birth', '1118')])
# 쌍 모두 지우기(clear)
# print(a.clear())   None
# key로 value 얻기
# print(a.get('name'))      pey
# * 딕셔너리에 없는 값을 가져올려 할떄 그냥하면 오류가 뜨지만 .get를 사용사면 none가 뜬다
# print(a.get('nokey','foo')) foo(a얀에 nokey라는 key가 없기 때문에 디폴트 값인 foo를 리턴함)
# key가 딕셔너리 안에 있는지 조사하기(in)
# print ('name' in a)  True
# print ('email' in a)   False
a = {'name':'홍길동','birth':'1128','age':'30'}
print(a)