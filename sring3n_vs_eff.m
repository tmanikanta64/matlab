clc
clear
m = 10;
V = 132e3;
count = 1;
for n = 1 : 1 :10
    A = ones(n,n);

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
n = 1:1:10;
plot(n,eff,'b'),title('eff vs n'),xlabel('n'),ylabel('eff')
grid on
[n;eff]'
