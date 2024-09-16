def bandMemberAtK(totalMembers, SwapMembers, posMember):
    bandMembers = list(range(1, totalMembers + 1))

    for swap in SwapMembers:
        swap_idx_1, swap_idx_2 = swap
        bandMembers[swap_idx_1 - 1], bandMembers[swap_idx_2 - 1] = bandMembers[swap_idx_2 - 1], bandMembers[swap_idx_1 - 1]

    return bandMembers[posMember - 1]

def main():
    totalMembers = int(input())

    SwapMembers = []
    SwapMembers_rows, SwapMembers_cols = map(int, input().split())
    for idx in range(SwapMembers_rows):
        SwapMembers.append(list(map(int, input().split())))

    posMember = int(input())

    result = bandMemberAtK(totalMembers, SwapMembers, posMember)
    print(result)

if __name__ == "__main__":
    main()
