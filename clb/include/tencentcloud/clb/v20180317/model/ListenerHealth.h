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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_LISTENERHEALTH_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_LISTENERHEALTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/RuleHealth.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Health check information of the listener
                */
                class ListenerHealth : public AbstractModel
                {
                public:
                    ListenerHealth();
                    ~ListenerHealth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Listener ID
                     * @return ListenerId Listener ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID
                     * @param _listenerId Listener ID
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
                     * 获取Listener name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ListenerName Listener name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置Listener name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _listenerName Listener name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Listener protocol
                     * @return Protocol Listener protocol
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Listener protocol
                     * @param _protocol Listener protocol
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
                     * 获取Listener port
                     * @return Port Listener port
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Listener port
                     * @param _port Listener port
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
                     * 获取List of forwarding rules of the listener
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Rules List of forwarding rules of the listener
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<RuleHealth> GetRules() const;

                    /**
                     * 设置List of forwarding rules of the listener
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rules List of forwarding rules of the listener
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRules(const std::vector<RuleHealth>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * Listener ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Listener name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * Listener protocol
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Listener port
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * List of forwarding rules of the listener
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RuleHealth> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LISTENERHEALTH_H_
