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
                     * 获取Spark application name
                     * @return AppName Spark application name
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Spark application name
                     * @param AppName Spark application name
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取1: Spark JAR application; 2: Spark streaming application
                     * @return AppType 1: Spark JAR application; 2: Spark streaming application
                     */
                    int64_t GetAppType() const;

                    /**
                     * 设置1: Spark JAR application; 2: Spark streaming application
                     * @param AppType 1: Spark JAR application; 2: Spark streaming application
                     */
                    void SetAppType(const int64_t& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取The data engine executing the Spark job
                     * @return DataEngine The data engine executing the Spark job
                     */
                    std::string GetDataEngine() const;

                    /**
                     * 设置The data engine executing the Spark job
                     * @param DataEngine The data engine executing the Spark job
                     */
                    void SetDataEngine(const std::string& _dataEngine);

                    /**
                     * 判断参数 DataEngine 是否已赋值
                     * @return DataEngine 是否已赋值
                     */
                    bool DataEngineHasBeenSet() const;

                    /**
                     * 获取Execution entry of the Spark application
                     * @return AppFile Execution entry of the Spark application
                     */
                    std::string GetAppFile() const;

                    /**
                     * 设置Execution entry of the Spark application
                     * @param AppFile Execution entry of the Spark application
                     */
                    void SetAppFile(const std::string& _appFile);

                    /**
                     * 判断参数 AppFile 是否已赋值
                     * @return AppFile 是否已赋值
                     */
                    bool AppFileHasBeenSet() const;

                    /**
                     * 获取Execution role ID of the Spark job
                     * @return RoleArn Execution role ID of the Spark job
                     */
                    int64_t GetRoleArn() const;

                    /**
                     * 设置Execution role ID of the Spark job
                     * @param RoleArn Execution role ID of the Spark job
                     */
                    void SetRoleArn(const int64_t& _roleArn);

                    /**
                     * 判断参数 RoleArn 是否已赋值
                     * @return RoleArn 是否已赋值
                     */
                    bool RoleArnHasBeenSet() const;

                    /**
                     * 获取Driver resource specification of the Spark job. Valid values: `small`, `medium`, `large`, `xlarge`.
                     * @return AppDriverSize Driver resource specification of the Spark job. Valid values: `small`, `medium`, `large`, `xlarge`.
                     */
                    std::string GetAppDriverSize() const;

                    /**
                     * 设置Driver resource specification of the Spark job. Valid values: `small`, `medium`, `large`, `xlarge`.
                     * @param AppDriverSize Driver resource specification of the Spark job. Valid values: `small`, `medium`, `large`, `xlarge`.
                     */
                    void SetAppDriverSize(const std::string& _appDriverSize);

                    /**
                     * 判断参数 AppDriverSize 是否已赋值
                     * @return AppDriverSize 是否已赋值
                     */
                    bool AppDriverSizeHasBeenSet() const;

                    /**
                     * 获取Executor resource specification of the Spark job. Valid values: `small`, `medium`, `large`, `xlarge`.
                     * @return AppExecutorSize Executor resource specification of the Spark job. Valid values: `small`, `medium`, `large`, `xlarge`.
                     */
                    std::string GetAppExecutorSize() const;

                    /**
                     * 设置Executor resource specification of the Spark job. Valid values: `small`, `medium`, `large`, `xlarge`.
                     * @param AppExecutorSize Executor resource specification of the Spark job. Valid values: `small`, `medium`, `large`, `xlarge`.
                     */
                    void SetAppExecutorSize(const std::string& _appExecutorSize);

                    /**
                     * 判断参数 AppExecutorSize 是否已赋值
                     * @return AppExecutorSize 是否已赋值
                     */
                    bool AppExecutorSizeHasBeenSet() const;

                    /**
                     * 获取Number of Spark job executors
                     * @return AppExecutorNums Number of Spark job executors
                     */
                    int64_t GetAppExecutorNums() const;

                    /**
                     * 设置Number of Spark job executors
                     * @param AppExecutorNums Number of Spark job executors
                     */
                    void SetAppExecutorNums(const int64_t& _appExecutorNums);

                    /**
                     * 判断参数 AppExecutorNums 是否已赋值
                     * @return AppExecutorNums 是否已赋值
                     */
                    bool AppExecutorNumsHasBeenSet() const;

                    /**
                     * 获取This field has been disused. Use the `Datasource` field instead.
                     * @return Eni This field has been disused. Use the `Datasource` field instead.
                     */
                    std::string GetEni() const;

                    /**
                     * 设置This field has been disused. Use the `Datasource` field instead.
                     * @param Eni This field has been disused. Use the `Datasource` field instead.
                     */
                    void SetEni(const std::string& _eni);

                    /**
                     * 判断参数 Eni 是否已赋值
                     * @return Eni 是否已赋值
                     */
                    bool EniHasBeenSet() const;

                    /**
                     * 获取Whether it is upload locally. Valid values: `cos`, `lakefs`.
                     * @return IsLocal Whether it is upload locally. Valid values: `cos`, `lakefs`.
                     */
                    std::string GetIsLocal() const;

                    /**
                     * 设置Whether it is upload locally. Valid values: `cos`, `lakefs`.
                     * @param IsLocal Whether it is upload locally. Valid values: `cos`, `lakefs`.
                     */
                    void SetIsLocal(const std::string& _isLocal);

                    /**
                     * 判断参数 IsLocal 是否已赋值
                     * @return IsLocal 是否已赋值
                     */
                    bool IsLocalHasBeenSet() const;

                    /**
                     * 获取Main class of the Spark JAR job during execution
                     * @return MainClass Main class of the Spark JAR job during execution
                     */
                    std::string GetMainClass() const;

                    /**
                     * 设置Main class of the Spark JAR job during execution
                     * @param MainClass Main class of the Spark JAR job during execution
                     */
                    void SetMainClass(const std::string& _mainClass);

                    /**
                     * 判断参数 MainClass 是否已赋值
                     * @return MainClass 是否已赋值
                     */
                    bool MainClassHasBeenSet() const;

                    /**
                     * 获取Spark configurations separated by line break
                     * @return AppConf Spark configurations separated by line break
                     */
                    std::string GetAppConf() const;

                    /**
                     * 设置Spark configurations separated by line break
                     * @param AppConf Spark configurations separated by line break
                     */
                    void SetAppConf(const std::string& _appConf);

                    /**
                     * 判断参数 AppConf 是否已赋值
                     * @return AppConf 是否已赋值
                     */
                    bool AppConfHasBeenSet() const;

                    /**
                     * 获取Whether it is upload locally. Valid values: `cos`, `lakefs`.
                     * @return IsLocalJars Whether it is upload locally. Valid values: `cos`, `lakefs`.
                     */
                    std::string GetIsLocalJars() const;

                    /**
                     * 设置Whether it is upload locally. Valid values: `cos`, `lakefs`.
                     * @param IsLocalJars Whether it is upload locally. Valid values: `cos`, `lakefs`.
                     */
                    void SetIsLocalJars(const std::string& _isLocalJars);

                    /**
                     * 判断参数 IsLocalJars 是否已赋值
                     * @return IsLocalJars 是否已赋值
                     */
                    bool IsLocalJarsHasBeenSet() const;

                    /**
                     * 获取Dependency JAR packages of the Spark JAR job separated by comma
                     * @return AppJars Dependency JAR packages of the Spark JAR job separated by comma
                     */
                    std::string GetAppJars() const;

                    /**
                     * 设置Dependency JAR packages of the Spark JAR job separated by comma
                     * @param AppJars Dependency JAR packages of the Spark JAR job separated by comma
                     */
                    void SetAppJars(const std::string& _appJars);

                    /**
                     * 判断参数 AppJars 是否已赋值
                     * @return AppJars 是否已赋值
                     */
                    bool AppJarsHasBeenSet() const;

                    /**
                     * 获取Whether it is upload locally. Valid values: `cos`, `lakefs`.
                     * @return IsLocalFiles Whether it is upload locally. Valid values: `cos`, `lakefs`.
                     */
                    std::string GetIsLocalFiles() const;

                    /**
                     * 设置Whether it is upload locally. Valid values: `cos`, `lakefs`.
                     * @param IsLocalFiles Whether it is upload locally. Valid values: `cos`, `lakefs`.
                     */
                    void SetIsLocalFiles(const std::string& _isLocalFiles);

                    /**
                     * 判断参数 IsLocalFiles 是否已赋值
                     * @return IsLocalFiles 是否已赋值
                     */
                    bool IsLocalFilesHasBeenSet() const;

                    /**
                     * 获取Dependency resources of the Spark job separated by comma
                     * @return AppFiles Dependency resources of the Spark job separated by comma
                     */
                    std::string GetAppFiles() const;

                    /**
                     * 设置Dependency resources of the Spark job separated by comma
                     * @param AppFiles Dependency resources of the Spark job separated by comma
                     */
                    void SetAppFiles(const std::string& _appFiles);

                    /**
                     * 判断参数 AppFiles 是否已赋值
                     * @return AppFiles 是否已赋值
                     */
                    bool AppFilesHasBeenSet() const;

                    /**
                     * 获取Command line parameters of the Spark job
                     * @return CmdArgs Command line parameters of the Spark job
                     */
                    std::string GetCmdArgs() const;

                    /**
                     * 设置Command line parameters of the Spark job
                     * @param CmdArgs Command line parameters of the Spark job
                     */
                    void SetCmdArgs(const std::string& _cmdArgs);

                    /**
                     * 判断参数 CmdArgs 是否已赋值
                     * @return CmdArgs 是否已赋值
                     */
                    bool CmdArgsHasBeenSet() const;

                    /**
                     * 获取This parameter takes effect only for Spark flow tasks.
                     * @return MaxRetries This parameter takes effect only for Spark flow tasks.
                     */
                    int64_t GetMaxRetries() const;

                    /**
                     * 设置This parameter takes effect only for Spark flow tasks.
                     * @param MaxRetries This parameter takes effect only for Spark flow tasks.
                     */
                    void SetMaxRetries(const int64_t& _maxRetries);

                    /**
                     * 判断参数 MaxRetries 是否已赋值
                     * @return MaxRetries 是否已赋值
                     */
                    bool MaxRetriesHasBeenSet() const;

                    /**
                     * 获取Data source name
                     * @return DataSource Data source name
                     */
                    std::string GetDataSource() const;

                    /**
                     * 设置Data source name
                     * @param DataSource Data source name
                     */
                    void SetDataSource(const std::string& _dataSource);

                    /**
                     * 判断参数 DataSource 是否已赋值
                     * @return DataSource 是否已赋值
                     */
                    bool DataSourceHasBeenSet() const;

                    /**
                     * 获取PySpark: Dependency upload method. 1: cos; 2: lakefs (this method needs to be used in the console but cannot be called through APIs).
                     * @return IsLocalPythonFiles PySpark: Dependency upload method. 1: cos; 2: lakefs (this method needs to be used in the console but cannot be called through APIs).
                     */
                    std::string GetIsLocalPythonFiles() const;

                    /**
                     * 设置PySpark: Dependency upload method. 1: cos; 2: lakefs (this method needs to be used in the console but cannot be called through APIs).
                     * @param IsLocalPythonFiles PySpark: Dependency upload method. 1: cos; 2: lakefs (this method needs to be used in the console but cannot be called through APIs).
                     */
                    void SetIsLocalPythonFiles(const std::string& _isLocalPythonFiles);

                    /**
                     * 判断参数 IsLocalPythonFiles 是否已赋值
                     * @return IsLocalPythonFiles 是否已赋值
                     */
                    bool IsLocalPythonFilesHasBeenSet() const;

                    /**
                     * 获取PySpark: Python dependency, which can be in .py, .zip, or .egg format. Multiple files should be separated by comma.
                     * @return AppPythonFiles PySpark: Python dependency, which can be in .py, .zip, or .egg format. Multiple files should be separated by comma.
                     */
                    std::string GetAppPythonFiles() const;

                    /**
                     * 设置PySpark: Python dependency, which can be in .py, .zip, or .egg format. Multiple files should be separated by comma.
                     * @param AppPythonFiles PySpark: Python dependency, which can be in .py, .zip, or .egg format. Multiple files should be separated by comma.
                     */
                    void SetAppPythonFiles(const std::string& _appPythonFiles);

                    /**
                     * 判断参数 AppPythonFiles 是否已赋值
                     * @return AppPythonFiles 是否已赋值
                     */
                    bool AppPythonFilesHasBeenSet() const;

                    /**
                     * 获取Archives: Dependency upload method. 1: cos; 2: lakefs (this method needs to be used in the console but cannot be called through APIs).
                     * @return IsLocalArchives Archives: Dependency upload method. 1: cos; 2: lakefs (this method needs to be used in the console but cannot be called through APIs).
                     */
                    std::string GetIsLocalArchives() const;

                    /**
                     * 设置Archives: Dependency upload method. 1: cos; 2: lakefs (this method needs to be used in the console but cannot be called through APIs).
                     * @param IsLocalArchives Archives: Dependency upload method. 1: cos; 2: lakefs (this method needs to be used in the console but cannot be called through APIs).
                     */
                    void SetIsLocalArchives(const std::string& _isLocalArchives);

                    /**
                     * 判断参数 IsLocalArchives 是否已赋值
                     * @return IsLocalArchives 是否已赋值
                     */
                    bool IsLocalArchivesHasBeenSet() const;

                    /**
                     * 获取Archives: Dependency resources
                     * @return AppArchives Archives: Dependency resources
                     */
                    std::string GetAppArchives() const;

                    /**
                     * 设置Archives: Dependency resources
                     * @param AppArchives Archives: Dependency resources
                     */
                    void SetAppArchives(const std::string& _appArchives);

                    /**
                     * 判断参数 AppArchives 是否已赋值
                     * @return AppArchives 是否已赋值
                     */
                    bool AppArchivesHasBeenSet() const;

                    /**
                     * 获取The Spark image version.
                     * @return SparkImage The Spark image version.
                     */
                    std::string GetSparkImage() const;

                    /**
                     * 设置The Spark image version.
                     * @param SparkImage The Spark image version.
                     */
                    void SetSparkImage(const std::string& _sparkImage);

                    /**
                     * 判断参数 SparkImage 是否已赋值
                     * @return SparkImage 是否已赋值
                     */
                    bool SparkImageHasBeenSet() const;

                    /**
                     * 获取The Spark image version name.
                     * @return SparkImageVersion The Spark image version name.
                     */
                    std::string GetSparkImageVersion() const;

                    /**
                     * 设置The Spark image version name.
                     * @param SparkImageVersion The Spark image version name.
                     */
                    void SetSparkImageVersion(const std::string& _sparkImageVersion);

                    /**
                     * 判断参数 SparkImageVersion 是否已赋值
                     * @return SparkImageVersion 是否已赋值
                     */
                    bool SparkImageVersionHasBeenSet() const;

                    /**
                     * 获取The specified executor count (max), which defaults to 1. This parameter applies if the "Dynamic" mode is selected. If the "Dynamic" mode is not selected, the executor count is equal to `AppExecutorNums`.
                     * @return AppExecutorMaxNumbers The specified executor count (max), which defaults to 1. This parameter applies if the "Dynamic" mode is selected. If the "Dynamic" mode is not selected, the executor count is equal to `AppExecutorNums`.
                     */
                    int64_t GetAppExecutorMaxNumbers() const;

                    /**
                     * 设置The specified executor count (max), which defaults to 1. This parameter applies if the "Dynamic" mode is selected. If the "Dynamic" mode is not selected, the executor count is equal to `AppExecutorNums`.
                     * @param AppExecutorMaxNumbers The specified executor count (max), which defaults to 1. This parameter applies if the "Dynamic" mode is selected. If the "Dynamic" mode is not selected, the executor count is equal to `AppExecutorNums`.
                     */
                    void SetAppExecutorMaxNumbers(const int64_t& _appExecutorMaxNumbers);

                    /**
                     * 判断参数 AppExecutorMaxNumbers 是否已赋值
                     * @return AppExecutorMaxNumbers 是否已赋值
                     */
                    bool AppExecutorMaxNumbersHasBeenSet() const;

                    /**
                     * 获取The ID of the associated Data Lake Compute query script.
                     * @return SessionId The ID of the associated Data Lake Compute query script.
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The ID of the associated Data Lake Compute query script.
                     * @param SessionId The ID of the associated Data Lake Compute query script.
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * Spark application name
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 1: Spark JAR application; 2: Spark streaming application
                     */
                    int64_t m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * The data engine executing the Spark job
                     */
                    std::string m_dataEngine;
                    bool m_dataEngineHasBeenSet;

                    /**
                     * Execution entry of the Spark application
                     */
                    std::string m_appFile;
                    bool m_appFileHasBeenSet;

                    /**
                     * Execution role ID of the Spark job
                     */
                    int64_t m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * Driver resource specification of the Spark job. Valid values: `small`, `medium`, `large`, `xlarge`.
                     */
                    std::string m_appDriverSize;
                    bool m_appDriverSizeHasBeenSet;

                    /**
                     * Executor resource specification of the Spark job. Valid values: `small`, `medium`, `large`, `xlarge`.
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
                     * Whether it is upload locally. Valid values: `cos`, `lakefs`.
                     */
                    std::string m_isLocal;
                    bool m_isLocalHasBeenSet;

                    /**
                     * Main class of the Spark JAR job during execution
                     */
                    std::string m_mainClass;
                    bool m_mainClassHasBeenSet;

                    /**
                     * Spark configurations separated by line break
                     */
                    std::string m_appConf;
                    bool m_appConfHasBeenSet;

                    /**
                     * Whether it is upload locally. Valid values: `cos`, `lakefs`.
                     */
                    std::string m_isLocalJars;
                    bool m_isLocalJarsHasBeenSet;

                    /**
                     * Dependency JAR packages of the Spark JAR job separated by comma
                     */
                    std::string m_appJars;
                    bool m_appJarsHasBeenSet;

                    /**
                     * Whether it is upload locally. Valid values: `cos`, `lakefs`.
                     */
                    std::string m_isLocalFiles;
                    bool m_isLocalFilesHasBeenSet;

                    /**
                     * Dependency resources of the Spark job separated by comma
                     */
                    std::string m_appFiles;
                    bool m_appFilesHasBeenSet;

                    /**
                     * Command line parameters of the Spark job
                     */
                    std::string m_cmdArgs;
                    bool m_cmdArgsHasBeenSet;

                    /**
                     * This parameter takes effect only for Spark flow tasks.
                     */
                    int64_t m_maxRetries;
                    bool m_maxRetriesHasBeenSet;

                    /**
                     * Data source name
                     */
                    std::string m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * PySpark: Dependency upload method. 1: cos; 2: lakefs (this method needs to be used in the console but cannot be called through APIs).
                     */
                    std::string m_isLocalPythonFiles;
                    bool m_isLocalPythonFilesHasBeenSet;

                    /**
                     * PySpark: Python dependency, which can be in .py, .zip, or .egg format. Multiple files should be separated by comma.
                     */
                    std::string m_appPythonFiles;
                    bool m_appPythonFilesHasBeenSet;

                    /**
                     * Archives: Dependency upload method. 1: cos; 2: lakefs (this method needs to be used in the console but cannot be called through APIs).
                     */
                    std::string m_isLocalArchives;
                    bool m_isLocalArchivesHasBeenSet;

                    /**
                     * Archives: Dependency resources
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKAPPREQUEST_H_
