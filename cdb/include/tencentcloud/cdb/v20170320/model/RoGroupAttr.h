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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ROGROUPATTR_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ROGROUPATTR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * RO group configuration information.
                */
                class RoGroupAttr : public AbstractModel
                {
                public:
                    RoGroupAttr();
                    ~RoGroupAttr() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取RO group name.
                     * @return RoGroupName RO group name.
                     */
                    std::string GetRoGroupName() const;

                    /**
                     * 设置RO group name.
                     * @param RoGroupName RO group name.
                     */
                    void SetRoGroupName(const std::string& _roGroupName);

                    /**
                     * 判断参数 RoGroupName 是否已赋值
                     * @return RoGroupName 是否已赋值
                     */
                    bool RoGroupNameHasBeenSet() const;

                    /**
                     * 获取Maximum delay threshold for RO instances in seconds. Minimum value: 1. Please note that this value will take effect only if an instance removal policy is enabled in the RO group.
                     * @return RoMaxDelayTime Maximum delay threshold for RO instances in seconds. Minimum value: 1. Please note that this value will take effect only if an instance removal policy is enabled in the RO group.
                     */
                    int64_t GetRoMaxDelayTime() const;

                    /**
                     * 设置Maximum delay threshold for RO instances in seconds. Minimum value: 1. Please note that this value will take effect only if an instance removal policy is enabled in the RO group.
                     * @param RoMaxDelayTime Maximum delay threshold for RO instances in seconds. Minimum value: 1. Please note that this value will take effect only if an instance removal policy is enabled in the RO group.
                     */
                    void SetRoMaxDelayTime(const int64_t& _roMaxDelayTime);

                    /**
                     * 判断参数 RoMaxDelayTime 是否已赋值
                     * @return RoMaxDelayTime 是否已赋值
                     */
                    bool RoMaxDelayTimeHasBeenSet() const;

                    /**
                     * 获取Whether to enable instance removal. Valid values: 1 (enabled), 0 (not enabled). Please note that if instance removal is enabled, the delay threshold parameter (`RoMaxDelayTime`) must be set.
                     * @return RoOfflineDelay Whether to enable instance removal. Valid values: 1 (enabled), 0 (not enabled). Please note that if instance removal is enabled, the delay threshold parameter (`RoMaxDelayTime`) must be set.
                     */
                    int64_t GetRoOfflineDelay() const;

                    /**
                     * 设置Whether to enable instance removal. Valid values: 1 (enabled), 0 (not enabled). Please note that if instance removal is enabled, the delay threshold parameter (`RoMaxDelayTime`) must be set.
                     * @param RoOfflineDelay Whether to enable instance removal. Valid values: 1 (enabled), 0 (not enabled). Please note that if instance removal is enabled, the delay threshold parameter (`RoMaxDelayTime`) must be set.
                     */
                    void SetRoOfflineDelay(const int64_t& _roOfflineDelay);

                    /**
                     * 判断参数 RoOfflineDelay 是否已赋值
                     * @return RoOfflineDelay 是否已赋值
                     */
                    bool RoOfflineDelayHasBeenSet() const;

                    /**
                     * 获取Minimum number of instances to be retained, which can be set to any value less than or equal to the number of RO instances in the RO group. Please note that if this value is set to be greater than the number of RO instances, no removal will be performed, and if it is set to 0, all instances with an excessive delay will be removed.
                     * @return MinRoInGroup Minimum number of instances to be retained, which can be set to any value less than or equal to the number of RO instances in the RO group. Please note that if this value is set to be greater than the number of RO instances, no removal will be performed, and if it is set to 0, all instances with an excessive delay will be removed.
                     */
                    int64_t GetMinRoInGroup() const;

                    /**
                     * 设置Minimum number of instances to be retained, which can be set to any value less than or equal to the number of RO instances in the RO group. Please note that if this value is set to be greater than the number of RO instances, no removal will be performed, and if it is set to 0, all instances with an excessive delay will be removed.
                     * @param MinRoInGroup Minimum number of instances to be retained, which can be set to any value less than or equal to the number of RO instances in the RO group. Please note that if this value is set to be greater than the number of RO instances, no removal will be performed, and if it is set to 0, all instances with an excessive delay will be removed.
                     */
                    void SetMinRoInGroup(const int64_t& _minRoInGroup);

                    /**
                     * 判断参数 MinRoInGroup 是否已赋值
                     * @return MinRoInGroup 是否已赋值
                     */
                    bool MinRoInGroupHasBeenSet() const;

                    /**
                     * 获取Weighting mode. Supported values include `system` (automatically assigned by the system) and `custom` (defined by user). Please note that if the `custom` mode is selected, the RO instance weight configuration parameter (RoWeightValues) must be set.
                     * @return WeightMode Weighting mode. Supported values include `system` (automatically assigned by the system) and `custom` (defined by user). Please note that if the `custom` mode is selected, the RO instance weight configuration parameter (RoWeightValues) must be set.
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置Weighting mode. Supported values include `system` (automatically assigned by the system) and `custom` (defined by user). Please note that if the `custom` mode is selected, the RO instance weight configuration parameter (RoWeightValues) must be set.
                     * @param WeightMode Weighting mode. Supported values include `system` (automatically assigned by the system) and `custom` (defined by user). Please note that if the `custom` mode is selected, the RO instance weight configuration parameter (RoWeightValues) must be set.
                     */
                    void SetWeightMode(const std::string& _weightMode);

                    /**
                     * 判断参数 WeightMode 是否已赋值
                     * @return WeightMode 是否已赋值
                     */
                    bool WeightModeHasBeenSet() const;

                    /**
                     * 获取Replication delay.
                     * @return ReplicationDelayTime Replication delay.
                     */
                    int64_t GetReplicationDelayTime() const;

                    /**
                     * 设置Replication delay.
                     * @param ReplicationDelayTime Replication delay.
                     */
                    void SetReplicationDelayTime(const int64_t& _replicationDelayTime);

                    /**
                     * 判断参数 ReplicationDelayTime 是否已赋值
                     * @return ReplicationDelayTime 是否已赋值
                     */
                    bool ReplicationDelayTimeHasBeenSet() const;

                private:

                    /**
                     * RO group name.
                     */
                    std::string m_roGroupName;
                    bool m_roGroupNameHasBeenSet;

                    /**
                     * Maximum delay threshold for RO instances in seconds. Minimum value: 1. Please note that this value will take effect only if an instance removal policy is enabled in the RO group.
                     */
                    int64_t m_roMaxDelayTime;
                    bool m_roMaxDelayTimeHasBeenSet;

                    /**
                     * Whether to enable instance removal. Valid values: 1 (enabled), 0 (not enabled). Please note that if instance removal is enabled, the delay threshold parameter (`RoMaxDelayTime`) must be set.
                     */
                    int64_t m_roOfflineDelay;
                    bool m_roOfflineDelayHasBeenSet;

                    /**
                     * Minimum number of instances to be retained, which can be set to any value less than or equal to the number of RO instances in the RO group. Please note that if this value is set to be greater than the number of RO instances, no removal will be performed, and if it is set to 0, all instances with an excessive delay will be removed.
                     */
                    int64_t m_minRoInGroup;
                    bool m_minRoInGroupHasBeenSet;

                    /**
                     * Weighting mode. Supported values include `system` (automatically assigned by the system) and `custom` (defined by user). Please note that if the `custom` mode is selected, the RO instance weight configuration parameter (RoWeightValues) must be set.
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * Replication delay.
                     */
                    int64_t m_replicationDelayTime;
                    bool m_replicationDelayTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ROGROUPATTR_H_
