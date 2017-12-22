clc
clear
vr = 220e3;
vrph = vr/sqrt(3);
pr = 50e6;
pf = 0.9;
pfang = acos(pf);
l = 250;
r = 40;
x = 100;
y = j*914*10^-6*l;
z = complex(r,x);
irmag = pr/(3*vrph*pf);
ir = irmag*(cos(pfang) - j*sin(pfang));
vs = vrph*(1+(y*z)/z) + ir*z*(1+(y*z)/4);
is = (y*vrph) + ir*(1+(y*z)/4);
vrnl = vs/(1+(y*z)/2);
reg = ((abs(vrnl)-vrph)/vrph)*100
losses = 3*abs(is^2)*r;
eff = (pr/(pr + losses))*100
