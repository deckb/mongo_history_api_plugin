/**
 *  @file
 *  @copyright defined in eos/LICENSE.txt
 */

#pragma once
#include <eosio/mongo_history_plugin/mongo_history_plugin.hpp>
#include <eosio/mongo_db_plugin/mongo_db_plugin.hpp>
#include <eosio/chain_plugin/chain_plugin.hpp>
#include <eosio/http_plugin/http_plugin.hpp>

#include <appbase/application.hpp>

namespace eosio {

   using namespace appbase;

   class mongo_history_api_plugin : public plugin<mongo_history_api_plugin> {
      public:
        APPBASE_PLUGIN_REQUIRES((mongo_history_plugin)(mongo_db_plugin)(chain_plugin)(http_plugin))

        mongo_history_api_plugin();
        virtual ~mongo_history_api_plugin();

        virtual void set_program_options(options_description&, options_description&) override;

        void plugin_initialize(const variables_map&);
        void plugin_startup();
        void plugin_shutdown();

      private:
   };

}
