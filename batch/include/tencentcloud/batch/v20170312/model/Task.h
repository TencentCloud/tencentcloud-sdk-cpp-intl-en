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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_TASK_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_TASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Application.h>
#include <tencentcloud/batch/v20170312/model/AnonymousComputeEnv.h>
#include <tencentcloud/batch/v20170312/model/RedirectInfo.h>
#include <tencentcloud/batch/v20170312/model/RedirectLocalInfo.h>
#include <tencentcloud/batch/v20170312/model/InputMapping.h>
#include <tencentcloud/batch/v20170312/model/OutputMapping.h>
#include <tencentcloud/batch/v20170312/model/OutputMappingConfig.h>
#include <tencentcloud/batch/v20170312/model/EnvVar.h>
#include <tencentcloud/batch/v20170312/model/Authentication.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Task
                */
                class Task : public AbstractModel
                {
                public:
                    Task();
                    ~Task() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application information
                     * @return Application Application information
                     * 
                     */
                    Application GetApplication() const;

                    /**
                     * 设置Application information
                     * @param _application Application information
                     * 
                     */
                    void SetApplication(const Application& _application);

                    /**
                     * 判断参数 Application 是否已赋值
                     * @return Application 是否已赋值
                     * 
                     */
                    bool ApplicationHasBeenSet() const;

                    /**
                     * 获取Task name, which should be unique within a job
                     * @return TaskName Task name, which should be unique within a job
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name, which should be unique within a job
                     * @param _taskName Task name, which should be unique within a job
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Number of running task instances
                     * @return TaskInstanceNum Number of running task instances
                     * 
                     */
                    uint64_t GetTaskInstanceNum() const;

                    /**
                     * 设置Number of running task instances
                     * @param _taskInstanceNum Number of running task instances
                     * 
                     */
                    void SetTaskInstanceNum(const uint64_t& _taskInstanceNum);

                    /**
                     * 判断参数 TaskInstanceNum 是否已赋值
                     * @return TaskInstanceNum 是否已赋值
                     * 
                     */
                    bool TaskInstanceNumHasBeenSet() const;

                    /**
                     * 获取Compute environment information. One (and only one) parameter must be specified for ComputeEnv and EnvId.
                     * @return ComputeEnv Compute environment information. One (and only one) parameter must be specified for ComputeEnv and EnvId.
                     * 
                     */
                    AnonymousComputeEnv GetComputeEnv() const;

                    /**
                     * 设置Compute environment information. One (and only one) parameter must be specified for ComputeEnv and EnvId.
                     * @param _computeEnv Compute environment information. One (and only one) parameter must be specified for ComputeEnv and EnvId.
                     * 
                     */
                    void SetComputeEnv(const AnonymousComputeEnv& _computeEnv);

                    /**
                     * 判断参数 ComputeEnv 是否已赋值
                     * @return ComputeEnv 是否已赋值
                     * 
                     */
                    bool ComputeEnvHasBeenSet() const;

                    /**
                     * 获取Compute environment ID. One (and only one) parameter must be specified for ComputeEnv and EnvId.
                     * @return EnvId Compute environment ID. One (and only one) parameter must be specified for ComputeEnv and EnvId.
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置Compute environment ID. One (and only one) parameter must be specified for ComputeEnv and EnvId.
                     * @param _envId Compute environment ID. One (and only one) parameter must be specified for ComputeEnv and EnvId.
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取Redirection information
                     * @return RedirectInfo Redirection information
                     * 
                     */
                    RedirectInfo GetRedirectInfo() const;

                    /**
                     * 设置Redirection information
                     * @param _redirectInfo Redirection information
                     * 
                     */
                    void SetRedirectInfo(const RedirectInfo& _redirectInfo);

                    /**
                     * 判断参数 RedirectInfo 是否已赋值
                     * @return RedirectInfo 是否已赋值
                     * 
                     */
                    bool RedirectInfoHasBeenSet() const;

                    /**
                     * 获取Local redirection information
                     * @return RedirectLocalInfo Local redirection information
                     * 
                     */
                    RedirectLocalInfo GetRedirectLocalInfo() const;

                    /**
                     * 设置Local redirection information
                     * @param _redirectLocalInfo Local redirection information
                     * 
                     */
                    void SetRedirectLocalInfo(const RedirectLocalInfo& _redirectLocalInfo);

                    /**
                     * 判断参数 RedirectLocalInfo 是否已赋值
                     * @return RedirectLocalInfo 是否已赋值
                     * 
                     */
                    bool RedirectLocalInfoHasBeenSet() const;

                    /**
                     * 获取Input mapping
                     * @return InputMappings Input mapping
                     * 
                     */
                    std::vector<InputMapping> GetInputMappings() const;

                    /**
                     * 设置Input mapping
                     * @param _inputMappings Input mapping
                     * 
                     */
                    void SetInputMappings(const std::vector<InputMapping>& _inputMappings);

                    /**
                     * 判断参数 InputMappings 是否已赋值
                     * @return InputMappings 是否已赋值
                     * 
                     */
                    bool InputMappingsHasBeenSet() const;

                    /**
                     * 获取Output mapping
                     * @return OutputMappings Output mapping
                     * 
                     */
                    std::vector<OutputMapping> GetOutputMappings() const;

                    /**
                     * 设置Output mapping
                     * @param _outputMappings Output mapping
                     * 
                     */
                    void SetOutputMappings(const std::vector<OutputMapping>& _outputMappings);

                    /**
                     * 判断参数 OutputMappings 是否已赋值
                     * @return OutputMappings 是否已赋值
                     * 
                     */
                    bool OutputMappingsHasBeenSet() const;

                    /**
                     * 获取Output mapping configuration
                     * @return OutputMappingConfigs Output mapping configuration
                     * 
                     */
                    std::vector<OutputMappingConfig> GetOutputMappingConfigs() const;

                    /**
                     * 设置Output mapping configuration
                     * @param _outputMappingConfigs Output mapping configuration
                     * 
                     */
                    void SetOutputMappingConfigs(const std::vector<OutputMappingConfig>& _outputMappingConfigs);

                    /**
                     * 判断参数 OutputMappingConfigs 是否已赋值
                     * @return OutputMappingConfigs 是否已赋值
                     * 
                     */
                    bool OutputMappingConfigsHasBeenSet() const;

                    /**
                     * 获取Custom environment variable
                     * @return EnvVars Custom environment variable
                     * 
                     */
                    std::vector<EnvVar> GetEnvVars() const;

                    /**
                     * 设置Custom environment variable
                     * @param _envVars Custom environment variable
                     * 
                     */
                    void SetEnvVars(const std::vector<EnvVar>& _envVars);

                    /**
                     * 判断参数 EnvVars 是否已赋值
                     * @return EnvVars 是否已赋值
                     * 
                     */
                    bool EnvVarsHasBeenSet() const;

                    /**
                     * 获取Authorization information
                     * @return Authentications Authorization information
                     * 
                     */
                    std::vector<Authentication> GetAuthentications() const;

                    /**
                     * 设置Authorization information
                     * @param _authentications Authorization information
                     * 
                     */
                    void SetAuthentications(const std::vector<Authentication>& _authentications);

                    /**
                     * 判断参数 Authentications 是否已赋值
                     * @return Authentications 是否已赋值
                     * 
                     */
                    bool AuthenticationsHasBeenSet() const;

                    /**
                     * 获取The processing method after the TaskInstance fails; Value range: `TERMINATE` (default), `INTERRUPT`, `FAST_INTERRUPT`.
                     * @return FailedAction The processing method after the TaskInstance fails; Value range: `TERMINATE` (default), `INTERRUPT`, `FAST_INTERRUPT`.
                     * 
                     */
                    std::string GetFailedAction() const;

                    /**
                     * 设置The processing method after the TaskInstance fails; Value range: `TERMINATE` (default), `INTERRUPT`, `FAST_INTERRUPT`.
                     * @param _failedAction The processing method after the TaskInstance fails; Value range: `TERMINATE` (default), `INTERRUPT`, `FAST_INTERRUPT`.
                     * 
                     */
                    void SetFailedAction(const std::string& _failedAction);

                    /**
                     * 判断参数 FailedAction 是否已赋值
                     * @return FailedAction 是否已赋值
                     * 
                     */
                    bool FailedActionHasBeenSet() const;

                    /**
                     * 获取The maximum number of retries after the task fails. Range: 0 - 5. Default value: 0
                     * @return MaxRetryCount The maximum number of retries after the task fails. Range: 0 - 5. Default value: 0
                     * 
                     */
                    uint64_t GetMaxRetryCount() const;

                    /**
                     * 设置The maximum number of retries after the task fails. Range: 0 - 5. Default value: 0
                     * @param _maxRetryCount The maximum number of retries after the task fails. Range: 0 - 5. Default value: 0
                     * 
                     */
                    void SetMaxRetryCount(const uint64_t& _maxRetryCount);

                    /**
                     * 判断参数 MaxRetryCount 是否已赋值
                     * @return MaxRetryCount 是否已赋值
                     * 
                     */
                    bool MaxRetryCountHasBeenSet() const;

                    /**
                     * 获取Timeout period of the task in seconds. Defaults value: 86400
                     * @return Timeout Timeout period of the task in seconds. Defaults value: 86400
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置Timeout period of the task in seconds. Defaults value: 86400
                     * @param _timeout Timeout period of the task in seconds. Defaults value: 86400
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
                     * 获取The maximum number of concurrent tasks. Range: 0 - 200000. There is no limit by default.
                     * @return MaxConcurrentNum The maximum number of concurrent tasks. Range: 0 - 200000. There is no limit by default.
                     * 
                     */
                    uint64_t GetMaxConcurrentNum() const;

                    /**
                     * 设置The maximum number of concurrent tasks. Range: 0 - 200000. There is no limit by default.
                     * @param _maxConcurrentNum The maximum number of concurrent tasks. Range: 0 - 200000. There is no limit by default.
                     * 
                     */
                    void SetMaxConcurrentNum(const uint64_t& _maxConcurrentNum);

                    /**
                     * 判断参数 MaxConcurrentNum 是否已赋值
                     * @return MaxConcurrentNum 是否已赋值
                     * 
                     */
                    bool MaxConcurrentNumHasBeenSet() const;

                    /**
                     * 获取Restarts the compute node after the task is completed. This is suitable for specifying the compute environment for task execution.
                     * @return RestartComputeNode Restarts the compute node after the task is completed. This is suitable for specifying the compute environment for task execution.
                     * 
                     */
                    bool GetRestartComputeNode() const;

                    /**
                     * 设置Restarts the compute node after the task is completed. This is suitable for specifying the compute environment for task execution.
                     * @param _restartComputeNode Restarts the compute node after the task is completed. This is suitable for specifying the compute environment for task execution.
                     * 
                     */
                    void SetRestartComputeNode(const bool& _restartComputeNode);

                    /**
                     * 判断参数 RestartComputeNode 是否已赋值
                     * @return RestartComputeNode 是否已赋值
                     * 
                     */
                    bool RestartComputeNodeHasBeenSet() const;

                    /**
                     * 获取Maximum number of retry attempts after failing to create computing resources such as the CVM in the task launch process. Default: `0`; Maximum: `100`.
                     * @return ResourceMaxRetryCount Maximum number of retry attempts after failing to create computing resources such as the CVM in the task launch process. Default: `0`; Maximum: `100`.
                     * 
                     */
                    uint64_t GetResourceMaxRetryCount() const;

                    /**
                     * 设置Maximum number of retry attempts after failing to create computing resources such as the CVM in the task launch process. Default: `0`; Maximum: `100`.
                     * @param _resourceMaxRetryCount Maximum number of retry attempts after failing to create computing resources such as the CVM in the task launch process. Default: `0`; Maximum: `100`.
                     * 
                     */
                    void SetResourceMaxRetryCount(const uint64_t& _resourceMaxRetryCount);

                    /**
                     * 判断参数 ResourceMaxRetryCount 是否已赋值
                     * @return ResourceMaxRetryCount 是否已赋值
                     * 
                     */
                    bool ResourceMaxRetryCountHasBeenSet() const;

                private:

                    /**
                     * Application information
                     */
                    Application m_application;
                    bool m_applicationHasBeenSet;

                    /**
                     * Task name, which should be unique within a job
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Number of running task instances
                     */
                    uint64_t m_taskInstanceNum;
                    bool m_taskInstanceNumHasBeenSet;

                    /**
                     * Compute environment information. One (and only one) parameter must be specified for ComputeEnv and EnvId.
                     */
                    AnonymousComputeEnv m_computeEnv;
                    bool m_computeEnvHasBeenSet;

                    /**
                     * Compute environment ID. One (and only one) parameter must be specified for ComputeEnv and EnvId.
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * Redirection information
                     */
                    RedirectInfo m_redirectInfo;
                    bool m_redirectInfoHasBeenSet;

                    /**
                     * Local redirection information
                     */
                    RedirectLocalInfo m_redirectLocalInfo;
                    bool m_redirectLocalInfoHasBeenSet;

                    /**
                     * Input mapping
                     */
                    std::vector<InputMapping> m_inputMappings;
                    bool m_inputMappingsHasBeenSet;

                    /**
                     * Output mapping
                     */
                    std::vector<OutputMapping> m_outputMappings;
                    bool m_outputMappingsHasBeenSet;

                    /**
                     * Output mapping configuration
                     */
                    std::vector<OutputMappingConfig> m_outputMappingConfigs;
                    bool m_outputMappingConfigsHasBeenSet;

                    /**
                     * Custom environment variable
                     */
                    std::vector<EnvVar> m_envVars;
                    bool m_envVarsHasBeenSet;

                    /**
                     * Authorization information
                     */
                    std::vector<Authentication> m_authentications;
                    bool m_authenticationsHasBeenSet;

                    /**
                     * The processing method after the TaskInstance fails; Value range: `TERMINATE` (default), `INTERRUPT`, `FAST_INTERRUPT`.
                     */
                    std::string m_failedAction;
                    bool m_failedActionHasBeenSet;

                    /**
                     * The maximum number of retries after the task fails. Range: 0 - 5. Default value: 0
                     */
                    uint64_t m_maxRetryCount;
                    bool m_maxRetryCountHasBeenSet;

                    /**
                     * Timeout period of the task in seconds. Defaults value: 86400
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * The maximum number of concurrent tasks. Range: 0 - 200000. There is no limit by default.
                     */
                    uint64_t m_maxConcurrentNum;
                    bool m_maxConcurrentNumHasBeenSet;

                    /**
                     * Restarts the compute node after the task is completed. This is suitable for specifying the compute environment for task execution.
                     */
                    bool m_restartComputeNode;
                    bool m_restartComputeNodeHasBeenSet;

                    /**
                     * Maximum number of retry attempts after failing to create computing resources such as the CVM in the task launch process. Default: `0`; Maximum: `100`.
                     */
                    uint64_t m_resourceMaxRetryCount;
                    bool m_resourceMaxRetryCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_TASK_H_
