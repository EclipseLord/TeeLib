add_library(${PROJECT_NAME} SHARED
	${SOURCE_DIR}/stdafx.h
	${SOURCE_DIR}/tlib.c
)

target_precompile_headers(${PROJECT_NAME} PRIVATE ${SOURCE_DIR}/stdafx.h)