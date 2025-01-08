def duplicate_encoder(word):
    word = word.lower()
    char_count = {char : word.count(char) for char in word} # this is a dictionary where each unique character in the string is a key and the corresponding value is the count. now char is the key and the word.count(char) is the count the for loop iterates through the word
    return ''.join(')' if char_count[char] > 1 else '(' for char in word) # the join statement joins the statements in the parenthesis into a string

print(duplicate_encoder('din'))
print(duplicate_encoder('recede'))
print(duplicate_encoder('Success'))
print(duplicate_encoder('(( @'))



