p = 3;
q = 9;
a = [ i | i in p .. q ];
p = 2;
b = [ a[i] | i in p .. p+3 ];
l = < b[i] * 2 | i in p-2 .. p >;
 
print(a);
print(b);
print(l);

sizeof