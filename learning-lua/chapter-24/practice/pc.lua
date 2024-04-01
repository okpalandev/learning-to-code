function send(x)
    coroutine.yield(x)
end

function receive()
    local status, value = coroutine.resume(producer)
    return value
end

function producer()
    while true do
        local x = io.read()
        send(x)
    end
end

function consumer()
    while true do
        local x = receive()
        io.write(x, "\n")
    end
end

-- Create coroutines after defining functions
producer = coroutine.create(producer)
consumer = coroutine.create(consumer)

-- Start consumer coroutine
coroutine.resume(consumer)
