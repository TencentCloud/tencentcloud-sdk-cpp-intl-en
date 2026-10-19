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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_REMEDIATIONEXECUTIONS_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_REMEDIATIONEXECUTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Correction records.
                */
                class RemediationExecutions : public AbstractModel
                {
                public:
                    RemediationExecutions();
                    ~RemediationExecutions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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

                    /**
                     * 获取Resource type.
                     * @return ExecutionResourceType Resource type.
                     * 
                     */
                    std::string GetExecutionResourceType() const;

                    /**
                     * 设置Resource type.
                     * @param _executionResourceType Resource type.
                     * 
                     */
                    void SetExecutionResourceType(const std::string& _executionResourceType);

                    /**
                     * 判断参数 ExecutionResourceType 是否已赋值
                     * @return ExecutionResourceType 是否已赋值
                     * 
                     */
                    bool ExecutionResourceTypeHasBeenSet() const;

                    /**
                     * 获取Fixing time
                     * @return ExecutionCreateDate Fixing time
                     * 
                     */
                    std::string GetExecutionCreateDate() const;

                    /**
                     * 设置Fixing time
                     * @param _executionCreateDate Fixing time
                     * 
                     */
                    void SetExecutionCreateDate(const std::string& _executionCreateDate);

                    /**
                     * 判断参数 ExecutionCreateDate 是否已赋值
                     * @return ExecutionCreateDate 是否已赋值
                     * 
                     */
                    bool ExecutionCreateDateHasBeenSet() const;

                    /**
                     * 获取Error message
                     * @return ExecutionStatusMessage Error message
                     * 
                     */
                    std::string GetExecutionStatusMessage() const;

                    /**
                     * 设置Error message
                     * @param _executionStatusMessage Error message
                     * 
                     */
                    void SetExecutionStatusMessage(const std::string& _executionStatusMessage);

                    /**
                     * 判断参数 ExecutionStatusMessage 是否已赋值
                     * @return ExecutionStatusMessage 是否已赋值
                     * 
                     */
                    bool ExecutionStatusMessageHasBeenSet() const;

                    /**
                     * 获取Resource ID
                     * @return ExecutionResourceIds Resource ID
                     * 
                     */
                    std::string GetExecutionResourceIds() const;

                    /**
                     * 设置Resource ID
                     * @param _executionResourceIds Resource ID
                     * 
                     */
                    void SetExecutionResourceIds(const std::string& _executionResourceIds);

                    /**
                     * 判断参数 ExecutionResourceIds 是否已赋值
                     * @return ExecutionResourceIds 是否已赋值
                     * 
                     */
                    bool ExecutionResourceIdsHasBeenSet() const;

                private:

                    /**
                     * Remediation status. Valid values: 1 (running), 2 (successful), and 3 (failed).
                     */
                    uint64_t m_executionStatus;
                    bool m_executionStatusHasBeenSet;

                    /**
                     * Resource type.
                     */
                    std::string m_executionResourceType;
                    bool m_executionResourceTypeHasBeenSet;

                    /**
                     * Fixing time
                     */
                    std::string m_executionCreateDate;
                    bool m_executionCreateDateHasBeenSet;

                    /**
                     * Error message
                     */
                    std::string m_executionStatusMessage;
                    bool m_executionStatusMessageHasBeenSet;

                    /**
                     * Resource ID
                     */
                    std::string m_executionResourceIds;
                    bool m_executionResourceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_REMEDIATIONEXECUTIONS_H_
