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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERDETAILRESPONSE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/DefaultAction.h>
#include <tencentcloud/alb/v20251030/model/TagInfo.h>
#include <tencentcloud/alb/v20251030/model/XForwardedForConfig.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeListenerDetail response structure.
                */
                class DescribeListenerDetailResponse : public AbstractModel
                {
                public:
                    DescribeListenerDetailResponse();
                    ~DescribeListenerDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>List of CA certificate IDs bound to the listener.</p>
                     * @return CaCertificateIds <p>List of CA certificate IDs bound to the listener.</p>
                     * 
                     */
                    std::vector<std::string> GetCaCertificateIds() const;

                    /**
                     * 判断参数 CaCertificateIds 是否已赋值
                     * @return CaCertificateIds 是否已赋值
                     * 
                     */
                    bool CaCertificateIdsHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable mutual authentication.</p>
                     * @return CaEnabled <p>Whether to enable mutual authentication.</p>
                     * 
                     */
                    bool GetCaEnabled() const;

                    /**
                     * 判断参数 CaEnabled 是否已赋值
                     * @return CaEnabled 是否已赋值
                     * 
                     */
                    bool CaEnabledHasBeenSet() const;

                    /**
                     * 获取<p>List of server certificate IDs.</p>
                     * @return CertificateIds <p>List of server certificate IDs.</p>
                     * 
                     */
                    std::vector<std::string> GetCertificateIds() const;

                    /**
                     * 判断参数 CertificateIds 是否已赋值
                     * @return CertificateIds 是否已赋值
                     * 
                     */
                    bool CertificateIdsHasBeenSet() const;

                    /**
                     * 获取<p>Creation time of the listener instance. Format: ISO 8601 (for example, 2025-01-01T08:30:00+08:00)</p>
                     * @return CreateTime <p>Creation time of the listener instance. Format: ISO 8601 (for example, 2025-01-01T08:30:00+08:00)</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Action list of the rule.</p>
                     * @return DefaultActions <p>Action list of the rule.</p>
                     * 
                     */
                    std::vector<DefaultAction> GetDefaultActions() const;

                    /**
                     * 判断参数 DefaultActions 是否已赋值
                     * @return DefaultActions 是否已赋值
                     * 
                     */
                    bool DefaultActionsHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable Gzip compression.</p>
                     * @return GzipEnabled <p>Whether to enable Gzip compression.</p>
                     * 
                     */
                    bool GetGzipEnabled() const;

                    /**
                     * 判断参数 GzipEnabled 是否已赋值
                     * @return GzipEnabled 是否已赋值
                     * 
                     */
                    bool GzipEnabledHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable the HTTP/2 feature.</p>
                     * @return Http2Enabled <p>Whether to enable the HTTP/2 feature.</p>
                     * 
                     */
                    bool GetHttp2Enabled() const;

                    /**
                     * 判断参数 Http2Enabled 是否已赋值
                     * @return Http2Enabled 是否已赋值
                     * 
                     */
                    bool Http2EnabledHasBeenSet() const;

                    /**
                     * 获取<p>Specify the connection idle timeout period. Unit: seconds.</p>
                     * @return IdleTimeout <p>Specify the connection idle timeout period. Unit: seconds.</p>
                     * 
                     */
                    uint64_t GetIdleTimeout() const;

                    /**
                     * 判断参数 IdleTimeout 是否已赋值
                     * @return IdleTimeout 是否已赋值
                     * 
                     */
                    bool IdleTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>Listener ID, in the format of lst- followed by 8 alphanumeric characters.</p>
                     * @return ListenerId <p>Listener ID, in the format of lst- followed by 8 alphanumeric characters.</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取<p>Custom listener name.</p>
                     * @return ListenerName <p>Custom listener name.</p>
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取<p>Port used by the load balancing instance frontend.</p>
                     * @return ListenerPort <p>Port used by the load balancing instance frontend.</p>
                     * 
                     */
                    uint64_t GetListenerPort() const;

                    /**
                     * 判断参数 ListenerPort 是否已赋值
                     * @return ListenerPort 是否已赋值
                     * 
                     */
                    bool ListenerPortHasBeenSet() const;

                    /**
                     * 获取<p>Listening protocol.</p>
                     * @return ListenerProtocol <p>Listening protocol.</p>
                     * 
                     */
                    std::string GetListenerProtocol() const;

                    /**
                     * 判断参数 ListenerProtocol 是否已赋值
                     * @return ListenerProtocol 是否已赋值
                     * 
                     */
                    bool ListenerProtocolHasBeenSet() const;

                    /**
                     * 获取<p>Listener status. Value range:</p><ul><li><strong>Active</strong>: running.</li><li><strong>Provisioning</strong>: under creation.</li><li><strong>Configuring</strong>: changing.</li><li><strong>ProvisionFailed</strong>: creation failed</li></ul>
                     * @return ListenerStatus <p>Listener status. Value range:</p><ul><li><strong>Active</strong>: running.</li><li><strong>Provisioning</strong>: under creation.</li><li><strong>Configuring</strong>: changing.</li><li><strong>ProvisionFailed</strong>: creation failed</li></ul>
                     * 
                     */
                    std::string GetListenerStatus() const;

                    /**
                     * 判断参数 ListenerStatus 是否已赋值
                     * @return ListenerStatus 是否已赋值
                     * 
                     */
                    bool ListenerStatusHasBeenSet() const;

                    /**
                     * 获取<p>Cloud Load Balancer instance ID. The format is alb- followed by 8 alphanumeric characters.</p>
                     * @return LoadBalancerId <p>Cloud Load Balancer instance ID. The format is alb- followed by 8 alphanumeric characters.</p>
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取<p>Last change time of the listener instance. Format: ISO 8601 (for example, 2025-01-01T08:30:00+08:00)</p>
                     * @return ModifyTime <p>Last change time of the listener instance. Format: ISO 8601 (for example, 2025-01-01T08:30:00+08:00)</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>Connection request timeout period. Unit: seconds.</p>
                     * @return RequestTimeout <p>Connection request timeout period. Unit: seconds.</p>
                     * 
                     */
                    uint64_t GetRequestTimeout() const;

                    /**
                     * 判断参数 RequestTimeout 是否已赋值
                     * @return RequestTimeout 是否已赋值
                     * 
                     */
                    bool RequestTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>Security policy ID, format: tls- followed by 8 alphanumeric characters.</p>
                     * @return SecurityPolicyId <p>Security policy ID, format: tls- followed by 8 alphanumeric characters.</p>
                     * 
                     */
                    std::string GetSecurityPolicyId() const;

                    /**
                     * 判断参数 SecurityPolicyId 是否已赋值
                     * @return SecurityPolicyId 是否已赋值
                     * 
                     */
                    bool SecurityPolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>Tag.</p>
                     * @return Tags <p>Tag.</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>XForwardedFor configuration.</p>
                     * @return XForwardedForConfig <p>XForwardedFor configuration.</p>
                     * 
                     */
                    XForwardedForConfig GetXForwardedForConfig() const;

                    /**
                     * 判断参数 XForwardedForConfig 是否已赋值
                     * @return XForwardedForConfig 是否已赋值
                     * 
                     */
                    bool XForwardedForConfigHasBeenSet() const;

                private:

                    /**
                     * <p>List of CA certificate IDs bound to the listener.</p>
                     */
                    std::vector<std::string> m_caCertificateIds;
                    bool m_caCertificateIdsHasBeenSet;

                    /**
                     * <p>Whether to enable mutual authentication.</p>
                     */
                    bool m_caEnabled;
                    bool m_caEnabledHasBeenSet;

                    /**
                     * <p>List of server certificate IDs.</p>
                     */
                    std::vector<std::string> m_certificateIds;
                    bool m_certificateIdsHasBeenSet;

                    /**
                     * <p>Creation time of the listener instance. Format: ISO 8601 (for example, 2025-01-01T08:30:00+08:00)</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Action list of the rule.</p>
                     */
                    std::vector<DefaultAction> m_defaultActions;
                    bool m_defaultActionsHasBeenSet;

                    /**
                     * <p>Whether to enable Gzip compression.</p>
                     */
                    bool m_gzipEnabled;
                    bool m_gzipEnabledHasBeenSet;

                    /**
                     * <p>Whether to enable the HTTP/2 feature.</p>
                     */
                    bool m_http2Enabled;
                    bool m_http2EnabledHasBeenSet;

                    /**
                     * <p>Specify the connection idle timeout period. Unit: seconds.</p>
                     */
                    uint64_t m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                    /**
                     * <p>Listener ID, in the format of lst- followed by 8 alphanumeric characters.</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>Custom listener name.</p>
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * <p>Port used by the load balancing instance frontend.</p>
                     */
                    uint64_t m_listenerPort;
                    bool m_listenerPortHasBeenSet;

                    /**
                     * <p>Listening protocol.</p>
                     */
                    std::string m_listenerProtocol;
                    bool m_listenerProtocolHasBeenSet;

                    /**
                     * <p>Listener status. Value range:</p><ul><li><strong>Active</strong>: running.</li><li><strong>Provisioning</strong>: under creation.</li><li><strong>Configuring</strong>: changing.</li><li><strong>ProvisionFailed</strong>: creation failed</li></ul>
                     */
                    std::string m_listenerStatus;
                    bool m_listenerStatusHasBeenSet;

                    /**
                     * <p>Cloud Load Balancer instance ID. The format is alb- followed by 8 alphanumeric characters.</p>
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * <p>Last change time of the listener instance. Format: ISO 8601 (for example, 2025-01-01T08:30:00+08:00)</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>Connection request timeout period. Unit: seconds.</p>
                     */
                    uint64_t m_requestTimeout;
                    bool m_requestTimeoutHasBeenSet;

                    /**
                     * <p>Security policy ID, format: tls- followed by 8 alphanumeric characters.</p>
                     */
                    std::string m_securityPolicyId;
                    bool m_securityPolicyIdHasBeenSet;

                    /**
                     * <p>Tag.</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>XForwardedFor configuration.</p>
                     */
                    XForwardedForConfig m_xForwardedForConfig;
                    bool m_xForwardedForConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERDETAILRESPONSE_H_
