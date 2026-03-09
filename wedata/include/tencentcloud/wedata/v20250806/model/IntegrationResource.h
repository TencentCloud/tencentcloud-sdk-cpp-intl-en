/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_INTEGRATIONRESOURCE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_INTEGRATIONRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ResourceGroupSpecification.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Integration resource group.
                */
                class IntegrationResource : public AbstractModel
                {
                public:
                    IntegrationResource();
                    ~IntegrationResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Real-Time integration resource group.

-i32c (real-time data sync - 16c64G).
                     * @return RealTimeDataSync Real-Time integration resource group.

-i32c (real-time data sync - 16c64G).
                     * 
                     */
                    ResourceGroupSpecification GetRealTimeDataSync() const;

                    /**
                     * 设置Real-Time integration resource group.

-i32c (real-time data sync - 16c64G).
                     * @param _realTimeDataSync Real-Time integration resource group.

-i32c (real-time data sync - 16c64G).
                     * 
                     */
                    void SetRealTimeDataSync(const ResourceGroupSpecification& _realTimeDataSync);

                    /**
                     * 判断参数 RealTimeDataSync 是否已赋值
                     * @return RealTimeDataSync 是否已赋值
                     * 
                     */
                    bool RealTimeDataSyncHasBeenSet() const;

                    /**
                     * 获取Offline integration resource group.

-integrated (offline data sync-8C16G).
-i16 (offline data sync-8C32G).
                     * @return OfflineDataSync Offline integration resource group.

-integrated (offline data sync-8C16G).
-i16 (offline data sync-8C32G).
                     * 
                     */
                    ResourceGroupSpecification GetOfflineDataSync() const;

                    /**
                     * 设置Offline integration resource group.

-integrated (offline data sync-8C16G).
-i16 (offline data sync-8C32G).
                     * @param _offlineDataSync Offline integration resource group.

-integrated (offline data sync-8C16G).
-i16 (offline data sync-8C32G).
                     * 
                     */
                    void SetOfflineDataSync(const ResourceGroupSpecification& _offlineDataSync);

                    /**
                     * 判断参数 OfflineDataSync 是否已赋值
                     * @return OfflineDataSync 是否已赋值
                     * 
                     */
                    bool OfflineDataSyncHasBeenSet() const;

                private:

                    /**
                     * Real-Time integration resource group.

-i32c (real-time data sync - 16c64G).
                     */
                    ResourceGroupSpecification m_realTimeDataSync;
                    bool m_realTimeDataSyncHasBeenSet;

                    /**
                     * Offline integration resource group.

-integrated (offline data sync-8C16G).
-i16 (offline data sync-8C32G).
                     */
                    ResourceGroupSpecification m_offlineDataSync;
                    bool m_offlineDataSyncHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_INTEGRATIONRESOURCE_H_
