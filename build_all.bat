@echo off
echo Compiling all letter files from a.cpp to z.cpp...

for %%c in (a b c d e f g h i j k l m n o p q r s t u v w x y z) do (
    echo Compiling %%c.cpp...
    g++ %%c.cpp -o %%c.exe
    if errorlevel 1 (
        echo Failed to compile %%c.cpp
    ) else (
        echo Successfully compiled %%c.cpp to %%c.exe
    )
)

echo All compilation tasks finished.
pause
