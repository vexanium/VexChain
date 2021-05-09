/**
 *  @file
 *  @copyright defined in eos/LICENSE
 */
#pragma once

#include <eosio/chain/types.hpp>
#include <eosio/chain/contract_types.hpp>

namespace eosio { namespace chain {

   class apply_context;

   /**
    * @defgroup native_action_handlers Native Action Handlers
    */
   ///@{
   void apply_vexcore_newaccount(apply_context&);
   void apply_vexcore_updateauth(apply_context&);
   void apply_vexcore_deleteauth(apply_context&);
   void apply_vexcore_linkauth(apply_context&);
   void apply_vexcore_unlinkauth(apply_context&);

   /*
   void apply_eosio_postrecovery(apply_context&);
   void apply_eosio_passrecovery(apply_context&);
   void apply_eosio_vetorecovery(apply_context&);
   */

   void apply_vexcore_setcode(apply_context&);
   void apply_vexcore_setabi(apply_context&);

   void apply_vexcore_canceldelay(apply_context&);
   ///@}  end action handlers

} } /// namespace eosio::chain
