﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/HealthStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PrivateNetworks
  {
    namespace Model
    {
      namespace HealthStatusMapper
      {

        static const int INITIAL_HASH = HashingUtils::HashString("INITIAL");
        static const int HEALTHY_HASH = HashingUtils::HashString("HEALTHY");
        static const int UNHEALTHY_HASH = HashingUtils::HashString("UNHEALTHY");


        HealthStatus GetHealthStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIAL_HASH)
          {
            return HealthStatus::INITIAL;
          }
          else if (hashCode == HEALTHY_HASH)
          {
            return HealthStatus::HEALTHY;
          }
          else if (hashCode == UNHEALTHY_HASH)
          {
            return HealthStatus::UNHEALTHY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HealthStatus>(hashCode);
          }

          return HealthStatus::NOT_SET;
        }

        Aws::String GetNameForHealthStatus(HealthStatus enumValue)
        {
          switch(enumValue)
          {
          case HealthStatus::INITIAL:
            return "INITIAL";
          case HealthStatus::HEALTHY:
            return "HEALTHY";
          case HealthStatus::UNHEALTHY:
            return "UNHEALTHY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HealthStatusMapper
    } // namespace Model
  } // namespace PrivateNetworks
} // namespace Aws
