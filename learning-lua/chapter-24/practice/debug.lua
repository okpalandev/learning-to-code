local myTable = {1, 2, 3}
for key, value in pairs(myTable) do
    print(key, value)
end

function debugVar(variable, message)
    print(message .. ": " .. tostring(variable))
end

local myVariable = "Hello, world!"
debugVar(myVariable, "Value of myVariable");

local myVariable = 10
assert(myVariable == 5, "Value of myVariable: " .. tostring(myVariable))
