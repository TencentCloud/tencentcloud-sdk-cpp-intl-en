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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATETARGETGROUPREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATETARGETGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/TargetGroupInstance.h>
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
                * CreateTargetGroup request structure.
                */
                class CreateTargetGroupRequest : public AbstractModel
                {
                public:
                    CreateTargetGroupRequest();
                    ~CreateTargetGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Target group name (up to 50 characters)
                     * @return TargetGroupName Target group name (up to 50 characters)
                     * 
                     */
                    std::string GetTargetGroupName() const;

                    /**
                     * 设置Target group name (up to 50 characters)
                     * @param _targetGroupName Target group name (up to 50 characters)
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
                     * 获取Specifies the vpc id attribute of the target group. uses the default vpc if left empty.
                     * @return VpcId Specifies the vpc id attribute of the target group. uses the default vpc if left empty.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Specifies the vpc id attribute of the target group. uses the default vpc if left empty.
                     * @param _vpcId Specifies the vpc id attribute of the target group. uses the default vpc if left empty.
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
                     * 获取Specifies the default Port of the target group. the default Port can be used when servers are added subsequently. this parameter is not supported for full-listen target groups. for non-full-listen target groups, either Port or Port in TargetGroupInstances.N is required.

                     * @return Port Specifies the default Port of the target group. the default Port can be used when servers are added subsequently. this parameter is not supported for full-listen target groups. for non-full-listen target groups, either Port or Port in TargetGroupInstances.N is required.

                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Specifies the default Port of the target group. the default Port can be used when servers are added subsequently. this parameter is not supported for full-listen target groups. for non-full-listen target groups, either Port or Port in TargetGroupInstances.N is required.

                     * @param _port Specifies the default Port of the target group. the default Port can be used when servers are added subsequently. this parameter is not supported for full-listen target groups. for non-full-listen target groups, either Port or Port in TargetGroupInstances.N is required.

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
                     * 获取Specifies the real servers bound to the target group. supports up to 50 at a time.
                     * @return TargetGroupInstances Specifies the real servers bound to the target group. supports up to 50 at a time.
                     * 
                     */
                    std::vector<TargetGroupInstance> GetTargetGroupInstances() const;

                    /**
                     * 设置Specifies the real servers bound to the target group. supports up to 50 at a time.
                     * @param _targetGroupInstances Specifies the real servers bound to the target group. supports up to 50 at a time.
                     * 
                     */
                    void SetTargetGroupInstances(const std::vector<TargetGroupInstance>& _targetGroupInstances);

                    /**
                     * 判断参数 TargetGroupInstances 是否已赋值
                     * @return TargetGroupInstances 是否已赋值
                     * 
                     */
                    bool TargetGroupInstancesHasBeenSet() const;

                    /**
                     * 获取Target group type, currently supported v1 (legacy version target group) and v2 (new version target group), defaults to v1 (legacy version target group).
                     * @return Type Target group type, currently supported v1 (legacy version target group) and v2 (new version target group), defaults to v1 (legacy version target group).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Target group type, currently supported v1 (legacy version target group) and v2 (new version target group), defaults to v1 (legacy version target group).
                     * @param _type Target group type, currently supported v1 (legacy version target group) and v2 (new version target group), defaults to v1 (legacy version target group).
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Backend forwarding protocol of the target group. this field is required for the new version (v2) target group. currently supports TCP, UDP, HTTP, HTTPS, GRPC.
                     * @return Protocol Backend forwarding protocol of the target group. this field is required for the new version (v2) target group. currently supports TCP, UDP, HTTP, HTTPS, GRPC.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Backend forwarding protocol of the target group. this field is required for the new version (v2) target group. currently supports TCP, UDP, HTTP, HTTPS, GRPC.
                     * @param _protocol Backend forwarding protocol of the target group. this field is required for the new version (v2) target group. currently supports TCP, UDP, HTTP, HTTPS, GRPC.
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
                     * 获取Health check.
                     * @return HealthCheck Health check.
                     * 
                     */
                    TargetGroupHealthCheck GetHealthCheck() const;

                    /**
                     * 设置Health check.
                     * @param _healthCheck Health check.
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
                     * 获取Scheduling algorithm. this parameter is valid only for target groups of the new version V2 when the backend forwarding protocol is HTTP, HTTPS, or GRPC. available values:.
<ur><li>WRR: weighted round-robin.</li><li>LEAST_CONN: LEAST connection.</li><li>IP_HASH: based on IP HASH.</li><li>default is WRR.</li></ur>.
                     * @return ScheduleAlgorithm Scheduling algorithm. this parameter is valid only for target groups of the new version V2 when the backend forwarding protocol is HTTP, HTTPS, or GRPC. available values:.
<ur><li>WRR: weighted round-robin.</li><li>LEAST_CONN: LEAST connection.</li><li>IP_HASH: based on IP HASH.</li><li>default is WRR.</li></ur>.
                     * 
                     */
                    std::string GetScheduleAlgorithm() const;

                    /**
                     * 设置Scheduling algorithm. this parameter is valid only for target groups of the new version V2 when the backend forwarding protocol is HTTP, HTTPS, or GRPC. available values:.
<ur><li>WRR: weighted round-robin.</li><li>LEAST_CONN: LEAST connection.</li><li>IP_HASH: based on IP HASH.</li><li>default is WRR.</li></ur>.
                     * @param _scheduleAlgorithm Scheduling algorithm. this parameter is valid only for target groups of the new version V2 when the backend forwarding protocol is HTTP, HTTPS, or GRPC. available values:.
<ur><li>WRR: weighted round-robin.</li><li>LEAST_CONN: LEAST connection.</li><li>IP_HASH: based on IP HASH.</li><li>default is WRR.</li></ur>.
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
                     * 获取Tag.
                     * @return Tags Tag.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Tag.
                     * @param _tags Tag.
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Specifies the default weight of the backend service. among them:.
<ul><li>Value ranges from 0 to 100.</li><li>after setting this value, when adding a backend service to the target group, if the backend service does not set Weight separately, use the default Weight here.</li><li>Weight parameter settings not supported for v1 target group type.</li></ul>.
                     * @return Weight Specifies the default weight of the backend service. among them:.
<ul><li>Value ranges from 0 to 100.</li><li>after setting this value, when adding a backend service to the target group, if the backend service does not set Weight separately, use the default Weight here.</li><li>Weight parameter settings not supported for v1 target group type.</li></ul>.
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置Specifies the default weight of the backend service. among them:.
<ul><li>Value ranges from 0 to 100.</li><li>after setting this value, when adding a backend service to the target group, if the backend service does not set Weight separately, use the default Weight here.</li><li>Weight parameter settings not supported for v1 target group type.</li></ul>.
                     * @param _weight Specifies the default weight of the backend service. among them:.
<ul><li>Value ranges from 0 to 100.</li><li>after setting this value, when adding a backend service to the target group, if the backend service does not set Weight separately, use the default Weight here.</li><li>Weight parameter settings not supported for v1 target group type.</li></ul>.
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
                     * 获取Full listen target group flag. valid values: true (yes), false (no). only target groups of the new version V2 event type support this parameter.
                     * @return FullListenSwitch Full listen target group flag. valid values: true (yes), false (no). only target groups of the new version V2 event type support this parameter.
                     * 
                     */
                    bool GetFullListenSwitch() const;

                    /**
                     * 设置Full listen target group flag. valid values: true (yes), false (no). only target groups of the new version V2 event type support this parameter.
                     * @param _fullListenSwitch Full listen target group flag. valid values: true (yes), false (no). only target groups of the new version V2 event type support this parameter.
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
                     * 获取Specifies whether to enable the persistent connection feature. this parameter applies only to HTTP and HTTPS target groups. 0: disable; 1: enable. this feature is off by default.
                     * @return KeepaliveEnable Specifies whether to enable the persistent connection feature. this parameter applies only to HTTP and HTTPS target groups. 0: disable; 1: enable. this feature is off by default.
                     * 
                     */
                    bool GetKeepaliveEnable() const;

                    /**
                     * 设置Specifies whether to enable the persistent connection feature. this parameter applies only to HTTP and HTTPS target groups. 0: disable; 1: enable. this feature is off by default.
                     * @param _keepaliveEnable Specifies whether to enable the persistent connection feature. this parameter applies only to HTTP and HTTPS target groups. 0: disable; 1: enable. this feature is off by default.
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
                     * 获取Session hold time, unit: second. value range: 30-3600. default: 0, disabled. this parameter is supported only for target groups with HTTP/HTTPS/GRPC backend forwarding protocol in the new version V2.
                     * @return SessionExpireTime Session hold time, unit: second. value range: 30-3600. default: 0, disabled. this parameter is supported only for target groups with HTTP/HTTPS/GRPC backend forwarding protocol in the new version V2.
                     * 
                     */
                    uint64_t GetSessionExpireTime() const;

                    /**
                     * 设置Session hold time, unit: second. value range: 30-3600. default: 0, disabled. this parameter is supported only for target groups with HTTP/HTTPS/GRPC backend forwarding protocol in the new version V2.
                     * @param _sessionExpireTime Session hold time, unit: second. value range: 30-3600. default: 0, disabled. this parameter is supported only for target groups with HTTP/HTTPS/GRPC backend forwarding protocol in the new version V2.
                     * 
                     */
                    void SetSessionExpireTime(const uint64_t& _sessionExpireTime);

                    /**
                     * 判断参数 SessionExpireTime 是否已赋值
                     * @return SessionExpireTime 是否已赋值
                     * 
                     */
                    bool SessionExpireTimeHasBeenSet() const;

                    /**
                     * 获取IP version type.
                     * @return IpVersion IP version type.
                     * 
                     */
                    std::string GetIpVersion() const;

                    /**
                     * 设置IP version type.
                     * @param _ipVersion IP version type.
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
                     * Target group name (up to 50 characters)
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                    /**
                     * Specifies the vpc id attribute of the target group. uses the default vpc if left empty.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Specifies the default Port of the target group. the default Port can be used when servers are added subsequently. this parameter is not supported for full-listen target groups. for non-full-listen target groups, either Port or Port in TargetGroupInstances.N is required.

                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Specifies the real servers bound to the target group. supports up to 50 at a time.
                     */
                    std::vector<TargetGroupInstance> m_targetGroupInstances;
                    bool m_targetGroupInstancesHasBeenSet;

                    /**
                     * Target group type, currently supported v1 (legacy version target group) and v2 (new version target group), defaults to v1 (legacy version target group).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Backend forwarding protocol of the target group. this field is required for the new version (v2) target group. currently supports TCP, UDP, HTTP, HTTPS, GRPC.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Health check.
                     */
                    TargetGroupHealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * Scheduling algorithm. this parameter is valid only for target groups of the new version V2 when the backend forwarding protocol is HTTP, HTTPS, or GRPC. available values:.
<ur><li>WRR: weighted round-robin.</li><li>LEAST_CONN: LEAST connection.</li><li>IP_HASH: based on IP HASH.</li><li>default is WRR.</li></ur>.
                     */
                    std::string m_scheduleAlgorithm;
                    bool m_scheduleAlgorithmHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Specifies the default weight of the backend service. among them:.
<ul><li>Value ranges from 0 to 100.</li><li>after setting this value, when adding a backend service to the target group, if the backend service does not set Weight separately, use the default Weight here.</li><li>Weight parameter settings not supported for v1 target group type.</li></ul>.
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Full listen target group flag. valid values: true (yes), false (no). only target groups of the new version V2 event type support this parameter.
                     */
                    bool m_fullListenSwitch;
                    bool m_fullListenSwitchHasBeenSet;

                    /**
                     * Specifies whether to enable the persistent connection feature. this parameter applies only to HTTP and HTTPS target groups. 0: disable; 1: enable. this feature is off by default.
                     */
                    bool m_keepaliveEnable;
                    bool m_keepaliveEnableHasBeenSet;

                    /**
                     * Session hold time, unit: second. value range: 30-3600. default: 0, disabled. this parameter is supported only for target groups with HTTP/HTTPS/GRPC backend forwarding protocol in the new version V2.
                     */
                    uint64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * IP version type.
                     */
                    std::string m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATETARGETGROUPREQUEST_H_
