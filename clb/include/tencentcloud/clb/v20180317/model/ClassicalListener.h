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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CLASSICALLISTENER_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CLASSICALLISTENER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Classic CLB listener information
                */
                class ClassicalListener : public AbstractModel
                {
                public:
                    ClassicalListener();
                    ~ClassicalListener() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>CLB listener ID</p>
                     * @return ListenerId <p>CLB listener ID</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>CLB listener ID</p>
                     * @param _listenerId <p>CLB listener ID</p>
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
                     * 获取<p>CLB listener port</p>
                     * @return ListenerPort <p>CLB listener port</p>
                     * 
                     */
                    int64_t GetListenerPort() const;

                    /**
                     * 设置<p>CLB listener port</p>
                     * @param _listenerPort <p>CLB listener port</p>
                     * 
                     */
                    void SetListenerPort(const int64_t& _listenerPort);

                    /**
                     * 判断参数 ListenerPort 是否已赋值
                     * @return ListenerPort 是否已赋值
                     * 
                     */
                    bool ListenerPortHasBeenSet() const;

                    /**
                     * 获取<p>listener backend forwarding port</p>
                     * @return InstancePort <p>listener backend forwarding port</p>
                     * 
                     */
                    int64_t GetInstancePort() const;

                    /**
                     * 设置<p>listener backend forwarding port</p>
                     * @param _instancePort <p>listener backend forwarding port</p>
                     * 
                     */
                    void SetInstancePort(const int64_t& _instancePort);

                    /**
                     * 判断参数 InstancePort 是否已赋值
                     * @return InstancePort 是否已赋值
                     * 
                     */
                    bool InstancePortHasBeenSet() const;

                    /**
                     * 获取<p>Listener name</p>
                     * @return ListenerName <p>Listener name</p>
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置<p>Listener name</p>
                     * @param _listenerName <p>Listener name</p>
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
                     * 获取<p>Listener protocol type</p>
                     * @return Protocol <p>Listener protocol type</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>Listener protocol type</p>
                     * @param _protocol <p>Listener protocol type</p>
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
                     * 获取<p>Session persistence time</p>
                     * @return SessionExpire <p>Session persistence time</p>
                     * 
                     */
                    int64_t GetSessionExpire() const;

                    /**
                     * 设置<p>Session persistence time</p>
                     * @param _sessionExpire <p>Session persistence time</p>
                     * 
                     */
                    void SetSessionExpire(const int64_t& _sessionExpire);

                    /**
                     * 判断参数 SessionExpire 是否已赋值
                     * @return SessionExpire 是否已赋值
                     * 
                     */
                    bool SessionExpireHasBeenSet() const;

                    /**
                     * 获取<p>Whether health check is enabled: 1 (enabled), 0 (disabled)</p>
                     * @return HealthSwitch <p>Whether health check is enabled: 1 (enabled), 0 (disabled)</p>
                     * 
                     */
                    int64_t GetHealthSwitch() const;

                    /**
                     * 设置<p>Whether health check is enabled: 1 (enabled), 0 (disabled)</p>
                     * @param _healthSwitch <p>Whether health check is enabled: 1 (enabled), 0 (disabled)</p>
                     * 
                     */
                    void SetHealthSwitch(const int64_t& _healthSwitch);

                    /**
                     * 判断参数 HealthSwitch 是否已赋值
                     * @return HealthSwitch 是否已赋值
                     * 
                     */
                    bool HealthSwitchHasBeenSet() const;

                    /**
                     * 获取<p>Response timeout</p><p>Unit: second</p>
                     * @return TimeOut <p>Response timeout</p><p>Unit: second</p>
                     * 
                     */
                    int64_t GetTimeOut() const;

                    /**
                     * 设置<p>Response timeout</p><p>Unit: second</p>
                     * @param _timeOut <p>Response timeout</p><p>Unit: second</p>
                     * 
                     */
                    void SetTimeOut(const int64_t& _timeOut);

                    /**
                     * 判断参数 TimeOut 是否已赋值
                     * @return TimeOut 是否已赋值
                     * 
                     */
                    bool TimeOutHasBeenSet() const;

                    /**
                     * 获取<p>Check interval</p><p>Unit: seconds</p>
                     * @return IntervalTime <p>Check interval</p><p>Unit: seconds</p>
                     * 
                     */
                    int64_t GetIntervalTime() const;

                    /**
                     * 设置<p>Check interval</p><p>Unit: seconds</p>
                     * @param _intervalTime <p>Check interval</p><p>Unit: seconds</p>
                     * 
                     */
                    void SetIntervalTime(const int64_t& _intervalTime);

                    /**
                     * 判断参数 IntervalTime 是否已赋值
                     * @return IntervalTime 是否已赋值
                     * 
                     */
                    bool IntervalTimeHasBeenSet() const;

                    /**
                     * 获取<p>Health threshold</p>
                     * @return HealthNum <p>Health threshold</p>
                     * 
                     */
                    int64_t GetHealthNum() const;

                    /**
                     * 设置<p>Health threshold</p>
                     * @param _healthNum <p>Health threshold</p>
                     * 
                     */
                    void SetHealthNum(const int64_t& _healthNum);

                    /**
                     * 判断参数 HealthNum 是否已赋值
                     * @return HealthNum 是否已赋值
                     * 
                     */
                    bool HealthNumHasBeenSet() const;

                    /**
                     * 获取<p>Unhealthy threshold</p>
                     * @return UnhealthNum <p>Unhealthy threshold</p>
                     * 
                     */
                    int64_t GetUnhealthNum() const;

                    /**
                     * 设置<p>Unhealthy threshold</p>
                     * @param _unhealthNum <p>Unhealthy threshold</p>
                     * 
                     */
                    void SetUnhealthNum(const int64_t& _unhealthNum);

                    /**
                     * 判断参数 UnhealthNum 是否已赋值
                     * @return UnhealthNum 是否已赋值
                     * 
                     */
                    bool UnhealthNumHasBeenSet() const;

                    /**
                     * 获取<p>Request balancing method for listeners of the classic public network CLB. An empty string or wrr indicates weighted round robin. ip_hash indicates consistent hashing based on the accessed source IP address. least_conn indicates least connections.</p>
                     * @return HttpHash <p>Request balancing method for listeners of the classic public network CLB. An empty string or wrr indicates weighted round robin. ip_hash indicates consistent hashing based on the accessed source IP address. least_conn indicates least connections.</p>
                     * 
                     */
                    std::string GetHttpHash() const;

                    /**
                     * 设置<p>Request balancing method for listeners of the classic public network CLB. An empty string or wrr indicates weighted round robin. ip_hash indicates consistent hashing based on the accessed source IP address. least_conn indicates least connections.</p>
                     * @param _httpHash <p>Request balancing method for listeners of the classic public network CLB. An empty string or wrr indicates weighted round robin. ip_hash indicates consistent hashing based on the accessed source IP address. least_conn indicates least connections.</p>
                     * 
                     */
                    void SetHttpHash(const std::string& _httpHash);

                    /**
                     * 判断参数 HttpHash 是否已赋值
                     * @return HttpHash 是否已赋值
                     * 
                     */
                    bool HttpHashHasBeenSet() const;

                    /**
                     * 获取<p>Health check return code of HTTP and HTTPS listeners for public network CLB. For details, see the explanation of this field in listener creation API.</p>
                     * @return HttpCode <p>Health check return code of HTTP and HTTPS listeners for public network CLB. For details, see the explanation of this field in listener creation API.</p>
                     * 
                     */
                    int64_t GetHttpCode() const;

                    /**
                     * 设置<p>Health check return code of HTTP and HTTPS listeners for public network CLB. For details, see the explanation of this field in listener creation API.</p>
                     * @param _httpCode <p>Health check return code of HTTP and HTTPS listeners for public network CLB. For details, see the explanation of this field in listener creation API.</p>
                     * 
                     */
                    void SetHttpCode(const int64_t& _httpCode);

                    /**
                     * 判断参数 HttpCode 是否已赋值
                     * @return HttpCode 是否已赋值
                     * 
                     */
                    bool HttpCodeHasBeenSet() const;

                    /**
                     * 获取<p>Health check path of HTTP and HTTPS listeners for public network CLB</p>
                     * @return HttpCheckPath <p>Health check path of HTTP and HTTPS listeners for public network CLB</p>
                     * 
                     */
                    std::string GetHttpCheckPath() const;

                    /**
                     * 设置<p>Health check path of HTTP and HTTPS listeners for public network CLB</p>
                     * @param _httpCheckPath <p>Health check path of HTTP and HTTPS listeners for public network CLB</p>
                     * 
                     */
                    void SetHttpCheckPath(const std::string& _httpCheckPath);

                    /**
                     * 判断参数 HttpCheckPath 是否已赋值
                     * @return HttpCheckPath 是否已赋值
                     * 
                     */
                    bool HttpCheckPathHasBeenSet() const;

                    /**
                     * 获取<p>Authentication method of the HTTPS listener for public network CLB</p>
                     * @return SSLMode <p>Authentication method of the HTTPS listener for public network CLB</p>
                     * 
                     */
                    std::string GetSSLMode() const;

                    /**
                     * 设置<p>Authentication method of the HTTPS listener for public network CLB</p>
                     * @param _sSLMode <p>Authentication method of the HTTPS listener for public network CLB</p>
                     * 
                     */
                    void SetSSLMode(const std::string& _sSLMode);

                    /**
                     * 判断参数 SSLMode 是否已赋值
                     * @return SSLMode 是否已赋值
                     * 
                     */
                    bool SSLModeHasBeenSet() const;

                    /**
                     * 获取<p>Server certificate ID of the HTTPS listener for the public network CLB</p>
                     * @return CertId <p>Server certificate ID of the HTTPS listener for the public network CLB</p>
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置<p>Server certificate ID of the HTTPS listener for the public network CLB</p>
                     * @param _certId <p>Server certificate ID of the HTTPS listener for the public network CLB</p>
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取<p>Client certificate ID of the HTTPS listener for public network CLB</p>
                     * @return CertCaId <p>Client certificate ID of the HTTPS listener for public network CLB</p>
                     * 
                     */
                    std::string GetCertCaId() const;

                    /**
                     * 设置<p>Client certificate ID of the HTTPS listener for public network CLB</p>
                     * @param _certCaId <p>Client certificate ID of the HTTPS listener for public network CLB</p>
                     * 
                     */
                    void SetCertCaId(const std::string& _certCaId);

                    /**
                     * 判断参数 CertCaId 是否已赋值
                     * @return CertCaId 是否已赋值
                     * 
                     */
                    bool CertCaIdHasBeenSet() const;

                    /**
                     * 获取<p>Listener status. 0 indicates creating in progress, 1 indicates running.</p>
                     * @return Status <p>Listener status. 0 indicates creating in progress, 1 indicates running.</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Listener status. 0 indicates creating in progress, 1 indicates running.</p>
                     * @param _status <p>Listener status. 0 indicates creating in progress, 1 indicates running.</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>CLB listener ID</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>CLB listener port</p>
                     */
                    int64_t m_listenerPort;
                    bool m_listenerPortHasBeenSet;

                    /**
                     * <p>listener backend forwarding port</p>
                     */
                    int64_t m_instancePort;
                    bool m_instancePortHasBeenSet;

                    /**
                     * <p>Listener name</p>
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * <p>Listener protocol type</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>Session persistence time</p>
                     */
                    int64_t m_sessionExpire;
                    bool m_sessionExpireHasBeenSet;

                    /**
                     * <p>Whether health check is enabled: 1 (enabled), 0 (disabled)</p>
                     */
                    int64_t m_healthSwitch;
                    bool m_healthSwitchHasBeenSet;

                    /**
                     * <p>Response timeout</p><p>Unit: second</p>
                     */
                    int64_t m_timeOut;
                    bool m_timeOutHasBeenSet;

                    /**
                     * <p>Check interval</p><p>Unit: seconds</p>
                     */
                    int64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * <p>Health threshold</p>
                     */
                    int64_t m_healthNum;
                    bool m_healthNumHasBeenSet;

                    /**
                     * <p>Unhealthy threshold</p>
                     */
                    int64_t m_unhealthNum;
                    bool m_unhealthNumHasBeenSet;

                    /**
                     * <p>Request balancing method for listeners of the classic public network CLB. An empty string or wrr indicates weighted round robin. ip_hash indicates consistent hashing based on the accessed source IP address. least_conn indicates least connections.</p>
                     */
                    std::string m_httpHash;
                    bool m_httpHashHasBeenSet;

                    /**
                     * <p>Health check return code of HTTP and HTTPS listeners for public network CLB. For details, see the explanation of this field in listener creation API.</p>
                     */
                    int64_t m_httpCode;
                    bool m_httpCodeHasBeenSet;

                    /**
                     * <p>Health check path of HTTP and HTTPS listeners for public network CLB</p>
                     */
                    std::string m_httpCheckPath;
                    bool m_httpCheckPathHasBeenSet;

                    /**
                     * <p>Authentication method of the HTTPS listener for public network CLB</p>
                     */
                    std::string m_sSLMode;
                    bool m_sSLModeHasBeenSet;

                    /**
                     * <p>Server certificate ID of the HTTPS listener for the public network CLB</p>
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * <p>Client certificate ID of the HTTPS listener for public network CLB</p>
                     */
                    std::string m_certCaId;
                    bool m_certCaIdHasBeenSet;

                    /**
                     * <p>Listener status. 0 indicates creating in progress, 1 indicates running.</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CLASSICALLISTENER_H_
