def big():
    def sub1():
        x=7
        print x
        sub2()
        
    def sub2():
        y=x
        print y
        #x=10
        sub3()
    
    def sub3():
		y=x
		print y
    x=3
    sub1()
    print x
    
big()

#lo mismo pasa con python solo que no admite al redefinir la variable x en sub2