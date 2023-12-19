@array=(0..20);
splice (@array,2,2,99);
print "@array\n";
@h=join("-",@array);
print "@h\n";
print join("/",@array),"\n";
print splice(@array,3,2,100),"\n";
print "@array\n";
print join(" ",reverse @array),"\n";
@h=reverse @array;
print "@h\n";

print "\n";

@array=(0..20);
print join(" ",splice(@array,3,3)),"\n";
print "@array";
