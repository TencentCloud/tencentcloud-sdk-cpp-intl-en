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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKAPPREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateSparkApp request structure.
                */
                class CreateSparkAppRequest : public AbstractModel
                {
                public:
                    CreateSparkAppRequest();
                    ~CreateSparkAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The Spark job name.
                     * @return AppName The Spark job name.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置The Spark job name.
                     * @param _appName The Spark job name.
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取The Spark job type. Valid values: `1` for Spark JAR job and `2` for Spark streaming job.
                     * @return AppType The Spark job type. Valid values: `1` for Spark JAR job and `2` for Spark streaming job.
                     * 
                     */
                    int64_t GetAppType() const;

                    /**
                     * 设置The Spark job type. Valid values: `1` for Spark JAR job and `2` for Spark streaming job.
                     * @param _appType The Spark job type. Valid values: `1` for Spark JAR job and `2` for Spark streaming job.
                     * 
                     */
                    void SetAppType(const int64_t& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取The data engine executing the Spark job.
                     * @return DataEngine The data engine executing the Spark job.
                     * 
                     */
                    std::string GetDataEngine() const;

                    /**
                     * 设置The data engine executing the Spark job.
                     * @param _dataEngine The data engine executing the Spark job.
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
                     * 获取The path of the Spark job package.
                     * @return AppFile The path of the Spark job package.
                     * 
                     */
                    std::string GetAppFile() const;

                    /**
                     * 设置The path of the Spark job package.
                     * @param _appFile The path of the Spark job package.
                     * 
                     */
                    void SetAppFile(const std::string& _appFile);

                    /**
                     * 判断参数 AppFile 是否已赋值
                     * @return AppFile 是否已赋值
                     * 
                     */
                    bool AppFileHasBeenSet() const;

                    /**
                     * 获取Data visiting policy achieved through CAM Role arn; the console can obtain it through Data Job -> Job Configuration; SDK can obtain corresponding values through the DescribeUserRoles API.
                     * @return RoleArn Data visiting policy achieved through CAM Role arn; the console can obtain it through Data Job -> Job Configuration; SDK can obtain corresponding values through the DescribeUserRoles API.
                     * 
                     */
                    int64_t GetRoleArn() const;

                    /**
                     * 设置Data visiting policy achieved through CAM Role arn; the console can obtain it through Data Job -> Job Configuration; SDK can obtain corresponding values through the DescribeUserRoles API.
                     * @param _roleArn Data visiting policy achieved through CAM Role arn; the console can obtain it through Data Job -> Job Configuration; SDK can obtain corresponding values through the DescribeUserRoles API.
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
                     * 获取The driver size. Valid values: `small` (default, 1 CU), `medium` (2 CUs), `large` (4 CUs), and `xlarge` (8 CUs).
                     * @return AppDriverSize The driver size. Valid values: `small` (default, 1 CU), `medium` (2 CUs), `large` (4 CUs), and `xlarge` (8 CUs).
                     * 
                     */
                    std::string GetAppDriverSize() const;

                    /**
                     * 设置The driver size. Valid values: `small` (default, 1 CU), `medium` (2 CUs), `large` (4 CUs), and `xlarge` (8 CUs).
                     * @param _appDriverSize The driver size. Valid values: `small` (default, 1 CU), `medium` (2 CUs), `large` (4 CUs), and `xlarge` (8 CUs).
                     * 
                     */
                    void SetAppDriverSize(const std::string& _appDriverSize);

                    /**
                     * 判断参数 AppDriverSize 是否已赋值
                     * @return AppDriverSize 是否已赋值
                     * 
                     */
                    bool AppDriverSizeHasBeenSet() const;

                    /**
                     * 获取The executor size. Valid values: `small` (default, 1 CU), `medium` (2 CUs), `large` (4 CUs), and `xlarge` (8 CUs).
                     * @return AppExecutorSize The executor size. Valid values: `small` (default, 1 CU), `medium` (2 CUs), `large` (4 CUs), and `xlarge` (8 CUs).
                     * 
                     */
                    std::string GetAppExecutorSize() const;

                    /**
                     * 设置The executor size. Valid values: `small` (default, 1 CU), `medium` (2 CUs), `large` (4 CUs), and `xlarge` (8 CUs).
                     * @param _appExecutorSize The executor size. Valid values: `small` (default, 1 CU), `medium` (2 CUs), `large` (4 CUs), and `xlarge` (8 CUs).
                     * 
                     */
                    void SetAppExecutorSize(const std::string& _appExecutorSize);

                    /**
                     * 判断参数 AppExecutorSize 是否已赋值
                     * @return AppExecutorSize 是否已赋值
                     * 
                     */
                    bool AppExecutorSizeHasBeenSet() const;

                    /**
                     * 获取Number of Spark job executors
                     * @return AppExecutorNums Number of Spark job executors
                     * 
                     */
                    int64_t GetAppExecutorNums() const;

                    /**
                     * 设置Number of Spark job executors
                     * @param _appExecutorNums Number of Spark job executors
                     * 
                     */
                    void SetAppExecutorNums(const int64_t& _appExecutorNums);

                    /**
                     * 判断参数 AppExecutorNums 是否已赋值
                     * @return AppExecutorNums 是否已赋值
                     * 
                     */
                    bool AppExecutorNumsHasBeenSet() const;

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
                     * 获取The source of the Spark job package. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
                     * @return IsLocal The source of the Spark job package. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
                     * 
                     */
                    std::string GetIsLocal() const;

                    /**
                     * 设置The source of the Spark job package. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
                     * @param _isLocal The source of the Spark job package. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
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
                     * 获取The main class of the Spark job.
                     * @return MainClass The main class of the Spark job.
                     * 
                     */
                    std::string GetMainClass() const;

                    /**
                     * 设置The main class of the Spark job.
                     * @param _mainClass The main class of the Spark job.
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
                     * 获取Spark configurations separated by line break
                     * @return AppConf Spark configurations separated by line break
                     * 
                     */
                    std::string GetAppConf() const;

                    /**
                     * 设置Spark configurations separated by line break
                     * @param _appConf Spark configurations separated by line break
                     * 
                     */
                    void SetAppConf(const std::string& _appConf);

                    /**
                     * 判断参数 AppConf 是否已赋值
                     * @return AppConf 是否已赋值
                     * 
                     */
                    bool AppConfHasBeenSet() const;

                    /**
                     * 获取The source of the dependency JAR packages of the Spark job. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
                     * @return IsLocalJars The source of the dependency JAR packages of the Spark job. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
                     * 
                     */
                    std::string GetIsLocalJars() const;

                    /**
                     * 设置The source of the dependency JAR packages of the Spark job. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
                     * @param _isLocalJars The source of the dependency JAR packages of the Spark job. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
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
                     * 获取The dependency JAR packages of the Spark JAR job (JAR packages), separated by comma.
                     * @return AppJars The dependency JAR packages of the Spark JAR job (JAR packages), separated by comma.
                     * 
                     */
                    std::string GetAppJars() const;

                    /**
                     * 设置The dependency JAR packages of the Spark JAR job (JAR packages), separated by comma.
                     * @param _appJars The dependency JAR packages of the Spark JAR job (JAR packages), separated by comma.
                     * 
                     */
                    void SetAppJars(const std::string& _appJars);

                    /**
                     * 判断参数 AppJars 是否已赋值
                     * @return AppJars 是否已赋值
                     * 
                     */
                    bool AppJarsHasBeenSet() const;

                    /**
                     * 获取The source of the dependency files of the Spark job. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
                     * @return IsLocalFiles The source of the dependency files of the Spark job. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
                     * 
                     */
                    std::string GetIsLocalFiles() const;

                    /**
                     * 设置The source of the dependency files of the Spark job. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
                     * @param _isLocalFiles The source of the dependency files of the Spark job. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
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
                     * 获取The dependency files of the Spark job (files other than JAR and ZIP packages) separated by comma.
                     * @return AppFiles The dependency files of the Spark job (files other than JAR and ZIP packages) separated by comma.
                     * 
                     */
                    std::string GetAppFiles() const;

                    /**
                     * 设置The dependency files of the Spark job (files other than JAR and ZIP packages) separated by comma.
                     * @param _appFiles The dependency files of the Spark job (files other than JAR and ZIP packages) separated by comma.
                     * 
                     */
                    void SetAppFiles(const std::string& _appFiles);

                    /**
                     * 判断参数 AppFiles 是否已赋值
                     * @return AppFiles 是否已赋值
                     * 
                     */
                    bool AppFilesHasBeenSet() const;

                    /**
                     * 获取The input parameters of the Spark job, separated by comma.
                     * @return CmdArgs The input parameters of the Spark job, separated by comma.
                     * 
                     */
                    std::string GetCmdArgs() const;

                    /**
                     * 设置The input parameters of the Spark job, separated by comma.
                     * @param _cmdArgs The input parameters of the Spark job, separated by comma.
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
                     * 获取The maximum number of retries, valid for Spark streaming tasks only.
                     * @return MaxRetries The maximum number of retries, valid for Spark streaming tasks only.
                     * 
                     */
                    int64_t GetMaxRetries() const;

                    /**
                     * 设置The maximum number of retries, valid for Spark streaming tasks only.
                     * @param _maxRetries The maximum number of retries, valid for Spark streaming tasks only.
                     * 
                     */
                    void SetMaxRetries(const int64_t& _maxRetries);

                    /**
                     * 判断参数 MaxRetries 是否已赋值
                     * @return MaxRetries 是否已赋值
                     * 
                     */
                    bool MaxRetriesHasBeenSet() const;

                    /**
                     * 获取The data source name.
                     * @return DataSource The data source name.
                     * 
                     */
                    std::string GetDataSource() const;

                    /**
                     * 设置The data source name.
                     * @param _dataSource The data source name.
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
                     * 获取The source of the PySpark dependencies. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
                     * @return IsLocalPythonFiles The source of the PySpark dependencies. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
                     * 
                     */
                    std::string GetIsLocalPythonFiles() const;

                    /**
                     * 设置The source of the PySpark dependencies. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
                     * @param _isLocalPythonFiles The source of the PySpark dependencies. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
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
                     * 获取The PySpark dependencies (Python files), separated by comma, with .py, .zip, and .egg formats supported.
                     * @return AppPythonFiles The PySpark dependencies (Python files), separated by comma, with .py, .zip, and .egg formats supported.
                     * 
                     */
                    std::string GetAppPythonFiles() const;

                    /**
                     * 设置The PySpark dependencies (Python files), separated by comma, with .py, .zip, and .egg formats supported.
                     * @param _appPythonFiles The PySpark dependencies (Python files), separated by comma, with .py, .zip, and .egg formats supported.
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
                     * 获取The source of the dependency archives of the Spark job. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
                     * @return IsLocalArchives The source of the dependency archives of the Spark job. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
                     * 
                     */
                    std::string GetIsLocalArchives() const;

                    /**
                     * 设置The source of the dependency archives of the Spark job. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
                     * @param _isLocalArchives The source of the dependency archives of the Spark job. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
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
                     * 获取The dependency archives of the Spark job, separated by comma, with tar.gz, .tgz, and .tar formats supported.
                     * @return AppArchives The dependency archives of the Spark job, separated by comma, with tar.gz, .tgz, and .tar formats supported.
                     * 
                     */
                    std::string GetAppArchives() const;

                    /**
                     * 设置The dependency archives of the Spark job, separated by comma, with tar.gz, .tgz, and .tar formats supported.
                     * @param _appArchives The dependency archives of the Spark job, separated by comma, with tar.gz, .tgz, and .tar formats supported.
                     * 
                     */
                    void SetAppArchives(const std::string& _appArchives);

                    /**
                     * 判断参数 AppArchives 是否已赋值
                     * @return AppArchives 是否已赋值
                     * 
                     */
                    bool AppArchivesHasBeenSet() const;

                    /**
                     * 获取The Spark image version.
                     * @return SparkImage The Spark image version.
                     * 
                     */
                    std::string GetSparkImage() const;

                    /**
                     * 设置The Spark image version.
                     * @param _sparkImage The Spark image version.
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
                     * 获取The Spark image version name.
                     * @return SparkImageVersion The Spark image version name.
                     * 
                     */
                    std::string GetSparkImageVersion() const;

                    /**
                     * 设置The Spark image version name.
                     * @param _sparkImageVersion The Spark image version name.
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
                     * 获取The specified executor count (max), which defaults to 1. This parameter applies if the "Dynamic" mode is selected. If the "Dynamic" mode is not selected, the executor count is equal to `AppExecutorNums`.
                     * @return AppExecutorMaxNumbers The specified executor count (max), which defaults to 1. This parameter applies if the "Dynamic" mode is selected. If the "Dynamic" mode is not selected, the executor count is equal to `AppExecutorNums`.
                     * 
                     */
                    int64_t GetAppExecutorMaxNumbers() const;

                    /**
                     * 设置The specified executor count (max), which defaults to 1. This parameter applies if the "Dynamic" mode is selected. If the "Dynamic" mode is not selected, the executor count is equal to `AppExecutorNums`.
                     * @param _appExecutorMaxNumbers The specified executor count (max), which defaults to 1. This parameter applies if the "Dynamic" mode is selected. If the "Dynamic" mode is not selected, the executor count is equal to `AppExecutorNums`.
                     * 
                     */
                    void SetAppExecutorMaxNumbers(const int64_t& _appExecutorMaxNumbers);

                    /**
                     * 判断参数 AppExecutorMaxNumbers 是否已赋值
                     * @return AppExecutorMaxNumbers 是否已赋值
                     * 
                     */
                    bool AppExecutorMaxNumbersHasBeenSet() const;

                    /**
                     * 获取The ID of the associated Data Lake Compute query script.
                     * @return SessionId The ID of the associated Data Lake Compute query script.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The ID of the associated Data Lake Compute query script.
                     * @param _sessionId The ID of the associated Data Lake Compute query script.
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
                     * 获取Whether to inherit the task resource configuration from the cluster template. Valid values: `0` (default): No; `1`: Yes.
                     * @return IsInherit Whether to inherit the task resource configuration from the cluster template. Valid values: `0` (default): No; `1`: Yes.
                     * 
                     */
                    uint64_t GetIsInherit() const;

                    /**
                     * 设置Whether to inherit the task resource configuration from the cluster template. Valid values: `0` (default): No; `1`: Yes.
                     * @param _isInherit Whether to inherit the task resource configuration from the cluster template. Valid values: `0` (default): No; `1`: Yes.
                     * 
                     */
                    void SetIsInherit(const uint64_t& _isInherit);

                    /**
                     * 判断参数 IsInherit 是否已赋值
                     * @return IsInherit 是否已赋值
                     * 
                     */
                    bool IsInheritHasBeenSet() const;

                    /**
                     * 获取Whether to run the task with the session SQLs. Valid values: `false` for no and `true` for yes.
                     * @return IsSessionStarted Whether to run the task with the session SQLs. Valid values: `false` for no and `true` for yes.
                     * 
                     */
                    bool GetIsSessionStarted() const;

                    /**
                     * 设置Whether to run the task with the session SQLs. Valid values: `false` for no and `true` for yes.
                     * @param _isSessionStarted Whether to run the task with the session SQLs. Valid values: `false` for no and `true` for yes.
                     * 
                     */
                    void SetIsSessionStarted(const bool& _isSessionStarted);

                    /**
                     * 判断参数 IsSessionStarted 是否已赋值
                     * @return IsSessionStarted 是否已赋值
                     * 
                     */
                    bool IsSessionStartedHasBeenSet() const;

                private:

                    /**
                     * The Spark job name.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * The Spark job type. Valid values: `1` for Spark JAR job and `2` for Spark streaming job.
                     */
                    int64_t m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * The data engine executing the Spark job.
                     */
                    std::string m_dataEngine;
                    bool m_dataEngineHasBeenSet;

                    /**
                     * The path of the Spark job package.
                     */
                    std::string m_appFile;
                    bool m_appFileHasBeenSet;

                    /**
                     * Data visiting policy achieved through CAM Role arn; the console can obtain it through Data Job -> Job Configuration; SDK can obtain corresponding values through the DescribeUserRoles API.
                     */
                    int64_t m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * The driver size. Valid values: `small` (default, 1 CU), `medium` (2 CUs), `large` (4 CUs), and `xlarge` (8 CUs).
                     */
                    std::string m_appDriverSize;
                    bool m_appDriverSizeHasBeenSet;

                    /**
                     * The executor size. Valid values: `small` (default, 1 CU), `medium` (2 CUs), `large` (4 CUs), and `xlarge` (8 CUs).
                     */
                    std::string m_appExecutorSize;
                    bool m_appExecutorSizeHasBeenSet;

                    /**
                     * Number of Spark job executors
                     */
                    int64_t m_appExecutorNums;
                    bool m_appExecutorNumsHasBeenSet;

                    /**
                     * This field has been disused. Use the `Datasource` field instead.
                     */
                    std::string m_eni;
                    bool m_eniHasBeenSet;

                    /**
                     * The source of the Spark job package. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
                     */
                    std::string m_isLocal;
                    bool m_isLocalHasBeenSet;

                    /**
                     * The main class of the Spark job.
                     */
                    std::string m_mainClass;
                    bool m_mainClassHasBeenSet;

                    /**
                     * Spark configurations separated by line break
                     */
                    std::string m_appConf;
                    bool m_appConfHasBeenSet;

                    /**
                     * The source of the dependency JAR packages of the Spark job. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
                     */
                    std::string m_isLocalJars;
                    bool m_isLocalJarsHasBeenSet;

                    /**
                     * The dependency JAR packages of the Spark JAR job (JAR packages), separated by comma.
                     */
                    std::string m_appJars;
                    bool m_appJarsHasBeenSet;

                    /**
                     * The source of the dependency files of the Spark job. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
                     */
                    std::string m_isLocalFiles;
                    bool m_isLocalFilesHasBeenSet;

                    /**
                     * The dependency files of the Spark job (files other than JAR and ZIP packages) separated by comma.
                     */
                    std::string m_appFiles;
                    bool m_appFilesHasBeenSet;

                    /**
                     * The input parameters of the Spark job, separated by comma.
                     */
                    std::string m_cmdArgs;
                    bool m_cmdArgsHasBeenSet;

                    /**
                     * The maximum number of retries, valid for Spark streaming tasks only.
                     */
                    int64_t m_maxRetries;
                    bool m_maxRetriesHasBeenSet;

                    /**
                     * The data source name.
                     */
                    std::string m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * The source of the PySpark dependencies. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
                     */
                    std::string m_isLocalPythonFiles;
                    bool m_isLocalPythonFilesHasBeenSet;

                    /**
                     * The PySpark dependencies (Python files), separated by comma, with .py, .zip, and .egg formats supported.
                     */
                    std::string m_appPythonFiles;
                    bool m_appPythonFilesHasBeenSet;

                    /**
                     * The source of the dependency archives of the Spark job. Valid values: `cos` for COS and `lakefs` for the local system (for use in the console, but this method does not support direct API calls).
                     */
                    std::string m_isLocalArchives;
                    bool m_isLocalArchivesHasBeenSet;

                    /**
                     * The dependency archives of the Spark job, separated by comma, with tar.gz, .tgz, and .tar formats supported.
                     */
                    std::string m_appArchives;
                    bool m_appArchivesHasBeenSet;

                    /**
                     * The Spark image version.
                     */
                    std::string m_sparkImage;
                    bool m_sparkImageHasBeenSet;

                    /**
                     * The Spark image version name.
                     */
                    std::string m_sparkImageVersion;
                    bool m_sparkImageVersionHasBeenSet;

                    /**
                     * The specified executor count (max), which defaults to 1. This parameter applies if the "Dynamic" mode is selected. If the "Dynamic" mode is not selected, the executor count is equal to `AppExecutorNums`.
                     */
                    int64_t m_appExecutorMaxNumbers;
                    bool m_appExecutorMaxNumbersHasBeenSet;

                    /**
                     * The ID of the associated Data Lake Compute query script.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Whether to inherit the task resource configuration from the cluster template. Valid values: `0` (default): No; `1`: Yes.
                     */
                    uint64_t m_isInherit;
                    bool m_isInheritHasBeenSet;

                    /**
                     * Whether to run the task with the session SQLs. Valid values: `false` for no and `true` for yes.
                     */
                    bool m_isSessionStarted;
                    bool m_isSessionStartedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKAPPREQUEST_H_
