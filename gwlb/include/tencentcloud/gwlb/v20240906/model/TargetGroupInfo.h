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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPINFO_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gwlb/v20240906/model/AssociationItem.h>
#include <tencentcloud/gwlb/v20240906/model/TargetGroupHealthCheck.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * Target group information
                */
                class TargetGroupInfo : public AbstractModel
                {
                public:
                    TargetGroupInfo();
                    ~TargetGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Target group ID
                     * @return TargetGroupId Target group ID
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置Target group ID
                     * @param _targetGroupId Target group ID
                     * 
                     */
                    void SetTargetGroupId(const std::string& _targetGroupId);

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     * 
                     */
                    bool TargetGroupIdHasBeenSet() const;

                    /**
                     * 获取VPCID of target group
                     * @return VpcId VPCID of target group
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPCID of target group
                     * @param _vpcId VPCID of target group
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Target group name
                     * @return TargetGroupName Target group name
                     * 
                     */
                    std::string GetTargetGroupName() const;

                    /**
                     * 设置Target group name
                     * @param _targetGroupName Target group name
                     * 
                     */
                    void SetTargetGroupName(const std::string& _targetGroupName);

                    /**
                     * 判断参数 TargetGroupName 是否已赋值
                     * @return TargetGroupName 是否已赋值
                     * 
                     */
                    bool TargetGroupNameHasBeenSet() const;

                    /**
                     * 获取Default port of a target group

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Port Default port of a target group

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Default port of a target group

Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _port Default port of a target group

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Target group creation time
                     * @return CreatedTime Target group creation time
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Target group creation time
                     * @param _createdTime Target group creation time
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Target group modification time
                     * @return UpdatedTime Target group modification time
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置Target group modification time
                     * @param _updatedTime Target group modification time
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取Associated rule array. This parameter cannot be obtained when the DescribeTargetGroupList API is called.Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AssociatedRule Associated rule array. This parameter cannot be obtained when the DescribeTargetGroupList API is called.Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<AssociationItem> GetAssociatedRule() const;

                    /**
                     * 设置Associated rule array. This parameter cannot be obtained when the DescribeTargetGroupList API is called.Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _associatedRule Associated rule array. This parameter cannot be obtained when the DescribeTargetGroupList API is called.Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAssociatedRule(const std::vector<AssociationItem>& _associatedRule);

                    /**
                     * 判断参数 AssociatedRule 是否已赋值
                     * @return AssociatedRule 是否已赋值
                     * 
                     */
                    bool AssociatedRuleHasBeenSet() const;

                    /**
                     * 获取Backend protocol type.Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Protocol Backend protocol type.Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Backend protocol type.Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _protocol Backend protocol type.Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Scheduling algorithm.
ip_hash_3: elastic hashing
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ScheduleAlgorithm Scheduling algorithm.
ip_hash_3: elastic hashing
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetScheduleAlgorithm() const;

                    /**
                     * 设置Scheduling algorithm.
ip_hash_3: elastic hashing
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _scheduleAlgorithm Scheduling algorithm.
ip_hash_3: elastic hashing
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetScheduleAlgorithm(const std::string& _scheduleAlgorithm);

                    /**
                     * 判断参数 ScheduleAlgorithm 是否已赋值
                     * @return ScheduleAlgorithm 是否已赋值
                     * 
                     */
                    bool ScheduleAlgorithmHasBeenSet() const;

                    /**
                     * 获取Health check details.Note: This field may return null, indicating that no valid value can be obtained.
                     * @return HealthCheck Health check details.Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    TargetGroupHealthCheck GetHealthCheck() const;

                    /**
                     * 设置Health check details.Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _healthCheck Health check details.Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetHealthCheck(const TargetGroupHealthCheck& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     * 
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取Whether "All Dead, All Alive" is supported.Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AllDeadToAlive Whether "All Dead, All Alive" is supported.Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetAllDeadToAlive() const;

                    /**
                     * 设置Whether "All Dead, All Alive" is supported.Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _allDeadToAlive Whether "All Dead, All Alive" is supported.Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAllDeadToAlive(const bool& _allDeadToAlive);

                    /**
                     * 判断参数 AllDeadToAlive 是否已赋值
                     * @return AllDeadToAlive 是否已赋值
                     * 
                     */
                    bool AllDeadToAliveHasBeenSet() const;

                    /**
                     * 获取Number of rules associated with the target group.Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AssociatedRuleCount Number of rules associated with the target group.Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetAssociatedRuleCount() const;

                    /**
                     * 设置Number of rules associated with the target group.Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _associatedRuleCount Number of rules associated with the target group.Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAssociatedRuleCount(const int64_t& _associatedRuleCount);

                    /**
                     * 判断参数 AssociatedRuleCount 是否已赋值
                     * @return AssociatedRuleCount 是否已赋值
                     * 
                     */
                    bool AssociatedRuleCountHasBeenSet() const;

                    /**
                     * 获取Number of instances in the target group.Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RegisteredInstancesCount Number of instances in the target group.Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetRegisteredInstancesCount() const;

                    /**
                     * 设置Number of instances in the target group.Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _registeredInstancesCount Number of instances in the target group.Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRegisteredInstancesCount(const int64_t& _registeredInstancesCount);

                    /**
                     * 判断参数 RegisteredInstancesCount 是否已赋值
                     * @return RegisteredInstancesCount 是否已赋值
                     * 
                     */
                    bool RegisteredInstancesCountHasBeenSet() const;

                private:

                    /**
                     * Target group ID
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * VPCID of target group
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Target group name
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                    /**
                     * Default port of a target group

Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Target group creation time
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Target group modification time
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * Associated rule array. This parameter cannot be obtained when the DescribeTargetGroupList API is called.Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<AssociationItem> m_associatedRule;
                    bool m_associatedRuleHasBeenSet;

                    /**
                     * Backend protocol type.Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Scheduling algorithm.
ip_hash_3: elastic hashing
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_scheduleAlgorithm;
                    bool m_scheduleAlgorithmHasBeenSet;

                    /**
                     * Health check details.Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    TargetGroupHealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * Whether "All Dead, All Alive" is supported.Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_allDeadToAlive;
                    bool m_allDeadToAliveHasBeenSet;

                    /**
                     * Number of rules associated with the target group.Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_associatedRuleCount;
                    bool m_associatedRuleCountHasBeenSet;

                    /**
                     * Number of instances in the target group.Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_registeredInstancesCount;
                    bool m_registeredInstancesCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPINFO_H_
