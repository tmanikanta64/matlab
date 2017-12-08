clc
clear
linedata = [ 1 2 3 5
           1 3 6 7
           4 1 8 3
           2 4 3 7
           3 4 5 7 ];
fb = linedata(:,1);
tb = linedata(:,2);
r = linedata(:,3);
x = linedata(:,4);
z = complex(r,x);
y = 1./z;
nbus = max(max(fb),max(tb));
nbranches = length(fb);
ybus = zeros(nbus,nbus);
for k = 1:nbranches
    ybus(fb(k),tb(k)) = ybus(fb(k),tb(k))-y(k);
    ybus(tb(k),fb(k)) = ybus(fb(k),tb(k));
end
for m=1:nbus
    for n = 1:nbranches
        if fb(n) == m
            ybus(m,m) = ybus(m,m) + y(n);
        elseif tb(n) == m
                ybus(m,m) = ybus(m,m)+y(n);
            end
        end
end
    ybus
                
