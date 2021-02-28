// Copyright (c) 2014-2021 Zano Project
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once 
#include "chaingen.h"
#include "wallet_tests_basic.h"


struct atomic_simple_test : public wallet_test
{
  atomic_simple_test();
  bool generate(std::vector<test_event_entry>& events) const;
  bool c1(currency::core& c, size_t ev_index, const std::vector<test_event_entry>& events);
private: 
  mutable currency::account_base m_mining_accunt;
};


struct atomic_test_wrong_redeem_wrong_refund : public wallet_test
{
  atomic_test_wrong_redeem_wrong_refund();
  bool generate(std::vector<test_event_entry>& events) const;
  bool c1(currency::core& c, size_t ev_index, const std::vector<test_event_entry>& events);
private:
  mutable currency::account_base m_mining_accunt;
};


struct atomic_test_altchain_simple : public wallet_test
{
  atomic_test_altchain_simple();
  bool generate(std::vector<test_event_entry>& events) const;
  bool c1(currency::core& c, size_t ev_index, const std::vector<test_event_entry>& events);
private:
  mutable currency::account_base m_mining_accunt;
};
