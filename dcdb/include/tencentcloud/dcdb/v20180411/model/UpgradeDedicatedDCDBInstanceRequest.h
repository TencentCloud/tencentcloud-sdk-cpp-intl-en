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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_UPGRADEDEDICATEDDCDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_UPGRADEDEDICATEDDCDBINSTANCEREQUEST_H_

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
                * UpgradeDedicatedDCDBInstance request structure.
                */
                class UpgradeDedicatedDCDBInstanceRequest : public AbstractModel
                {
                public:
                    UpgradeDedicatedDCDBInstanceRequest();
                    ~UpgradeDedicatedDCDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Upgrade type. Valid values: `ADD` (add a shard), `SPLIT` (split a shard), and `EXPAND` (Vertically expand a shard).
                     * @return UpgradeType Upgrade type. Valid values: `ADD` (add a shard), `SPLIT` (split a shard), and `EXPAND` (Vertically expand a shard).
                     * 
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置Upgrade type. Valid values: `ADD` (add a shard), `SPLIT` (split a shard), and `EXPAND` (Vertically expand a shard).
                     * @param _upgradeType Upgrade type. Valid values: `ADD` (add a shard), `SPLIT` (split a shard), and `EXPAND` (Vertically expand a shard).
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
                     * 获取Instance ID, such as dcdbt-mlfjm74h.
                     * @return InstanceId Instance ID, such as dcdbt-mlfjm74h.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, such as dcdbt-mlfjm74h.
                     * @param _instanceId Instance ID, such as dcdbt-mlfjm74h.
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
                     * 获取A parameter for adding shards when `UpgradeType` is `ADD`.
                     * @return AddShardConfig A parameter for adding shards when `UpgradeType` is `ADD`.
                     * 
                     */
                    AddShardConfig GetAddShardConfig() const;

                    /**
                     * 设置A parameter for adding shards when `UpgradeType` is `ADD`.
                     * @param _addShardConfig A parameter for adding shards when `UpgradeType` is `ADD`.
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
                     * 获取A parameter for vertically expand a shard when `UpgradeType` is `EXPAND`.
                     * @return ExpandShardConfig A parameter for vertically expand a shard when `UpgradeType` is `EXPAND`.
                     * 
                     */
                    ExpandShardConfig GetExpandShardConfig() const;

                    /**
                     * 设置A parameter for vertically expand a shard when `UpgradeType` is `EXPAND`.
                     * @param _expandShardConfig A parameter for vertically expand a shard when `UpgradeType` is `EXPAND`.
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
                     * 获取A parameter for splitting a shard when `UpgradeType` is `SPLIT`.
                     * @return SplitShardConfig A parameter for splitting a shard when `UpgradeType` is `SPLIT`.
                     * 
                     */
                    SplitShardConfig GetSplitShardConfig() const;

                    /**
                     * 设置A parameter for splitting a shard when `UpgradeType` is `SPLIT`.
                     * @param _splitShardConfig A parameter for splitting a shard when `UpgradeType` is `SPLIT`.
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
                     * 获取Whether to automatically retry once when missing the switch time window. Valid values: `0` (No), `1` (Yes).
                     * @return SwitchAutoRetry Whether to automatically retry once when missing the switch time window. Valid values: `0` (No), `1` (Yes).
                     * 
                     */
                    int64_t GetSwitchAutoRetry() const;

                    /**
                     * 设置Whether to automatically retry once when missing the switch time window. Valid values: `0` (No), `1` (Yes).
                     * @param _switchAutoRetry Whether to automatically retry once when missing the switch time window. Valid values: `0` (No), `1` (Yes).
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
                     * 获取Switch start time
                     * @return SwitchStartTime Switch start time
                     * 
                     */
                    std::string GetSwitchStartTime() const;

                    /**
                     * 设置Switch start time
                     * @param _switchStartTime Switch start time
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
                     * 获取Switch end time
                     * @return SwitchEndTime Switch end time
                     * 
                     */
                    std::string GetSwitchEndTime() const;

                    /**
                     * 设置Switch end time
                     * @param _switchEndTime Switch end time
                     * 
                     */
                    void SetSwitchEndTime(const std::string& _switchEndTime);

                    /**
                     * 判断参数 SwitchEndTime 是否已赋值
                     * @return SwitchEndTime 是否已赋值
                     * 
                     */
                    bool SwitchEndTimeHasBeenSet() const;

                private:

                    /**
                     * Upgrade type. Valid values: `ADD` (add a shard), `SPLIT` (split a shard), and `EXPAND` (Vertically expand a shard).
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                    /**
                     * Instance ID, such as dcdbt-mlfjm74h.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * A parameter for adding shards when `UpgradeType` is `ADD`.
                     */
                    AddShardConfig m_addShardConfig;
                    bool m_addShardConfigHasBeenSet;

                    /**
                     * A parameter for vertically expand a shard when `UpgradeType` is `EXPAND`.
                     */
                    ExpandShardConfig m_expandShardConfig;
                    bool m_expandShardConfigHasBeenSet;

                    /**
                     * A parameter for splitting a shard when `UpgradeType` is `SPLIT`.
                     */
                    SplitShardConfig m_splitShardConfig;
                    bool m_splitShardConfigHasBeenSet;

                    /**
                     * Whether to automatically retry once when missing the switch time window. Valid values: `0` (No), `1` (Yes).
                     */
                    int64_t m_switchAutoRetry;
                    bool m_switchAutoRetryHasBeenSet;

                    /**
                     * Switch start time
                     */
                    std::string m_switchStartTime;
                    bool m_switchStartTimeHasBeenSet;

                    /**
                     * Switch end time
                     */
                    std::string m_switchEndTime;
                    bool m_switchEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_UPGRADEDEDICATEDDCDBINSTANCEREQUEST_H_
