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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_INVOCATIONRESULT_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_INVOCATIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Result of the command execution
                */
                class InvocationResult : public AbstractModel
                {
                public:
                    InvocationResult();
                    ~InvocationResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param InstanceId Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Execution activity ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InvocationId Execution activity ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInvocationId() const;

                    /**
                     * 设置Execution activity ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param InvocationId Execution activity ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInvocationId(const std::string& _invocationId);

                    /**
                     * 判断参数 InvocationId 是否已赋值
                     * @return InvocationId 是否已赋值
                     */
                    bool InvocationIdHasBeenSet() const;

                    /**
                     * 获取Execution task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InvocationTaskId Execution task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInvocationTaskId() const;

                    /**
                     * 设置Execution task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param InvocationTaskId Execution task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInvocationTaskId(const std::string& _invocationTaskId);

                    /**
                     * 判断参数 InvocationTaskId 是否已赋值
                     * @return InvocationTaskId 是否已赋值
                     */
                    bool InvocationTaskIdHasBeenSet() const;

                    /**
                     * 获取Command ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CommandId Command ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置Command ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CommandId Command ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCommandId(const std::string& _commandId);

                    /**
                     * 判断参数 CommandId 是否已赋值
                     * @return CommandId 是否已赋值
                     */
                    bool CommandIdHasBeenSet() const;

                    /**
                     * 获取Execution Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskStatus Execution Status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置Execution Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TaskStatus Execution Status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取Execution exception information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorMessage Execution exception information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置Execution exception information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ErrorMessage Execution exception information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     */
                    bool ErrorMessageHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Execution activity ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_invocationId;
                    bool m_invocationIdHasBeenSet;

                    /**
                     * Execution task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_invocationTaskId;
                    bool m_invocationTaskIdHasBeenSet;

                    /**
                     * Command ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * Execution Status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * Execution exception information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_INVOCATIONRESULT_H_
