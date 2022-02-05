def main():
    a = int(input(""))
    b = int(input(""))
    for i in range(a, b + 1):
        d = divisors(i)
        s_d = divisors_sum(d)
        if is_abundante(i, s_d): print(i)

def divisors(num:int) -> list:
    ans = []
    for i in range(1, num + 1):
        if num % i == 0: ans.append(i)
    return ans

def divisors_sum(list_num:list) -> int:
    return sum(list_num)

def is_abundante(num:int, s_d:int) -> bool:
    return s_d > 2 * num

main()
