add_library( feature SHARED lime.cpp)

target_link_libraries( feature
    ${THIRD_PARTY_LIBS}
)
