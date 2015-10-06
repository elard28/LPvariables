importPackage(java.io);
importPackage(java.lang);

function big()
{
    function sub1()
    {
        var x=7;
        System.out.print("sub1: "+x+"\n");
        sub2();
    }
    function sub2()
    {
        var y=x;
        System.out.print("sub2: "+y+"\n");
        //var x=10;
        sub3();
    }

    function sub3()
    {
        var y=x;
        System.out.print("sub3: "+y+"\n");
    }


    var x=3;
    System.out.print("big: "+x+"\n");
    sub1();
}

big()

// toma el valor de la variable global definida en big, en sub2 cuando se redefine la variable x el valor de y se vuelve desconocido
// o al menos el compilador rhino tiene problemas al admitir ambito estatico