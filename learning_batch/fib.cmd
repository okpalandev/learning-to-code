@echo OFF
title Fibonacci sequences

:: Usage: CALL :fib <number_of_terms>
:: Example: CALL :fib 10.

:fib
SETLOCAL EnableDelayedExpansion
SET a=0
SET b=1
SET /a n=%~1
IF !n! gtr 0 (
    ECHO !a!
    FOR /L %%i IN (2,1,!n!) DO (
        SET /a c=!a!+!b!
        ECHO !c!
        SET a=!b!
        SET b=!c!
    )
)
ENDLOCAL
EXIT /B 0

CALL :fib 10