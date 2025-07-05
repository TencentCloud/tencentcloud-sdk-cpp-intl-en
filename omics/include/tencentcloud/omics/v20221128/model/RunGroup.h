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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_RUNGROUP_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_RUNGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/RunOption.h>
#include <tencentcloud/omics/v20221128/model/NFOption.h>
#include <tencentcloud/omics/v20221128/model/RunStatusCount.h>
#include <tencentcloud/omics/v20221128/model/ExecutionTime.h>
#include <tencentcloud/omics/v20221128/model/ApplicationVersion.h>


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
                class RunGroup : public AbstractModel
                {
                public:
                    RunGroup();
                    ~RunGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Project name
                     * @return ProjectName Project name
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name
                     * @param _projectName Project name
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

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
                     * 获取Application name
                     * @return ApplicationName Application name
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Application name
                     * @param _applicationName Application name
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取Application type
                     * @return ApplicationType Application type
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置Application type
                     * @param _applicationType Application type
                     * 
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

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
                     * 获取Environment name
                     * @return EnvironmentName Environment name
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置Environment name
                     * @param _environmentName Environment name
                     * 
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     * 
                     */
                    bool EnvironmentNameHasBeenSet() const;

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
                     * 获取Run name
                     * @return Name Run name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Run name
                     * @param _name Run name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Run description
                     * @return Description Run description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Run description
                     * @param _description Run description
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
                     * 获取WDL running option
                     * @return Option WDL running option
                     * 
                     */
                    RunOption GetOption() const;

                    /**
                     * 设置WDL running option
                     * @param _option WDL running option
                     * 
                     */
                    void SetOption(const RunOption& _option);

                    /**
                     * 判断参数 Option 是否已赋值
                     * @return Option 是否已赋值
                     * 
                     */
                    bool OptionHasBeenSet() const;

                    /**
                     * 获取Nextflow running option
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NFOption Nextflow running option
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    NFOption GetNFOption() const;

                    /**
                     * 设置Nextflow running option
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nFOption Nextflow running option
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNFOption(const NFOption& _nFOption);

                    /**
                     * 判断参数 NFOption 是否已赋值
                     * @return NFOption 是否已赋值
                     * 
                     */
                    bool NFOptionHasBeenSet() const;

                    /**
                     * 获取Total number of runs
                     * @return TotalRun Total number of runs
                     * 
                     */
                    uint64_t GetTotalRun() const;

                    /**
                     * 设置Total number of runs
                     * @param _totalRun Total number of runs
                     * 
                     */
                    void SetTotalRun(const uint64_t& _totalRun);

                    /**
                     * 判断参数 TotalRun 是否已赋值
                     * @return TotalRun 是否已赋值
                     * 
                     */
                    bool TotalRunHasBeenSet() const;

                    /**
                     * 获取Number of runs in various status
                     * @return RunStatusCounts Number of runs in various status
                     * 
                     */
                    std::vector<RunStatusCount> GetRunStatusCounts() const;

                    /**
                     * 设置Number of runs in various status
                     * @param _runStatusCounts Number of runs in various status
                     * 
                     */
                    void SetRunStatusCounts(const std::vector<RunStatusCount>& _runStatusCounts);

                    /**
                     * 判断参数 RunStatusCounts 是否已赋值
                     * @return RunStatusCounts 是否已赋值
                     * 
                     */
                    bool RunStatusCountsHasBeenSet() const;

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

                    /**
                     * 获取Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Creator Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _creator Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取Creator ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreatorId Creator ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatorId() const;

                    /**
                     * 设置Creator ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _creatorId Creator ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatorId(const std::string& _creatorId);

                    /**
                     * 判断参数 CreatorId 是否已赋值
                     * @return CreatorId 是否已赋值
                     * 
                     */
                    bool CreatorIdHasBeenSet() const;

                    /**
                     * 获取Running result notification method
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResultNotify Running result notification method
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResultNotify() const;

                    /**
                     * 设置Running result notification method
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resultNotify Running result notification method
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResultNotify(const std::string& _resultNotify);

                    /**
                     * 判断参数 ResultNotify 是否已赋值
                     * @return ResultNotify 是否已赋值
                     * 
                     */
                    bool ResultNotifyHasBeenSet() const;

                    /**
                     * 获取Application version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationVersion Application version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ApplicationVersion GetApplicationVersion() const;

                    /**
                     * 设置Application version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationVersion Application version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationVersion(const ApplicationVersion& _applicationVersion);

                    /**
                     * 判断参数 ApplicationVersion 是否已赋值
                     * @return ApplicationVersion 是否已赋值
                     * 
                     */
                    bool ApplicationVersionHasBeenSet() const;

                private:

                    /**
                     * Run group ID
                     */
                    std::string m_runGroupId;
                    bool m_runGroupIdHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project name
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Application ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Application name
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Application type
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * Environment ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Environment name
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * Table ID. Null for running in singleton mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Run name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Run description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

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
                     * WDL running option
                     */
                    RunOption m_option;
                    bool m_optionHasBeenSet;

                    /**
                     * Nextflow running option
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    NFOption m_nFOption;
                    bool m_nFOptionHasBeenSet;

                    /**
                     * Total number of runs
                     */
                    uint64_t m_totalRun;
                    bool m_totalRunHasBeenSet;

                    /**
                     * Number of runs in various status
                     */
                    std::vector<RunStatusCount> m_runStatusCounts;
                    bool m_runStatusCountsHasBeenSet;

                    /**
                     * Execution time
                     */
                    ExecutionTime m_executionTime;
                    bool m_executionTimeHasBeenSet;

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

                    /**
                     * Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Creator ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_creatorId;
                    bool m_creatorIdHasBeenSet;

                    /**
                     * Running result notification method
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resultNotify;
                    bool m_resultNotifyHasBeenSet;

                    /**
                     * Application version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ApplicationVersion m_applicationVersion;
                    bool m_applicationVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RUNGROUP_H_
