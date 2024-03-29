def is_palindrome(num):
    return str(num) == str(num)[::-1]

def find_largest_palindrome():
    largest_palindrome = 0

    for i in range(100, 1000):
        for j in range(i, 1000):
            product = i * j
            if is_palindrome(product) and product > largest_palindrome:
                largest_palindrome = product

    return largest_palindrome

result = find_largest_palindrome()

# Save the result to the file
with open("102-result", "w") as file:
    file.write(str(result) + "\n")

