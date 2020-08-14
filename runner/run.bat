@ECHO OFF

IF EXIST *.out (
	DEL /F *.out
)

IF EXIST *.cpp (
	ECHO COMPILING & ECHO.
	FOR %%i IN (*.cpp) DO (
		gcc %%~fi	
	)
	ECHO JUDGING
	FOR %%i IN (input/*) DO (
		ECHO. & ECHO RUNNING TEST %%~ni
		a.exe < "input/%%~ni.in" > %%~ni.out

		fc %%~ni.out jury/%%~ni.out
	)
	DEL /F *.out
	PAUSE
) ELSE (
	ECHO NO CPP FILES FOUND
)
