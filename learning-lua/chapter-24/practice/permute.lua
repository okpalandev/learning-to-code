function permgen(a, n)
    n = n or #a 
    if n <= 1 then 
        coroutine.yield(a)
    else 
        for i = 1, n do 
            a[n], a[i] = a[i], a[n]
            permgen(a, n - 1)
            a[i], a[n] = a[n], a[i] -- Restore the original order after recursive call
        end 
    end
end


function  permutations(a)
    local co = coroutine.create(function ()
        permgen(a)
    end)
    return function ()
        local code , res = coroutine.resume(co)
        return res
    end
end

function printResult(a)
    for i = 1, #a do 
        if a[i] then
            io.write(a[i], " ") 
        else
            io.write("nil ", " ")
        end
    end
    io.write("\n")
end



for p in permutations({"a","b","c"}) do
    printResult(p)
end
