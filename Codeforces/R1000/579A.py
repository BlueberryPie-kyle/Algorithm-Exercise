if __name__ == "__main__":
    target = int(input())
    binT = bin(target)
    print(binT.count('1') - 1)
    