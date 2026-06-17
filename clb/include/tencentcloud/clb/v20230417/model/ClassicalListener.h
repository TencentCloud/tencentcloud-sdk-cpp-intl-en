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

#ifndef TENCENTCLOUD_CLB_V20230417_MODEL_CLASSICALLISTENER_H_
#define TENCENTCLOUD_CLB_V20230417_MODEL_CLASSICALLISTENER_H_

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
        namespace V20230417
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
                     * 获取CLB listener ID
                     * @return ListenerId CLB listener ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置CLB listener ID
                     * @param _listenerId CLB listener ID
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
                     * 获取CLB listener port
                     * @return ListenerPort CLB listener port
                     * 
                     */
                    int64_t GetListenerPort() const;

                    /**
                     * 设置CLB listener port
                     * @param _listenerPort CLB listener port
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
                     * 获取Listener backend forwarding port
                     * @return InstancePort Listener backend forwarding port
                     * 
                     */
                    int64_t GetInstancePort() const;

                    /**
                     * 设置Listener backend forwarding port
                     * @param _instancePort Listener backend forwarding port
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
                     * 获取listener name
                     * @return ListenerName listener name
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置listener name
                     * @param _listenerName listener name
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
                     * 获取Listener protocol type
                     * @return Protocol Listener protocol type
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Listener protocol type
                     * @param _protocol Listener protocol type
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
                     * 获取Session hold time
                     * @return SessionExpire Session hold time
                     * 
                     */
                    int64_t GetSessionExpire() const;

                    /**
                     * 设置Session hold time
                     * @param _sessionExpire Session hold time
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
                     * 获取Whether health check is enabled. 1: Enabled; 0: Disabled
                     * @return HealthSwitch Whether health check is enabled. 1: Enabled; 0: Disabled
                     * 
                     */
                    int64_t GetHealthSwitch() const;

                    /**
                     * 设置Whether health check is enabled. 1: Enabled; 0: Disabled
                     * @param _healthSwitch Whether health check is enabled. 1: Enabled; 0: Disabled
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
                     * 获取Response timeout duration
                     * @return TimeOut Response timeout duration
                     * 
                     */
                    int64_t GetTimeOut() const;

                    /**
                     * 设置Response timeout duration
                     * @param _timeOut Response timeout duration
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
                     * 获取check interval
                     * @return IntervalTime check interval
                     * 
                     */
                    int64_t GetIntervalTime() const;

                    /**
                     * 设置check interval
                     * @param _intervalTime check interval
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
                     * 获取health threshold
                     * @return HealthNum health threshold
                     * 
                     */
                    int64_t GetHealthNum() const;

                    /**
                     * 设置health threshold
                     * @param _healthNum health threshold
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
                     * 获取unhealthy threshold
                     * @return AbnormalNum unhealthy threshold
                     * 
                     */
                    int64_t GetAbnormalNum() const;

                    /**
                     * 设置unhealthy threshold
                     * @param _abnormalNum unhealthy threshold
                     * 
                     */
                    void SetAbnormalNum(const int64_t& _abnormalNum);

                    /**
                     * 判断参数 AbnormalNum 是否已赋值
                     * @return AbnormalNum 是否已赋值
                     * 
                     */
                    bool AbnormalNumHasBeenSet() const;

                    /**
                     * 获取Request balancing method for listeners of the classic public network CLB. An empty string or wrr indicates weighted round robin. ip_hash indicates consistent hashing based on the accessed source IP address. least_conn indicates least connections.
                     * @return HttpHash Request balancing method for listeners of the classic public network CLB. An empty string or wrr indicates weighted round robin. ip_hash indicates consistent hashing based on the accessed source IP address. least_conn indicates least connections.
                     * 
                     */
                    std::string GetHttpHash() const;

                    /**
                     * 设置Request balancing method for listeners of the classic public network CLB. An empty string or wrr indicates weighted round robin. ip_hash indicates consistent hashing based on the accessed source IP address. least_conn indicates least connections.
                     * @param _httpHash Request balancing method for listeners of the classic public network CLB. An empty string or wrr indicates weighted round robin. ip_hash indicates consistent hashing based on the accessed source IP address. least_conn indicates least connections.
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
                     * 获取Health check return code for HTTP and HTTPS listeners of a public network Classic CLB instance. For more information, refer to the explanation of this field in the listener creation API.
                     * @return HttpCode Health check return code for HTTP and HTTPS listeners of a public network Classic CLB instance. For more information, refer to the explanation of this field in the listener creation API.
                     * 
                     */
                    int64_t GetHttpCode() const;

                    /**
                     * 设置Health check return code for HTTP and HTTPS listeners of a public network Classic CLB instance. For more information, refer to the explanation of this field in the listener creation API.
                     * @param _httpCode Health check return code for HTTP and HTTPS listeners of a public network Classic CLB instance. For more information, refer to the explanation of this field in the listener creation API.
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
                     * 获取Health check path for HTTP and HTTPS listeners of a public network Classic CLB instance
                     * @return HttpCheckPath Health check path for HTTP and HTTPS listeners of a public network Classic CLB instance
                     * 
                     */
                    std::string GetHttpCheckPath() const;

                    /**
                     * 设置Health check path for HTTP and HTTPS listeners of a public network Classic CLB instance
                     * @param _httpCheckPath Health check path for HTTP and HTTPS listeners of a public network Classic CLB instance
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
                     * 获取Authentication method for an HTTPS listener of a public network Classic CLB instance
                     * @return SSLMode Authentication method for an HTTPS listener of a public network Classic CLB instance
                     * 
                     */
                    std::string GetSSLMode() const;

                    /**
                     * 设置Authentication method for an HTTPS listener of a public network Classic CLB instance
                     * @param _sSLMode Authentication method for an HTTPS listener of a public network Classic CLB instance
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
                     * 获取Server certificate ID for an HTTPS listener of a public network Classic CLB instance
                     * @return CertId Server certificate ID for an HTTPS listener of a public network Classic CLB instance
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置Server certificate ID for an HTTPS listener of a public network Classic CLB instance
                     * @param _certId Server certificate ID for an HTTPS listener of a public network Classic CLB instance
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
                     * 获取Client certificate ID for an HTTPS listener of a public network Classic CLB instance
                     * @return CertCaId Client certificate ID for an HTTPS listener of a public network Classic CLB instance
                     * 
                     */
                    std::string GetCertCaId() const;

                    /**
                     * 设置Client certificate ID for an HTTPS listener of a public network Classic CLB instance
                     * @param _certCaId Client certificate ID for an HTTPS listener of a public network Classic CLB instance
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
                     * 获取Listener status. 0: Creating; 1: Running
                     * @return Status Listener status. 0: Creating; 1: Running
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Listener status. 0: Creating; 1: Running
                     * @param _status Listener status. 0: Creating; 1: Running
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
                     * CLB listener ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * CLB listener port
                     */
                    int64_t m_listenerPort;
                    bool m_listenerPortHasBeenSet;

                    /**
                     * Listener backend forwarding port
                     */
                    int64_t m_instancePort;
                    bool m_instancePortHasBeenSet;

                    /**
                     * listener name
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * Listener protocol type
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Session hold time
                     */
                    int64_t m_sessionExpire;
                    bool m_sessionExpireHasBeenSet;

                    /**
                     * Whether health check is enabled. 1: Enabled; 0: Disabled
                     */
                    int64_t m_healthSwitch;
                    bool m_healthSwitchHasBeenSet;

                    /**
                     * Response timeout duration
                     */
                    int64_t m_timeOut;
                    bool m_timeOutHasBeenSet;

                    /**
                     * check interval
                     */
                    int64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * health threshold
                     */
                    int64_t m_healthNum;
                    bool m_healthNumHasBeenSet;

                    /**
                     * unhealthy threshold
                     */
                    int64_t m_abnormalNum;
                    bool m_abnormalNumHasBeenSet;

                    /**
                     * Request balancing method for listeners of the classic public network CLB. An empty string or wrr indicates weighted round robin. ip_hash indicates consistent hashing based on the accessed source IP address. least_conn indicates least connections.
                     */
                    std::string m_httpHash;
                    bool m_httpHashHasBeenSet;

                    /**
                     * Health check return code for HTTP and HTTPS listeners of a public network Classic CLB instance. For more information, refer to the explanation of this field in the listener creation API.
                     */
                    int64_t m_httpCode;
                    bool m_httpCodeHasBeenSet;

                    /**
                     * Health check path for HTTP and HTTPS listeners of a public network Classic CLB instance
                     */
                    std::string m_httpCheckPath;
                    bool m_httpCheckPathHasBeenSet;

                    /**
                     * Authentication method for an HTTPS listener of a public network Classic CLB instance
                     */
                    std::string m_sSLMode;
                    bool m_sSLModeHasBeenSet;

                    /**
                     * Server certificate ID for an HTTPS listener of a public network Classic CLB instance
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Client certificate ID for an HTTPS listener of a public network Classic CLB instance
                     */
                    std::string m_certCaId;
                    bool m_certCaIdHasBeenSet;

                    /**
                     * Listener status. 0: Creating; 1: Running
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20230417_MODEL_CLASSICALLISTENER_H_
