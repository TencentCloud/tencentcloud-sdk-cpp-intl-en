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
                     * 获取<p>Target group name. Naming rule: 1-80 English letters, Chinese characters and other internationally compatible language characters, digits, connecting line "-", underscore "_" and other common characters (Unicode supplementary characters such as emoji and rare Chinese characters are forbidden).</p>
                     * @return TargetGroupName <p>Target group name. Naming rule: 1-80 English letters, Chinese characters and other internationally compatible language characters, digits, connecting line "-", underscore "_" and other common characters (Unicode supplementary characters such as emoji and rare Chinese characters are forbidden).</p>
                     * 
                     */
                    std::string GetTargetGroupName() const;

                    /**
                     * 设置<p>Target group name. Naming rule: 1-80 English letters, Chinese characters and other internationally compatible language characters, digits, connecting line "-", underscore "_" and other common characters (Unicode supplementary characters such as emoji and rare Chinese characters are forbidden).</p>
                     * @param _targetGroupName <p>Target group name. Naming rule: 1-80 English letters, Chinese characters and other internationally compatible language characters, digits, connecting line "-", underscore "_" and other common characters (Unicode supplementary characters such as emoji and rare Chinese characters are forbidden).</p>
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
                     * 获取<p>The vpcId attribute of the target group. Leave it blank to use the default VPC.</p>
                     * @return VpcId <p>The vpcId attribute of the target group. Leave it blank to use the default VPC.</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>The vpcId attribute of the target group. Leave it blank to use the default VPC.</p>
                     * @param _vpcId <p>The vpcId attribute of the target group. Leave it blank to use the default VPC.</p>
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
                     * 获取<p>Default port of target group. Default port can be used when servers are added subsequently. Full listen target group does not support this parameter. For non-full listen target group, either Port or port in TargetGroupInstances.N is required.</p>
                     * @return Port <p>Default port of target group. Default port can be used when servers are added subsequently. Full listen target group does not support this parameter. For non-full listen target group, either Port or port in TargetGroupInstances.N is required.</p>
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置<p>Default port of target group. Default port can be used when servers are added subsequently. Full listen target group does not support this parameter. For non-full listen target group, either Port or port in TargetGroupInstances.N is required.</p>
                     * @param _port <p>Default port of target group. Default port can be used when servers are added subsequently. Full listen target group does not support this parameter. For non-full listen target group, either Port or port in TargetGroupInstances.N is required.</p>
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
                     * 获取<p>The target group supports up to 50 real servers bound to it.</p>
                     * @return TargetGroupInstances <p>The target group supports up to 50 real servers bound to it.</p>
                     * 
                     */
                    std::vector<TargetGroupInstance> GetTargetGroupInstances() const;

                    /**
                     * 设置<p>The target group supports up to 50 real servers bound to it.</p>
                     * @param _targetGroupInstances <p>The target group supports up to 50 real servers bound to it.</p>
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
                     * 获取<p>Target Group Type, currently supported v1 (legacy version target group), v2 (new version target group), defaults to v1 (legacy version target group).</p>
                     * @return Type <p>Target Group Type, currently supported v1 (legacy version target group), v2 (new version target group), defaults to v1 (legacy version target group).</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Target Group Type, currently supported v1 (legacy version target group), v2 (new version target group), defaults to v1 (legacy version target group).</p>
                     * @param _type <p>Target Group Type, currently supported v1 (legacy version target group), v2 (new version target group), defaults to v1 (legacy version target group).</p>
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
                     * 获取<p>Backend forwarding protocol of the target group. This field is required for the new version target group v2. Currently supports TCP, UDP, HTTP, HTTPS, GRPC.</p>
                     * @return Protocol <p>Backend forwarding protocol of the target group. This field is required for the new version target group v2. Currently supports TCP, UDP, HTTP, HTTPS, GRPC.</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>Backend forwarding protocol of the target group. This field is required for the new version target group v2. Currently supports TCP, UDP, HTTP, HTTPS, GRPC.</p>
                     * @param _protocol <p>Backend forwarding protocol of the target group. This field is required for the new version target group v2. Currently supports TCP, UDP, HTTP, HTTPS, GRPC.</p>
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
                     * 获取<p>Health check.</p>
                     * @return HealthCheck <p>Health check.</p>
                     * 
                     */
                    TargetGroupHealthCheck GetHealthCheck() const;

                    /**
                     * 设置<p>Health check.</p>
                     * @param _healthCheck <p>Health check.</p>
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
                     * 获取<p>Scheduling algorithm. This parameter is valid only for new version V2 target groups with backend forwarding protocol (HTTP|HTTPS|GRPC). Available values:</p><li>WRR: weighted round-robin.</li><li>LEAST_CONN: least connection.</li><li>IP_HASH: based on IP hash.</li><li>Default WRR.</li>
                     * @return ScheduleAlgorithm <p>Scheduling algorithm. This parameter is valid only for new version V2 target groups with backend forwarding protocol (HTTP|HTTPS|GRPC). Available values:</p><li>WRR: weighted round-robin.</li><li>LEAST_CONN: least connection.</li><li>IP_HASH: based on IP hash.</li><li>Default WRR.</li>
                     * 
                     */
                    std::string GetScheduleAlgorithm() const;

                    /**
                     * 设置<p>Scheduling algorithm. This parameter is valid only for new version V2 target groups with backend forwarding protocol (HTTP|HTTPS|GRPC). Available values:</p><li>WRR: weighted round-robin.</li><li>LEAST_CONN: least connection.</li><li>IP_HASH: based on IP hash.</li><li>Default WRR.</li>
                     * @param _scheduleAlgorithm <p>Scheduling algorithm. This parameter is valid only for new version V2 target groups with backend forwarding protocol (HTTP|HTTPS|GRPC). Available values:</p><li>WRR: weighted round-robin.</li><li>LEAST_CONN: least connection.</li><li>IP_HASH: based on IP hash.</li><li>Default WRR.</li>
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
                     * 获取<p>Tag.</p>
                     * @return Tags <p>Tag.</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>Tag.</p>
                     * @param _tags <p>Tag.</p>
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
                     * 获取<p>Default weight of the backend service, where:</p><ul><li>Value ranges from 0 to 100.</li><li>After setting this value, when adding a backend service to the target group, if the backend service does not set the weight separately, use the default weight here.</li><li>Weight parameter settings not supported for v1 target group type.</li></ul>
                     * @return Weight <p>Default weight of the backend service, where:</p><ul><li>Value ranges from 0 to 100.</li><li>After setting this value, when adding a backend service to the target group, if the backend service does not set the weight separately, use the default weight here.</li><li>Weight parameter settings not supported for v1 target group type.</li></ul>
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置<p>Default weight of the backend service, where:</p><ul><li>Value ranges from 0 to 100.</li><li>After setting this value, when adding a backend service to the target group, if the backend service does not set the weight separately, use the default weight here.</li><li>Weight parameter settings not supported for v1 target group type.</li></ul>
                     * @param _weight <p>Default weight of the backend service, where:</p><ul><li>Value ranges from 0 to 100.</li><li>After setting this value, when adding a backend service to the target group, if the backend service does not set the weight separately, use the default weight here.</li><li>Weight parameter settings not supported for v1 target group type.</li></ul>
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
                     * 获取<p>Full listen target group flag. true: yes, false: no. Only target groups of the new version V2 support this parameter.</p>
                     * @return FullListenSwitch <p>Full listen target group flag. true: yes, false: no. Only target groups of the new version V2 support this parameter.</p>
                     * 
                     */
                    bool GetFullListenSwitch() const;

                    /**
                     * 设置<p>Full listen target group flag. true: yes, false: no. Only target groups of the new version V2 support this parameter.</p>
                     * @param _fullListenSwitch <p>Full listen target group flag. true: yes, false: no. Only target groups of the new version V2 support this parameter.</p>
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
                     * 获取<p>Whether to enable long connections. This parameter is applicable only to HTTP/HTTPS target groups. 0: off; 1: on. Off by default.</p>
                     * @return KeepaliveEnable <p>Whether to enable long connections. This parameter is applicable only to HTTP/HTTPS target groups. 0: off; 1: on. Off by default.</p>
                     * 
                     */
                    bool GetKeepaliveEnable() const;

                    /**
                     * 设置<p>Whether to enable long connections. This parameter is applicable only to HTTP/HTTPS target groups. 0: off; 1: on. Off by default.</p>
                     * @param _keepaliveEnable <p>Whether to enable long connections. This parameter is applicable only to HTTP/HTTPS target groups. 0: off; 1: on. Off by default.</p>
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
                     * 获取<p>Session persistence time, unit: second. Available values: 30-3600, default 0, disabled. This parameter is supported only for target groups with HTTP/HTTPS/GRPC backend forwarding protocol in the new version V2.</p>
                     * @return SessionExpireTime <p>Session persistence time, unit: second. Available values: 30-3600, default 0, disabled. This parameter is supported only for target groups with HTTP/HTTPS/GRPC backend forwarding protocol in the new version V2.</p>
                     * 
                     */
                    uint64_t GetSessionExpireTime() const;

                    /**
                     * 设置<p>Session persistence time, unit: second. Available values: 30-3600, default 0, disabled. This parameter is supported only for target groups with HTTP/HTTPS/GRPC backend forwarding protocol in the new version V2.</p>
                     * @param _sessionExpireTime <p>Session persistence time, unit: second. Available values: 30-3600, default 0, disabled. This parameter is supported only for target groups with HTTP/HTTPS/GRPC backend forwarding protocol in the new version V2.</p>
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
                     * 获取<p>IP version type.</p>
                     * @return IpVersion <p>IP version type.</p>
                     * 
                     */
                    std::string GetIpVersion() const;

                    /**
                     * 设置<p>IP version type.</p>
                     * @param _ipVersion <p>IP version type.</p>
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
                     * 获取<p>Whether SNAT (source IP replacement) is enabled, True (enabled), False (disabled). Disabled by default. Note: When SnatEnable is enabled, the client source IP will be replaced. At this point, the <code>Pass through client source IP</code> option is disabled, and vice versa.</p>
                     * @return SnatEnable <p>Whether SNAT (source IP replacement) is enabled, True (enabled), False (disabled). Disabled by default. Note: When SnatEnable is enabled, the client source IP will be replaced. At this point, the <code>Pass through client source IP</code> option is disabled, and vice versa.</p>
                     * 
                     */
                    bool GetSnatEnable() const;

                    /**
                     * 设置<p>Whether SNAT (source IP replacement) is enabled, True (enabled), False (disabled). Disabled by default. Note: When SnatEnable is enabled, the client source IP will be replaced. At this point, the <code>Pass through client source IP</code> option is disabled, and vice versa.</p>
                     * @param _snatEnable <p>Whether SNAT (source IP replacement) is enabled, True (enabled), False (disabled). Disabled by default. Note: When SnatEnable is enabled, the client source IP will be replaced. At this point, the <code>Pass through client source IP</code> option is disabled, and vice versa.</p>
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
                     * <p>Target group name. Naming rule: 1-80 English letters, Chinese characters and other internationally compatible language characters, digits, connecting line "-", underscore "_" and other common characters (Unicode supplementary characters such as emoji and rare Chinese characters are forbidden).</p>
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                    /**
                     * <p>The vpcId attribute of the target group. Leave it blank to use the default VPC.</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Default port of target group. Default port can be used when servers are added subsequently. Full listen target group does not support this parameter. For non-full listen target group, either Port or port in TargetGroupInstances.N is required.</p>
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>The target group supports up to 50 real servers bound to it.</p>
                     */
                    std::vector<TargetGroupInstance> m_targetGroupInstances;
                    bool m_targetGroupInstancesHasBeenSet;

                    /**
                     * <p>Target Group Type, currently supported v1 (legacy version target group), v2 (new version target group), defaults to v1 (legacy version target group).</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Backend forwarding protocol of the target group. This field is required for the new version target group v2. Currently supports TCP, UDP, HTTP, HTTPS, GRPC.</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>Health check.</p>
                     */
                    TargetGroupHealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * <p>Scheduling algorithm. This parameter is valid only for new version V2 target groups with backend forwarding protocol (HTTP|HTTPS|GRPC). Available values:</p><li>WRR: weighted round-robin.</li><li>LEAST_CONN: least connection.</li><li>IP_HASH: based on IP hash.</li><li>Default WRR.</li>
                     */
                    std::string m_scheduleAlgorithm;
                    bool m_scheduleAlgorithmHasBeenSet;

                    /**
                     * <p>Tag.</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Default weight of the backend service, where:</p><ul><li>Value ranges from 0 to 100.</li><li>After setting this value, when adding a backend service to the target group, if the backend service does not set the weight separately, use the default weight here.</li><li>Weight parameter settings not supported for v1 target group type.</li></ul>
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * <p>Full listen target group flag. true: yes, false: no. Only target groups of the new version V2 support this parameter.</p>
                     */
                    bool m_fullListenSwitch;
                    bool m_fullListenSwitchHasBeenSet;

                    /**
                     * <p>Whether to enable long connections. This parameter is applicable only to HTTP/HTTPS target groups. 0: off; 1: on. Off by default.</p>
                     */
                    bool m_keepaliveEnable;
                    bool m_keepaliveEnableHasBeenSet;

                    /**
                     * <p>Session persistence time, unit: second. Available values: 30-3600, default 0, disabled. This parameter is supported only for target groups with HTTP/HTTPS/GRPC backend forwarding protocol in the new version V2.</p>
                     */
                    uint64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * <p>IP version type.</p>
                     */
                    std::string m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * <p>Whether SNAT (source IP replacement) is enabled, True (enabled), False (disabled). Disabled by default. Note: When SnatEnable is enabled, the client source IP will be replaced. At this point, the <code>Pass through client source IP</code> option is disabled, and vice versa.</p>
                     */
                    bool m_snatEnable;
                    bool m_snatEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATETARGETGROUPREQUEST_H_
