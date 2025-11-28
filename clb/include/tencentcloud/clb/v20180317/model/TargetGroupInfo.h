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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/AssociationItem.h>
#include <tencentcloud/clb/v20180317/model/TargetGroupHealthCheck.h>
#include <tencentcloud/clb/v20180317/model/TagInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
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
                     * 获取`vpcid` of target group
                     * @return VpcId `vpcid` of target group
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置`vpcid` of target group
                     * @param _vpcId `vpcid` of target group
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
                     * 获取Specifies the default port of the target group. for a full listen target group, this field returns 0, indicating an invalid port.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Port Specifies the default port of the target group. for a full listen target group, this field returns 0, indicating an invalid port.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Specifies the default port of the target group. for a full listen target group, this field returns 0, indicating an invalid port.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _port Specifies the default port of the target group. for a full listen target group, this field returns 0, indicating an invalid port.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Associated rule array. This parameter cannot be obtained when the DescribeTargetGroupList API is called.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AssociatedRule Associated rule array. This parameter cannot be obtained when the DescribeTargetGroupList API is called.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AssociationItem> GetAssociatedRule() const;

                    /**
                     * 设置Associated rule array. This parameter cannot be obtained when the DescribeTargetGroupList API is called.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _associatedRule Associated rule array. This parameter cannot be obtained when the DescribeTargetGroupList API is called.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Backend forwarding protocol of the target group. only returns valid values for the new version (v2) target group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Protocol Backend forwarding protocol of the target group. only returns valid values for the new version (v2) target group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Backend forwarding protocol of the target group. only returns valid values for the new version (v2) target group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _protocol Backend forwarding protocol of the target group. only returns valid values for the new version (v2) target group.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Scheduling algorithm. returns a valid value only when the backend forwarding protocol is HTTP, HTTPS, or GRPC. available values:.
<ur>
<Li>WRR: weighted round-robin.</li>.
<Li>LEAST_CONN: specifies the least connection.</li>.
<Li>IP_HASH: based on ip hash.</li>.
</ur>

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScheduleAlgorithm Scheduling algorithm. returns a valid value only when the backend forwarding protocol is HTTP, HTTPS, or GRPC. available values:.
<ur>
<Li>WRR: weighted round-robin.</li>.
<Li>LEAST_CONN: specifies the least connection.</li>.
<Li>IP_HASH: based on ip hash.</li>.
</ur>

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScheduleAlgorithm() const;

                    /**
                     * 设置Scheduling algorithm. returns a valid value only when the backend forwarding protocol is HTTP, HTTPS, or GRPC. available values:.
<ur>
<Li>WRR: weighted round-robin.</li>.
<Li>LEAST_CONN: specifies the least connection.</li>.
<Li>IP_HASH: based on ip hash.</li>.
</ur>

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scheduleAlgorithm Scheduling algorithm. returns a valid value only when the backend forwarding protocol is HTTP, HTTPS, or GRPC. available values:.
<ur>
<Li>WRR: weighted round-robin.</li>.
<Li>LEAST_CONN: specifies the least connection.</li>.
<Li>IP_HASH: based on ip hash.</li>.
</ur>

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Health check details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HealthCheck Health check details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TargetGroupHealthCheck GetHealthCheck() const;

                    /**
                     * 设置Health check details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _healthCheck Health check details.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Target group type, currently supported v1 (legacy version target group) and v2 (new version target group). defaults to v1 (legacy version target group).
                     * @return TargetGroupType Target group type, currently supported v1 (legacy version target group) and v2 (new version target group). defaults to v1 (legacy version target group).
                     * 
                     */
                    std::string GetTargetGroupType() const;

                    /**
                     * 设置Target group type, currently supported v1 (legacy version target group) and v2 (new version target group). defaults to v1 (legacy version target group).
                     * @param _targetGroupType Target group type, currently supported v1 (legacy version target group) and v2 (new version target group). defaults to v1 (legacy version target group).
                     * 
                     */
                    void SetTargetGroupType(const std::string& _targetGroupType);

                    /**
                     * 判断参数 TargetGroupType 是否已赋值
                     * @return TargetGroupType 是否已赋值
                     * 
                     */
                    bool TargetGroupTypeHasBeenSet() const;

                    /**
                     * 获取Number of rules associated with the target group.
                     * @return AssociatedRuleCount Number of rules associated with the target group.
                     * 
                     */
                    int64_t GetAssociatedRuleCount() const;

                    /**
                     * 设置Number of rules associated with the target group.
                     * @param _associatedRuleCount Number of rules associated with the target group.
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
                     * 获取Specifies the number of instances in the target group.
                     * @return RegisteredInstancesCount Specifies the number of instances in the target group.
                     * 
                     */
                    int64_t GetRegisteredInstancesCount() const;

                    /**
                     * 设置Specifies the number of instances in the target group.
                     * @param _registeredInstancesCount Specifies the number of instances in the target group.
                     * 
                     */
                    void SetRegisteredInstancesCount(const int64_t& _registeredInstancesCount);

                    /**
                     * 判断参数 RegisteredInstancesCount 是否已赋值
                     * @return RegisteredInstancesCount 是否已赋值
                     * 
                     */
                    bool RegisteredInstancesCountHasBeenSet() const;

                    /**
                     * 获取Tag.
                     * @return Tag Tag.
                     * 
                     */
                    std::vector<TagInfo> GetTag() const;

                    /**
                     * 设置Tag.
                     * @param _tag Tag.
                     * 
                     */
                    void SetTag(const std::vector<TagInfo>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Default weight. only target groups of v2 type return this field. when NULL is returned, it means the default weight is not set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Weight Default weight. only target groups of v2 type return this field. when NULL is returned, it means the default weight is not set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置Default weight. only target groups of v2 type return this field. when NULL is returned, it means the default weight is not set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _weight Default weight. only target groups of v2 type return this field. when NULL is returned, it means the default weight is not set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Specifies whether to listen to all target groups.
                     * @return FullListenSwitch Specifies whether to listen to all target groups.
                     * 
                     */
                    bool GetFullListenSwitch() const;

                    /**
                     * 设置Specifies whether to listen to all target groups.
                     * @param _fullListenSwitch Specifies whether to listen to all target groups.
                     * 
                     */
                    void SetFullListenSwitch(const bool& _fullListenSwitch);

                    /**
                     * 判断参数 FullListenSwitch 是否已赋值
                     * @return FullListenSwitch 是否已赋值
                     * 
                     */
                    bool FullListenSwitchHasBeenSet() const;

                    /**
                     * 获取Whether to enable persistent connections. valid only when the backend forwarding protocol is HTTP/HTTPS/GRPC and returned by the target group.
                     * @return KeepaliveEnable Whether to enable persistent connections. valid only when the backend forwarding protocol is HTTP/HTTPS/GRPC and returned by the target group.
                     * 
                     */
                    bool GetKeepaliveEnable() const;

                    /**
                     * 设置Whether to enable persistent connections. valid only when the backend forwarding protocol is HTTP/HTTPS/GRPC and returned by the target group.
                     * @param _keepaliveEnable Whether to enable persistent connections. valid only when the backend forwarding protocol is HTTP/HTTPS/GRPC and returned by the target group.
                     * 
                     */
                    void SetKeepaliveEnable(const bool& _keepaliveEnable);

                    /**
                     * 判断参数 KeepaliveEnable 是否已赋值
                     * @return KeepaliveEnable 是否已赋值
                     * 
                     */
                    bool KeepaliveEnableHasBeenSet() const;

                    /**
                     * 获取Session persistence time. valid only when the backend forwarding protocol is HTTP/HTTPS/GRPC and the target group returns a valid value.
                     * @return SessionExpireTime Session persistence time. valid only when the backend forwarding protocol is HTTP/HTTPS/GRPC and the target group returns a valid value.
                     * 
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置Session persistence time. valid only when the backend forwarding protocol is HTTP/HTTPS/GRPC and the target group returns a valid value.
                     * @param _sessionExpireTime Session persistence time. valid only when the backend forwarding protocol is HTTP/HTTPS/GRPC and the target group returns a valid value.
                     * 
                     */
                    void SetSessionExpireTime(const int64_t& _sessionExpireTime);

                    /**
                     * 判断参数 SessionExpireTime 是否已赋值
                     * @return SessionExpireTime 是否已赋值
                     * 
                     */
                    bool SessionExpireTimeHasBeenSet() const;

                    /**
                     * 获取IP version.
                     * @return IpVersion IP version.
                     * 
                     */
                    std::string GetIpVersion() const;

                    /**
                     * 设置IP version.
                     * @param _ipVersion IP version.
                     * 
                     */
                    void SetIpVersion(const std::string& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                private:

                    /**
                     * Target group ID
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * `vpcid` of target group
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Target group name
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                    /**
                     * Specifies the default port of the target group. for a full listen target group, this field returns 0, indicating an invalid port.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Associated rule array. This parameter cannot be obtained when the DescribeTargetGroupList API is called.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AssociationItem> m_associatedRule;
                    bool m_associatedRuleHasBeenSet;

                    /**
                     * Backend forwarding protocol of the target group. only returns valid values for the new version (v2) target group.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Scheduling algorithm. returns a valid value only when the backend forwarding protocol is HTTP, HTTPS, or GRPC. available values:.
<ur>
<Li>WRR: weighted round-robin.</li>.
<Li>LEAST_CONN: specifies the least connection.</li>.
<Li>IP_HASH: based on ip hash.</li>.
</ur>

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scheduleAlgorithm;
                    bool m_scheduleAlgorithmHasBeenSet;

                    /**
                     * Health check details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TargetGroupHealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * Target group type, currently supported v1 (legacy version target group) and v2 (new version target group). defaults to v1 (legacy version target group).
                     */
                    std::string m_targetGroupType;
                    bool m_targetGroupTypeHasBeenSet;

                    /**
                     * Number of rules associated with the target group.
                     */
                    int64_t m_associatedRuleCount;
                    bool m_associatedRuleCountHasBeenSet;

                    /**
                     * Specifies the number of instances in the target group.
                     */
                    int64_t m_registeredInstancesCount;
                    bool m_registeredInstancesCountHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::vector<TagInfo> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Default weight. only target groups of v2 type return this field. when NULL is returned, it means the default weight is not set.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Specifies whether to listen to all target groups.
                     */
                    bool m_fullListenSwitch;
                    bool m_fullListenSwitchHasBeenSet;

                    /**
                     * Whether to enable persistent connections. valid only when the backend forwarding protocol is HTTP/HTTPS/GRPC and returned by the target group.
                     */
                    bool m_keepaliveEnable;
                    bool m_keepaliveEnableHasBeenSet;

                    /**
                     * Session persistence time. valid only when the backend forwarding protocol is HTTP/HTTPS/GRPC and the target group returns a valid value.
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * IP version.
                     */
                    std::string m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPINFO_H_
