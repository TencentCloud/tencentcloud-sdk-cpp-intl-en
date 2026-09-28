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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYLISTENERATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYLISTENERATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/DefaultAction.h>
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
                * ModifyListenerAttributes request structure.
                */
                class ModifyListenerAttributesRequest : public AbstractModel
                {
                public:
                    ModifyListenerAttributesRequest();
                    ~ModifyListenerAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Listener ID, format: lst- followed by 8 alphanumeric characters.
                     * @return ListenerId Listener ID, format: lst- followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID, format: lst- followed by 8 alphanumeric characters.
                     * @param _listenerId Listener ID, format: lst- followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取Cloud Load Balancer instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     * @return LoadBalancerId Cloud Load Balancer instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置Cloud Load Balancer instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     * @param _loadBalancerId Cloud Load Balancer instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取CA certificate ID list for the listener configuration. Currently only support adding 1 CA certificate.
                     * @return CaCertificateIds CA certificate ID list for the listener configuration. Currently only support adding 1 CA certificate.
                     * 
                     */
                    std::vector<std::string> GetCaCertificateIds() const;

                    /**
                     * 设置CA certificate ID list for the listener configuration. Currently only support adding 1 CA certificate.
                     * @param _caCertificateIds CA certificate ID list for the listener configuration. Currently only support adding 1 CA certificate.
                     * 
                     */
                    void SetCaCertificateIds(const std::vector<std::string>& _caCertificateIds);

                    /**
                     * 判断参数 CaCertificateIds 是否已赋值
                     * @return CaCertificateIds 是否已赋值
                     * 
                     */
                    bool CaCertificateIdsHasBeenSet() const;

                    /**
                     * 获取Whether mutual authentication is enabled.
Valid values:
true: enabled.
false (default value): not enabled.
                     * @return CaEnabled Whether mutual authentication is enabled.
Valid values:
true: enabled.
false (default value): not enabled.
                     * 
                     */
                    bool GetCaEnabled() const;

                    /**
                     * 设置Whether mutual authentication is enabled.
Valid values:
true: enabled.
false (default value): not enabled.
                     * @param _caEnabled Whether mutual authentication is enabled.
Valid values:
true: enabled.
false (default value): not enabled.
                     * 
                     */
                    void SetCaEnabled(const bool& _caEnabled);

                    /**
                     * 判断参数 CaEnabled 是否已赋值
                     * @return CaEnabled 是否已赋值
                     * 
                     */
                    bool CaEnabledHasBeenSet() const;

                    /**
                     * 获取List of server certificate IDs.
                     * @return CertificateIds List of server certificate IDs.
                     * 
                     */
                    std::vector<std::string> GetCertificateIds() const;

                    /**
                     * 设置List of server certificate IDs.
                     * @param _certificateIds List of server certificate IDs.
                     * 
                     */
                    void SetCertificateIds(const std::vector<std::string>& _certificateIds);

                    /**
                     * 判断参数 CertificateIds 是否已赋值
                     * @return CertificateIds 是否已赋值
                     * 
                     */
                    bool CertificateIdsHasBeenSet() const;

                    /**
                     * 获取Client Token, used for ensuring request idempotency.  

Generate a parameter value from your client to underwrite the uniqueness of the value for different requests. ClientToken supports only ASCII characters.
                     * @return ClientToken Client Token, used for ensuring request idempotency.  

Generate a parameter value from your client to underwrite the uniqueness of the value for different requests. ClientToken supports only ASCII characters.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置Client Token, used for ensuring request idempotency.  

Generate a parameter value from your client to underwrite the uniqueness of the value for different requests. ClientToken supports only ASCII characters.
                     * @param _clientToken Client Token, used for ensuring request idempotency.  

Generate a parameter value from your client to underwrite the uniqueness of the value for different requests. ClientToken supports only ASCII characters.
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取List of default forward rule actions. Currently, a listener supports adding only 1 default forward rule action.
                     * @return DefaultActions List of default forward rule actions. Currently, a listener supports adding only 1 default forward rule action.
                     * 
                     */
                    std::vector<DefaultAction> GetDefaultActions() const;

                    /**
                     * 设置List of default forward rule actions. Currently, a listener supports adding only 1 default forward rule action.
                     * @param _defaultActions List of default forward rule actions. Currently, a listener supports adding only 1 default forward rule action.
                     * 
                     */
                    void SetDefaultActions(const std::vector<DefaultAction>& _defaultActions);

                    /**
                     * 判断参数 DefaultActions 是否已赋值
                     * @return DefaultActions 是否已赋值
                     * 
                     */
                    bool DefaultActionsHasBeenSet() const;

                    /**
                     * 获取Whether to enable Gzip compression.
                     * @return GzipEnabled Whether to enable Gzip compression.
                     * 
                     */
                    bool GetGzipEnabled() const;

                    /**
                     * 设置Whether to enable Gzip compression.
                     * @param _gzipEnabled Whether to enable Gzip compression.
                     * 
                     */
                    void SetGzipEnabled(const bool& _gzipEnabled);

                    /**
                     * 判断参数 GzipEnabled 是否已赋值
                     * @return GzipEnabled 是否已赋值
                     * 
                     */
                    bool GzipEnabledHasBeenSet() const;

                    /**
                     * 获取Whether to enable HTTP/2. Only HTTPS protocol supports this parameter.
                     * @return Http2Enabled Whether to enable HTTP/2. Only HTTPS protocol supports this parameter.
                     * 
                     */
                    bool GetHttp2Enabled() const;

                    /**
                     * 设置Whether to enable HTTP/2. Only HTTPS protocol supports this parameter.
                     * @param _http2Enabled Whether to enable HTTP/2. Only HTTPS protocol supports this parameter.
                     * 
                     */
                    void SetHttp2Enabled(const bool& _http2Enabled);

                    /**
                     * 判断参数 Http2Enabled 是否已赋值
                     * @return Http2Enabled 是否已赋值
                     * 
                     */
                    bool Http2EnabledHasBeenSet() const;

                    /**
                     * 获取Specify the idle timeout for a connection. Unit: seconds.
Valid values: 1-600.
Default value: 15.
If no access request is received within the set time, load balancing will temporarily disconnect the current connection and reestablish a new connection when the next request arrives.
                     * @return IdleTimeout Specify the idle timeout for a connection. Unit: seconds.
Valid values: 1-600.
Default value: 15.
If no access request is received within the set time, load balancing will temporarily disconnect the current connection and reestablish a new connection when the next request arrives.
                     * 
                     */
                    uint64_t GetIdleTimeout() const;

                    /**
                     * 设置Specify the idle timeout for a connection. Unit: seconds.
Valid values: 1-600.
Default value: 15.
If no access request is received within the set time, load balancing will temporarily disconnect the current connection and reestablish a new connection when the next request arrives.
                     * @param _idleTimeout Specify the idle timeout for a connection. Unit: seconds.
Valid values: 1-600.
Default value: 15.
If no access request is received within the set time, load balancing will temporarily disconnect the current connection and reestablish a new connection when the next request arrives.
                     * 
                     */
                    void SetIdleTimeout(const uint64_t& _idleTimeout);

                    /**
                     * 判断参数 IdleTimeout 是否已赋值
                     * @return IdleTimeout 是否已赋值
                     * 
                     */
                    bool IdleTimeoutHasBeenSet() const;

                    /**
                     * 获取Custom listener name, 1–255 characters in length. It must contain Chinese and harmless string characters, and can contain Chinese, letters, digits, dashes (-), forward slashes (/), half-width periods (.), and underscores (_).
                     * @return ListenerName Custom listener name, 1–255 characters in length. It must contain Chinese and harmless string characters, and can contain Chinese, letters, digits, dashes (-), forward slashes (/), half-width periods (.), and underscores (_).
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置Custom listener name, 1–255 characters in length. It must contain Chinese and harmless string characters, and can contain Chinese, letters, digits, dashes (-), forward slashes (/), half-width periods (.), and underscores (_).
                     * @param _listenerName Custom listener name, 1–255 characters in length. It must contain Chinese and harmless string characters, and can contain Chinese, letters, digits, dashes (-), forward slashes (/), half-width periods (.), and underscores (_).
                     * 
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取Specify the request timeout. Unit: seconds.
Value: 1-600.
Default value: 60.
If the real server does not respond within the timeout period, load balancing will abandon waiting and return an HTTP 504 error code to the client.
                     * @return RequestTimeout Specify the request timeout. Unit: seconds.
Value: 1-600.
Default value: 60.
If the real server does not respond within the timeout period, load balancing will abandon waiting and return an HTTP 504 error code to the client.
                     * 
                     */
                    uint64_t GetRequestTimeout() const;

                    /**
                     * 设置Specify the request timeout. Unit: seconds.
Value: 1-600.
Default value: 60.
If the real server does not respond within the timeout period, load balancing will abandon waiting and return an HTTP 504 error code to the client.
                     * @param _requestTimeout Specify the request timeout. Unit: seconds.
Value: 1-600.
Default value: 60.
If the real server does not respond within the timeout period, load balancing will abandon waiting and return an HTTP 504 error code to the client.
                     * 
                     */
                    void SetRequestTimeout(const uint64_t& _requestTimeout);

                    /**
                     * 判断参数 RequestTimeout 是否已赋值
                     * @return RequestTimeout 是否已赋值
                     * 
                     */
                    bool RequestTimeoutHasBeenSet() const;

                    /**
                     * 获取Security policy ID in the format of tls- followed by 8 alphanumeric characters.
                     * @return SecurityPolicyId Security policy ID in the format of tls- followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetSecurityPolicyId() const;

                    /**
                     * 设置Security policy ID in the format of tls- followed by 8 alphanumeric characters.
                     * @param _securityPolicyId Security policy ID in the format of tls- followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetSecurityPolicyId(const std::string& _securityPolicyId);

                    /**
                     * 判断参数 SecurityPolicyId 是否已赋值
                     * @return SecurityPolicyId 是否已赋值
                     * 
                     */
                    bool SecurityPolicyIdHasBeenSet() const;

                    /**
                     * 获取XForwardedFor configuration.
                     * @return XForwardedForConfig XForwardedFor configuration.
                     * 
                     */
                    XForwardedForConfig GetXForwardedForConfig() const;

                    /**
                     * 设置XForwardedFor configuration.
                     * @param _xForwardedForConfig XForwardedFor configuration.
                     * 
                     */
                    void SetXForwardedForConfig(const XForwardedForConfig& _xForwardedForConfig);

                    /**
                     * 判断参数 XForwardedForConfig 是否已赋值
                     * @return XForwardedForConfig 是否已赋值
                     * 
                     */
                    bool XForwardedForConfigHasBeenSet() const;

                private:

                    /**
                     * Listener ID, format: lst- followed by 8 alphanumeric characters.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Cloud Load Balancer instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * CA certificate ID list for the listener configuration. Currently only support adding 1 CA certificate.
                     */
                    std::vector<std::string> m_caCertificateIds;
                    bool m_caCertificateIdsHasBeenSet;

                    /**
                     * Whether mutual authentication is enabled.
Valid values:
true: enabled.
false (default value): not enabled.
                     */
                    bool m_caEnabled;
                    bool m_caEnabledHasBeenSet;

                    /**
                     * List of server certificate IDs.
                     */
                    std::vector<std::string> m_certificateIds;
                    bool m_certificateIdsHasBeenSet;

                    /**
                     * Client Token, used for ensuring request idempotency.  

Generate a parameter value from your client to underwrite the uniqueness of the value for different requests. ClientToken supports only ASCII characters.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * List of default forward rule actions. Currently, a listener supports adding only 1 default forward rule action.
                     */
                    std::vector<DefaultAction> m_defaultActions;
                    bool m_defaultActionsHasBeenSet;

                    /**
                     * Whether to enable Gzip compression.
                     */
                    bool m_gzipEnabled;
                    bool m_gzipEnabledHasBeenSet;

                    /**
                     * Whether to enable HTTP/2. Only HTTPS protocol supports this parameter.
                     */
                    bool m_http2Enabled;
                    bool m_http2EnabledHasBeenSet;

                    /**
                     * Specify the idle timeout for a connection. Unit: seconds.
Valid values: 1-600.
Default value: 15.
If no access request is received within the set time, load balancing will temporarily disconnect the current connection and reestablish a new connection when the next request arrives.
                     */
                    uint64_t m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                    /**
                     * Custom listener name, 1–255 characters in length. It must contain Chinese and harmless string characters, and can contain Chinese, letters, digits, dashes (-), forward slashes (/), half-width periods (.), and underscores (_).
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * Specify the request timeout. Unit: seconds.
Value: 1-600.
Default value: 60.
If the real server does not respond within the timeout period, load balancing will abandon waiting and return an HTTP 504 error code to the client.
                     */
                    uint64_t m_requestTimeout;
                    bool m_requestTimeoutHasBeenSet;

                    /**
                     * Security policy ID in the format of tls- followed by 8 alphanumeric characters.
                     */
                    std::string m_securityPolicyId;
                    bool m_securityPolicyIdHasBeenSet;

                    /**
                     * XForwardedFor configuration.
                     */
                    XForwardedForConfig m_xForwardedForConfig;
                    bool m_xForwardedForConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYLISTENERATTRIBUTESREQUEST_H_
