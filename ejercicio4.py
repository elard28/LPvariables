def big():
    def sub1():
        x=7
        sub2()
        
    def sub2():
        y=x
        print y
        
    x=3
    sub1()
    print x
    
big()