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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEPOLICY_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Protection policy
                */
                class DescribePolicy : public AbstractModel
                {
                public:
                    DescribePolicy();
                    ~DescribePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Protection policy ID list
                     * @return TaskPolicyIdList Protection policy ID list
                     * 
                     */
                    std::vector<std::string> GetTaskPolicyIdList() const;

                    /**
                     * 设置Protection policy ID list
                     * @param _taskPolicyIdList Protection policy ID list
                     * 
                     */
                    void SetTaskPolicyIdList(const std::vector<std::string>& _taskPolicyIdList);

                    /**
                     * 判断参数 TaskPolicyIdList 是否已赋值
                     * @return TaskPolicyIdList 是否已赋值
                     * 
                     */
                    bool TaskPolicyIdListHasBeenSet() const;

                    /**
                     * 获取Protection policy status
                     * @return TaskPolicyStatus Protection policy status
                     * 
                     */
                    std::string GetTaskPolicyStatus() const;

                    /**
                     * 设置Protection policy status
                     * @param _taskPolicyStatus Protection policy status
                     * 
                     */
                    void SetTaskPolicyStatus(const std::string& _taskPolicyStatus);

                    /**
                     * 判断参数 TaskPolicyStatus 是否已赋值
                     * @return TaskPolicyStatus 是否已赋值
                     * 
                     */
                    bool TaskPolicyStatusHasBeenSet() const;

                    /**
                     * 获取Policy rule
                     * @return TaskPolicyRule Policy rule
                     * 
                     */
                    std::string GetTaskPolicyRule() const;

                    /**
                     * 设置Policy rule
                     * @param _taskPolicyRule Policy rule
                     * 
                     */
                    void SetTaskPolicyRule(const std::string& _taskPolicyRule);

                    /**
                     * 判断参数 TaskPolicyRule 是否已赋值
                     * @return TaskPolicyRule 是否已赋值
                     * 
                     */
                    bool TaskPolicyRuleHasBeenSet() const;

                    /**
                     * 获取Process method when the guardrail policy takes effect. 1: sequential execution, 2: pausing.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskPolicyDealType Process method when the guardrail policy takes effect. 1: sequential execution, 2: pausing.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskPolicyDealType() const;

                    /**
                     * 设置Process method when the guardrail policy takes effect. 1: sequential execution, 2: pausing.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskPolicyDealType Process method when the guardrail policy takes effect. 1: sequential execution, 2: pausing.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskPolicyDealType(const int64_t& _taskPolicyDealType);

                    /**
                     * 判断参数 TaskPolicyDealType 是否已赋值
                     * @return TaskPolicyDealType 是否已赋值
                     * 
                     */
                    bool TaskPolicyDealTypeHasBeenSet() const;

                private:

                    /**
                     * Protection policy ID list
                     */
                    std::vector<std::string> m_taskPolicyIdList;
                    bool m_taskPolicyIdListHasBeenSet;

                    /**
                     * Protection policy status
                     */
                    std::string m_taskPolicyStatus;
                    bool m_taskPolicyStatusHasBeenSet;

                    /**
                     * Policy rule
                     */
                    std::string m_taskPolicyRule;
                    bool m_taskPolicyRuleHasBeenSet;

                    /**
                     * Process method when the guardrail policy takes effect. 1: sequential execution, 2: pausing.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskPolicyDealType;
                    bool m_taskPolicyDealTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEPOLICY_H_
