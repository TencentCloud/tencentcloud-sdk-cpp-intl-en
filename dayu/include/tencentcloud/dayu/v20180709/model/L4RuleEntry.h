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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_L4RULEENTRY_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_L4RULEENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/L4RuleSource.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Layer-4 rule
                */
                class L4RuleEntry : public AbstractModel
                {
                public:
                    L4RuleEntry();
                    ~L4RuleEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Forwarding protocol. Valid values: [TCP, UDP]
                     * @return Protocol Forwarding protocol. Valid values: [TCP, UDP]
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Forwarding protocol. Valid values: [TCP, UDP]
                     * @param Protocol Forwarding protocol. Valid values: [TCP, UDP]
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Forwarding port
                     * @return VirtualPort Forwarding port
                     */
                    uint64_t GetVirtualPort() const;

                    /**
                     * 设置Forwarding port
                     * @param VirtualPort Forwarding port
                     */
                    void SetVirtualPort(const uint64_t& _virtualPort);

                    /**
                     * 判断参数 VirtualPort 是否已赋值
                     * @return VirtualPort 是否已赋值
                     */
                    bool VirtualPortHasBeenSet() const;

                    /**
                     * 获取Real server port
                     * @return SourcePort Real server port
                     */
                    uint64_t GetSourcePort() const;

                    /**
                     * 设置Real server port
                     * @param SourcePort Real server port
                     */
                    void SetSourcePort(const uint64_t& _sourcePort);

                    /**
                     * 判断参数 SourcePort 是否已赋值
                     * @return SourcePort 是否已赋值
                     */
                    bool SourcePortHasBeenSet() const;

                    /**
                     * 获取Forwarding method. Valid values: [1 (forwarding via domain name), 2 (forwarding via IP)]
                     * @return SourceType Forwarding method. Valid values: [1 (forwarding via domain name), 2 (forwarding via IP)]
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置Forwarding method. Valid values: [1 (forwarding via domain name), 2 (forwarding via IP)]
                     * @param SourceType Forwarding method. Valid values: [1 (forwarding via domain name), 2 (forwarding via IP)]
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取Session persistence duration in seconds
                     * @return KeepTime Session persistence duration in seconds
                     */
                    uint64_t GetKeepTime() const;

                    /**
                     * 设置Session persistence duration in seconds
                     * @param KeepTime Session persistence duration in seconds
                     */
                    void SetKeepTime(const uint64_t& _keepTime);

                    /**
                     * 判断参数 KeepTime 是否已赋值
                     * @return KeepTime 是否已赋值
                     */
                    bool KeepTimeHasBeenSet() const;

                    /**
                     * 获取Forward list
                     * @return SourceList Forward list
                     */
                    std::vector<L4RuleSource> GetSourceList() const;

                    /**
                     * 设置Forward list
                     * @param SourceList Forward list
                     */
                    void SetSourceList(const std::vector<L4RuleSource>& _sourceList);

                    /**
                     * 判断参数 SourceList 是否已赋值
                     * @return SourceList 是否已赋值
                     */
                    bool SourceListHasBeenSet() const;

                    /**
                     * 获取Load balancing method. Valid values: [1 (weighted round robin), 2 (source IP hash)]
                     * @return LbType Load balancing method. Valid values: [1 (weighted round robin), 2 (source IP hash)]
                     */
                    uint64_t GetLbType() const;

                    /**
                     * 设置Load balancing method. Valid values: [1 (weighted round robin), 2 (source IP hash)]
                     * @param LbType Load balancing method. Valid values: [1 (weighted round robin), 2 (source IP hash)]
                     */
                    void SetLbType(const uint64_t& _lbType);

                    /**
                     * 判断参数 LbType 是否已赋值
                     * @return LbType 是否已赋值
                     */
                    bool LbTypeHasBeenSet() const;

                    /**
                     * 获取Session persistence status. Valid values: [0 (disabled), 1 (enabled)];
                     * @return KeepEnable Session persistence status. Valid values: [0 (disabled), 1 (enabled)];
                     */
                    uint64_t GetKeepEnable() const;

                    /**
                     * 设置Session persistence status. Valid values: [0 (disabled), 1 (enabled)];
                     * @param KeepEnable Session persistence status. Valid values: [0 (disabled), 1 (enabled)];
                     */
                    void SetKeepEnable(const uint64_t& _keepEnable);

                    /**
                     * 判断参数 KeepEnable 是否已赋值
                     * @return KeepEnable 是否已赋值
                     */
                    bool KeepEnableHasBeenSet() const;

                    /**
                     * 获取Rule ID
                     * @return RuleId Rule ID
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Rule ID
                     * @param RuleId Rule ID
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Rule description
                     * @return RuleName Rule description
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule description
                     * @param RuleName Rule description
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Watermark removal status. Valid values: [0 (disabled), 1 (enabled)]
                     * @return RemoveSwitch Watermark removal status. Valid values: [0 (disabled), 1 (enabled)]
                     */
                    uint64_t GetRemoveSwitch() const;

                    /**
                     * 设置Watermark removal status. Valid values: [0 (disabled), 1 (enabled)]
                     * @param RemoveSwitch Watermark removal status. Valid values: [0 (disabled), 1 (enabled)]
                     */
                    void SetRemoveSwitch(const uint64_t& _removeSwitch);

                    /**
                     * 判断参数 RemoveSwitch 是否已赋值
                     * @return RemoveSwitch 是否已赋值
                     */
                    bool RemoveSwitchHasBeenSet() const;

                private:

                    /**
                     * Forwarding protocol. Valid values: [TCP, UDP]
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Forwarding port
                     */
                    uint64_t m_virtualPort;
                    bool m_virtualPortHasBeenSet;

                    /**
                     * Real server port
                     */
                    uint64_t m_sourcePort;
                    bool m_sourcePortHasBeenSet;

                    /**
                     * Forwarding method. Valid values: [1 (forwarding via domain name), 2 (forwarding via IP)]
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Session persistence duration in seconds
                     */
                    uint64_t m_keepTime;
                    bool m_keepTimeHasBeenSet;

                    /**
                     * Forward list
                     */
                    std::vector<L4RuleSource> m_sourceList;
                    bool m_sourceListHasBeenSet;

                    /**
                     * Load balancing method. Valid values: [1 (weighted round robin), 2 (source IP hash)]
                     */
                    uint64_t m_lbType;
                    bool m_lbTypeHasBeenSet;

                    /**
                     * Session persistence status. Valid values: [0 (disabled), 1 (enabled)];
                     */
                    uint64_t m_keepEnable;
                    bool m_keepEnableHasBeenSet;

                    /**
                     * Rule ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule description
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Watermark removal status. Valid values: [0 (disabled), 1 (enabled)]
                     */
                    uint64_t m_removeSwitch;
                    bool m_removeSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_L4RULEENTRY_H_
