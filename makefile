PROJECT_NAME = BoxCode
PROJECT_COVER = BoxCodeCover
SRC =  src/AverageVolumeofBoxs.c \
src/CountBoxColor.c \
src/CreateBoxList.c \
src/DifferenceMaxVolMinVol.c \
src/MaxHeightBox.c \
src/MaximumVolBox.c \
src/MinimumVolBox.c \
src/PrintBox.c \
src/RemoveBox.c \
src/SearchBox.c \
src/UpdateWeight.c

TEST_SRC = test/BoxTest.c \
unity/unity.c

INC_TEST = unity
INC_HEADER = header

$(PROJECT_NAME).exe : $(SRC) $(TEST_SRC)
	gcc -I $(INC_HEADER) -I $(INC_TEST) $(SRC) $(TEST_SRC) -o $(PROJECT_NAME).exe


run :
	$(PROJECT_NAME).exe