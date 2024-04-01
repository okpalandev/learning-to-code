function permgen(a, n)
    n = n or #a 
    if n <= 1 then 
        printResult(a)
    else 
        for i = 1, n do 
            a[n], a[i] = a[i], a[n]
            permgen(a, n - 1)
            a[n], a[i] = a[i], a[n] -- Restore the original order after recursive call
        end 
    end
end

function printResult(a)
    for i = 1, #a do 
        io.write(a[i], " ") 
    end
    io.write("\n")
end

-- Example usage:
permgen({3,2,1})
