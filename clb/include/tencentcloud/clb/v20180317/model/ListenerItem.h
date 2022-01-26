/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_LISTENERITEM_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_LISTENERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/RulesItems.h>
#include <tencentcloud/clb/v20180317/model/LbRsTargets.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Querying the listener type
                */
                class ListenerItem : public AbstractModel
                {
                public:
                    ListenerItem();
                    ~ListenerItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Listener ID.
                     * @return ListenerId Listener ID.
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID.
                     * @param ListenerId Listener ID.
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取Listener protocol.
                     * @return Protocol Listener protocol.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Listener protocol.
                     * @param Protocol Listener protocol.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Listener port.
                     * @return Port Listener port.
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Listener port.
                     * @param Port Listener port.
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Bound rule.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Rules Bound rule.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<RulesItems> GetRules() const;

                    /**
                     * 设置Bound rule.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Rules Bound rule.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetRules(const std::vector<RulesItems>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取Object bound to the layer-4 listener.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Targets Object bound to the layer-4 listener.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<LbRsTargets> GetTargets() const;

                    /**
                     * 设置Object bound to the layer-4 listener.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Targets Object bound to the layer-4 listener.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTargets(const std::vector<LbRsTargets>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取End port of the listener.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return EndPort End port of the listener.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetEndPort() const;

                    /**
                     * 设置End port of the listener.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param EndPort End port of the listener.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEndPort(const int64_t& _endPort);

                    /**
                     * 判断参数 EndPort 是否已赋值
                     * @return EndPort 是否已赋值
                     */
                    bool EndPortHasBeenSet() const;

                private:

                    /**
                     * Listener ID.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Listener protocol.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Listener port.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Bound rule.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<RulesItems> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * Object bound to the layer-4 listener.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<LbRsTargets> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * End port of the listener.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_endPort;
                    bool m_endPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LISTENERITEM_H_
