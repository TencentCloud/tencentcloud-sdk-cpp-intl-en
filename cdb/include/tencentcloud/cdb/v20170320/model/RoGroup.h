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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ROGROUP_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ROGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RoInstanceInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Read-only group parameter
                */
                class RoGroup : public AbstractModel
                {
                public:
                    RoGroup();
                    ~RoGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Read-only group mode. Valid values: `alone` (the system assigns a read-only group automatically), `allinone` (a new read-only group will be created), `join` (an existing read-only group will be used).
                     * @return RoGroupMode Read-only group mode. Valid values: `alone` (the system assigns a read-only group automatically), `allinone` (a new read-only group will be created), `join` (an existing read-only group will be used).
                     * 
                     */
                    std::string GetRoGroupMode() const;

                    /**
                     * 设置Read-only group mode. Valid values: `alone` (the system assigns a read-only group automatically), `allinone` (a new read-only group will be created), `join` (an existing read-only group will be used).
                     * @param _roGroupMode Read-only group mode. Valid values: `alone` (the system assigns a read-only group automatically), `allinone` (a new read-only group will be created), `join` (an existing read-only group will be used).
                     * 
                     */
                    void SetRoGroupMode(const std::string& _roGroupMode);

                    /**
                     * 判断参数 RoGroupMode 是否已赋值
                     * @return RoGroupMode 是否已赋值
                     * 
                     */
                    bool RoGroupModeHasBeenSet() const;

                    /**
                     * 获取Read-only group ID.
Note: If the data structure is used during instance purchase, this item is required only when the read-only group mode is set to join.
                     * @return RoGroupId Read-only group ID.
Note: If the data structure is used during instance purchase, this item is required only when the read-only group mode is set to join.
                     * 
                     */
                    std::string GetRoGroupId() const;

                    /**
                     * 设置Read-only group ID.
Note: If the data structure is used during instance purchase, this item is required only when the read-only group mode is set to join.
                     * @param _roGroupId Read-only group ID.
Note: If the data structure is used during instance purchase, this item is required only when the read-only group mode is set to join.
                     * 
                     */
                    void SetRoGroupId(const std::string& _roGroupId);

                    /**
                     * 判断参数 RoGroupId 是否已赋值
                     * @return RoGroupId 是否已赋值
                     * 
                     */
                    bool RoGroupIdHasBeenSet() const;

                    /**
                     * 获取Read-only group name.
                     * @return RoGroupName Read-only group name.
                     * 
                     */
                    std::string GetRoGroupName() const;

                    /**
                     * 设置Read-only group name.
                     * @param _roGroupName Read-only group name.
                     * 
                     */
                    void SetRoGroupName(const std::string& _roGroupName);

                    /**
                     * 判断参数 RoGroupName 是否已赋值
                     * @return RoGroupName 是否已赋值
                     * 
                     */
                    bool RoGroupNameHasBeenSet() const;

                    /**
                     * 获取Whether to enable the function of isolating an instance that exceeds the latency threshold. If it is enabled, when the latency between the read-only instance and the primary instance exceeds the latency threshold, the read-only instance will be isolated. Valid values: 1 (enabled), 0 (not enabled)
                     * @return RoOfflineDelay Whether to enable the function of isolating an instance that exceeds the latency threshold. If it is enabled, when the latency between the read-only instance and the primary instance exceeds the latency threshold, the read-only instance will be isolated. Valid values: 1 (enabled), 0 (not enabled)
                     * 
                     */
                    int64_t GetRoOfflineDelay() const;

                    /**
                     * 设置Whether to enable the function of isolating an instance that exceeds the latency threshold. If it is enabled, when the latency between the read-only instance and the primary instance exceeds the latency threshold, the read-only instance will be isolated. Valid values: 1 (enabled), 0 (not enabled)
                     * @param _roOfflineDelay Whether to enable the function of isolating an instance that exceeds the latency threshold. If it is enabled, when the latency between the read-only instance and the primary instance exceeds the latency threshold, the read-only instance will be isolated. Valid values: 1 (enabled), 0 (not enabled)
                     * 
                     */
                    void SetRoOfflineDelay(const int64_t& _roOfflineDelay);

                    /**
                     * 判断参数 RoOfflineDelay 是否已赋值
                     * @return RoOfflineDelay 是否已赋值
                     * 
                     */
                    bool RoOfflineDelayHasBeenSet() const;

                    /**
                     * 获取Delay threshold, in seconds. Value range: 1–10000. The value is an integer.
                     * @return RoMaxDelayTime Delay threshold, in seconds. Value range: 1–10000. The value is an integer.
                     * 
                     */
                    int64_t GetRoMaxDelayTime() const;

                    /**
                     * 设置Delay threshold, in seconds. Value range: 1–10000. The value is an integer.
                     * @param _roMaxDelayTime Delay threshold, in seconds. Value range: 1–10000. The value is an integer.
                     * 
                     */
                    void SetRoMaxDelayTime(const int64_t& _roMaxDelayTime);

                    /**
                     * 判断参数 RoMaxDelayTime 是否已赋值
                     * @return RoMaxDelayTime 是否已赋值
                     * 
                     */
                    bool RoMaxDelayTimeHasBeenSet() const;

                    /**
                     * 获取Minimum number of instances to be retained. If the number of the purchased read-only instances is smaller than the set value, they will not be removed.
                     * @return MinRoInGroup Minimum number of instances to be retained. If the number of the purchased read-only instances is smaller than the set value, they will not be removed.
                     * 
                     */
                    int64_t GetMinRoInGroup() const;

                    /**
                     * 设置Minimum number of instances to be retained. If the number of the purchased read-only instances is smaller than the set value, they will not be removed.
                     * @param _minRoInGroup Minimum number of instances to be retained. If the number of the purchased read-only instances is smaller than the set value, they will not be removed.
                     * 
                     */
                    void SetMinRoInGroup(const int64_t& _minRoInGroup);

                    /**
                     * 判断参数 MinRoInGroup 是否已赋值
                     * @return MinRoInGroup 是否已赋值
                     * 
                     */
                    bool MinRoInGroupHasBeenSet() const;

                    /**
                     * 获取Read/write weight distribution mode. Valid values: `system` (weights are assigned by the system automatically), `custom` (weights are customized)
                     * @return WeightMode Read/write weight distribution mode. Valid values: `system` (weights are assigned by the system automatically), `custom` (weights are customized)
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置Read/write weight distribution mode. Valid values: `system` (weights are assigned by the system automatically), `custom` (weights are customized)
                     * @param _weightMode Read/write weight distribution mode. Valid values: `system` (weights are assigned by the system automatically), `custom` (weights are customized)
                     * 
                     */
                    void SetWeightMode(const std::string& _weightMode);

                    /**
                     * 判断参数 WeightMode 是否已赋值
                     * @return WeightMode 是否已赋值
                     * 
                     */
                    bool WeightModeHasBeenSet() const;

                    /**
                     * 获取This field has been disused. To view the weight of a read-only instance, check the `Weight` value in the `RoInstances` field.
                     * @return Weight This field has been disused. To view the weight of a read-only instance, check the `Weight` value in the `RoInstances` field.
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置This field has been disused. To view the weight of a read-only instance, check the `Weight` value in the `RoInstances` field.
                     * @param _weight This field has been disused. To view the weight of a read-only instance, check the `Weight` value in the `RoInstances` field.
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Details of read-only instances in read-only group
                     * @return RoInstances Details of read-only instances in read-only group
                     * 
                     */
                    std::vector<RoInstanceInfo> GetRoInstances() const;

                    /**
                     * 设置Details of read-only instances in read-only group
                     * @param _roInstances Details of read-only instances in read-only group
                     * 
                     */
                    void SetRoInstances(const std::vector<RoInstanceInfo>& _roInstances);

                    /**
                     * 判断参数 RoInstances 是否已赋值
                     * @return RoInstances 是否已赋值
                     * 
                     */
                    bool RoInstancesHasBeenSet() const;

                    /**
                     * 获取Private IP of read-only group.
                     * @return Vip Private IP of read-only group.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Private IP of read-only group.
                     * @param _vip Private IP of read-only group.
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Private network port number of read-only group.
                     * @return Vport Private network port number of read-only group.
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Private network port number of read-only group.
                     * @param _vport Private network port number of read-only group.
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Virtual Private Cloud (VPC) ID.
                     * @return UniqVpcId Virtual Private Cloud (VPC) ID.
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置Virtual Private Cloud (VPC) ID.
                     * @param _uniqVpcId Virtual Private Cloud (VPC) ID.
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID.
                     * @return UniqSubnetId Subnet ID.
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置Subnet ID.
                     * @param _uniqSubnetId Subnet ID.
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取Region of the read-only group.
                     * @return RoGroupRegion Region of the read-only group.
                     * 
                     */
                    std::string GetRoGroupRegion() const;

                    /**
                     * 设置Region of the read-only group.
                     * @param _roGroupRegion Region of the read-only group.
                     * 
                     */
                    void SetRoGroupRegion(const std::string& _roGroupRegion);

                    /**
                     * 判断参数 RoGroupRegion 是否已赋值
                     * @return RoGroupRegion 是否已赋值
                     * 
                     */
                    bool RoGroupRegionHasBeenSet() const;

                    /**
                     * 获取AZ of the read-only group.
                     * @return RoGroupZone AZ of the read-only group.
                     * 
                     */
                    std::string GetRoGroupZone() const;

                    /**
                     * 设置AZ of the read-only group.
                     * @param _roGroupZone AZ of the read-only group.
                     * 
                     */
                    void SetRoGroupZone(const std::string& _roGroupZone);

                    /**
                     * 判断参数 RoGroupZone 是否已赋值
                     * @return RoGroupZone 是否已赋值
                     * 
                     */
                    bool RoGroupZoneHasBeenSet() const;

                    /**
                     * 获取Replication delay time, in seconds. Value range: 1–259200. The value is an integer.
                     * @return DelayReplicationTime Replication delay time, in seconds. Value range: 1–259200. The value is an integer.
                     * 
                     */
                    int64_t GetDelayReplicationTime() const;

                    /**
                     * 设置Replication delay time, in seconds. Value range: 1–259200. The value is an integer.
                     * @param _delayReplicationTime Replication delay time, in seconds. Value range: 1–259200. The value is an integer.
                     * 
                     */
                    void SetDelayReplicationTime(const int64_t& _delayReplicationTime);

                    /**
                     * 判断参数 DelayReplicationTime 是否已赋值
                     * @return DelayReplicationTime 是否已赋值
                     * 
                     */
                    bool DelayReplicationTimeHasBeenSet() const;

                private:

                    /**
                     * Read-only group mode. Valid values: `alone` (the system assigns a read-only group automatically), `allinone` (a new read-only group will be created), `join` (an existing read-only group will be used).
                     */
                    std::string m_roGroupMode;
                    bool m_roGroupModeHasBeenSet;

                    /**
                     * Read-only group ID.
Note: If the data structure is used during instance purchase, this item is required only when the read-only group mode is set to join.
                     */
                    std::string m_roGroupId;
                    bool m_roGroupIdHasBeenSet;

                    /**
                     * Read-only group name.
                     */
                    std::string m_roGroupName;
                    bool m_roGroupNameHasBeenSet;

                    /**
                     * Whether to enable the function of isolating an instance that exceeds the latency threshold. If it is enabled, when the latency between the read-only instance and the primary instance exceeds the latency threshold, the read-only instance will be isolated. Valid values: 1 (enabled), 0 (not enabled)
                     */
                    int64_t m_roOfflineDelay;
                    bool m_roOfflineDelayHasBeenSet;

                    /**
                     * Delay threshold, in seconds. Value range: 1–10000. The value is an integer.
                     */
                    int64_t m_roMaxDelayTime;
                    bool m_roMaxDelayTimeHasBeenSet;

                    /**
                     * Minimum number of instances to be retained. If the number of the purchased read-only instances is smaller than the set value, they will not be removed.
                     */
                    int64_t m_minRoInGroup;
                    bool m_minRoInGroupHasBeenSet;

                    /**
                     * Read/write weight distribution mode. Valid values: `system` (weights are assigned by the system automatically), `custom` (weights are customized)
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * This field has been disused. To view the weight of a read-only instance, check the `Weight` value in the `RoInstances` field.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Details of read-only instances in read-only group
                     */
                    std::vector<RoInstanceInfo> m_roInstances;
                    bool m_roInstancesHasBeenSet;

                    /**
                     * Private IP of read-only group.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Private network port number of read-only group.
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Virtual Private Cloud (VPC) ID.
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Subnet ID.
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * Region of the read-only group.
                     */
                    std::string m_roGroupRegion;
                    bool m_roGroupRegionHasBeenSet;

                    /**
                     * AZ of the read-only group.
                     */
                    std::string m_roGroupZone;
                    bool m_roGroupZoneHasBeenSet;

                    /**
                     * Replication delay time, in seconds. Value range: 1–259200. The value is an integer.
                     */
                    int64_t m_delayReplicationTime;
                    bool m_delayReplicationTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ROGROUP_H_
