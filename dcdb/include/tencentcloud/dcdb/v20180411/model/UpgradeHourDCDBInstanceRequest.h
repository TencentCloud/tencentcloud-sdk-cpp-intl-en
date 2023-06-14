/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_UPGRADEHOURDCDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_UPGRADEHOURDCDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/AddShardConfig.h>
#include <tencentcloud/dcdb/v20180411/model/ExpandShardConfig.h>
#include <tencentcloud/dcdb/v20180411/model/SplitShardConfig.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * UpgradeHourDCDBInstance request structure.
                */
                class UpgradeHourDCDBInstanceRequest : public AbstractModel
                {
                public:
                    UpgradeHourDCDBInstanceRequest();
                    ~UpgradeHourDCDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID to be upgraded in the format of dcdbt-ow728lmc, which can be obtained through the `DescribeDCDBInstances` API.
                     * @return InstanceId Instance ID to be upgraded in the format of dcdbt-ow728lmc, which can be obtained through the `DescribeDCDBInstances` API.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID to be upgraded in the format of dcdbt-ow728lmc, which can be obtained through the `DescribeDCDBInstances` API.
                     * @param _instanceId Instance ID to be upgraded in the format of dcdbt-ow728lmc, which can be obtained through the `DescribeDCDBInstances` API.
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
                     * 获取Upgrade type. Valid values: 
<li> `ADD`: Add a new shard </li> 
 <li> `EXPAND`: Upgrade the existing shads</li> 
 <li> `SPLIT`: Split data of the existing shads to the new ones</li>
                     * @return UpgradeType Upgrade type. Valid values: 
<li> `ADD`: Add a new shard </li> 
 <li> `EXPAND`: Upgrade the existing shads</li> 
 <li> `SPLIT`: Split data of the existing shads to the new ones</li>
                     * 
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置Upgrade type. Valid values: 
<li> `ADD`: Add a new shard </li> 
 <li> `EXPAND`: Upgrade the existing shads</li> 
 <li> `SPLIT`: Split data of the existing shads to the new ones</li>
                     * @param _upgradeType Upgrade type. Valid values: 
<li> `ADD`: Add a new shard </li> 
 <li> `EXPAND`: Upgrade the existing shads</li> 
 <li> `SPLIT`: Split data of the existing shads to the new ones</li>
                     * 
                     */
                    void SetUpgradeType(const std::string& _upgradeType);

                    /**
                     * 判断参数 UpgradeType 是否已赋值
                     * @return UpgradeType 是否已赋值
                     * 
                     */
                    bool UpgradeTypeHasBeenSet() const;

                    /**
                     * 获取Add shards when `UpgradeType` is `ADD`.
                     * @return AddShardConfig Add shards when `UpgradeType` is `ADD`.
                     * 
                     */
                    AddShardConfig GetAddShardConfig() const;

                    /**
                     * 设置Add shards when `UpgradeType` is `ADD`.
                     * @param _addShardConfig Add shards when `UpgradeType` is `ADD`.
                     * 
                     */
                    void SetAddShardConfig(const AddShardConfig& _addShardConfig);

                    /**
                     * 判断参数 AddShardConfig 是否已赋值
                     * @return AddShardConfig 是否已赋值
                     * 
                     */
                    bool AddShardConfigHasBeenSet() const;

                    /**
                     * 获取Expand shard when `UpgradeType` is `EXPAND`.
                     * @return ExpandShardConfig Expand shard when `UpgradeType` is `EXPAND`.
                     * 
                     */
                    ExpandShardConfig GetExpandShardConfig() const;

                    /**
                     * 设置Expand shard when `UpgradeType` is `EXPAND`.
                     * @param _expandShardConfig Expand shard when `UpgradeType` is `EXPAND`.
                     * 
                     */
                    void SetExpandShardConfig(const ExpandShardConfig& _expandShardConfig);

                    /**
                     * 判断参数 ExpandShardConfig 是否已赋值
                     * @return ExpandShardConfig 是否已赋值
                     * 
                     */
                    bool ExpandShardConfigHasBeenSet() const;

                    /**
                     * 获取Split shard when `UpgradeType` is `SPLIT`.
                     * @return SplitShardConfig Split shard when `UpgradeType` is `SPLIT`.
                     * 
                     */
                    SplitShardConfig GetSplitShardConfig() const;

                    /**
                     * 设置Split shard when `UpgradeType` is `SPLIT`.
                     * @param _splitShardConfig Split shard when `UpgradeType` is `SPLIT`.
                     * 
                     */
                    void SetSplitShardConfig(const SplitShardConfig& _splitShardConfig);

                    /**
                     * 判断参数 SplitShardConfig 是否已赋值
                     * @return SplitShardConfig 是否已赋值
                     * 
                     */
                    bool SplitShardConfigHasBeenSet() const;

                    /**
                     * 获取Switch start time in the format of "2019-12-12 07:00:00", which is no less than one hour and within 3 days from the current time.
                     * @return SwitchStartTime Switch start time in the format of "2019-12-12 07:00:00", which is no less than one hour and within 3 days from the current time.
                     * 
                     */
                    std::string GetSwitchStartTime() const;

                    /**
                     * 设置Switch start time in the format of "2019-12-12 07:00:00", which is no less than one hour and within 3 days from the current time.
                     * @param _switchStartTime Switch start time in the format of "2019-12-12 07:00:00", which is no less than one hour and within 3 days from the current time.
                     * 
                     */
                    void SetSwitchStartTime(const std::string& _switchStartTime);

                    /**
                     * 判断参数 SwitchStartTime 是否已赋值
                     * @return SwitchStartTime 是否已赋值
                     * 
                     */
                    bool SwitchStartTimeHasBeenSet() const;

                    /**
                     * 获取Switch end time in the format of "2019-12-12 07:15:00", which must be later than the start time.
                     * @return SwitchEndTime Switch end time in the format of "2019-12-12 07:15:00", which must be later than the start time.
                     * 
                     */
                    std::string GetSwitchEndTime() const;

                    /**
                     * 设置Switch end time in the format of "2019-12-12 07:15:00", which must be later than the start time.
                     * @param _switchEndTime Switch end time in the format of "2019-12-12 07:15:00", which must be later than the start time.
                     * 
                     */
                    void SetSwitchEndTime(const std::string& _switchEndTime);

                    /**
                     * 判断参数 SwitchEndTime 是否已赋值
                     * @return SwitchEndTime 是否已赋值
                     * 
                     */
                    bool SwitchEndTimeHasBeenSet() const;

                    /**
                     * 获取Whether to retry automatically. Valid values: `0` (no), `1` (yes).
                     * @return SwitchAutoRetry Whether to retry automatically. Valid values: `0` (no), `1` (yes).
                     * 
                     */
                    int64_t GetSwitchAutoRetry() const;

                    /**
                     * 设置Whether to retry automatically. Valid values: `0` (no), `1` (yes).
                     * @param _switchAutoRetry Whether to retry automatically. Valid values: `0` (no), `1` (yes).
                     * 
                     */
                    void SetSwitchAutoRetry(const int64_t& _switchAutoRetry);

                    /**
                     * 判断参数 SwitchAutoRetry 是否已赋值
                     * @return SwitchAutoRetry 是否已赋值
                     * 
                     */
                    bool SwitchAutoRetryHasBeenSet() const;

                    /**
                     * 获取The list of new AZs specified in deployment modification. The first one is the source AZ, and the rest are replica AZs.
                     * @return Zones The list of new AZs specified in deployment modification. The first one is the source AZ, and the rest are replica AZs.
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置The list of new AZs specified in deployment modification. The first one is the source AZ, and the rest are replica AZs.
                     * @param _zones The list of new AZs specified in deployment modification. The first one is the source AZ, and the rest are replica AZs.
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                private:

                    /**
                     * Instance ID to be upgraded in the format of dcdbt-ow728lmc, which can be obtained through the `DescribeDCDBInstances` API.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Upgrade type. Valid values: 
<li> `ADD`: Add a new shard </li> 
 <li> `EXPAND`: Upgrade the existing shads</li> 
 <li> `SPLIT`: Split data of the existing shads to the new ones</li>
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                    /**
                     * Add shards when `UpgradeType` is `ADD`.
                     */
                    AddShardConfig m_addShardConfig;
                    bool m_addShardConfigHasBeenSet;

                    /**
                     * Expand shard when `UpgradeType` is `EXPAND`.
                     */
                    ExpandShardConfig m_expandShardConfig;
                    bool m_expandShardConfigHasBeenSet;

                    /**
                     * Split shard when `UpgradeType` is `SPLIT`.
                     */
                    SplitShardConfig m_splitShardConfig;
                    bool m_splitShardConfigHasBeenSet;

                    /**
                     * Switch start time in the format of "2019-12-12 07:00:00", which is no less than one hour and within 3 days from the current time.
                     */
                    std::string m_switchStartTime;
                    bool m_switchStartTimeHasBeenSet;

                    /**
                     * Switch end time in the format of "2019-12-12 07:15:00", which must be later than the start time.
                     */
                    std::string m_switchEndTime;
                    bool m_switchEndTimeHasBeenSet;

                    /**
                     * Whether to retry automatically. Valid values: `0` (no), `1` (yes).
                     */
                    int64_t m_switchAutoRetry;
                    bool m_switchAutoRetryHasBeenSet;

                    /**
                     * The list of new AZs specified in deployment modification. The first one is the source AZ, and the rest are replica AZs.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_UPGRADEHOURDCDBINSTANCEREQUEST_H_
