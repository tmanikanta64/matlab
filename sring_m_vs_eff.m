clc
clear
n = 4;
V = 132e3;
A = ones(n,n);
count = 1;
for m = 10 : 10 :100
   for i = 1:n-1
    for j = 1:n
        if i == j
            A(i,j) = 1+m;
        end
        if j == i+1
            A(i,j) = -m;
        end
        if j > i+1
            A(i,j) = 0;
        end
    end
   end
B = zeros(n,1);
B(n,1) = V;
X = inv(A)*B;
eff(count) = (V/(n*X(n,1)))*100;
count = count + 1;
end
m = 10:10:100;
plot(m,eff,'b'),title('eff vs m'),xlabel('m'),ylabel('eff')
[m;eff]'
