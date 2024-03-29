
def convert_to_binary(decimal_number):
    remainder_stack = []

    while decimal_number > 0:
        remainder = decimal_number % 2
        remainder_stack.append(remainder)
        decimal_number = decimal_number // 2

    binary_digits = []
    while remainder_stack:
        # we could just reverse and join `remainder_stack` of course,
        # as it is simply a Python list, but popping off into another
        # list helps demonstrate that the only behavior we need from
        # `remainder_stack` is stack-like
        binary_digits.append(str(remainder_stack.pop()))

    return ''.join(binary_digits)
for i in range(0,99):
    # print(str(i)+" ==> ",end=' ')
    if (i == 0):
        print(i, end='')
    print(convert_to_binary(i))
    # print("\n")
