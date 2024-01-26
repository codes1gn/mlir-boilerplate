add_mlir_dialect_library(MLIRRagdoll
        RagdollDialect.cpp
        RagdollOps.cpp

        ADDITIONAL_HEADER_DIRS
        ${PROJECT_SOURCE_DIR}/ragdoll-src/include/Dialect/Ragdoll

        DEPENDS
        RagdollOpsIncGen

	LINK_LIBS PUBLIC
	MLIRIR
        MLIRInferTypeOpInterface
	)

# add ragdoll-src/include/Dialect INTO header search path
target_include_directories(
        MLIRRagdoll
        PRIVATE
        ${PROJECT_SOURCE_DIR}/ragdoll-src/include/Dialect
        )
