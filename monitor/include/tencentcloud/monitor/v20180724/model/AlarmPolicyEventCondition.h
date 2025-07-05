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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYEVENTCONDITION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYEVENTCONDITION_H_

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
                * Event trigger condition of alarm policy
                */
                class AlarmPolicyEventCondition : public AbstractModel
                {
                public:
                    AlarmPolicyEventCondition();
                    ~AlarmPolicyEventCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm trigger condition list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Rules Alarm trigger condition list
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AlarmPolicyRule> GetRules() const;

                    /**
                     * 设置Alarm trigger condition list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _rules Alarm trigger condition list
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRules(const std::vector<AlarmPolicyRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

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

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYEVENTCONDITION_H_
