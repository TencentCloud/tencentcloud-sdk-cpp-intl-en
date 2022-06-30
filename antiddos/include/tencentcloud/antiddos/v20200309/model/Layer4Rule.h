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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_LAYER4RULE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_LAYER4RULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/SourceServer.h>
#include <tencentcloud/antiddos/v20200309/model/InstanceRelation.h>
#include <tencentcloud/antiddos/v20200309/model/RuleInstanceRelation.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Layer-4 forwarding rule
                */
                class Layer4Rule : public AbstractModel
                {
                public:
                    Layer4Rule();
                    ~Layer4Rule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Real server port. Value range: 1–65535.
                     * @return BackendPort Real server port. Value range: 1–65535.
                     */
                    uint64_t GetBackendPort() const;

                    /**
                     * 设置Real server port. Value range: 1–65535.
                     * @param BackendPort Real server port. Value range: 1–65535.
                     */
                    void SetBackendPort(const uint64_t& _backendPort);

                    /**
                     * 判断参数 BackendPort 是否已赋值
                     * @return BackendPort 是否已赋值
                     */
                    bool BackendPortHasBeenSet() const;

                    /**
                     * 获取Forwarding port. Value range: 1–65535.
                     * @return FrontendPort Forwarding port. Value range: 1–65535.
                     */
                    uint64_t GetFrontendPort() const;

                    /**
                     * 设置Forwarding port. Value range: 1–65535.
                     * @param FrontendPort Forwarding port. Value range: 1–65535.
                     */
                    void SetFrontendPort(const uint64_t& _frontendPort);

                    /**
                     * 判断参数 FrontendPort 是否已赋值
                     * @return FrontendPort 是否已赋值
                     */
                    bool FrontendPortHasBeenSet() const;

                    /**
                     * 获取Forwarding rule. Valid values:
TCP
UDP
]
                     * @return Protocol Forwarding rule. Valid values:
TCP
UDP
]
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Forwarding rule. Valid values:
TCP
UDP
]
                     * @param Protocol Forwarding rule. Valid values:
TCP
UDP
]
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取List of real servers
                     * @return RealServers List of real servers
                     */
                    std::vector<SourceServer> GetRealServers() const;

                    /**
                     * 设置List of real servers
                     * @param RealServers List of real servers
                     */
                    void SetRealServers(const std::vector<SourceServer>& _realServers);

                    /**
                     * 判断参数 RealServers 是否已赋值
                     * @return RealServers 是否已赋值
                     */
                    bool RealServersHasBeenSet() const;

                    /**
                     * 获取Information of the Anti-DDoS instance
                     * @return InstanceDetails Information of the Anti-DDoS instance
                     */
                    std::vector<InstanceRelation> GetInstanceDetails() const;

                    /**
                     * 设置Information of the Anti-DDoS instance
                     * @param InstanceDetails Information of the Anti-DDoS instance
                     */
                    void SetInstanceDetails(const std::vector<InstanceRelation>& _instanceDetails);

                    /**
                     * 判断参数 InstanceDetails 是否已赋值
                     * @return InstanceDetails 是否已赋值
                     */
                    bool InstanceDetailsHasBeenSet() const;

                    /**
                     * 获取Information of the Anti-DDoS instance configured
                     * @return InstanceDetailRule Information of the Anti-DDoS instance configured
                     */
                    std::vector<RuleInstanceRelation> GetInstanceDetailRule() const;

                    /**
                     * 设置Information of the Anti-DDoS instance configured
                     * @param InstanceDetailRule Information of the Anti-DDoS instance configured
                     */
                    void SetInstanceDetailRule(const std::vector<RuleInstanceRelation>& _instanceDetailRule);

                    /**
                     * 判断参数 InstanceDetailRule 是否已赋值
                     * @return InstanceDetailRule 是否已赋值
                     */
                    bool InstanceDetailRuleHasBeenSet() const;

                private:

                    /**
                     * Real server port. Value range: 1–65535.
                     */
                    uint64_t m_backendPort;
                    bool m_backendPortHasBeenSet;

                    /**
                     * Forwarding port. Value range: 1–65535.
                     */
                    uint64_t m_frontendPort;
                    bool m_frontendPortHasBeenSet;

                    /**
                     * Forwarding rule. Valid values:
TCP
UDP
]
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * List of real servers
                     */
                    std::vector<SourceServer> m_realServers;
                    bool m_realServersHasBeenSet;

                    /**
                     * Information of the Anti-DDoS instance
                     */
                    std::vector<InstanceRelation> m_instanceDetails;
                    bool m_instanceDetailsHasBeenSet;

                    /**
                     * Information of the Anti-DDoS instance configured
                     */
                    std::vector<RuleInstanceRelation> m_instanceDetailRule;
                    bool m_instanceDetailRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_LAYER4RULE_H_
