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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ADVANCEDDEPENDENCYCONFIG_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ADVANCEDDEPENDENCYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/TaskRunConditionRule.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Advanced dependency configuration
                */
                class AdvancedDependencyConfig : public AbstractModel
                {
                public:
                    AdvancedDependencyConfig();
                    ~AdvancedDependencyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Logical operation symbols OR / AND
                     * @return Operator Logical operation symbols OR / AND
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Logical operation symbols OR / AND
                     * @param _operator Logical operation symbols OR / AND
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取List of conditional rules for task running
                     * @return Conditions List of conditional rules for task running
                     * 
                     */
                    std::vector<TaskRunConditionRule> GetConditions() const;

                    /**
                     * 设置List of conditional rules for task running
                     * @param _conditions List of conditional rules for task running
                     * 
                     */
                    void SetConditions(const std::vector<TaskRunConditionRule>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                private:

                    /**
                     * Logical operation symbols OR / AND
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * List of conditional rules for task running
                     */
                    std::vector<TaskRunConditionRule> m_conditions;
                    bool m_conditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ADVANCEDDEPENDENCYCONFIG_H_
