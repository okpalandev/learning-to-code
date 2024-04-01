function Set(l)
    local set = {}
    for _, l in ipairs(l) do 
        set[l] = true 
    end
    return set
end

local reserved = Set({"while", "end", "function", "local"})
local ids = {}
local s = [[
    <code id="code" lang="lua">
print("Hello, world!")
while true do
    print("I'm stuck in a loop!")
end
function add(a, b)
    return a + b
end
add(5, 10)
</code> 
]]

 for w in string.gmatch(s, "[%a_][%w_]*") do 
    if not reserved[w] then
        ids[w] = true
    end
end

-- Print each identifier once
for w in pairs(ids) do 
    print(w) 
end
