local cmdQueue = {}

local lib = {}

function lib.readline(stream, callback)
    local nextCmd = function()
        callback(stream:read())
    end
    table.insert(cmdQueue, nextCmd)
end

function lib.writeline(stream, line, callback)
    local nextCmd = function()
        callback(stream:write(line))
    end
    table.insert(cmdQueue, nextCmd)
end

function lib.stop()
    table.insert(cmdQueue, "stop")
end

function lib.runloop()
    while true do
        local nextCmd = table.remove(cmdQueue, 1)
        if nextCmd == "stop" then
            break
        elseif type(nextCmd) == "function" then
            nextCmd()
        end
    end
end
-- Get the current directory
local currentDirectory = debug.getinfo(1, "S").source:sub(2):match("(.*/)")

-- Modify package.path to include the current directory
package.path = currentDirectory .. "?.lua;" .. package.path


return lib
