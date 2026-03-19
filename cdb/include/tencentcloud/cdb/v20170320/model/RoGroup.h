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
                     * 获取<p>Read-only group mode. Available values are: alone-automatic allocation by the system; allinone-create a read-only group; join-use an existing read-only group.</p>
                     * @return RoGroupMode <p>Read-only group mode. Available values are: alone-automatic allocation by the system; allinone-create a read-only group; join-use an existing read-only group.</p>
                     * 
                     */
                    std::string GetRoGroupMode() const;

                    /**
                     * 设置<p>Read-only group mode. Available values are: alone-automatic allocation by the system; allinone-create a read-only group; join-use an existing read-only group.</p>
                     * @param _roGroupMode <p>Read-only group mode. Available values are: alone-automatic allocation by the system; allinone-create a read-only group; join-use an existing read-only group.</p>
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
                     * 获取<p>Read-only group ID.<br>Note: If the data structure is used during instance purchase, this item is required only when the read-only group mode is set to join.</p>
                     * @return RoGroupId <p>Read-only group ID.<br>Note: If the data structure is used during instance purchase, this item is required only when the read-only group mode is set to join.</p>
                     * 
                     */
                    std::string GetRoGroupId() const;

                    /**
                     * 设置<p>Read-only group ID.<br>Note: If the data structure is used during instance purchase, this item is required only when the read-only group mode is set to join.</p>
                     * @param _roGroupId <p>Read-only group ID.<br>Note: If the data structure is used during instance purchase, this item is required only when the read-only group mode is set to join.</p>
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
                     * 获取<p>Read-only group name.</p>
                     * @return RoGroupName <p>Read-only group name.</p>
                     * 
                     */
                    std::string GetRoGroupName() const;

                    /**
                     * 设置<p>Read-only group name.</p>
                     * @param _roGroupName <p>Read-only group name.</p>
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
                     * 获取<p>Whether to enable the feature to isolate an instance that exceeds the latency threshold. After enabling this feature, if the delay between a read-only instance and the primary instance exceeds the delay threshold, the read-only instance will be isolated. Available values: 1-enable; 0-disable.</p>
                     * @return RoOfflineDelay <p>Whether to enable the feature to isolate an instance that exceeds the latency threshold. After enabling this feature, if the delay between a read-only instance and the primary instance exceeds the delay threshold, the read-only instance will be isolated. Available values: 1-enable; 0-disable.</p>
                     * 
                     */
                    int64_t GetRoOfflineDelay() const;

                    /**
                     * 设置<p>Whether to enable the feature to isolate an instance that exceeds the latency threshold. After enabling this feature, if the delay between a read-only instance and the primary instance exceeds the delay threshold, the read-only instance will be isolated. Available values: 1-enable; 0-disable.</p>
                     * @param _roOfflineDelay <p>Whether to enable the feature to isolate an instance that exceeds the latency threshold. After enabling this feature, if the delay between a read-only instance and the primary instance exceeds the delay threshold, the read-only instance will be isolated. Available values: 1-enable; 0-disable.</p>
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
                     * 获取<p>Delay threshold, in seconds. Value range: 1–10000. The value is an integer.</p>
                     * @return RoMaxDelayTime <p>Delay threshold, in seconds. Value range: 1–10000. The value is an integer.</p>
                     * 
                     */
                    int64_t GetRoMaxDelayTime() const;

                    /**
                     * 设置<p>Delay threshold, in seconds. Value range: 1–10000. The value is an integer.</p>
                     * @param _roMaxDelayTime <p>Delay threshold, in seconds. Value range: 1–10000. The value is an integer.</p>
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
                     * 获取<p>Minimum number of instances to retain. If the number of read-only instances purchased is less than the set number, removal will not occur.</p>
                     * @return MinRoInGroup <p>Minimum number of instances to retain. If the number of read-only instances purchased is less than the set number, removal will not occur.</p>
                     * 
                     */
                    int64_t GetMinRoInGroup() const;

                    /**
                     * 设置<p>Minimum number of instances to retain. If the number of read-only instances purchased is less than the set number, removal will not occur.</p>
                     * @param _minRoInGroup <p>Minimum number of instances to retain. If the number of read-only instances purchased is less than the set number, removal will not occur.</p>
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
                     * 获取<p>Read-write weight allocation mode. Available values: system-automatic allocation by the system; custom-customization.</p>
                     * @return WeightMode <p>Read-write weight allocation mode. Available values: system-automatic allocation by the system; custom-customization.</p>
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置<p>Read-write weight allocation mode. Available values: system-automatic allocation by the system; custom-customization.</p>
                     * @param _weightMode <p>Read-write weight allocation mode. Available values: system-automatic allocation by the system; custom-customization.</p>
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
                     * 获取<p>This field is deprecated and meaningless. To view the weight of a read-only instance, check the Weight value in the RoInstances field.</p>
                     * @return Weight <p>This field is deprecated and meaningless. To view the weight of a read-only instance, check the Weight value in the RoInstances field.</p>
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置<p>This field is deprecated and meaningless. To view the weight of a read-only instance, check the Weight value in the RoInstances field.</p>
                     * @param _weight <p>This field is deprecated and meaningless. To view the weight of a read-only instance, check the Weight value in the RoInstances field.</p>
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
                     * 获取<p>Details of read-only instances in the read-only group.</p>
                     * @return RoInstances <p>Details of read-only instances in the read-only group.</p>
                     * 
                     */
                    std::vector<RoInstanceInfo> GetRoInstances() const;

                    /**
                     * 设置<p>Details of read-only instances in the read-only group.</p>
                     * @param _roInstances <p>Details of read-only instances in the read-only group.</p>
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
                     * 获取<p>Private IP address of the read-only group.</p>
                     * @return Vip <p>Private IP address of the read-only group.</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>Private IP address of the read-only group.</p>
                     * @param _vip <p>Private IP address of the read-only group.</p>
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
                     * 获取<p>Private network port number of the read-only group.</p>
                     * @return Vport <p>Private network port number of the read-only group.</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>Private network port number of the read-only group.</p>
                     * @param _vport <p>Private network port number of the read-only group.</p>
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
                     * 获取<p>VPC ID.</p>
                     * @return UniqVpcId <p>VPC ID.</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>VPC ID.</p>
                     * @param _uniqVpcId <p>VPC ID.</p>
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
                     * 获取<p>Subnet ID.</p>
                     * @return UniqSubnetId <p>Subnet ID.</p>
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置<p>Subnet ID.</p>
                     * @param _uniqSubnetId <p>Subnet ID.</p>
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
                     * 获取<p>Region of the read-only group.</p>
                     * @return RoGroupRegion <p>Region of the read-only group.</p>
                     * 
                     */
                    std::string GetRoGroupRegion() const;

                    /**
                     * 设置<p>Region of the read-only group.</p>
                     * @param _roGroupRegion <p>Region of the read-only group.</p>
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
                     * 获取<p>AZ of the read-only group.</p>
                     * @return RoGroupZone <p>AZ of the read-only group.</p>
                     * 
                     */
                    std::string GetRoGroupZone() const;

                    /**
                     * 设置<p>AZ of the read-only group.</p>
                     * @param _roGroupZone <p>AZ of the read-only group.</p>
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
                     * 获取<p>Replication delay time, in seconds. Value range: 1–259200. The value is an integer.</p>
                     * @return DelayReplicationTime <p>Replication delay time, in seconds. Value range: 1–259200. The value is an integer.</p>
                     * 
                     */
                    int64_t GetDelayReplicationTime() const;

                    /**
                     * 设置<p>Replication delay time, in seconds. Value range: 1–259200. The value is an integer.</p>
                     * @param _delayReplicationTime <p>Replication delay time, in seconds. Value range: 1–259200. The value is an integer.</p>
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
                     * <p>Read-only group mode. Available values are: alone-automatic allocation by the system; allinone-create a read-only group; join-use an existing read-only group.</p>
                     */
                    std::string m_roGroupMode;
                    bool m_roGroupModeHasBeenSet;

                    /**
                     * <p>Read-only group ID.<br>Note: If the data structure is used during instance purchase, this item is required only when the read-only group mode is set to join.</p>
                     */
                    std::string m_roGroupId;
                    bool m_roGroupIdHasBeenSet;

                    /**
                     * <p>Read-only group name.</p>
                     */
                    std::string m_roGroupName;
                    bool m_roGroupNameHasBeenSet;

                    /**
                     * <p>Whether to enable the feature to isolate an instance that exceeds the latency threshold. After enabling this feature, if the delay between a read-only instance and the primary instance exceeds the delay threshold, the read-only instance will be isolated. Available values: 1-enable; 0-disable.</p>
                     */
                    int64_t m_roOfflineDelay;
                    bool m_roOfflineDelayHasBeenSet;

                    /**
                     * <p>Delay threshold, in seconds. Value range: 1–10000. The value is an integer.</p>
                     */
                    int64_t m_roMaxDelayTime;
                    bool m_roMaxDelayTimeHasBeenSet;

                    /**
                     * <p>Minimum number of instances to retain. If the number of read-only instances purchased is less than the set number, removal will not occur.</p>
                     */
                    int64_t m_minRoInGroup;
                    bool m_minRoInGroupHasBeenSet;

                    /**
                     * <p>Read-write weight allocation mode. Available values: system-automatic allocation by the system; custom-customization.</p>
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * <p>This field is deprecated and meaningless. To view the weight of a read-only instance, check the Weight value in the RoInstances field.</p>
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * <p>Details of read-only instances in the read-only group.</p>
                     */
                    std::vector<RoInstanceInfo> m_roInstances;
                    bool m_roInstancesHasBeenSet;

                    /**
                     * <p>Private IP address of the read-only group.</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>Private network port number of the read-only group.</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>VPC ID.</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>Subnet ID.</p>
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * <p>Region of the read-only group.</p>
                     */
                    std::string m_roGroupRegion;
                    bool m_roGroupRegionHasBeenSet;

                    /**
                     * <p>AZ of the read-only group.</p>
                     */
                    std::string m_roGroupZone;
                    bool m_roGroupZoneHasBeenSet;

                    /**
                     * <p>Replication delay time, in seconds. Value range: 1–259200. The value is an integer.</p>
                     */
                    int64_t m_delayReplicationTime;
                    bool m_delayReplicationTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ROGROUP_H_
