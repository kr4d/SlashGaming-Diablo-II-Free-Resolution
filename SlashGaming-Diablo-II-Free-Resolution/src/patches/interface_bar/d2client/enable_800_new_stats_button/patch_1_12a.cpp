/**
 * SlashGaming Diablo II Free Resolution
 * Copyright (C) 2019-2023  Mir Drualga
 *
 * This file is part of SlashGaming Diablo II Free Resolution.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Affero General Public License as published
 *  by the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Affero General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  Additional permissions under GNU Affero General Public License version 3
 *  section 7
 *
 *  If you modify this Program, or any covered work, by linking or combining
 *  it with Diablo II (or a modified version of that game and its
 *  libraries), containing parts covered by the terms of Blizzard End User
 *  License Agreement, the licensors of this Program grant you additional
 *  permission to convey the resulting work. This additional permission is
 *  also extended to any combination of expansions, mods, and remasters of
 *  the game.
 *
 *  If you modify this Program, or any covered work, by linking or combining
 *  it with any Graphics Device Interface (GDI), DirectDraw, Direct3D,
 *  Glide, OpenGL, or Rave wrapper (or modified versions of those
 *  libraries), containing parts not covered by a compatible license, the
 *  licensors of this Program grant you additional permission to convey the
 *  resulting work.
 *
 *  If you modify this Program, or any covered work, by linking or combining
 *  it with any library (or a modified version of that library) that links
 *  to Diablo II (or a modified version of that game and its libraries),
 *  containing parts not covered by a compatible license, the licensors of
 *  this Program grant you additional permission to convey the resulting
 *  work.
 */

#include "patch_1_12a.hpp"

extern "C" {

void __cdecl
D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc01();

void __cdecl
D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc03();

void __cdecl
D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc06();

void __cdecl
D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc11();

void __cdecl
D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc12();

void __cdecl
D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc13();

void __cdecl
D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc17();

} // extern "C"

