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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/FunctionRuleCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Trigger rules for an edge function
                */
                class FunctionRule : public AbstractModel
                {
                public:
                    FunctionRule();
                    ~FunctionRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule ID.
                     * @return RuleId Rule ID.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Rule ID.
                     * @param _ruleId Rule ID.
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Rule condition list. There is an OR relationship between items in the list.
                     * @return FunctionRuleConditions Rule condition list. There is an OR relationship between items in the list.
                     * 
                     */
                    std::vector<FunctionRuleCondition> GetFunctionRuleConditions() const;

                    /**
                     * 设置Rule condition list. There is an OR relationship between items in the list.
                     * @param _functionRuleConditions Rule condition list. There is an OR relationship between items in the list.
                     * 
                     */
                    void SetFunctionRuleConditions(const std::vector<FunctionRuleCondition>& _functionRuleConditions);

                    /**
                     * 判断参数 FunctionRuleConditions 是否已赋值
                     * @return FunctionRuleConditions 是否已赋值
                     * 
                     */
                    bool FunctionRuleConditionsHasBeenSet() const;

                    /**
                     * 获取Function ID, specifying a function executed when a trigger rule condition is met.
                     * @return FunctionId Function ID, specifying a function executed when a trigger rule condition is met.
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置Function ID, specifying a function executed when a trigger rule condition is met.
                     * @param _functionId Function ID, specifying a function executed when a trigger rule condition is met.
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取Rule description.
                     * @return Remark Rule description.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Rule description.
                     * @param _remark Rule description.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Function name.
                     * @return FunctionName Function name.
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Function name.
                     * @param _functionName Function name.
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取Priority of a trigger rule for a function. The larger the value, the higher the priority.
                     * @return Priority Priority of a trigger rule for a function. The larger the value, the higher the priority.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Priority of a trigger rule for a function. The larger the value, the higher the priority.
                     * @param _priority Priority of a trigger rule for a function. The larger the value, the higher the priority.
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * @return CreateTime Creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * @param _createTime Creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * @return UpdateTime Update time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * @param _updateTime Update time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
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
                     * Rule ID.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule condition list. There is an OR relationship between items in the list.
                     */
                    std::vector<FunctionRuleCondition> m_functionRuleConditions;
                    bool m_functionRuleConditionsHasBeenSet;

                    /**
                     * Function ID, specifying a function executed when a trigger rule condition is met.
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * Rule description.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Function name.
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Priority of a trigger rule for a function. The larger the value, the higher the priority.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONRULE_H_
