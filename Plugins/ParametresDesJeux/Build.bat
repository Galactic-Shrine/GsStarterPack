@echo off

rem ## Build plugin script for Unreal Engine 4
rem ## Copyright 2019-2020 Galactic-Shrine. All Rights Reserved.

cd "C:\Program Files\Epic Games\UE_4.24\Engine\Build\BatchFiles" 

call RunUAT.bat BuildPlugin -plugin="D:/UProjects/Plugin/GsPlugins/Plugins/ParametresDesJeux/ParametresDesJeux.uplugin" -targetplatforms=Win64+Win32 -package="D:/UProjects/Package/Plugin/Parametres/" -rocket