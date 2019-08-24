// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2019, The NinjaCoin Developers
//
// Please see the included LICENSE file for more information.

#pragma once

#include <cstddef>
#include <cstdint>

namespace Common
{
    class IInputStream
    {
      public:
        virtual ~IInputStream() {}

        virtual uint64_t readSome(void *data, uint64_t size) = 0;
    };

} // namespace Common
