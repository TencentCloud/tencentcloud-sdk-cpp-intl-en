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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_LOGRULETEMPLATEINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_LOGRULETEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Basic information on the rule template hit by the audit log.
                */
                class LogRuleTemplateInfo : public AbstractModel
                {
                public:
                    LogRuleTemplateInfo();
                    ~LogRuleTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Template ID. 
Note: The return value may be null, indicating that no valid data can be obtained.
                     * @return RuleTemplateId Template ID. 
Note: The return value may be null, indicating that no valid data can be obtained.
                     * 
                     */
                    std::string GetRuleTemplateId() const;

                    /**
                     * 设置Template ID. 
Note: The return value may be null, indicating that no valid data can be obtained.
                     * @param _ruleTemplateId Template ID. 
Note: The return value may be null, indicating that no valid data can be obtained.
                     * 
                     */
                    void SetRuleTemplateId(const std::string& _ruleTemplateId);

                    /**
                     * 判断参数 RuleTemplateId 是否已赋值
                     * @return RuleTemplateId 是否已赋值
                     * 
                     */
                    bool RuleTemplateIdHasBeenSet() const;

                    /**
                     * 获取Template name.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * @return RuleTemplateName Template name.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * 
                     */
                    std::string GetRuleTemplateName() const;

                    /**
                     * 设置Template name.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * @param _ruleTemplateName Template name.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * 
                     */
                    void SetRuleTemplateName(const std::string& _ruleTemplateName);

                    /**
                     * 判断参数 RuleTemplateName 是否已赋值
                     * @return RuleTemplateName 是否已赋值
                     * 
                     */
                    bool RuleTemplateNameHasBeenSet() const;

                    /**
                     * 获取Alarm level. Valid values: 1: Low risk; 2: Medium risk; 3: High risk. 
Note: The return value may be null, indicating that no valid data can be obtained.
                     * @return AlarmLevel Alarm level. Valid values: 1: Low risk; 2: Medium risk; 3: High risk. 
Note: The return value may be null, indicating that no valid data can be obtained.
                     * 
                     */
                    std::string GetAlarmLevel() const;

                    /**
                     * 设置Alarm level. Valid values: 1: Low risk; 2: Medium risk; 3: High risk. 
Note: The return value may be null, indicating that no valid data can be obtained.
                     * @param _alarmLevel Alarm level. Valid values: 1: Low risk; 2: Medium risk; 3: High risk. 
Note: The return value may be null, indicating that no valid data can be obtained.
                     * 
                     */
                    void SetAlarmLevel(const std::string& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     * 
                     */
                    bool AlarmLevelHasBeenSet() const;

                    /**
                     * 获取Template change status. Valid values: 0: Unchanged; 1: Changed; 2: Deleted.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * @return RuleTemplateStatus Template change status. Valid values: 0: Unchanged; 1: Changed; 2: Deleted.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * 
                     */
                    int64_t GetRuleTemplateStatus() const;

                    /**
                     * 设置Template change status. Valid values: 0: Unchanged; 1: Changed; 2: Deleted.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * @param _ruleTemplateStatus Template change status. Valid values: 0: Unchanged; 1: Changed; 2: Deleted.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * 
                     */
                    void SetRuleTemplateStatus(const int64_t& _ruleTemplateStatus);

                    /**
                     * 判断参数 RuleTemplateStatus 是否已赋值
                     * @return RuleTemplateStatus 是否已赋值
                     * 
                     */
                    bool RuleTemplateStatusHasBeenSet() const;

                private:

                    /**
                     * Template ID. 
Note: The return value may be null, indicating that no valid data can be obtained.
                     */
                    std::string m_ruleTemplateId;
                    bool m_ruleTemplateIdHasBeenSet;

                    /**
                     * Template name.
Note: The return value may be null, indicating that no valid data can be obtained.
                     */
                    std::string m_ruleTemplateName;
                    bool m_ruleTemplateNameHasBeenSet;

                    /**
                     * Alarm level. Valid values: 1: Low risk; 2: Medium risk; 3: High risk. 
Note: The return value may be null, indicating that no valid data can be obtained.
                     */
                    std::string m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * Template change status. Valid values: 0: Unchanged; 1: Changed; 2: Deleted.
Note: The return value may be null, indicating that no valid data can be obtained.
                     */
                    int64_t m_ruleTemplateStatus;
                    bool m_ruleTemplateStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_LOGRULETEMPLATEINFO_H_
