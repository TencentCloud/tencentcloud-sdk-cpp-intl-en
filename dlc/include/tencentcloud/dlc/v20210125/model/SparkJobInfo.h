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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SPARKJOBINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SPARKJOBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/StreamingStatistics.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Spark job details
                */
                class SparkJobInfo : public AbstractModel
                {
                public:
                    SparkJobInfo();
                    ~SparkJobInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Spark job ID
                     * @return JobId Spark job ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Spark job ID
                     * @param _jobId Spark job ID
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Spark job name
                     * @return JobName Spark job name
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Spark job name
                     * @param _jobName Spark job name
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取Spark job type. Valid values: `1` (batch job), `2` (streaming job).
                     * @return JobType Spark job type. Valid values: `1` (batch job), `2` (streaming job).
                     * 
                     */
                    int64_t GetJobType() const;

                    /**
                     * 设置Spark job type. Valid values: `1` (batch job), `2` (streaming job).
                     * @param _jobType Spark job type. Valid values: `1` (batch job), `2` (streaming job).
                     * 
                     */
                    void SetJobType(const int64_t& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取Engine name
                     * @return DataEngine Engine name
                     * 
                     */
                    std::string GetDataEngine() const;

                    /**
                     * 设置Engine name
                     * @param _dataEngine Engine name
                     * 
                     */
                    void SetDataEngine(const std::string& _dataEngine);

                    /**
                     * 判断参数 DataEngine 是否已赋值
                     * @return DataEngine 是否已赋值
                     * 
                     */
                    bool DataEngineHasBeenSet() const;

                    /**
                     * 获取This field has been disused. Use the `Datasource` field instead.
                     * @return Eni This field has been disused. Use the `Datasource` field instead.
                     * 
                     */
                    std::string GetEni() const;

                    /**
                     * 设置This field has been disused. Use the `Datasource` field instead.
                     * @param _eni This field has been disused. Use the `Datasource` field instead.
                     * 
                     */
                    void SetEni(const std::string& _eni);

                    /**
                     * 判断参数 Eni 是否已赋值
                     * @return Eni 是否已赋值
                     * 
                     */
                    bool EniHasBeenSet() const;

                    /**
                     * 获取Whether the program package is uploaded locally. Valid values: `cos`, `lakefs`.
                     * @return IsLocal Whether the program package is uploaded locally. Valid values: `cos`, `lakefs`.
                     * 
                     */
                    std::string GetIsLocal() const;

                    /**
                     * 设置Whether the program package is uploaded locally. Valid values: `cos`, `lakefs`.
                     * @param _isLocal Whether the program package is uploaded locally. Valid values: `cos`, `lakefs`.
                     * 
                     */
                    void SetIsLocal(const std::string& _isLocal);

                    /**
                     * 判断参数 IsLocal 是否已赋值
                     * @return IsLocal 是否已赋值
                     * 
                     */
                    bool IsLocalHasBeenSet() const;

                    /**
                     * 获取Program package path
                     * @return JobFile Program package path
                     * 
                     */
                    std::string GetJobFile() const;

                    /**
                     * 设置Program package path
                     * @param _jobFile Program package path
                     * 
                     */
                    void SetJobFile(const std::string& _jobFile);

                    /**
                     * 判断参数 JobFile 是否已赋值
                     * @return JobFile 是否已赋值
                     * 
                     */
                    bool JobFileHasBeenSet() const;

                    /**
                     * 获取Role ID
                     * @return RoleArn Role ID
                     * 
                     */
                    int64_t GetRoleArn() const;

                    /**
                     * 设置Role ID
                     * @param _roleArn Role ID
                     * 
                     */
                    void SetRoleArn(const int64_t& _roleArn);

                    /**
                     * 判断参数 RoleArn 是否已赋值
                     * @return RoleArn 是否已赋值
                     * 
                     */
                    bool RoleArnHasBeenSet() const;

                    /**
                     * 获取Main class of Spark job execution
                     * @return MainClass Main class of Spark job execution
                     * 
                     */
                    std::string GetMainClass() const;

                    /**
                     * 设置Main class of Spark job execution
                     * @param _mainClass Main class of Spark job execution
                     * 
                     */
                    void SetMainClass(const std::string& _mainClass);

                    /**
                     * 判断参数 MainClass 是否已赋值
                     * @return MainClass 是否已赋值
                     * 
                     */
                    bool MainClassHasBeenSet() const;

                    /**
                     * 获取Command line parameters of the Spark job separated by space
                     * @return CmdArgs Command line parameters of the Spark job separated by space
                     * 
                     */
                    std::string GetCmdArgs() const;

                    /**
                     * 设置Command line parameters of the Spark job separated by space
                     * @param _cmdArgs Command line parameters of the Spark job separated by space
                     * 
                     */
                    void SetCmdArgs(const std::string& _cmdArgs);

                    /**
                     * 判断参数 CmdArgs 是否已赋值
                     * @return CmdArgs 是否已赋值
                     * 
                     */
                    bool CmdArgsHasBeenSet() const;

                    /**
                     * 获取Native Spark configurations separated by line break
                     * @return JobConf Native Spark configurations separated by line break
                     * 
                     */
                    std::string GetJobConf() const;

                    /**
                     * 设置Native Spark configurations separated by line break
                     * @param _jobConf Native Spark configurations separated by line break
                     * 
                     */
                    void SetJobConf(const std::string& _jobConf);

                    /**
                     * 判断参数 JobConf 是否已赋值
                     * @return JobConf 是否已赋值
                     * 
                     */
                    bool JobConfHasBeenSet() const;

                    /**
                     * 获取Whether the dependency JAR packages are uploaded locally. Valid values: `cos`, `lakefs`.
                     * @return IsLocalJars Whether the dependency JAR packages are uploaded locally. Valid values: `cos`, `lakefs`.
                     * 
                     */
                    std::string GetIsLocalJars() const;

                    /**
                     * 设置Whether the dependency JAR packages are uploaded locally. Valid values: `cos`, `lakefs`.
                     * @param _isLocalJars Whether the dependency JAR packages are uploaded locally. Valid values: `cos`, `lakefs`.
                     * 
                     */
                    void SetIsLocalJars(const std::string& _isLocalJars);

                    /**
                     * 判断参数 IsLocalJars 是否已赋值
                     * @return IsLocalJars 是否已赋值
                     * 
                     */
                    bool IsLocalJarsHasBeenSet() const;

                    /**
                     * 获取Dependency JAR packages of the Spark job separated by comma
                     * @return JobJars Dependency JAR packages of the Spark job separated by comma
                     * 
                     */
                    std::string GetJobJars() const;

                    /**
                     * 设置Dependency JAR packages of the Spark job separated by comma
                     * @param _jobJars Dependency JAR packages of the Spark job separated by comma
                     * 
                     */
                    void SetJobJars(const std::string& _jobJars);

                    /**
                     * 判断参数 JobJars 是否已赋值
                     * @return JobJars 是否已赋值
                     * 
                     */
                    bool JobJarsHasBeenSet() const;

                    /**
                     * 获取Whether the dependency file is uploaded locally. Valid values: `cos`, `lakefs`.
                     * @return IsLocalFiles Whether the dependency file is uploaded locally. Valid values: `cos`, `lakefs`.
                     * 
                     */
                    std::string GetIsLocalFiles() const;

                    /**
                     * 设置Whether the dependency file is uploaded locally. Valid values: `cos`, `lakefs`.
                     * @param _isLocalFiles Whether the dependency file is uploaded locally. Valid values: `cos`, `lakefs`.
                     * 
                     */
                    void SetIsLocalFiles(const std::string& _isLocalFiles);

                    /**
                     * 判断参数 IsLocalFiles 是否已赋值
                     * @return IsLocalFiles 是否已赋值
                     * 
                     */
                    bool IsLocalFilesHasBeenSet() const;

                    /**
                     * 获取Dependency files of the Spark job separated by comma
                     * @return JobFiles Dependency files of the Spark job separated by comma
                     * 
                     */
                    std::string GetJobFiles() const;

                    /**
                     * 设置Dependency files of the Spark job separated by comma
                     * @param _jobFiles Dependency files of the Spark job separated by comma
                     * 
                     */
                    void SetJobFiles(const std::string& _jobFiles);

                    /**
                     * 判断参数 JobFiles 是否已赋值
                     * @return JobFiles 是否已赋值
                     * 
                     */
                    bool JobFilesHasBeenSet() const;

                    /**
                     * 获取Driver resource size of the Spark job
                     * @return JobDriverSize Driver resource size of the Spark job
                     * 
                     */
                    std::string GetJobDriverSize() const;

                    /**
                     * 设置Driver resource size of the Spark job
                     * @param _jobDriverSize Driver resource size of the Spark job
                     * 
                     */
                    void SetJobDriverSize(const std::string& _jobDriverSize);

                    /**
                     * 判断参数 JobDriverSize 是否已赋值
                     * @return JobDriverSize 是否已赋值
                     * 
                     */
                    bool JobDriverSizeHasBeenSet() const;

                    /**
                     * 获取Executor resource size of the Spark job
                     * @return JobExecutorSize Executor resource size of the Spark job
                     * 
                     */
                    std::string GetJobExecutorSize() const;

                    /**
                     * 设置Executor resource size of the Spark job
                     * @param _jobExecutorSize Executor resource size of the Spark job
                     * 
                     */
                    void SetJobExecutorSize(const std::string& _jobExecutorSize);

                    /**
                     * 判断参数 JobExecutorSize 是否已赋值
                     * @return JobExecutorSize 是否已赋值
                     * 
                     */
                    bool JobExecutorSizeHasBeenSet() const;

                    /**
                     * 获取Number of Spark job executors
                     * @return JobExecutorNums Number of Spark job executors
                     * 
                     */
                    int64_t GetJobExecutorNums() const;

                    /**
                     * 设置Number of Spark job executors
                     * @param _jobExecutorNums Number of Spark job executors
                     * 
                     */
                    void SetJobExecutorNums(const int64_t& _jobExecutorNums);

                    /**
                     * 判断参数 JobExecutorNums 是否已赋值
                     * @return JobExecutorNums 是否已赋值
                     * 
                     */
                    bool JobExecutorNumsHasBeenSet() const;

                    /**
                     * 获取Maximum number of retries of the Spark flow task
                     * @return JobMaxAttempts Maximum number of retries of the Spark flow task
                     * 
                     */
                    int64_t GetJobMaxAttempts() const;

                    /**
                     * 设置Maximum number of retries of the Spark flow task
                     * @param _jobMaxAttempts Maximum number of retries of the Spark flow task
                     * 
                     */
                    void SetJobMaxAttempts(const int64_t& _jobMaxAttempts);

                    /**
                     * 判断参数 JobMaxAttempts 是否已赋值
                     * @return JobMaxAttempts 是否已赋值
                     * 
                     */
                    bool JobMaxAttemptsHasBeenSet() const;

                    /**
                     * 获取Spark job creator
                     * @return JobCreator Spark job creator
                     * 
                     */
                    std::string GetJobCreator() const;

                    /**
                     * 设置Spark job creator
                     * @param _jobCreator Spark job creator
                     * 
                     */
                    void SetJobCreator(const std::string& _jobCreator);

                    /**
                     * 判断参数 JobCreator 是否已赋值
                     * @return JobCreator 是否已赋值
                     * 
                     */
                    bool JobCreatorHasBeenSet() const;

                    /**
                     * 获取Spark job creation time
                     * @return JobCreateTime Spark job creation time
                     * 
                     */
                    int64_t GetJobCreateTime() const;

                    /**
                     * 设置Spark job creation time
                     * @param _jobCreateTime Spark job creation time
                     * 
                     */
                    void SetJobCreateTime(const int64_t& _jobCreateTime);

                    /**
                     * 判断参数 JobCreateTime 是否已赋值
                     * @return JobCreateTime 是否已赋值
                     * 
                     */
                    bool JobCreateTimeHasBeenSet() const;

                    /**
                     * 获取Spark job update time
                     * @return JobUpdateTime Spark job update time
                     * 
                     */
                    uint64_t GetJobUpdateTime() const;

                    /**
                     * 设置Spark job update time
                     * @param _jobUpdateTime Spark job update time
                     * 
                     */
                    void SetJobUpdateTime(const uint64_t& _jobUpdateTime);

                    /**
                     * 判断参数 JobUpdateTime 是否已赋值
                     * @return JobUpdateTime 是否已赋值
                     * 
                     */
                    bool JobUpdateTimeHasBeenSet() const;

                    /**
                     * 获取Last task ID of the Spark job
                     * @return CurrentTaskId Last task ID of the Spark job
                     * 
                     */
                    std::string GetCurrentTaskId() const;

                    /**
                     * 设置Last task ID of the Spark job
                     * @param _currentTaskId Last task ID of the Spark job
                     * 
                     */
                    void SetCurrentTaskId(const std::string& _currentTaskId);

                    /**
                     * 判断参数 CurrentTaskId 是否已赋值
                     * @return CurrentTaskId 是否已赋值
                     * 
                     */
                    bool CurrentTaskIdHasBeenSet() const;

                    /**
                     * 获取Last status of the Spark job
                     * @return JobStatus Last status of the Spark job
                     * 
                     */
                    int64_t GetJobStatus() const;

                    /**
                     * 设置Last status of the Spark job
                     * @param _jobStatus Last status of the Spark job
                     * 
                     */
                    void SetJobStatus(const int64_t& _jobStatus);

                    /**
                     * 判断参数 JobStatus 是否已赋值
                     * @return JobStatus 是否已赋值
                     * 
                     */
                    bool JobStatusHasBeenSet() const;

                    /**
                     * 获取Spark streaming job statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StreamingStat Spark streaming job statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    StreamingStatistics GetStreamingStat() const;

                    /**
                     * 设置Spark streaming job statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _streamingStat Spark streaming job statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStreamingStat(const StreamingStatistics& _streamingStat);

                    /**
                     * 判断参数 StreamingStat 是否已赋值
                     * @return StreamingStat 是否已赋值
                     * 
                     */
                    bool StreamingStatHasBeenSet() const;

                    /**
                     * 获取Data source name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataSource Data source name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataSource() const;

                    /**
                     * 设置Data source name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataSource Data source name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataSource(const std::string& _dataSource);

                    /**
                     * 判断参数 DataSource 是否已赋值
                     * @return DataSource 是否已赋值
                     * 
                     */
                    bool DataSourceHasBeenSet() const;

                    /**
                     * 获取PySpark: Dependency upload method. 1: cos; 2: lakefs (this method needs to be used in the console but cannot be called through APIs).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsLocalPythonFiles PySpark: Dependency upload method. 1: cos; 2: lakefs (this method needs to be used in the console but cannot be called through APIs).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIsLocalPythonFiles() const;

                    /**
                     * 设置PySpark: Dependency upload method. 1: cos; 2: lakefs (this method needs to be used in the console but cannot be called through APIs).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isLocalPythonFiles PySpark: Dependency upload method. 1: cos; 2: lakefs (this method needs to be used in the console but cannot be called through APIs).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsLocalPythonFiles(const std::string& _isLocalPythonFiles);

                    /**
                     * 判断参数 IsLocalPythonFiles 是否已赋值
                     * @return IsLocalPythonFiles 是否已赋值
                     * 
                     */
                    bool IsLocalPythonFilesHasBeenSet() const;

                    /**
                     * 获取Note: This returned value has been disused.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppPythonFiles Note: This returned value has been disused.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAppPythonFiles() const;

                    /**
                     * 设置Note: This returned value has been disused.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appPythonFiles Note: This returned value has been disused.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppPythonFiles(const std::string& _appPythonFiles);

                    /**
                     * 判断参数 AppPythonFiles 是否已赋值
                     * @return AppPythonFiles 是否已赋值
                     * 
                     */
                    bool AppPythonFilesHasBeenSet() const;

                    /**
                     * 获取Archives: Dependency upload method. 1: cos; 2: lakefs (this method needs to be used in the console but cannot be called through APIs).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsLocalArchives Archives: Dependency upload method. 1: cos; 2: lakefs (this method needs to be used in the console but cannot be called through APIs).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIsLocalArchives() const;

                    /**
                     * 设置Archives: Dependency upload method. 1: cos; 2: lakefs (this method needs to be used in the console but cannot be called through APIs).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isLocalArchives Archives: Dependency upload method. 1: cos; 2: lakefs (this method needs to be used in the console but cannot be called through APIs).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsLocalArchives(const std::string& _isLocalArchives);

                    /**
                     * 判断参数 IsLocalArchives 是否已赋值
                     * @return IsLocalArchives 是否已赋值
                     * 
                     */
                    bool IsLocalArchivesHasBeenSet() const;

                    /**
                     * 获取Archives: Dependency resources
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobArchives Archives: Dependency resources
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJobArchives() const;

                    /**
                     * 设置Archives: Dependency resources
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jobArchives Archives: Dependency resources
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJobArchives(const std::string& _jobArchives);

                    /**
                     * 判断参数 JobArchives 是否已赋值
                     * @return JobArchives 是否已赋值
                     * 
                     */
                    bool JobArchivesHasBeenSet() const;

                    /**
                     * 获取The Spark image version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SparkImage The Spark image version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSparkImage() const;

                    /**
                     * 设置The Spark image version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sparkImage The Spark image version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSparkImage(const std::string& _sparkImage);

                    /**
                     * 判断参数 SparkImage 是否已赋值
                     * @return SparkImage 是否已赋值
                     * 
                     */
                    bool SparkImageHasBeenSet() const;

                    /**
                     * 获取PySpark: Python dependency, which can be in .py, .zip, or .egg format. Multiple files should be separated by comma.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobPythonFiles PySpark: Python dependency, which can be in .py, .zip, or .egg format. Multiple files should be separated by comma.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJobPythonFiles() const;

                    /**
                     * 设置PySpark: Python dependency, which can be in .py, .zip, or .egg format. Multiple files should be separated by comma.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jobPythonFiles PySpark: Python dependency, which can be in .py, .zip, or .egg format. Multiple files should be separated by comma.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJobPythonFiles(const std::string& _jobPythonFiles);

                    /**
                     * 判断参数 JobPythonFiles 是否已赋值
                     * @return JobPythonFiles 是否已赋值
                     * 
                     */
                    bool JobPythonFilesHasBeenSet() const;

                    /**
                     * 获取Number of tasks running or ready to run under the current job
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskNum Number of tasks running or ready to run under the current job
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskNum() const;

                    /**
                     * 设置Number of tasks running or ready to run under the current job
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskNum Number of tasks running or ready to run under the current job
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskNum(const int64_t& _taskNum);

                    /**
                     * 判断参数 TaskNum 是否已赋值
                     * @return TaskNum 是否已赋值
                     * 
                     */
                    bool TaskNumHasBeenSet() const;

                    /**
                     * 获取Engine status. -100 (default value): unknown; -2–11: normal.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataEngineStatus Engine status. -100 (default value): unknown; -2–11: normal.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDataEngineStatus() const;

                    /**
                     * 设置Engine status. -100 (default value): unknown; -2–11: normal.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataEngineStatus Engine status. -100 (default value): unknown; -2–11: normal.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataEngineStatus(const int64_t& _dataEngineStatus);

                    /**
                     * 判断参数 DataEngineStatus 是否已赋值
                     * @return DataEngineStatus 是否已赋值
                     * 
                     */
                    bool DataEngineStatusHasBeenSet() const;

                    /**
                     * 获取The specified executor count (max), which defaults to 1. This parameter applies if the "Dynamic" mode is selected. If the "Dynamic" mode is not selected, the executor count is equal to `JobExecutorNums`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobExecutorMaxNumbers The specified executor count (max), which defaults to 1. This parameter applies if the "Dynamic" mode is selected. If the "Dynamic" mode is not selected, the executor count is equal to `JobExecutorNums`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetJobExecutorMaxNumbers() const;

                    /**
                     * 设置The specified executor count (max), which defaults to 1. This parameter applies if the "Dynamic" mode is selected. If the "Dynamic" mode is not selected, the executor count is equal to `JobExecutorNums`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jobExecutorMaxNumbers The specified executor count (max), which defaults to 1. This parameter applies if the "Dynamic" mode is selected. If the "Dynamic" mode is not selected, the executor count is equal to `JobExecutorNums`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJobExecutorMaxNumbers(const int64_t& _jobExecutorMaxNumbers);

                    /**
                     * 判断参数 JobExecutorMaxNumbers 是否已赋值
                     * @return JobExecutorMaxNumbers 是否已赋值
                     * 
                     */
                    bool JobExecutorMaxNumbersHasBeenSet() const;

                    /**
                     * 获取The image version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SparkImageVersion The image version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSparkImageVersion() const;

                    /**
                     * 设置The image version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sparkImageVersion The image version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSparkImageVersion(const std::string& _sparkImageVersion);

                    /**
                     * 判断参数 SparkImageVersion 是否已赋值
                     * @return SparkImageVersion 是否已赋值
                     * 
                     */
                    bool SparkImageVersionHasBeenSet() const;

                    /**
                     * 获取The ID of the associated Data Lake Compute query script.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SessionId The ID of the associated Data Lake Compute query script.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The ID of the associated Data Lake Compute query script.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sessionId The ID of the associated Data Lake Compute query script.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取`spark_emr_livy` indicates to create an EMR cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataEngineClusterType `spark_emr_livy` indicates to create an EMR cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataEngineClusterType() const;

                    /**
                     * 设置`spark_emr_livy` indicates to create an EMR cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataEngineClusterType `spark_emr_livy` indicates to create an EMR cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataEngineClusterType(const std::string& _dataEngineClusterType);

                    /**
                     * 判断参数 DataEngineClusterType 是否已赋值
                     * @return DataEngineClusterType 是否已赋值
                     * 
                     */
                    bool DataEngineClusterTypeHasBeenSet() const;

                    /**
                     * 获取`Spark 3.2-EMR` indicates to use the Spark 3.2 image.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataEngineImageVersion `Spark 3.2-EMR` indicates to use the Spark 3.2 image.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataEngineImageVersion() const;

                    /**
                     * 设置`Spark 3.2-EMR` indicates to use the Spark 3.2 image.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataEngineImageVersion `Spark 3.2-EMR` indicates to use the Spark 3.2 image.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataEngineImageVersion(const std::string& _dataEngineImageVersion);

                    /**
                     * 判断参数 DataEngineImageVersion 是否已赋值
                     * @return DataEngineImageVersion 是否已赋值
                     * 
                     */
                    bool DataEngineImageVersionHasBeenSet() const;

                    /**
                     * 获取Whether the task resource configuration is inherited from the cluster template. Valid values: `0` (default): No; `1`: Yes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsInherit Whether the task resource configuration is inherited from the cluster template. Valid values: `0` (default): No; `1`: Yes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsInherit() const;

                    /**
                     * 设置Whether the task resource configuration is inherited from the cluster template. Valid values: `0` (default): No; `1`: Yes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isInherit Whether the task resource configuration is inherited from the cluster template. Valid values: `0` (default): No; `1`: Yes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsInherit(const uint64_t& _isInherit);

                    /**
                     * 判断参数 IsInherit 是否已赋值
                     * @return IsInherit 是否已赋值
                     * 
                     */
                    bool IsInheritHasBeenSet() const;

                private:

                    /**
                     * Spark job ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Spark job name
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * Spark job type. Valid values: `1` (batch job), `2` (streaming job).
                     */
                    int64_t m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * Engine name
                     */
                    std::string m_dataEngine;
                    bool m_dataEngineHasBeenSet;

                    /**
                     * This field has been disused. Use the `Datasource` field instead.
                     */
                    std::string m_eni;
                    bool m_eniHasBeenSet;

                    /**
                     * Whether the program package is uploaded locally. Valid values: `cos`, `lakefs`.
                     */
                    std::string m_isLocal;
                    bool m_isLocalHasBeenSet;

                    /**
                     * Program package path
                     */
                    std::string m_jobFile;
                    bool m_jobFileHasBeenSet;

                    /**
                     * Role ID
                     */
                    int64_t m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * Main class of Spark job execution
                     */
                    std::string m_mainClass;
                    bool m_mainClassHasBeenSet;

                    /**
                     * Command line parameters of the Spark job separated by space
                     */
                    std::string m_cmdArgs;
                    bool m_cmdArgsHasBeenSet;

                    /**
                     * Native Spark configurations separated by line break
                     */
                    std::string m_jobConf;
                    bool m_jobConfHasBeenSet;

                    /**
                     * Whether the dependency JAR packages are uploaded locally. Valid values: `cos`, `lakefs`.
                     */
                    std::string m_isLocalJars;
                    bool m_isLocalJarsHasBeenSet;

                    /**
                     * Dependency JAR packages of the Spark job separated by comma
                     */
                    std::string m_jobJars;
                    bool m_jobJarsHasBeenSet;

                    /**
                     * Whether the dependency file is uploaded locally. Valid values: `cos`, `lakefs`.
                     */
                    std::string m_isLocalFiles;
                    bool m_isLocalFilesHasBeenSet;

                    /**
                     * Dependency files of the Spark job separated by comma
                     */
                    std::string m_jobFiles;
                    bool m_jobFilesHasBeenSet;

                    /**
                     * Driver resource size of the Spark job
                     */
                    std::string m_jobDriverSize;
                    bool m_jobDriverSizeHasBeenSet;

                    /**
                     * Executor resource size of the Spark job
                     */
                    std::string m_jobExecutorSize;
                    bool m_jobExecutorSizeHasBeenSet;

                    /**
                     * Number of Spark job executors
                     */
                    int64_t m_jobExecutorNums;
                    bool m_jobExecutorNumsHasBeenSet;

                    /**
                     * Maximum number of retries of the Spark flow task
                     */
                    int64_t m_jobMaxAttempts;
                    bool m_jobMaxAttemptsHasBeenSet;

                    /**
                     * Spark job creator
                     */
                    std::string m_jobCreator;
                    bool m_jobCreatorHasBeenSet;

                    /**
                     * Spark job creation time
                     */
                    int64_t m_jobCreateTime;
                    bool m_jobCreateTimeHasBeenSet;

                    /**
                     * Spark job update time
                     */
                    uint64_t m_jobUpdateTime;
                    bool m_jobUpdateTimeHasBeenSet;

                    /**
                     * Last task ID of the Spark job
                     */
                    std::string m_currentTaskId;
                    bool m_currentTaskIdHasBeenSet;

                    /**
                     * Last status of the Spark job
                     */
                    int64_t m_jobStatus;
                    bool m_jobStatusHasBeenSet;

                    /**
                     * Spark streaming job statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    StreamingStatistics m_streamingStat;
                    bool m_streamingStatHasBeenSet;

                    /**
                     * Data source name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * PySpark: Dependency upload method. 1: cos; 2: lakefs (this method needs to be used in the console but cannot be called through APIs).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isLocalPythonFiles;
                    bool m_isLocalPythonFilesHasBeenSet;

                    /**
                     * Note: This returned value has been disused.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_appPythonFiles;
                    bool m_appPythonFilesHasBeenSet;

                    /**
                     * Archives: Dependency upload method. 1: cos; 2: lakefs (this method needs to be used in the console but cannot be called through APIs).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isLocalArchives;
                    bool m_isLocalArchivesHasBeenSet;

                    /**
                     * Archives: Dependency resources
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jobArchives;
                    bool m_jobArchivesHasBeenSet;

                    /**
                     * The Spark image version.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sparkImage;
                    bool m_sparkImageHasBeenSet;

                    /**
                     * PySpark: Python dependency, which can be in .py, .zip, or .egg format. Multiple files should be separated by comma.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jobPythonFiles;
                    bool m_jobPythonFilesHasBeenSet;

                    /**
                     * Number of tasks running or ready to run under the current job
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskNum;
                    bool m_taskNumHasBeenSet;

                    /**
                     * Engine status. -100 (default value): unknown; -2–11: normal.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_dataEngineStatus;
                    bool m_dataEngineStatusHasBeenSet;

                    /**
                     * The specified executor count (max), which defaults to 1. This parameter applies if the "Dynamic" mode is selected. If the "Dynamic" mode is not selected, the executor count is equal to `JobExecutorNums`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_jobExecutorMaxNumbers;
                    bool m_jobExecutorMaxNumbersHasBeenSet;

                    /**
                     * The image version.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sparkImageVersion;
                    bool m_sparkImageVersionHasBeenSet;

                    /**
                     * The ID of the associated Data Lake Compute query script.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * `spark_emr_livy` indicates to create an EMR cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataEngineClusterType;
                    bool m_dataEngineClusterTypeHasBeenSet;

                    /**
                     * `Spark 3.2-EMR` indicates to use the Spark 3.2 image.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataEngineImageVersion;
                    bool m_dataEngineImageVersionHasBeenSet;

                    /**
                     * Whether the task resource configuration is inherited from the cluster template. Valid values: `0` (default): No; `1`: Yes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isInherit;
                    bool m_isInheritHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SPARKJOBINFO_H_
