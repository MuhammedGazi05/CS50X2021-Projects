#call for syntax and print
def main():
    owed = get_owed()
    coins = calc_coins(owed)
    print(f"{coins}")

#input from user
def get_owed():
    while True:
        try:
            owed = float(input("Cash owed: "))
            if owed > 0:
                break
        except ValueError:
            None

    return owed

#max and min point
def calc_coins(owed):
    cents = round(owed * 100)
    coins = 0
    
    #calculating
    while cents > 0:
        if cents >= 25:
            cents -= 25
        elif cents >= 10:
            cents -= 10
        elif cents >= 5:
            cents -= 5
        else:
            cents -= 1
        coins += 1
    return coins


main()