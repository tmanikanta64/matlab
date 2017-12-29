clc
clear
m = 10;
n = 4;
V = 132e3;
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
A
B = zeros(n,1);
B(n,1) = V;
B
X = inv(A)*B;
X
eff = (V/(n*X(n,1)))*100
