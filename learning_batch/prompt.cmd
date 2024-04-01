
@echo OFF
@REM Using a function called prompt,
@REM print the name of the person.
CALL :prompt Nnamdi
:prompt 
ECHO Your name is %1;
EXIT \B 0