
-- In the reserved bags
local reserved = {
    ["and"] = true,
    ["break"] = true,
    ["until"] = true,
    ["while"] = true 
}

-- Print each identifier once
local s = ' and is in the bag '
for w in string.gmatch(s, "[%a_][%w_]*") do 
    if not reserved[w] then 
        io.write(w);
    end
end

