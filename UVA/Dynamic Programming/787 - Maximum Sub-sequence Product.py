while(1):
    try:
        arr = list(map(int,input().split()));
        arr.pop();
        p=1;max_p=-99999999;
        for i in range(len(arr)):
            p=1;
            for j in range(i,len(arr)):
                p*=arr[j];
                max_p=max(max_p,p)
        print(max_p)
    except:
        break;
