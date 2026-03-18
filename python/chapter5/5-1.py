# 클래스
# 계산기 프로그램을 만들며 클래스 알아보기
# result = 0
# def add(num):
#     global result
#     result += num
#     return result
# print(add(3))
# print(add(4))
# 2개의 계산기
# result1 = 0
# result2 = 0
# def add1(num):
#     global result1
#     result1 += num
#     return result1
# def add2(num):
#     global result2
#     result2 += num
#     return result2
# class Calculator:
#     def __init__(self):
#         self.result == 0

#     def add(self,num):
#         self.result += num
#         return self.result
# cal1 = Calculator()
# cal2 = Calculator()
# print(cal1.add(3)) 3
# print(cal1.add(4)) 7
# print(cal2.add(3)) 3
# print(cal2.add(7)) 10  ca1,ca2(클래스에서 이것을 객체라고 부름)
# class Calculator:
#     def __init__(self):
#         self.result == 0

#     def add(self,num):
#         self.result += num
#         return self.result
    
#     def sub(self,nem):
#         self.result -= num
#         return self.result  아까의 계산기에 뺄샘 기능을 추가 한 것
# 클래스와 객체 
# 클래스란 똑같은 무언가를 계속 만들어 낼 수 있는 설계 도면, 객체는 클래스로 만든 피조물을 뜻한다.
# 클래스는 만든 객체를 중심으로 어떤 식으로 동작하게 할지 구상한 후 생각한 것을 하나씩 만들어 완성해나가는 것이다.
# 사칙 연산 클래스
# 두 숫자 입력받기 = setdata 더하기 = add 빼기 = sub 곱하기 = mul 나누기 div 
# 사칙 연산 클래스가 동작한다는 가정하에
# a = fourcal()
# a.setdata(4,2)
# print(a.add()) 6
# print(a.mul()) 8
# print(a.sub()) 2
# print(a.div()) 2
# 클래스 구조 만들기
# class FourCal:
#     pass
# a = FourCal()
# print(type(a)) <class '__main__.FourCal'>
# 객체에 연산할 숫자 지정하기
# class FourCal:
#     def setdata(self, first, second): setdata매개변수 self는 매서드를 호출한 객체 a에 자동으로 전달된다.
#         self.first = first
#         self.second = second
# a = FourCal()
# a.setdata(4,2)
# print(a.first) 4
# print(a.second) 2
# 클래스로 만든 객체의 객체변수는 독립적인 값을 유지한다
# ex) a.setdata(4,2) a.first 4 b.setdata(3,7) b.first 3 a.first 4 객체변수가 추가되도 안빠뀐다
# 더하기 기능 만들기
# class FourCal:
#     def setdata(self,first,second):
#         self.first = first
#         self.second = second
#     def add(self):
#         result = self.first + self.second
#         return result
# a = FourCal()
# a.setdata(4,2)
# print(a.add()) 6
# 생성자 
# a = FoulCal() a.add()는 인스턴트 a에 setdata 메서드를 수행하지 않고 add를 먼저 사용해 오류가 발생한다 이렇게 객체에
# first, secon와 같은 초기값을 설정해야 할 필요가 있을 때에는 srtdata 메서드 보다는 생성자를 구현하는게 안전하다.
# __init__매서드는 setdata 메서드와 이름만 다르고 모든게 동일하다 단 매서드 이름을__init__로 했기 때문에 자동으로 호출된다
# class FourCal:
#     def __init__(self, first, second):
#         self.first = first
#         self.second = second
#     def setdata(self, first, second):
#         self.first = first
#         self.second = second
#     def add(self):
#         result = self.first + self.second
#         return result
#     def mul(self):
#         result = self.first * self.second
#         return result
#     def sub(self):
#         result = self.first - self.second
#         return result
#     def div(self):
#         result = self.first / self.second
#         return result
# a = FourCal(4,2)
#  4,2가 __init__메서드의 first,second로 전달된다.
# print(a.first) 4
# 클래스 상속
# class MoreFourCal(FourCal): 
#     pass  위에의 클래스가 상속되었다
# a = MoreFourCal(4,2) 위에것이 상속되었기 때문에 사칙연산 매서드들같은 FourCal클래스의 기능을 모두 사용 할 수 있다.
# class MoreFoulCal(FourCal):
#     def pow(self):
#         result = self.first ** self.second
#         return result
# a = MoreFoulCal(4,2)
# print(a.pow()) 16 pow는 거듭제곱을 구할 수 있는 메서드이다.
# 메서드 오버라이딩 (나눗셈을 0 으로 나누면 오류가 나기 때문에 오류가 아닌 0으 값으로 리턴 받고 싶을 때)
# class SafeFourCal(FourCal):
#     def div(self):
#         if self.second == 0:
#             return 0
#         else:
#             return self.first / self.second
# a = SafeFourCal(4,0)
# print(a.div()) 0
# 클레스변수
class Family:
    lastname = "김"
# print(Family.lastname) 김
# a = Family()
# b = Family()
# print(a.lastname) 김
# print(b.lastname) 김
Family.lastname = "박"
a = Family()
# print(a.lastname) 박 클래스 변수의 값을 변경하면 객체의 값도 모두 변경된다 즉 클래스 변수는 모든 객체에 공유된다.
