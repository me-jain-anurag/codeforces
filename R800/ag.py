def min_bills(n):
    denominations = [100, 20, 10, 5, 1]
    bill_count = 0
    for denom in denominations:
        bill_count += n // denom
        n = n % denom
    return bill_count

n = int(input())
print(min_bills(n))
