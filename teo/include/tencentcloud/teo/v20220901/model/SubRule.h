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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SUBRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SUBRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RuleAndConditions.h>
#include <tencentcloud/teo/v20220901/model/Action.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Nested rule information.
                */
                class SubRule : public AbstractModel
                {
                public:
                    SubRule();
                    ~SubRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Judgment condition for executing the feature.
Note: The feature can be executed if any condition in the array is met.
                     * @return Conditions Judgment condition for executing the feature.
Note: The feature can be executed if any condition in the array is met.
                     * 
                     */
                    std::vector<RuleAndConditions> GetConditions() const;

                    /**
                     * 设置Judgment condition for executing the feature.
Note: The feature can be executed if any condition in the array is met.
                     * @param _conditions Judgment condition for executing the feature.
Note: The feature can be executed if any condition in the array is met.
                     * 
                     */
                    void SetConditions(const std::vector<RuleAndConditions>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取Function to execute.
                     * @return Actions Function to execute.
                     * 
                     */
                    std::vector<Action> GetActions() const;

                    /**
                     * 设置Function to execute.
                     * @param _actions Function to execute.
                     * 
                     */
                    void SetActions(const std::vector<Action>& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     * 
                     */
                    bool ActionsHasBeenSet() const;

                private:

                    /**
                     * Judgment condition for executing the feature.
Note: The feature can be executed if any condition in the array is met.
                     */
                    std::vector<RuleAndConditions> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * Function to execute.
                     */
                    std::vector<Action> m_actions;
                    bool m_actionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SUBRULE_H_
