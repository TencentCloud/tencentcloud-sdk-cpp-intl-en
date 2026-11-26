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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AclCondition.h>
#include <tencentcloud/teo/v20220901/model/AlgDetectSession.h>
#include <tencentcloud/teo/v20220901/model/AlgDetectJS.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Bot active feature detection rule.
                */
                class AlgDetectRule : public AbstractModel
                {
                public:
                    AlgDetectRule();
                    ~AlgDetectRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule id.
                     * @return RuleID Rule id.
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置Rule id.
                     * @param _ruleID Rule id.
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取Rule name.
                     * @return RuleName Rule name.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name.
                     * @param _ruleName Rule name.
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
                     * 获取Rule switch.
                     * @return Switch Rule switch.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Rule switch.
                     * @param _switch Rule switch.
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Custom rule.
                     * @return AlgConditions Custom rule.
                     * 
                     */
                    std::vector<AclCondition> GetAlgConditions() const;

                    /**
                     * 设置Custom rule.
                     * @param _algConditions Custom rule.
                     * 
                     */
                    void SetAlgConditions(const std::vector<AclCondition>& _algConditions);

                    /**
                     * 判断参数 AlgConditions 是否已赋值
                     * @return AlgConditions 是否已赋值
                     * 
                     */
                    bool AlgConditionsHasBeenSet() const;

                    /**
                     * 获取Cookie checksum and session behavior analysis.
                     * @return AlgDetectSession Cookie checksum and session behavior analysis.
                     * 
                     */
                    AlgDetectSession GetAlgDetectSession() const;

                    /**
                     * 设置Cookie checksum and session behavior analysis.
                     * @param _algDetectSession Cookie checksum and session behavior analysis.
                     * 
                     */
                    void SetAlgDetectSession(const AlgDetectSession& _algDetectSession);

                    /**
                     * 判断参数 AlgDetectSession 是否已赋值
                     * @return AlgDetectSession 是否已赋值
                     * 
                     */
                    bool AlgDetectSessionHasBeenSet() const;

                    /**
                     * 获取Client behavior validation.
                     * @return AlgDetectJS Client behavior validation.
                     * 
                     */
                    std::vector<AlgDetectJS> GetAlgDetectJS() const;

                    /**
                     * 设置Client behavior validation.
                     * @param _algDetectJS Client behavior validation.
                     * 
                     */
                    void SetAlgDetectJS(const std::vector<AlgDetectJS>& _algDetectJS);

                    /**
                     * 判断参数 AlgDetectJS 是否已赋值
                     * @return AlgDetectJS 是否已赋值
                     * 
                     */
                    bool AlgDetectJSHasBeenSet() const;

                    /**
                     * 获取Update time. For output usage only.
                     * @return UpdateTime Update time. For output usage only.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time. For output usage only.
                     * @param _updateTime Update time. For output usage only.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Rule id.
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * Rule name.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule switch.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Custom rule.
                     */
                    std::vector<AclCondition> m_algConditions;
                    bool m_algConditionsHasBeenSet;

                    /**
                     * Cookie checksum and session behavior analysis.
                     */
                    AlgDetectSession m_algDetectSession;
                    bool m_algDetectSessionHasBeenSet;

                    /**
                     * Client behavior validation.
                     */
                    std::vector<AlgDetectJS> m_algDetectJS;
                    bool m_algDetectJSHasBeenSet;

                    /**
                     * Update time. For output usage only.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTRULE_H_
