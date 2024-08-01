def search(k, n, subset):
    if k == n:
        print(subset)  # Process subset
    else:
        search(k + 1, n, subset)
        subset.append(k)
        search(k + 1, n, subset)
        subset.pop()

n = 3
search(0, n, [])