clc
clear
vr = 33e3;
pr = 5e6;
k =1;
l = 100;
  r = 0.4 * l;
  x = 0.6 * l;
  y = j*14*10^-6*l;
  z = complex(r,x);
for pf = 0.1:0.1:1
  pfang = acos(pf);
  irmag = pr/(vr * pf);
  ir = irmag * (cos(pfang) - j*sin(pfang));
  vs = vr*(1 + y*z) + ir*z;
  is = y*vr + ir;
  vrnl = vs/(1 + y*z);
  reg(k) = ((abs(vrnl)-vr)/vr)*100
  losses = abs(is^2)*r;
  eff(k) = (pr/(pr + losses))*100
  k = k+1;
  pfff(k) = pf;
end

subplot(1,2,1),plot(pfff,reg,'r'),title('regraph'),xlabel('powerfactor'),ylabel('regulation');
subplot(1,2,2),plot(pfff,eff,'b'),title('effgraph'),xlabel('powerfactor'),ylabel('efficiency');

