with open('textfile.txt', 'r') as file:
    contents = file.read()

# 위 구문과 동일한 내용
file = open('textfile.txt', 'r')
contents = file.read()
file.close()
