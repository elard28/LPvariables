print "---------------\n";

{  
    my $x = 2;
    my $f = sub { $x };
    {  
        my $x = 3;
        print $f->(), "\n";  # imprime 2, tomando $x del static scope
    }
}


{  
    local $x = 2;
    local $f = sub { $x };
   {  
        local $x = 3;     
        print $f->(), "\n";  # imprime 3, tomando $x del dynamic scope
   }
}