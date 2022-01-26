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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYCONDITION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyRule.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Metric trigger condition of alarm policy
                */
                class AlarmPolicyCondition : public AbstractModel
                {
                public:
                    AlarmPolicyCondition();
                    ~AlarmPolicyCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Metric trigger condition operator. Valid values: 0 (OR), 1 (AND)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsUnionRule Metric trigger condition operator. Valid values: 0 (OR), 1 (AND)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetIsUnionRule() const;

                    /**
                     * 设置Metric trigger condition operator. Valid values: 0 (OR), 1 (AND)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IsUnionRule Metric trigger condition operator. Valid values: 0 (OR), 1 (AND)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIsUnionRule(const int64_t& _isUnionRule);

                    /**
                     * 判断参数 IsUnionRule 是否已赋值
                     * @return IsUnionRule 是否已赋值
                     */
                    bool IsUnionRuleHasBeenSet() const;

                    /**
                     * 获取Alarm trigger condition list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Rules Alarm trigger condition list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AlarmPolicyRule> GetRules() const;

                    /**
                     * 设置Alarm trigger condition list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Rules Alarm trigger condition list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRules(const std::vector<AlarmPolicyRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * Metric trigger condition operator. Valid values: 0 (OR), 1 (AND)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isUnionRule;
                    bool m_isUnionRuleHasBeenSet;

                    /**
                     * Alarm trigger condition list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AlarmPolicyRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYCONDITION_H_
