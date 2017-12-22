clc
clear
vr = 33e3;
pr = 5e6;
pf = 0.8;
pfang = acos(pf);
l = 100;
r = 0.4 * l;
x = 0.6 * l;
y = j*14*10^-6*l;
z = complex(r,x);
irmag = pr/(vr * pf);
ir = irmag * (cos(pfang) - j*sin(pfang));
vs = vr*(1 + y*z) + ir*z;
is = y*vr + ir;
vrnl = vs/(1 + y*z);
reg = ((abs(vrnl) - vr)/vr)*100
losses = abs(is^2)*r;
eff = (pr/(pr + losses))*100