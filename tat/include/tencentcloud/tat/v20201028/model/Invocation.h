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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_INVOCATION_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_INVOCATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/InvocationTaskBasicInfo.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * Execution activity details.
                */
                class Invocation : public AbstractModel
                {
                public:
                    Invocation();
                    ~Invocation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Execution activity ID.
                     * @return InvocationId Execution activity ID.
                     * 
                     */
                    std::string GetInvocationId() const;

                    /**
                     * 设置Execution activity ID.
                     * @param _invocationId Execution activity ID.
                     * 
                     */
                    void SetInvocationId(const std::string& _invocationId);

                    /**
                     * 判断参数 InvocationId 是否已赋值
                     * @return InvocationId 是否已赋值
                     * 
                     */
                    bool InvocationIdHasBeenSet() const;

                    /**
                     * 获取Command ID.
                     * @return CommandId Command ID.
                     * 
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置Command ID.
                     * @param _commandId Command ID.
                     * 
                     */
                    void SetCommandId(const std::string& _commandId);

                    /**
                     * 判断参数 CommandId 是否已赋值
                     * @return CommandId 是否已赋值
                     * 
                     */
                    bool CommandIdHasBeenSet() const;

                    /**
                     * 获取Execution task status. Valid values:
<li> PENDING: Pending 
<li> RUNNING: Running
<li> SUCCESS: Success
<li> FAILED: Failed
<li> TIMEOUT: Command timed out
<li> PARTIAL_FAILED: Partial failure
                     * @return InvocationStatus Execution task status. Valid values:
<li> PENDING: Pending 
<li> RUNNING: Running
<li> SUCCESS: Success
<li> FAILED: Failed
<li> TIMEOUT: Command timed out
<li> PARTIAL_FAILED: Partial failure
                     * 
                     */
                    std::string GetInvocationStatus() const;

                    /**
                     * 设置Execution task status. Valid values:
<li> PENDING: Pending 
<li> RUNNING: Running
<li> SUCCESS: Success
<li> FAILED: Failed
<li> TIMEOUT: Command timed out
<li> PARTIAL_FAILED: Partial failure
                     * @param _invocationStatus Execution task status. Valid values:
<li> PENDING: Pending 
<li> RUNNING: Running
<li> SUCCESS: Success
<li> FAILED: Failed
<li> TIMEOUT: Command timed out
<li> PARTIAL_FAILED: Partial failure
                     * 
                     */
                    void SetInvocationStatus(const std::string& _invocationStatus);

                    /**
                     * 判断参数 InvocationStatus 是否已赋值
                     * @return InvocationStatus 是否已赋值
                     * 
                     */
                    bool InvocationStatusHasBeenSet() const;

                    /**
                     * 获取Execution task information list.
                     * @return InvocationTaskBasicInfoSet Execution task information list.
                     * 
                     */
                    std::vector<InvocationTaskBasicInfo> GetInvocationTaskBasicInfoSet() const;

                    /**
                     * 设置Execution task information list.
                     * @param _invocationTaskBasicInfoSet Execution task information list.
                     * 
                     */
                    void SetInvocationTaskBasicInfoSet(const std::vector<InvocationTaskBasicInfo>& _invocationTaskBasicInfoSet);

                    /**
                     * 判断参数 InvocationTaskBasicInfoSet 是否已赋值
                     * @return InvocationTaskBasicInfoSet 是否已赋值
                     * 
                     */
                    bool InvocationTaskBasicInfoSetHasBeenSet() const;

                    /**
                     * 获取Execution activity description.
                     * @return Description Execution activity description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Execution activity description.
                     * @param _description Execution activity description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Start time of the execution activity.
                     * @return StartTime Start time of the execution activity.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the execution activity.
                     * @param _startTime Start time of the execution activity.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time of the execution activity.
                     * @return EndTime End time of the execution activity.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the execution activity.
                     * @param _endTime End time of the execution activity.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Time when the execution activity is created.
                     * @return CreatedTime Time when the execution activity is created.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Time when the execution activity is created.
                     * @param _createdTime Time when the execution activity is created.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Time when the execution activity is updated.
                     * @return UpdatedTime Time when the execution activity is updated.
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置Time when the execution activity is updated.
                     * @param _updatedTime Time when the execution activity is updated.
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取Values of custom parameters.
                     * @return Parameters Values of custom parameters.
                     * 
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置Values of custom parameters.
                     * @param _parameters Values of custom parameters.
                     * 
                     */
                    void SetParameters(const std::string& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取Default custom parameter value.
                     * @return DefaultParameters Default custom parameter value.
                     * 
                     */
                    std::string GetDefaultParameters() const;

                    /**
                     * 设置Default custom parameter value.
                     * @param _defaultParameters Default custom parameter value.
                     * 
                     */
                    void SetDefaultParameters(const std::string& _defaultParameters);

                    /**
                     * 判断参数 DefaultParameters 是否已赋值
                     * @return DefaultParameters 是否已赋值
                     * 
                     */
                    bool DefaultParametersHasBeenSet() const;

                    /**
                     * 获取Type of the instance executing the command. Valid values: `CVM`, `LIGHTHOUSE`.
                     * @return InstanceKind Type of the instance executing the command. Valid values: `CVM`, `LIGHTHOUSE`.
                     * 
                     */
                    std::string GetInstanceKind() const;

                    /**
                     * 设置Type of the instance executing the command. Valid values: `CVM`, `LIGHTHOUSE`.
                     * @param _instanceKind Type of the instance executing the command. Valid values: `CVM`, `LIGHTHOUSE`.
                     * 
                     */
                    void SetInstanceKind(const std::string& _instanceKind);

                    /**
                     * 判断参数 InstanceKind 是否已赋值
                     * @return InstanceKind 是否已赋值
                     * 
                     */
                    bool InstanceKindHasBeenSet() const;

                    /**
                     * 获取The user who executes the command on the instance.
                     * @return Username The user who executes the command on the instance.
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置The user who executes the command on the instance.
                     * @param _username The user who executes the command on the instance.
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取Invocation source.
                     * @return InvocationSource Invocation source.
                     * 
                     */
                    std::string GetInvocationSource() const;

                    /**
                     * 设置Invocation source.
                     * @param _invocationSource Invocation source.
                     * 
                     */
                    void SetInvocationSource(const std::string& _invocationSource);

                    /**
                     * 判断参数 InvocationSource 是否已赋值
                     * @return InvocationSource 是否已赋值
                     * 
                     */
                    bool InvocationSourceHasBeenSet() const;

                    /**
                     * 获取Base64-encoded command
                     * @return CommandContent Base64-encoded command
                     * 
                     */
                    std::string GetCommandContent() const;

                    /**
                     * 设置Base64-encoded command
                     * @param _commandContent Base64-encoded command
                     * 
                     */
                    void SetCommandContent(const std::string& _commandContent);

                    /**
                     * 判断参数 CommandContent 是否已赋值
                     * @return CommandContent 是否已赋值
                     * 
                     */
                    bool CommandContentHasBeenSet() const;

                    /**
                     * 获取Command type
                     * @return CommandType Command type
                     * 
                     */
                    std::string GetCommandType() const;

                    /**
                     * 设置Command type
                     * @param _commandType Command type
                     * 
                     */
                    void SetCommandType(const std::string& _commandType);

                    /**
                     * 判断参数 CommandType 是否已赋值
                     * @return CommandType 是否已赋值
                     * 
                     */
                    bool CommandTypeHasBeenSet() const;

                    /**
                     * 获取Command timeout period, in seconds.
                     * @return Timeout Command timeout period, in seconds.
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置Command timeout period, in seconds.
                     * @param _timeout Command timeout period, in seconds.
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取Working directory for executing the command.
                     * @return WorkingDirectory Working directory for executing the command.
                     * 
                     */
                    std::string GetWorkingDirectory() const;

                    /**
                     * 设置Working directory for executing the command.
                     * @param _workingDirectory Working directory for executing the command.
                     * 
                     */
                    void SetWorkingDirectory(const std::string& _workingDirectory);

                    /**
                     * 判断参数 WorkingDirectory 是否已赋值
                     * @return WorkingDirectory 是否已赋值
                     * 
                     */
                    bool WorkingDirectoryHasBeenSet() const;

                    /**
                     * 获取The COS bucket URL for uploading logs.
                     * @return OutputCOSBucketUrl The COS bucket URL for uploading logs.
                     * 
                     */
                    std::string GetOutputCOSBucketUrl() const;

                    /**
                     * 设置The COS bucket URL for uploading logs.
                     * @param _outputCOSBucketUrl The COS bucket URL for uploading logs.
                     * 
                     */
                    void SetOutputCOSBucketUrl(const std::string& _outputCOSBucketUrl);

                    /**
                     * 判断参数 OutputCOSBucketUrl 是否已赋值
                     * @return OutputCOSBucketUrl 是否已赋值
                     * 
                     */
                    bool OutputCOSBucketUrlHasBeenSet() const;

                    /**
                     * 获取The COS bucket directory where the logs are saved.
                     * @return OutputCOSKeyPrefix The COS bucket directory where the logs are saved.
                     * 
                     */
                    std::string GetOutputCOSKeyPrefix() const;

                    /**
                     * 设置The COS bucket directory where the logs are saved.
                     * @param _outputCOSKeyPrefix The COS bucket directory where the logs are saved.
                     * 
                     */
                    void SetOutputCOSKeyPrefix(const std::string& _outputCOSKeyPrefix);

                    /**
                     * 判断参数 OutputCOSKeyPrefix 是否已赋值
                     * @return OutputCOSKeyPrefix 是否已赋值
                     * 
                     */
                    bool OutputCOSKeyPrefixHasBeenSet() const;

                private:

                    /**
                     * Execution activity ID.
                     */
                    std::string m_invocationId;
                    bool m_invocationIdHasBeenSet;

                    /**
                     * Command ID.
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * Execution task status. Valid values:
<li> PENDING: Pending 
<li> RUNNING: Running
<li> SUCCESS: Success
<li> FAILED: Failed
<li> TIMEOUT: Command timed out
<li> PARTIAL_FAILED: Partial failure
                     */
                    std::string m_invocationStatus;
                    bool m_invocationStatusHasBeenSet;

                    /**
                     * Execution task information list.
                     */
                    std::vector<InvocationTaskBasicInfo> m_invocationTaskBasicInfoSet;
                    bool m_invocationTaskBasicInfoSetHasBeenSet;

                    /**
                     * Execution activity description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Start time of the execution activity.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the execution activity.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Time when the execution activity is created.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Time when the execution activity is updated.
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * Values of custom parameters.
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * Default custom parameter value.
                     */
                    std::string m_defaultParameters;
                    bool m_defaultParametersHasBeenSet;

                    /**
                     * Type of the instance executing the command. Valid values: `CVM`, `LIGHTHOUSE`.
                     */
                    std::string m_instanceKind;
                    bool m_instanceKindHasBeenSet;

                    /**
                     * The user who executes the command on the instance.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Invocation source.
                     */
                    std::string m_invocationSource;
                    bool m_invocationSourceHasBeenSet;

                    /**
                     * Base64-encoded command
                     */
                    std::string m_commandContent;
                    bool m_commandContentHasBeenSet;

                    /**
                     * Command type
                     */
                    std::string m_commandType;
                    bool m_commandTypeHasBeenSet;

                    /**
                     * Command timeout period, in seconds.
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Working directory for executing the command.
                     */
                    std::string m_workingDirectory;
                    bool m_workingDirectoryHasBeenSet;

                    /**
                     * The COS bucket URL for uploading logs.
                     */
                    std::string m_outputCOSBucketUrl;
                    bool m_outputCOSBucketUrlHasBeenSet;

                    /**
                     * The COS bucket directory where the logs are saved.
                     */
                    std::string m_outputCOSKeyPrefix;
                    bool m_outputCOSKeyPrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_INVOCATION_H_
