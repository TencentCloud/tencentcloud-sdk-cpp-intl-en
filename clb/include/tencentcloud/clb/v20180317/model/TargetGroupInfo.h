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
                     * 获取<p>Target group ID</p>
                     * @return TargetGroupId <p>Target group ID</p>
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置<p>Target group ID</p>
                     * @param _targetGroupId <p>Target group ID</p>
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
                     * 获取<p>VPC ID of the target group</p>
                     * @return VpcId <p>VPC ID of the target group</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID of the target group</p>
                     * @param _vpcId <p>VPC ID of the target group</p>
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
                     * 获取<p>Target group name</p>
                     * @return TargetGroupName <p>Target group name</p>
                     * 
                     */
                    std::string GetTargetGroupName() const;

                    /**
                     * 设置<p>Target group name</p>
                     * @param _targetGroupName <p>Target group name</p>
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
                     * 获取<p>Default port of target group. This field returns 0 for full listen target group, indicating an invalid port.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Port <p>Default port of target group. This field returns 0 for full listen target group, indicating an invalid port.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置<p>Default port of target group. This field returns 0 for full listen target group, indicating an invalid port.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _port <p>Default port of target group. This field returns 0 for full listen target group, indicating an invalid port.</p>
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
                     * 获取<p>Creation time of target group</p>
                     * @return CreatedTime <p>Creation time of target group</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>Creation time of target group</p>
                     * @param _createdTime <p>Creation time of target group</p>
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
                     * 获取<p>Target group modification time</p>
                     * @return UpdatedTime <p>Target group modification time</p>
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置<p>Target group modification time</p>
                     * @param _updatedTime <p>Target group modification time</p>
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
                     * 获取<p>Associated rule array. This parameter cannot be obtained in the DescribeTargetGroupList API call.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AssociatedRule <p>Associated rule array. This parameter cannot be obtained in the DescribeTargetGroupList API call.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AssociationItem> GetAssociatedRule() const;

                    /**
                     * 设置<p>Associated rule array. This parameter cannot be obtained in the DescribeTargetGroupList API call.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _associatedRule <p>Associated rule array. This parameter cannot be obtained in the DescribeTargetGroupList API call.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Backend forwarding protocol of the target group. Only the new version target group v2 returns a valid value.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Protocol <p>Backend forwarding protocol of the target group. Only the new version target group v2 returns a valid value.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>Backend forwarding protocol of the target group. Only the new version target group v2 returns a valid value.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _protocol <p>Backend forwarding protocol of the target group. Only the new version target group v2 returns a valid value.</p>
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
                     * 获取<p>Scheduling algorithm. This parameter returns valid values only for target groups with backend forwarding protocol (HTTP, HTTPS, GRPC). Available values:</p><ur></p><li>WRR: weighted round-robin.</li><li>LEAST_CONN: LEAST connection.</li><li>IP_HASH: based on IP HASH.</li></ur>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScheduleAlgorithm <p>Scheduling algorithm. This parameter returns valid values only for target groups with backend forwarding protocol (HTTP, HTTPS, GRPC). Available values:</p><ur></p><li>WRR: weighted round-robin.</li><li>LEAST_CONN: LEAST connection.</li><li>IP_HASH: based on IP HASH.</li></ur>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScheduleAlgorithm() const;

                    /**
                     * 设置<p>Scheduling algorithm. This parameter returns valid values only for target groups with backend forwarding protocol (HTTP, HTTPS, GRPC). Available values:</p><ur></p><li>WRR: weighted round-robin.</li><li>LEAST_CONN: LEAST connection.</li><li>IP_HASH: based on IP HASH.</li></ur>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scheduleAlgorithm <p>Scheduling algorithm. This parameter returns valid values only for target groups with backend forwarding protocol (HTTP, HTTPS, GRPC). Available values:</p><ur></p><li>WRR: weighted round-robin.</li><li>LEAST_CONN: LEAST connection.</li><li>IP_HASH: based on IP HASH.</li></ur>
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
                     * 获取<p>Health check details.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HealthCheck <p>Health check details.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TargetGroupHealthCheck GetHealthCheck() const;

                    /**
                     * 设置<p>Health check details.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _healthCheck <p>Health check details.</p>
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
                     * 获取<p>Target Group Type, currently supported v1 (legacy version target group), v2 (new version target group). Defaults to v1 (legacy version target group).</p>
                     * @return TargetGroupType <p>Target Group Type, currently supported v1 (legacy version target group), v2 (new version target group). Defaults to v1 (legacy version target group).</p>
                     * 
                     */
                    std::string GetTargetGroupType() const;

                    /**
                     * 设置<p>Target Group Type, currently supported v1 (legacy version target group), v2 (new version target group). Defaults to v1 (legacy version target group).</p>
                     * @param _targetGroupType <p>Target Group Type, currently supported v1 (legacy version target group), v2 (new version target group). Defaults to v1 (legacy version target group).</p>
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
                     * 获取<p>Number of rules associated with the target group.</p>
                     * @return AssociatedRuleCount <p>Number of rules associated with the target group.</p>
                     * 
                     */
                    int64_t GetAssociatedRuleCount() const;

                    /**
                     * 设置<p>Number of rules associated with the target group.</p>
                     * @param _associatedRuleCount <p>Number of rules associated with the target group.</p>
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
                     * 获取<p>Number of instances in the target group.</p>
                     * @return RegisteredInstancesCount <p>Number of instances in the target group.</p>
                     * 
                     */
                    int64_t GetRegisteredInstancesCount() const;

                    /**
                     * 设置<p>Number of instances in the target group.</p>
                     * @param _registeredInstancesCount <p>Number of instances in the target group.</p>
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
                     * 获取<p>Tag.</p>
                     * @return Tag <p>Tag.</p>
                     * 
                     */
                    std::vector<TagInfo> GetTag() const;

                    /**
                     * 设置<p>Tag.</p>
                     * @param _tag <p>Tag.</p>
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
                     * 获取<p>Default weight. Only target groups of v2 type return this field. When NULL is returned, it means the default weight is not set.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Weight <p>Default weight. Only target groups of v2 type return this field. When NULL is returned, it means the default weight is not set.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置<p>Default weight. Only target groups of v2 type return this field. When NULL is returned, it means the default weight is not set.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _weight <p>Default weight. Only target groups of v2 type return this field. When NULL is returned, it means the default weight is not set.</p>
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
                     * 获取<p>Whether to listen to the target group.</p>
                     * @return FullListenSwitch <p>Whether to listen to the target group.</p>
                     * 
                     */
                    bool GetFullListenSwitch() const;

                    /**
                     * 设置<p>Whether to listen to the target group.</p>
                     * @param _fullListenSwitch <p>Whether to listen to the target group.</p>
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
                     * 获取<p>Whether to enable long connections. Only target groups with HTTP/HTTPS/GRPC as the backend forwarding protocol return a valid value.</p>
                     * @return KeepaliveEnable <p>Whether to enable long connections. Only target groups with HTTP/HTTPS/GRPC as the backend forwarding protocol return a valid value.</p>
                     * 
                     */
                    bool GetKeepaliveEnable() const;

                    /**
                     * 设置<p>Whether to enable long connections. Only target groups with HTTP/HTTPS/GRPC as the backend forwarding protocol return a valid value.</p>
                     * @param _keepaliveEnable <p>Whether to enable long connections. Only target groups with HTTP/HTTPS/GRPC as the backend forwarding protocol return a valid value.</p>
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
                     * 获取<p>Session hold time. Only target groups with backend forwarding protocol set to HTTP/HTTPS/GRPC return a valid value.</p>
                     * @return SessionExpireTime <p>Session hold time. Only target groups with backend forwarding protocol set to HTTP/HTTPS/GRPC return a valid value.</p>
                     * 
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置<p>Session hold time. Only target groups with backend forwarding protocol set to HTTP/HTTPS/GRPC return a valid value.</p>
                     * @param _sessionExpireTime <p>Session hold time. Only target groups with backend forwarding protocol set to HTTP/HTTPS/GRPC return a valid value.</p>
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
                     * 获取<p>IP version.</p>
                     * @return IpVersion <p>IP version.</p>
                     * 
                     */
                    std::string GetIpVersion() const;

                    /**
                     * 设置<p>IP version.</p>
                     * @param _ipVersion <p>IP version.</p>
                     * 
                     */
                    void SetIpVersion(const std::string& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable SNAT</p>
                     * @return SnatEnable <p>Whether to enable SNAT</p>
                     * 
                     */
                    bool GetSnatEnable() const;

                    /**
                     * 设置<p>Whether to enable SNAT</p>
                     * @param _snatEnable <p>Whether to enable SNAT</p>
                     * 
                     */
                    void SetSnatEnable(const bool& _snatEnable);

                    /**
                     * 判断参数 SnatEnable 是否已赋值
                     * @return SnatEnable 是否已赋值
                     * 
                     */
                    bool SnatEnableHasBeenSet() const;

                private:

                    /**
                     * <p>Target group ID</p>
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * <p>VPC ID of the target group</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Target group name</p>
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                    /**
                     * <p>Default port of target group. This field returns 0 for full listen target group, indicating an invalid port.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>Creation time of target group</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>Target group modification time</p>
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * <p>Associated rule array. This parameter cannot be obtained in the DescribeTargetGroupList API call.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AssociationItem> m_associatedRule;
                    bool m_associatedRuleHasBeenSet;

                    /**
                     * <p>Backend forwarding protocol of the target group. Only the new version target group v2 returns a valid value.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>Scheduling algorithm. This parameter returns valid values only for target groups with backend forwarding protocol (HTTP, HTTPS, GRPC). Available values:</p><ur></p><li>WRR: weighted round-robin.</li><li>LEAST_CONN: LEAST connection.</li><li>IP_HASH: based on IP HASH.</li></ur>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scheduleAlgorithm;
                    bool m_scheduleAlgorithmHasBeenSet;

                    /**
                     * <p>Health check details.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TargetGroupHealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * <p>Target Group Type, currently supported v1 (legacy version target group), v2 (new version target group). Defaults to v1 (legacy version target group).</p>
                     */
                    std::string m_targetGroupType;
                    bool m_targetGroupTypeHasBeenSet;

                    /**
                     * <p>Number of rules associated with the target group.</p>
                     */
                    int64_t m_associatedRuleCount;
                    bool m_associatedRuleCountHasBeenSet;

                    /**
                     * <p>Number of instances in the target group.</p>
                     */
                    int64_t m_registeredInstancesCount;
                    bool m_registeredInstancesCountHasBeenSet;

                    /**
                     * <p>Tag.</p>
                     */
                    std::vector<TagInfo> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>Default weight. Only target groups of v2 type return this field. When NULL is returned, it means the default weight is not set.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * <p>Whether to listen to the target group.</p>
                     */
                    bool m_fullListenSwitch;
                    bool m_fullListenSwitchHasBeenSet;

                    /**
                     * <p>Whether to enable long connections. Only target groups with HTTP/HTTPS/GRPC as the backend forwarding protocol return a valid value.</p>
                     */
                    bool m_keepaliveEnable;
                    bool m_keepaliveEnableHasBeenSet;

                    /**
                     * <p>Session hold time. Only target groups with backend forwarding protocol set to HTTP/HTTPS/GRPC return a valid value.</p>
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * <p>IP version.</p>
                     */
                    std::string m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * <p>Whether to enable SNAT</p>
                     */
                    bool m_snatEnable;
                    bool m_snatEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPINFO_H_
