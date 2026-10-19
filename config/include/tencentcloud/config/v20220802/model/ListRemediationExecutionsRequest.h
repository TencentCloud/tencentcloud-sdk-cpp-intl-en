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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTREMEDIATIONEXECUTIONSREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTREMEDIATIONEXECUTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * ListRemediationExecutions request structure.
                */
                class ListRemediationExecutionsRequest : public AbstractModel
                {
                public:
                    ListRemediationExecutionsRequest();
                    ~ListRemediationExecutionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule ID
                     * @return RuleId Rule ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Rule ID
                     * @param _ruleId Rule ID
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
                     * 获取Number of items per page. Default value: 20; value range: 1–200.
                     * @return Limit Number of items per page. Default value: 20; value range: 1–200.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of items per page. Default value: 20; value range: 1–200.
                     * @param _limit Number of items per page. Default value: 20; value range: 1–200.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination offset.
                     * @return Offset Pagination offset.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset.
                     * @param _offset Pagination offset.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Remediation status. Valid values: 1 (running), 2 (successful), and 3 (failed).
                     * @return ExecutionStatus Remediation status. Valid values: 1 (running), 2 (successful), and 3 (failed).
                     * 
                     */
                    uint64_t GetExecutionStatus() const;

                    /**
                     * 设置Remediation status. Valid values: 1 (running), 2 (successful), and 3 (failed).
                     * @param _executionStatus Remediation status. Valid values: 1 (running), 2 (successful), and 3 (failed).
                     * 
                     */
                    void SetExecutionStatus(const uint64_t& _executionStatus);

                    /**
                     * 判断参数 ExecutionStatus 是否已赋值
                     * @return ExecutionStatus 是否已赋值
                     * 
                     */
                    bool ExecutionStatusHasBeenSet() const;

                private:

                    /**
                     * Rule ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Number of items per page. Default value: 20; value range: 1–200.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Remediation status. Valid values: 1 (running), 2 (successful), and 3 (failed).
                     */
                    uint64_t m_executionStatus;
                    bool m_executionStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTREMEDIATIONEXECUTIONSREQUEST_H_
