// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote
{
    struct CheckpointData
    {
        uint32_t index;
        const char *blockId;
    };

    const std::initializer_list<CheckpointData> CHECKPOINTS = {
  {         0, "f0b42cf4441abaa661b060a3ada2f0b136e931ee9cb62df5776d91f8023451ad"},
  {         2, "9b6bde3c8847a50e2dbe2f5bdd38581955bca65ed62152e7d00ba0e89acb6676"},
  {       100, "0645a3e9cf7d6ea80d13236c57a923e399f3808556550cd16dc2d27fee4a63d8"},
  {      1000, "0964053481e81873294d64ead94cf641f47ddd7285304b250f6e422970ef2e33"},
  {      2000, "818a4bab551c7cd548be51d151393096bb0e908c96976d2e741bd4452ebb9ba4"},
  {      3000, "4623f4fee60eacd9b1a87e1d340777f332818b1922d9ca9ab932a3401accf55d"},
  {      5000, "43a341a0035eabf6c9f7c5e0788acb6f7fc2fd19832fc84f886208743c208de8"},
  {      7000, "bfb02d4d5e81181feb5cb17c2f2abaf3b0e1e562cd9f685c2302105a33cdae4a"},
  {     10000, "cfbef902558cdbc5738c8cc3dcdbce7839a2982b4e114f11182497fe9098029b"},
  {     20000, "78b9e452c3d2e39e63f75d04a9364605de6eac8c41954d14c9045afce93d7b92"},
  {     30000, "7d45d07ce7d6b3681c4f090b4f815eb08310d9e421b69d7c3c863b63c49cb9e4"},
  {     40000, "275a9f53cce2a38ccb24ab781ea791260e99ab3dfe8a82d789b379713b7635db"},
  {     50000, "fef4ed83dba2e27b082bd26210b708c895bc0ee53e24bf7659e6a10cd73febbd"},
  {     55000, "16756fd99a8789cb5f40c12f8c4463f5a9fae24c44b6db7e6179134b7f8e5c94"},
  {     60000, "eb9f9791ec6abe9f474c0e2f758eb9eed48ff1b52a33b21b7fd1bb77a1aea232"},
  {    100000, "a9d7a9c8bc4ebf113d02d6759cbb37a61459ba16d9321634407165abaec44741"},
  {    130000, "2f8c9e057d35ce39e5c0b92a4f425a0c37a9e2418236102405a24fcd43c1f46a"},
  {    165000, "e2ad4f359b463462da8c1388ec7a085013752dcfbe6358cbc7d37b615ad11663"},
  {    176000, "3003d8b1a04a23c48a8deb1bc3184b30b8dd683f1833622e0be8ae31d7e353d3"},
  {    177000, "a2c4da094a84eec2c5b6cee995273b925c4bbcf5892eda7b104c803ce0b8c95c"},
  {    200000, "30a5cf643da72ed715264dd8671eaeac63f700266a0b8f5e9d5cf99309eb865c"},
  {    250000, "35941da2494ad8a9d9867b729f2406757176b57d6f1ff07587eab9a4fec45108"},
  {    300000, "688715cfab7b9830660d0858138e8f8c89bfc1e8a5433123b4382e49238de2c6"},
  {    325000, "d81dc7f19ae8f2d5ede36e84ce063a542d6c1516ce85055deb8be14f51836a02"},
  {    350000, "01fd588b2e65be17af0c962635df6f98b7a8a6958e22f09e1766482883d20c0a"},
  {    390000, "7aacdb95d05480dd4dd970103e610547235bab91ed9d08a60d4a61c526537e07"},
  {    400000, "7fbc0098970bd629205c1148747f7ed1ddbb003b202b42bd8783919a362a4a72"},
  {    400100, "33e6117d144d33da0006bd68e088fdd0702fa7e896282eee63fdd653a9eb3eeb"},
  {    460000, "a4c8aff2072a63a498c77d8cbe18b132e581526ae74811669114d11b855702ba"},
  {    725000, "6f005134ac745c9058bd95c08410dce706d6fb3e2a69e4d735e2398580debea1"},
  {    800000, "1217b6600f62d607b60aec08f430fbdf38deaf8a773e07ba20472285ea260b7a"},
  {    900000, "10acfa983de5ba100c501d91ee3d55b92a50975dabb51b2286461651f245a76a"},
  {    950000, "0cba16380eadd9050554a700aad15b22e6cd2e176c1f81261dbbbd7faad7977b"}, 
  {   1012345, "7be678a369611495771dc1488a5465e03dd7d3186dc19c248dbb574ecb0b4b93"},
  {   1015000, "93ba7e217a8c8bacfb1e8681614472e6e3eabe44cb13fa2a23b62331db77d786"},
  {   1090000, "68e3ca9245f8a2fe8816ba40eaba71c5227964b21fce8f8b5f1209dde64e468d"},
  {   1129000, "f8fdf4cf9d1b8162bfe43d9acf44e22226c26e5ec3d1e3bfde317275369d5b4e"}, 
  {   1200000, "acc8961e822af424959336faad0ded789f26871c54c602624529625e6f6531b5"},
  {   1320235, "e8d305a399432c50953c37f3440d06871846caadcf1b6e165973044b81d3b9b0"},
  {   1462322, "7ec9f87ecda17cca2e2880a7a1fe1112ae306447526cdec0a181ae4f535caf43"},
  {   1507700, "353cc432ede464b04565f1dd38e90fa8e4728bfc622c54bdf7273835646ec5ee"},
  {   1709000, "74431e6cb31cd9fb2b84a6605c699115a5a62dd12b521600788a55b2a44b1c93"},
  {   1800000, "522c51d1c4b25260e2a6a196461bea91744ba07d36e8fcfc056cbf976751adfb"},
  {   1850000, "ec4c2024988ffccbac1eed75f532a74f2129f1190f96b02438ff31868e336350"},
  {   1900000, "e6d39f6a35b1b8daf43a97bb58f4de2b968ffe1784d223f1925017e4b64f51cd"},
  {   1950000, "03d2995a16d11021beb3bd023e56c6686e50025f370e22a48cf99b05d708c0d3"}, 
  {   2010000, "4a3d12077e0af4dbcf0fadbe24d5543797d376983d24afb2e27aebe898ded61b"},
  {   2132744, "97e5c5812f4efe32bd19f92f45c46f9b49e18dc6475d1745fd5b9c929850df7c"},
  {   2158000, "8943beb1515bab76e60d420562ef744c4d8deb5476ac8cb9bbbb37d3d8009aff"}, 
  {   2209500, "a2daa051a8cd4d1c19c149ecd1abe6e3b563ff4802c871b62de49beb789e8b4c"},
  {   2250000, "bd65ef7b56ec8d5bc059af7402cd6f7dd02bb53fd404d8a5023306e593b62f49"},
  {   2285900, "1a74984e596d7ecd2c71b4560e50340bacb1310356d83544f1bc1ee4cb1e8694"},
  {   2289600, "944025c993ba408703c5d2c86730f986e8bd0961d93e7637ccdbe28b0e83814c"}
};
} // namespace CryptoNote
