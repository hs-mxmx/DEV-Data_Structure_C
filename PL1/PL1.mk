##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=PL1
ConfigurationName      :=Release
WorkspacePath          :=C:/Users/Daniel/Desktop/CODELITE/EstructuraDatosPL1
ProjectPath            :=C:/Users/Daniel/Desktop/CODELITE/EstructuraDatosPL1/PL1
IntermediateDirectory  :=./Release
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Daniel
Date                   :=10/12/2018
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=$(PreprocessorSwitch)NDEBUG 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="PL1.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -O2 -Wall $(Preprocessors)
CFLAGS   :=  -O2 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/ListasDoble.cpp$(ObjectSuffix) $(IntermediateDirectory)/Celdacola.cpp$(ObjectSuffix) $(IntermediateDirectory)/Nodo.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Arbol.cpp$(ObjectSuffix) $(IntermediateDirectory)/Cola.cpp$(ObjectSuffix) $(IntermediateDirectory)/Celdalistadoble.cpp$(ObjectSuffix) $(IntermediateDirectory)/Listas.cpp$(ObjectSuffix) $(IntermediateDirectory)/Funciones.cpp$(ObjectSuffix) $(IntermediateDirectory)/Celda.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/Pila.cpp$(ObjectSuffix) $(IntermediateDirectory)/Celdalista.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Release"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Release"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/ListasDoble.cpp$(ObjectSuffix): ListasDoble.cpp $(IntermediateDirectory)/ListasDoble.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Daniel/Desktop/CODELITE/EstructuraDatosPL1/PL1/ListasDoble.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ListasDoble.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ListasDoble.cpp$(DependSuffix): ListasDoble.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ListasDoble.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ListasDoble.cpp$(DependSuffix) -MM ListasDoble.cpp

$(IntermediateDirectory)/ListasDoble.cpp$(PreprocessSuffix): ListasDoble.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ListasDoble.cpp$(PreprocessSuffix) ListasDoble.cpp

$(IntermediateDirectory)/Celdacola.cpp$(ObjectSuffix): Celdacola.cpp $(IntermediateDirectory)/Celdacola.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Daniel/Desktop/CODELITE/EstructuraDatosPL1/PL1/Celdacola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Celdacola.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Celdacola.cpp$(DependSuffix): Celdacola.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Celdacola.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Celdacola.cpp$(DependSuffix) -MM Celdacola.cpp

$(IntermediateDirectory)/Celdacola.cpp$(PreprocessSuffix): Celdacola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Celdacola.cpp$(PreprocessSuffix) Celdacola.cpp

$(IntermediateDirectory)/Nodo.cpp$(ObjectSuffix): Nodo.cpp $(IntermediateDirectory)/Nodo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Daniel/Desktop/CODELITE/EstructuraDatosPL1/PL1/Nodo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Nodo.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Nodo.cpp$(DependSuffix): Nodo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Nodo.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Nodo.cpp$(DependSuffix) -MM Nodo.cpp

$(IntermediateDirectory)/Nodo.cpp$(PreprocessSuffix): Nodo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Nodo.cpp$(PreprocessSuffix) Nodo.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Daniel/Desktop/CODELITE/EstructuraDatosPL1/PL1/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Arbol.cpp$(ObjectSuffix): Arbol.cpp $(IntermediateDirectory)/Arbol.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Daniel/Desktop/CODELITE/EstructuraDatosPL1/PL1/Arbol.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Arbol.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Arbol.cpp$(DependSuffix): Arbol.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Arbol.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Arbol.cpp$(DependSuffix) -MM Arbol.cpp

$(IntermediateDirectory)/Arbol.cpp$(PreprocessSuffix): Arbol.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Arbol.cpp$(PreprocessSuffix) Arbol.cpp

