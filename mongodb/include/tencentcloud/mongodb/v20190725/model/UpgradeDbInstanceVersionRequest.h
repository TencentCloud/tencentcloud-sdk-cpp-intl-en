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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_UPGRADEDBINSTANCEVERSIONREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_UPGRADEDBINSTANCEVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * UpgradeDbInstanceVersion request structure.
                */
                class UpgradeDbInstanceVersionRequest : public AbstractModel
                {
                public:
                    UpgradeDbInstanceVersionRequest();
                    ~UpgradeDbInstanceVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of instance IDs, which are in the format of cmgo-p8vnipr5. It is the same as the format of the instance ID displayed on the TencentDB for MongoDB console page.
                     * @return InstanceId List of instance IDs, which are in the format of cmgo-p8vnipr5. It is the same as the format of the instance ID displayed on the TencentDB for MongoDB console page.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置List of instance IDs, which are in the format of cmgo-p8vnipr5. It is the same as the format of the instance ID displayed on the TencentDB for MongoDB console page.
                     * @param _instanceId List of instance IDs, which are in the format of cmgo-p8vnipr5. It is the same as the format of the instance ID displayed on the TencentDB for MongoDB console page.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取The newly upgraded database version. Currently supported versions are as follows. Upgrade from an earlier version to a high version is supported. Cross-version upgrade is not supported.
- MONGO_40_WT: Version 4.0.
- MONGO_42_WT: Version 4.2.
- MONGO_44_WT: Version 4.4.
- MONGO_50_WT: Version 5.0.
- MONGO_60_WT: Version 6.0.
-MONGO_70_WT: Version 7.0.
- MONGO_80_WT: Version 8.0.
                     * @return MongoVersion The newly upgraded database version. Currently supported versions are as follows. Upgrade from an earlier version to a high version is supported. Cross-version upgrade is not supported.
- MONGO_40_WT: Version 4.0.
- MONGO_42_WT: Version 4.2.
- MONGO_44_WT: Version 4.4.
- MONGO_50_WT: Version 5.0.
- MONGO_60_WT: Version 6.0.
-MONGO_70_WT: Version 7.0.
- MONGO_80_WT: Version 8.0.
                     * 
                     */
                    std::string GetMongoVersion() const;

                    /**
                     * 设置The newly upgraded database version. Currently supported versions are as follows. Upgrade from an earlier version to a high version is supported. Cross-version upgrade is not supported.
- MONGO_40_WT: Version 4.0.
- MONGO_42_WT: Version 4.2.
- MONGO_44_WT: Version 4.4.
- MONGO_50_WT: Version 5.0.
- MONGO_60_WT: Version 6.0.
-MONGO_70_WT: Version 7.0.
- MONGO_80_WT: Version 8.0.
                     * @param _mongoVersion The newly upgraded database version. Currently supported versions are as follows. Upgrade from an earlier version to a high version is supported. Cross-version upgrade is not supported.
- MONGO_40_WT: Version 4.0.
- MONGO_42_WT: Version 4.2.
- MONGO_44_WT: Version 4.4.
- MONGO_50_WT: Version 5.0.
- MONGO_60_WT: Version 6.0.
-MONGO_70_WT: Version 7.0.
- MONGO_80_WT: Version 8.0.
                     * 
                     */
                    void SetMongoVersion(const std::string& _mongoVersion);

                    /**
                     * 判断参数 MongoVersion 是否已赋值
                     * @return MongoVersion 是否已赋值
                     * 
                     */
                    bool MongoVersionHasBeenSet() const;

                    /**
                     * 获取Specify whether to perform the upgrade during the maintenance period.
-0: Upgrade now.
- 1: Upgrade during the maintenance window.
                     * @return InMaintenance Specify whether to perform the upgrade during the maintenance period.
-0: Upgrade now.
- 1: Upgrade during the maintenance window.
                     * 
                     */
                    int64_t GetInMaintenance() const;

                    /**
                     * 设置Specify whether to perform the upgrade during the maintenance period.
-0: Upgrade now.
- 1: Upgrade during the maintenance window.
                     * @param _inMaintenance Specify whether to perform the upgrade during the maintenance period.
-0: Upgrade now.
- 1: Upgrade during the maintenance window.
                     * 
                     */
                    void SetInMaintenance(const int64_t& _inMaintenance);

                    /**
                     * 判断参数 InMaintenance 是否已赋值
                     * @return InMaintenance 是否已赋值
                     * 
                     */
                    bool InMaintenanceHasBeenSet() const;

                private:

                    /**
                     * List of instance IDs, which are in the format of cmgo-p8vnipr5. It is the same as the format of the instance ID displayed on the TencentDB for MongoDB console page.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The newly upgraded database version. Currently supported versions are as follows. Upgrade from an earlier version to a high version is supported. Cross-version upgrade is not supported.
- MONGO_40_WT: Version 4.0.
- MONGO_42_WT: Version 4.2.
- MONGO_44_WT: Version 4.4.
- MONGO_50_WT: Version 5.0.
- MONGO_60_WT: Version 6.0.
-MONGO_70_WT: Version 7.0.
- MONGO_80_WT: Version 8.0.
                     */
                    std::string m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * Specify whether to perform the upgrade during the maintenance period.
-0: Upgrade now.
- 1: Upgrade during the maintenance window.
                     */
                    int64_t m_inMaintenance;
                    bool m_inMaintenanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_UPGRADEDBINSTANCEVERSIONREQUEST_H_
