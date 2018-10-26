file( GLOB HEADERS "include/eosio/mongo_history_api_plugin/*.hpp" )
add_library( mongo_history_api_plugin
             mongo_history_api_plugin.cpp
             ${HEADERS} )

target_link_libraries( mongo_history_api_plugin history_plugin chain_plugin http_plugin appbase )
target_include_directories( mongo_history_api_plugin PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" )
