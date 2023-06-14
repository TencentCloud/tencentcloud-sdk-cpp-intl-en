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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALRULELISTITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALRULELISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Items in the list of K8sApi abnormal request rules
                */
                class K8sApiAbnormalRuleListItem : public AbstractModel
                {
                public:
                    K8sApiAbnormalRuleListItem();
                    ~K8sApiAbnormalRuleListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule ID
                     * @return RuleID Rule ID
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置Rule ID
                     * @param _ruleID Rule ID
                     * 
                     */
                    void SetRuleID(const std::string& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取Rule name
                     * @return RuleName Rule name
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name
                     * @param _ruleName Rule name
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Rule type
RT_SYSTEM System rules
RT_USER User defined
                     * @return RuleType Rule type
RT_SYSTEM System rules
RT_USER User defined
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule type
RT_SYSTEM System rules
RT_USER User defined
                     * @param _ruleType Rule type
RT_SYSTEM System rules
RT_USER User defined
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Total number of affected clusters
                     * @return EffectClusterCount Total number of affected clusters
                     * 
                     */
                    uint64_t GetEffectClusterCount() const;

                    /**
                     * 设置Total number of affected clusters
                     * @param _effectClusterCount Total number of affected clusters
                     * 
                     */
                    void SetEffectClusterCount(const uint64_t& _effectClusterCount);

                    /**
                     * 判断参数 EffectClusterCount 是否已赋值
                     * @return EffectClusterCount 是否已赋值
                     * 
                     */
                    bool EffectClusterCountHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param _updateTime Update time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Edit account
                     * @return OprUin Edit account
                     * 
                     */
                    std::string GetOprUin() const;

                    /**
                     * 设置Edit account
                     * @param _oprUin Edit account
                     * 
                     */
                    void SetOprUin(const std::string& _oprUin);

                    /**
                     * 判断参数 OprUin 是否已赋值
                     * @return OprUin 是否已赋值
                     * 
                     */
                    bool OprUinHasBeenSet() const;

                    /**
                     * 获取Status
                     * @return Status Status
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置Status
                     * @param _status Status
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Rule ID
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule type
RT_SYSTEM System rules
RT_USER User defined
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Total number of affected clusters
                     */
                    uint64_t m_effectClusterCount;
                    bool m_effectClusterCountHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Edit account
                     */
                    std::string m_oprUin;
                    bool m_oprUinHasBeenSet;

                    /**
                     * Status
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALRULELISTITEM_H_
