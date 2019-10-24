﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/chime/model/PhoneNumberAssociationName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace PhoneNumberAssociationNameMapper
      {

        static const int AccountId_HASH = HashingUtils::HashString("AccountId");
        static const int UserId_HASH = HashingUtils::HashString("UserId");
        static const int VoiceConnectorId_HASH = HashingUtils::HashString("VoiceConnectorId");
        static const int VoiceConnectorGroupId_HASH = HashingUtils::HashString("VoiceConnectorGroupId");


        PhoneNumberAssociationName GetPhoneNumberAssociationNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AccountId_HASH)
          {
            return PhoneNumberAssociationName::AccountId;
          }
          else if (hashCode == UserId_HASH)
          {
            return PhoneNumberAssociationName::UserId;
          }
          else if (hashCode == VoiceConnectorId_HASH)
          {
            return PhoneNumberAssociationName::VoiceConnectorId;
          }
          else if (hashCode == VoiceConnectorGroupId_HASH)
          {
            return PhoneNumberAssociationName::VoiceConnectorGroupId;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PhoneNumberAssociationName>(hashCode);
          }

          return PhoneNumberAssociationName::NOT_SET;
        }

        Aws::String GetNameForPhoneNumberAssociationName(PhoneNumberAssociationName enumValue)
        {
          switch(enumValue)
          {
          case PhoneNumberAssociationName::AccountId:
            return "AccountId";
          case PhoneNumberAssociationName::UserId:
            return "UserId";
          case PhoneNumberAssociationName::VoiceConnectorId:
            return "VoiceConnectorId";
          case PhoneNumberAssociationName::VoiceConnectorGroupId:
            return "VoiceConnectorGroupId";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PhoneNumberAssociationNameMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
