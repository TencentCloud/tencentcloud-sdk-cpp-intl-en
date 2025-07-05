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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_LISTENER_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_LISTENER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/HealthCheck.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CLB listener
                */
                class Listener : public AbstractModel
                {
                public:
                    Listener();
                    ~Listener() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CLB listener ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ListenerId CLB listener ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置CLB listener ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _listenerId CLB listener ID
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Listener protocol
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Protocol Listener protocol
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Listener protocol
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _protocol Listener protocol
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Listener port.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Port Listener port.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Listener port.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _port Listener port.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Health check information of the listener
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HealthCheck Health check information of the listener
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置Health check information of the listener
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _healthCheck Health check information of the listener
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHealthCheck(const HealthCheck& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     * 
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取Request scheduling method
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Scheduler Request scheduling method
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置Request scheduling method
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _scheduler Request scheduling method
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     * 
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取Session persistence time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SessionExpireTime Session persistence time
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置Session persistence time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _sessionExpireTime Session persistence time
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Listener name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ListenerName Listener name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置Listener name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _listenerName Listener name
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Listener creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Listener creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Listener creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Listener creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Session type of the listener
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SessionType Session type of the listener
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSessionType() const;

                    /**
                     * 设置Session type of the listener
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _sessionType Session type of the listener
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSessionType(const std::string& _sessionType);

                    /**
                     * 判断参数 SessionType 是否已赋值
                     * @return SessionType 是否已赋值
                     * 
                     */
                    bool SessionTypeHasBeenSet() const;

                    /**
                     * 获取End port of the port range
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EndPort End port of the port range
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEndPort() const;

                    /**
                     * 设置End port of the port range
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _endPort End port of the port range
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndPort(const int64_t& _endPort);

                    /**
                     * 判断参数 EndPort 是否已赋值
                     * @return EndPort 是否已赋值
                     * 
                     */
                    bool EndPortHasBeenSet() const;

                private:

                    /**
                     * CLB listener ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Listener protocol
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Listener port.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Health check information of the listener
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * Request scheduling method
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * Session persistence time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * Listener name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * Listener creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Session type of the listener
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sessionType;
                    bool m_sessionTypeHasBeenSet;

                    /**
                     * End port of the port range
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_endPort;
                    bool m_endPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_LISTENER_H_
