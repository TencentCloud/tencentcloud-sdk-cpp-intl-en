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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_RUN_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_RUN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/RunOption.h>
#include <tencentcloud/omics/v20221128/model/ExecutionTime.h>
#include <tencentcloud/omics/v20221128/model/CacheInfo.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * Run
                */
                class Run : public AbstractModel
                {
                public:
                    Run();
                    ~Run() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Run UUID
                     * @return RunUuid Run UUID
                     * 
                     */
                    std::string GetRunUuid() const;

                    /**
                     * 设置Run UUID
                     * @param _runUuid Run UUID
                     * 
                     */
                    void SetRunUuid(const std::string& _runUuid);

                    /**
                     * 判断参数 RunUuid 是否已赋值
                     * @return RunUuid 是否已赋值
                     * 
                     */
                    bool RunUuidHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Application ID
                     * @return ApplicationId Application ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID
                     * @param _applicationId Application ID
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Run group ID
                     * @return RunGroupId Run group ID
                     * 
                     */
                    std::string GetRunGroupId() const;

                    /**
                     * 设置Run group ID
                     * @param _runGroupId Run group ID
                     * 
                     */
                    void SetRunGroupId(const std::string& _runGroupId);

                    /**
                     * 判断参数 RunGroupId 是否已赋值
                     * @return RunGroupId 是否已赋值
                     * 
                     */
                    bool RunGroupIdHasBeenSet() const;

                    /**
                     * 获取Environment ID
                     * @return EnvironmentId Environment ID
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment ID
                     * @param _environmentId Environment ID
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取User-defined ID. Null for running in singleton mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserDefinedId User-defined ID. Null for running in singleton mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserDefinedId() const;

                    /**
                     * 设置User-defined ID. Null for running in singleton mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userDefinedId User-defined ID. Null for running in singleton mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserDefinedId(const std::string& _userDefinedId);

                    /**
                     * 判断参数 UserDefinedId 是否已赋值
                     * @return UserDefinedId 是否已赋值
                     * 
                     */
                    bool UserDefinedIdHasBeenSet() const;

                    /**
                     * 获取Table ID. Null for running in singleton mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableId Table ID. Null for running in singleton mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置Table ID. Null for running in singleton mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableId Table ID. Null for running in singleton mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取Table row UUID. Null for running in singleton mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableRowUuid Table row UUID. Null for running in singleton mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableRowUuid() const;

                    /**
                     * 设置Table row UUID. Null for running in singleton mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableRowUuid Table row UUID. Null for running in singleton mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableRowUuid(const std::string& _tableRowUuid);

                    /**
                     * 判断参数 TableRowUuid 是否已赋值
                     * @return TableRowUuid 是否已赋值
                     * 
                     */
                    bool TableRowUuidHasBeenSet() const;

                    /**
                     * 获取Run status
                     * @return Status Run status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Run status
                     * @param _status Run status
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Run input
                     * @return Input Run input
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置Run input
                     * @param _input Run input
                     * 
                     */
                    void SetInput(const std::string& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Running option
                     * @return Option Running option
                     * @deprecated
                     */
                    RunOption GetOption() const;

                    /**
                     * 设置Running option
                     * @param _option Running option
                     * @deprecated
                     */
                    void SetOption(const RunOption& _option);

                    /**
                     * 判断参数 Option 是否已赋值
                     * @return Option 是否已赋值
                     * @deprecated
                     */
                    bool OptionHasBeenSet() const;

                    /**
                     * 获取Execution time
                     * @return ExecutionTime Execution time
                     * 
                     */
                    ExecutionTime GetExecutionTime() const;

                    /**
                     * 设置Execution time
                     * @param _executionTime Execution time
                     * 
                     */
                    void SetExecutionTime(const ExecutionTime& _executionTime);

                    /**
                     * 判断参数 ExecutionTime 是否已赋值
                     * @return ExecutionTime 是否已赋值
                     * 
                     */
                    bool ExecutionTimeHasBeenSet() const;

                    /**
                     * 获取Cache information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Cache Cache information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CacheInfo GetCache() const;

                    /**
                     * 设置Cache information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cache Cache information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCache(const CacheInfo& _cache);

                    /**
                     * 判断参数 Cache 是否已赋值
                     * @return Cache 是否已赋值
                     * 
                     */
                    bool CacheHasBeenSet() const;

                    /**
                     * 获取Error message
                     * @return ErrorMessage Error message
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置Error message
                     * @param _errorMessage Error message
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
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
                     * 获取Update time
                     * @return UpdateTime Update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param _updateTime Update time
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
                     * Run UUID
                     */
                    std::string m_runUuid;
                    bool m_runUuidHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Application ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Run group ID
                     */
                    std::string m_runGroupId;
                    bool m_runGroupIdHasBeenSet;

                    /**
                     * Environment ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * User-defined ID. Null for running in singleton mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userDefinedId;
                    bool m_userDefinedIdHasBeenSet;

                    /**
                     * Table ID. Null for running in singleton mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Table row UUID. Null for running in singleton mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableRowUuid;
                    bool m_tableRowUuidHasBeenSet;

                    /**
                     * Run status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Run input
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Running option
                     */
                    RunOption m_option;
                    bool m_optionHasBeenSet;

                    /**
                     * Execution time
                     */
                    ExecutionTime m_executionTime;
                    bool m_executionTimeHasBeenSet;

                    /**
                     * Cache information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CacheInfo m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * Error message
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RUN_H_