$(IntermediateDirectory)/Cola.cpp$(ObjectSuffix): Cola.cpp $(IntermediateDirectory)/Cola.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Daniel/Desktop/CODELITE/EstructuraDatosPL1/PL1/Cola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Cola.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Cola.cpp$(DependSuffix): Cola.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Cola.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Cola.cpp$(DependSuffix) -MM Cola.cpp

$(IntermediateDirectory)/Cola.cpp$(PreprocessSuffix): Cola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Cola.cpp$(PreprocessSuffix) Cola.cpp

$(IntermediateDirectory)/Celdalistadoble.cpp$(ObjectSuffix): Celdalistadoble.cpp $(IntermediateDirectory)/Celdalistadoble.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Daniel/Desktop/CODELITE/EstructuraDatosPL1/PL1/Celdalistadoble.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Celdalistadoble.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Celdalistadoble.cpp$(DependSuffix): Celdalistadoble.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Celdalistadoble.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Celdalistadoble.cpp$(DependSuffix) -MM Celdalistadoble.cpp

$(IntermediateDirectory)/Celdalistadoble.cpp$(PreprocessSuffix): Celdalistadoble.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Celdalistadoble.cpp$(PreprocessSuffix) Celdalistadoble.cpp

$(IntermediateDirectory)/Listas.cpp$(ObjectSuffix): Listas.cpp $(IntermediateDirectory)/Listas.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Daniel/Desktop/CODELITE/EstructuraDatosPL1/PL1/Listas.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Listas.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Listas.cpp$(DependSuffix): Listas.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Listas.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Listas.cpp$(DependSuffix) -MM Listas.cpp

$(IntermediateDirectory)/Listas.cpp$(PreprocessSuffix): Listas.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Listas.cpp$(PreprocessSuffix) Listas.cpp

$(IntermediateDirectory)/Funciones.cpp$(ObjectSuffix): Funciones.cpp $(IntermediateDirectory)/Funciones.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Daniel/Desktop/CODELITE/EstructuraDatosPL1/PL1/Funciones.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Funciones.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Funciones.cpp$(DependSuffix): Funciones.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Funciones.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Funciones.cpp$(DependSuffix) -MM Funciones.cpp

$(IntermediateDirectory)/Funciones.cpp$(PreprocessSuffix): Funciones.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Funciones.cpp$(PreprocessSuffix) Funciones.cpp

$(IntermediateDirectory)/Celda.cpp$(ObjectSuffix): Celda.cpp $(IntermediateDirectory)/Celda.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Daniel/Desktop/CODELITE/EstructuraDatosPL1/PL1/Celda.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Celda.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Celda.cpp$(DependSuffix): Celda.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Celda.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Celda.cpp$(DependSuffix) -MM Celda.cpp

$(IntermediateDirectory)/Celda.cpp$(PreprocessSuffix): Celda.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Celda.cpp$(PreprocessSuffix) Celda.cpp

$(IntermediateDirectory)/Pila.cpp$(ObjectSuffix): Pila.cpp $(IntermediateDirectory)/Pila.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Daniel/Desktop/CODELITE/EstructuraDatosPL1/PL1/Pila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pila.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pila.cpp$(DependSuffix): Pila.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Pila.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Pila.cpp$(DependSuffix) -MM Pila.cpp

$(IntermediateDirectory)/Pila.cpp$(PreprocessSuffix): Pila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pila.cpp$(PreprocessSuffix) Pila.cpp

$(IntermediateDirectory)/Celdalista.cpp$(ObjectSuffix): Celdalista.cpp $(IntermediateDirectory)/Celdalista.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Daniel/Desktop/CODELITE/EstructuraDatosPL1/PL1/Celdalista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Celdalista.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Celdalista.cpp$(DependSuffix): Celdalista.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Celdalista.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Celdalista.cpp$(DependSuffix) -MM Celdalista.cpp

$(IntermediateDirectory)/Celdalista.cpp$(PreprocessSuffix): Celdalista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Celdalista.cpp$(PreprocessSuffix) Celdalista.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Release/


