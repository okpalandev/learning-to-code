--[[ 
local horriblebuff = ""
for line in io.lines() do
    horriblebuff = horriblebuff .. line .. "\n"
end
print(horriblebuff)
--]]


local function read_line()
    local t = {}
    for line in io.lines() do
        t[#t + 1] = line
    end
    local s = table.concat(t, "\n") .. "\n"
    return s
end

-- Example usage:
local input = read_line()
print("Input received:")
print(input)
