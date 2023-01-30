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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALRULEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/K8sApiAbnormalRuleScopeInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * K8sApi abnormal request rule details
                */
                class K8sApiAbnormalRuleInfo : public AbstractModel
                {
                public:
                    K8sApiAbnormalRuleInfo();
                    ~K8sApiAbnormalRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule name
                     * @return RuleName Rule name
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name
                     * @param RuleName Rule name
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Status
                     * @return Status Status
                     */
                    bool GetStatus() const;

                    /**
                     * 设置Status
                     * @param Status Status
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Rule information list
                     * @return RuleInfoList Rule information list
                     */
                    std::vector<K8sApiAbnormalRuleScopeInfo> GetRuleInfoList() const;

                    /**
                     * 设置Rule information list
                     * @param RuleInfoList Rule information list
                     */
                    void SetRuleInfoList(const std::vector<K8sApiAbnormalRuleScopeInfo>& _ruleInfoList);

                    /**
                     * 判断参数 RuleInfoList 是否已赋值
                     * @return RuleInfoList 是否已赋值
                     */
                    bool RuleInfoListHasBeenSet() const;

                    /**
                     * 获取Effective cluster IDSet
                     * @return EffectClusterIDSet Effective cluster IDSet
                     */
                    std::vector<std::string> GetEffectClusterIDSet() const;

                    /**
                     * 设置Effective cluster IDSet
                     * @param EffectClusterIDSet Effective cluster IDSet
                     */
                    void SetEffectClusterIDSet(const std::vector<std::string>& _effectClusterIDSet);

                    /**
                     * 判断参数 EffectClusterIDSet 是否已赋值
                     * @return EffectClusterIDSet 是否已赋值
                     */
                    bool EffectClusterIDSetHasBeenSet() const;

                    /**
                     * 获取Rule type
RT_SYSTEM: System rules
RT_USER: User-defined rules
                     * @return RuleType Rule type
RT_SYSTEM: System rules
RT_USER: User-defined rules
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule type
RT_SYSTEM: System rules
RT_USER: User-defined rules
                     * @param RuleType Rule type
RT_SYSTEM: System rules
RT_USER: User-defined rules
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Whether all clusters are effective
                     * @return EffectAllCluster Whether all clusters are effective
                     */
                    bool GetEffectAllCluster() const;

                    /**
                     * 设置Whether all clusters are effective
                     * @param EffectAllCluster Whether all clusters are effective
                     */
                    void SetEffectAllCluster(const bool& _effectAllCluster);

                    /**
                     * 判断参数 EffectAllCluster 是否已赋值
                     * @return EffectAllCluster 是否已赋值
                     */
                    bool EffectAllClusterHasBeenSet() const;

                    /**
                     * 获取Rule ID
                     * @return RuleID Rule ID
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置Rule ID
                     * @param RuleID Rule ID
                     */
                    void SetRuleID(const std::string& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     */
                    bool RuleIDHasBeenSet() const;

                private:

                    /**
                     * Rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Status
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Rule information list
                     */
                    std::vector<K8sApiAbnormalRuleScopeInfo> m_ruleInfoList;
                    bool m_ruleInfoListHasBeenSet;

                    /**
                     * Effective cluster IDSet
                     */
                    std::vector<std::string> m_effectClusterIDSet;
                    bool m_effectClusterIDSetHasBeenSet;

                    /**
                     * Rule type
RT_SYSTEM: System rules
RT_USER: User-defined rules
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Whether all clusters are effective
                     */
                    bool m_effectAllCluster;
                    bool m_effectAllClusterHasBeenSet;

                    /**
                     * Rule ID
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALRULEINFO_H_
