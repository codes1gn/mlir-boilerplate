add_mlir_dialect_library(MLIRRagdoll
        RagdollDialect.cpp
        RagdollOps.cpp

        ADDITIONAL_HEADER_DIRS
        ${PROJECT_SOURCE_DIR}/ragdoll-src/include/Ragdoll

        DEPENDS
        MLIRRagdollOpsIncGen

	LINK_LIBS PUBLIC
	MLIRIR
        MLIRInferTypeOpInterface
	)
