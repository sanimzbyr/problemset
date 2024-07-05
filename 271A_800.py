def main():
    y = int(input())
    nexty = [0] * 4
    
    while True:
        y += 1
        temp_y = y
        for i in range(4):
            nexty[i] = temp_y % 10
            temp_y //= 10
        
        a, b, c, d = nexty[3], nexty[2], nexty[1], nexty[0]
        
        if a != b and a != c and a != d and b != c and b != d and c != d:
            break
    
    print(y)

if __name__ == "__main__":
    main()
