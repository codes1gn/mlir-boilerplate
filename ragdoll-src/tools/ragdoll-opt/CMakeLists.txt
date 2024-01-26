get_property(dialect_libs GLOBAL PROPERTY MLIR_DIALECT_LIBS)
get_property(conversion_libs GLOBAL PROPERTY MLIR_CONVERSION_LIBS)
set(LIBS
        ${dialect_libs}
        ${conversion_libs}
        MLIROptLib
        MLIRRagdoll
        )
add_llvm_executable(ragdoll-opt ragdoll-opt.cpp)

llvm_update_compile_flags(ragdoll-opt)
target_link_libraries(ragdoll-opt PRIVATE ${LIBS})