namespace sgd2fr {
namespace d2client {

Enable800NewStatsButtonPatch_1_12A::Enable800NewStatsButtonPatch_1_12A()
    : AbstractVersionPatch(this->patches_, kPatchesCount) {
  // Enable the click on 800x600 New Stats button sound.
  PatchAddressAndSize patch_address_and_size_01 =
      GetPatchAddressAndSize01();
  ::mapi::GamePatch patch_01 = ::mapi::GamePatch::MakeGameBranchPatch(
      patch_address_and_size_01.first,
      ::mapi::BranchType::kCall,
      &D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc01,
      patch_address_and_size_01.second
  );
  this->patches_[0].Swap(patch_01);

  PatchAddressAndSize patch_address_and_size_02 =
      GetPatchAddressAndSize02();
  ::mapi::GamePatch patch_02 = ::mapi::GamePatch::MakeGameBranchPatch(
      patch_address_and_size_02.first,
      ::mapi::BranchType::kCall,
      &D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc01,
      patch_address_and_size_02.second
  );
  this->patches_[1].Swap(patch_02);

  // Adjust the click detection of the New Stats button sound.
  PatchAddressAndSize patch_address_and_size_03 =
      GetPatchAddressAndSize03();
  ::mapi::GamePatch patch_03 = ::mapi::GamePatch::MakeGameBranchPatch(
      patch_address_and_size_03.first,
      ::mapi::BranchType::kCall,
      &D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc03,
      patch_address_and_size_03.second
  );
  this->patches_[2].Swap(patch_03);

  // Enable displaying of the Stats Tree Screen when the 800x600 New
  // Stats button is clicked.
  PatchAddressAndSize patch_address_and_size_04 =
      GetPatchAddressAndSize04();
  ::mapi::GamePatch patch_04 = ::mapi::GamePatch::MakeGameBranchPatch(
      patch_address_and_size_04.first,
      ::mapi::BranchType::kCall,
      &D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc01,
      patch_address_and_size_04.second
  );
  this->patches_[3].Swap(patch_04);

  PatchAddressAndSize patch_address_and_size_05 =
      GetPatchAddressAndSize05();
  ::mapi::GamePatch patch_05 = ::mapi::GamePatch::MakeGameBranchPatch(
      patch_address_and_size_05.first,
      ::mapi::BranchType::kCall,
      &D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc01,
      patch_address_and_size_05.second
  );
  this->patches_[4].Swap(patch_05);

  // Adjust the click detection of the New Stats button for opening the
  // Stats Tree Screen.
  PatchAddressAndSize patch_address_and_size_06 =
      GetPatchAddressAndSize06();
  ::mapi::GamePatch patch_06 = ::mapi::GamePatch::MakeGameBranchPatch(
      patch_address_and_size_06.first,
      ::mapi::BranchType::kCall,
      &D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc06,
      patch_address_and_size_06.second
  );
  this->patches_[5].Swap(patch_06);

  // Enable repositioning 800x600 "New Stats" text and New Stats button.
  PatchAddressAndSize patch_address_and_size_07 =
      GetPatchAddressAndSize07();
  ::mapi::GamePatch patch_07 = ::mapi::GamePatch::MakeGameBranchPatch(
      patch_address_and_size_07.first,
      ::mapi::BranchType::kCall,
      &D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc01,
      patch_address_and_size_07.second
  );
  this->patches_[6].Swap(patch_07);

  PatchAddressAndSize patch_address_and_size_08 =
      GetPatchAddressAndSize08();
  ::mapi::GamePatch patch_08 = ::mapi::GamePatch::MakeGameBranchPatch(
      patch_address_and_size_08.first,
      ::mapi::BranchType::kCall,
      &D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc01,
      patch_address_and_size_08.second
  );
  this->patches_[7].Swap(patch_08);

  PatchAddressAndSize patch_address_and_size_09 =
      GetPatchAddressAndSize09();
  ::mapi::GamePatch patch_09 = ::mapi::GamePatch::MakeGameBranchPatch(
      patch_address_and_size_09.first,
      ::mapi::BranchType::kCall,
      &D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc01,
      patch_address_and_size_09.second
  );
  this->patches_[8].Swap(patch_09);

  PatchAddressAndSize patch_address_and_size_10 =
      GetPatchAddressAndSize10();
  ::mapi::GamePatch patch_10 = ::mapi::GamePatch::MakeGameBranchPatch(
      patch_address_and_size_10.first,
      ::mapi::BranchType::kCall,
      &D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc01,
      patch_address_and_size_10.second
  );
  ::mapi::GameAddress game_address_10 = ::mapi::GameAddress::FromOffset(
      ::d2::DefaultLibrary::kD2Client,
      0x48E69
  );
  this->patches_[9].Swap(patch_10);

  // Realign the mouse over detection for 800x600 New Stats text.
  PatchAddressAndSize patch_address_and_size_11 =
      GetPatchAddressAndSize11();
  ::mapi::GamePatch patch_11 = ::mapi::GamePatch::MakeGameBranchPatch(
      patch_address_and_size_11.first,
      ::mapi::BranchType::kCall,
      &D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc11,
      patch_address_and_size_11.second
  );
  this->patches_[10].Swap(patch_11);

  // Draw the "New Stats" text.
  PatchAddressAndSize patch_address_and_size_12 =
      GetPatchAddressAndSize12();
  ::mapi::GamePatch patch_12 = ::mapi::GamePatch::MakeGameBranchPatch(
      patch_address_and_size_12.first,
      ::mapi::BranchType::kCall,
      &D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc12,
      patch_address_and_size_12.second
  );
  this->patches_[11].Swap(patch_12);

  // Draw the New Stats button.
  PatchAddressAndSize patch_address_and_size_13 =
      GetPatchAddressAndSize13();
  ::mapi::GamePatch patch_13 = ::mapi::GamePatch::MakeGameBranchPatch(
      patch_address_and_size_13.first,
      ::mapi::BranchType::kCall,
      &D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc13,
      patch_address_and_size_13.second
  );
  this->patches_[12].Swap(patch_13);

  // Enable repositioning 800x600 inactive "New Stats" text and New Stats button.
  PatchAddressAndSize patch_address_and_size_14 =
      GetPatchAddressAndSize14();
  ::mapi::GamePatch patch_14 = ::mapi::GamePatch::MakeGameBranchPatch(
      patch_address_and_size_14.first,
      ::mapi::BranchType::kCall,
      &D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc01,
      patch_address_and_size_14.second
  );
  this->patches_[13].Swap(patch_14);

  // Realign the mouse over detection for 800x600 inactive New Stats text.
  PatchAddressAndSize patch_address_and_size_15 =
      GetPatchAddressAndSize15();
  ::mapi::GamePatch patch_15 = ::mapi::GamePatch::MakeGameBranchPatch(
      patch_address_and_size_15.first,
      ::mapi::BranchType::kCall,
      &D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc11,
      patch_address_and_size_15.second
  );
  this->patches_[14].Swap(patch_15);

  // Draw the inactive "New Stats" text.
  PatchAddressAndSize patch_address_and_size_16 =
      GetPatchAddressAndSize16();
  ::mapi::GamePatch patch_16 = ::mapi::GamePatch::MakeGameBranchPatch(
      patch_address_and_size_16.first,
      ::mapi::BranchType::kCall,
      &D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc12,
      patch_address_and_size_16.second
  );
  this->patches_[15].Swap(patch_16);

  // Draw the inactive New Stats button.
  PatchAddressAndSize patch_address_and_size_17 =
      GetPatchAddressAndSize17();
  ::mapi::GamePatch patch_17 = ::mapi::GamePatch::MakeGameBranchPatch(
      patch_address_and_size_17.first,
      ::mapi::BranchType::kCall,
      &D2Client_Enable800NewStatsButtonPatch_1_12A_InterceptionFunc17,
      patch_address_and_size_17.second
  );
  this->patches_[16].Swap(patch_17);
}

PatchAddressAndSize
Enable800NewStatsButtonPatch_1_12A::GetPatchAddressAndSize01() {
  ::d2::GameVersion running_game_version = ::d2::game_version::GetRunning();

  switch (running_game_version) {
    case ::d2::GameVersion::k1_12A: {
      return PatchAddressAndSize(
          ::mapi::GameAddress::FromOffset(
              ::d2::DefaultLibrary::kD2Client,
              0x3C66F
          ),
          0x3C674 - 0x3C66F
      );
    }
  }
}

PatchAddressAndSize
Enable800NewStatsButtonPatch_1_12A::GetPatchAddressAndSize02() {
  ::d2::GameVersion running_game_version = ::d2::game_version::GetRunning();

  switch (running_game_version) {
    case ::d2::GameVersion::k1_12A: {
      return PatchAddressAndSize(
          ::mapi::GameAddress::FromOffset(
              ::d2::DefaultLibrary::kD2Client,
              0x3C68D
          ),
          0x3C692 - 0x3C68D
      );
    }
  }
}

PatchAddressAndSize
Enable800NewStatsButtonPatch_1_12A::GetPatchAddressAndSize03() {
  ::d2::GameVersion running_game_version = ::d2::game_version::GetRunning();

  switch (running_game_version) {
    case ::d2::GameVersion::k1_12A: {
      return PatchAddressAndSize(
          ::mapi::GameAddress::FromOffset(
              ::d2::DefaultLibrary::kD2Client,
              0x3C6FD
          ),
          0x3C725 - 0x3C6FD
      );
    }
  }
}

PatchAddressAndSize
Enable800NewStatsButtonPatch_1_12A::GetPatchAddressAndSize04() {
  ::d2::GameVersion running_game_version = ::d2::game_version::GetRunning();

  switch (running_game_version) {
    case ::d2::GameVersion::k1_12A: {
      return PatchAddressAndSize(
          ::mapi::GameAddress::FromOffset(
              ::d2::DefaultLibrary::kD2Client,
              0x3CAE0
          ),
          0x3CAE5 - 0x3CAE0
      );
    }
  }
}

PatchAddressAndSize
Enable800NewStatsButtonPatch_1_12A::GetPatchAddressAndSize05() {
  ::d2::GameVersion running_game_version = ::d2::game_version::GetRunning();

  switch (running_game_version) {
    case ::d2::GameVersion::k1_12A: {
      return PatchAddressAndSize(
          ::mapi::GameAddress::FromOffset(
              ::d2::DefaultLibrary::kD2Client,
              0x3CAFE
          ),
          0x3CB03 - 0x3CAFE
      );
    }
  }
}

PatchAddressAndSize
Enable800NewStatsButtonPatch_1_12A::GetPatchAddressAndSize06() {
  ::d2::GameVersion running_game_version = ::d2::game_version::GetRunning();

  switch (running_game_version) {
    case ::d2::GameVersion::k1_12A: {
      return PatchAddressAndSize(
          ::mapi::GameAddress::FromOffset(
              ::d2::DefaultLibrary::kD2Client,
              0x3BF10
          ),
          0x3BF44 - 0x3BF10
      );
    }
  }
}

PatchAddressAndSize
Enable800NewStatsButtonPatch_1_12A::GetPatchAddressAndSize07() {
  ::d2::GameVersion running_game_version = ::d2::game_version::GetRunning();

  switch (running_game_version) {
    case ::d2::GameVersion::k1_12A: {
      return PatchAddressAndSize(
          ::mapi::GameAddress::FromOffset(
              ::d2::DefaultLibrary::kD2Client,
              0x3C2B7
          ),
          0x3C2BC - 0x3C2B7
      );
    }
  }
}

PatchAddressAndSize
Enable800NewStatsButtonPatch_1_12A::GetPatchAddressAndSize08() {
  ::d2::GameVersion running_game_version = ::d2::game_version::GetRunning();

  switch (running_game_version) {
    case ::d2::GameVersion::k1_12A: {
      return PatchAddressAndSize(
          ::mapi::GameAddress::FromOffset(
              ::d2::DefaultLibrary::kD2Client,
              0x3C35C
          ),
          0x3C361 - 0x3C35C
      );
    }
  }
}

PatchAddressAndSize
Enable800NewStatsButtonPatch_1_12A::GetPatchAddressAndSize09() {
  ::d2::GameVersion running_game_version = ::d2::game_version::GetRunning();

  switch (running_game_version) {
    case ::d2::GameVersion::k1_12A: {
      return PatchAddressAndSize(
          ::mapi::GameAddress::FromOffset(
              ::d2::DefaultLibrary::kD2Client,
              0x3C3D3
          ),
          0x3C3D8 - 0x3C3D3
      );
    }
  }
}

PatchAddressAndSize
Enable800NewStatsButtonPatch_1_12A::GetPatchAddressAndSize10() {
  ::d2::GameVersion running_game_version = ::d2::game_version::GetRunning();

  switch (running_game_version) {
    case ::d2::GameVersion::k1_12A: {
      return PatchAddressAndSize(
          ::mapi::GameAddress::FromOffset(
              ::d2::DefaultLibrary::kD2Client,
              0x3C438
          ),
          0x3C43D - 0x3C438
      );
    }
  }
}

PatchAddressAndSize
Enable800NewStatsButtonPatch_1_12A::GetPatchAddressAndSize11() {
  ::d2::GameVersion running_game_version = ::d2::game_version::GetRunning();

  switch (running_game_version) {
    case ::d2::GameVersion::k1_12A: {
      return PatchAddressAndSize(
          ::mapi::GameAddress::FromOffset(
              ::d2::DefaultLibrary::kD2Client,
              0x3C466
          ),
          0x3C48E - 0x3C466
      );
    }
  }
}

PatchAddressAndSize
Enable800NewStatsButtonPatch_1_12A::GetPatchAddressAndSize12() {
  ::d2::GameVersion running_game_version = ::d2::game_version::GetRunning();

  switch (running_game_version) {
    case ::d2::GameVersion::k1_12A: {
      return PatchAddressAndSize(
          ::mapi::GameAddress::FromOffset(
              ::d2::DefaultLibrary::kD2Client,
              0x3C49A
          ),
          0x3C4B7 - 0x3C49A
      );
    }
  }
}

PatchAddressAndSize
Enable800NewStatsButtonPatch_1_12A::GetPatchAddressAndSize13() {
  ::d2::GameVersion running_game_version = ::d2::game_version::GetRunning();

  switch (running_game_version) {
    case ::d2::GameVersion::k1_12A: {
      return PatchAddressAndSize(
          ::mapi::GameAddress::FromOffset(
              ::d2::DefaultLibrary::kD2Client,
              0x3C4B7
          ),
          0x3C4D4 - 0x3C4B7
      );
    }
  }
}

PatchAddressAndSize
Enable800NewStatsButtonPatch_1_12A::GetPatchAddressAndSize14() {
  ::d2::GameVersion running_game_version = ::d2::game_version::GetRunning();

  switch (running_game_version) {
    case ::d2::GameVersion::k1_12A: {
      return PatchAddressAndSize(
          ::mapi::GameAddress::FromOffset(
              ::d2::DefaultLibrary::kD2Client,
              0x3C4E3
          ),
          0x3C4E8 - 0x3C4E3
      );
    }
  }
}

PatchAddressAndSize
Enable800NewStatsButtonPatch_1_12A::GetPatchAddressAndSize15() {
  ::d2::GameVersion running_game_version = ::d2::game_version::GetRunning();

  switch (running_game_version) {
    case ::d2::GameVersion::k1_12A: {
      return PatchAddressAndSize(
          ::mapi::GameAddress::FromOffset(
              ::d2::DefaultLibrary::kD2Client,
              0x3C51F
          ),
          0x3C53D - 0x3C51F
      );
    }
  }
}

PatchAddressAndSize
Enable800NewStatsButtonPatch_1_12A::GetPatchAddressAndSize16() {
  ::d2::GameVersion running_game_version = ::d2::game_version::GetRunning();

  switch (running_game_version) {
    case ::d2::GameVersion::k1_12A: {
      return PatchAddressAndSize(
          ::mapi::GameAddress::FromOffset(
              ::d2::DefaultLibrary::kD2Client,
              0x3C54A
          ),
          0x3C569 - 0x3C54A
      );
    }
  }
}

PatchAddressAndSize
Enable800NewStatsButtonPatch_1_12A::GetPatchAddressAndSize17() {
  ::d2::GameVersion running_game_version = ::d2::game_version::GetRunning();

  switch (running_game_version) {
    case ::d2::GameVersion::k1_12A: {
      return PatchAddressAndSize(
          ::mapi::GameAddress::FromOffset(
              ::d2::DefaultLibrary::kD2Client,
              0x3C569
          ),
          0x3C587 - 0x3C569
      );
    }
  }
}

} // namespace d2client
} // namespace sgd2fr
