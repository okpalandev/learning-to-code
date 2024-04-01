-- Import the module
local lib = loadfile("./ugly-io")

-- Define your input and output streams (replace these with actual streams)
local inputStream = { read = function() return "Hello" end }
local outputStream = { write = function(line) print("Received: " .. line) end }

-- Define callback functions
local function readCallback(line)
    print("Read: " .. line)
end

local function writeCallback()
    print("Write completed")
end

-- Add commands to the queue
lib.readline(inputStream, readCallback)
lib.writeline(outputStream, "World", writeCallback)

-- Run the command loop
lib.runloop()

-- Optionally, stop the loop
lib.stop()
