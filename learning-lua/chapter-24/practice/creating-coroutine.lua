co = coroutine.create(function () print("hi") end)
print(type(co))

print(coroutine.status(co)) --> supended
print(coroutine.resume(co)) --> hi 
print(coroutine.status(co))


iter = coroutine.create(function ()
	for i =1,4 do 
		print("iter",i)
		coroutine.yield()
		end
	end
)

coroutine.resume(iter)
coroutine.resume(iter)
coroutine.resume(iter)
coroutine.resume(iter)
coroutine.resume(iter)

print("===========")
newCo = coroutine.create(
	function (a,b,c)
		print("newCo",a,b,c+2)
	end
)

pcall(coroutine.resume(newCo,1,3,5))
