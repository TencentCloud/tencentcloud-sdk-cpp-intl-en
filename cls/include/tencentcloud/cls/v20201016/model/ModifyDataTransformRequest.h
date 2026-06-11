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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYDATATRANSFORMREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYDATATRANSFORMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DataTransformResouceInfo.h>
#include <tencentcloud/cls/v20201016/model/DataTransformSqlDataSource.h>
#include <tencentcloud/cls/v20201016/model/EnvInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyDataTransform request structure.
                */
                class ModifyDataTransformRequest : public AbstractModel
                {
                public:
                    ModifyDataTransformRequest();
                    ~ModifyDataTransformRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Data processing task ID
-Get the data processing task Id by [searching data processing task list basic information](https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1).
                     * @return TaskId Data processing task ID
-Get the data processing task Id by [searching data processing task list basic information](https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1).
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Data processing task ID
-Get the data processing task Id by [searching data processing task list basic information](https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1).
                     * @param _taskId Data processing task ID
-Get the data processing task Id by [searching data processing task list basic information](https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1).
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Processing task name
-Get the name of a data processing task by [searching data processing task list basic information](https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1).

Name limit
-Cannot be an empty string
-Cannot contain character '|'
-Up to 255 characters
                     * @return Name Processing task name
-Get the name of a data processing task by [searching data processing task list basic information](https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1).

Name limit
-Cannot be an empty string
-Cannot contain character '|'
-Up to 255 characters
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Processing task name
-Get the name of a data processing task by [searching data processing task list basic information](https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1).

Name limit
-Cannot be an empty string
-Cannot contain character '|'
-Up to 255 characters
                     * @param _name Processing task name
-Get the name of a data processing task by [searching data processing task list basic information](https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1).

Name limit
-Cannot be an empty string
-Cannot contain character '|'
-Up to 255 characters
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
                     * 获取Processing statement. When FuncType is 2, EtlContent must use [log_auto_output](https://www.tencentcloud.com/document/product/614/70733?from_cn_redirect=1#b3c58797-4825-4807-bef4-68106e25024f). 

Other reference documents:

-[Create a processing task](https://www.tencentcloud.com/document/product/614/63940?from_cn_redirect=1) 
-[Function overview](https://www.tencentcloud.com/document/product/614/70395?from_cn_redirect=1)
                     * @return EtlContent Processing statement. When FuncType is 2, EtlContent must use [log_auto_output](https://www.tencentcloud.com/document/product/614/70733?from_cn_redirect=1#b3c58797-4825-4807-bef4-68106e25024f). 

Other reference documents:

-[Create a processing task](https://www.tencentcloud.com/document/product/614/63940?from_cn_redirect=1) 
-[Function overview](https://www.tencentcloud.com/document/product/614/70395?from_cn_redirect=1)
                     * 
                     */
                    std::string GetEtlContent() const;

                    /**
                     * 设置Processing statement. When FuncType is 2, EtlContent must use [log_auto_output](https://www.tencentcloud.com/document/product/614/70733?from_cn_redirect=1#b3c58797-4825-4807-bef4-68106e25024f). 

Other reference documents:

-[Create a processing task](https://www.tencentcloud.com/document/product/614/63940?from_cn_redirect=1) 
-[Function overview](https://www.tencentcloud.com/document/product/614/70395?from_cn_redirect=1)
                     * @param _etlContent Processing statement. When FuncType is 2, EtlContent must use [log_auto_output](https://www.tencentcloud.com/document/product/614/70733?from_cn_redirect=1#b3c58797-4825-4807-bef4-68106e25024f). 

Other reference documents:

-[Create a processing task](https://www.tencentcloud.com/document/product/614/63940?from_cn_redirect=1) 
-[Function overview](https://www.tencentcloud.com/document/product/614/70395?from_cn_redirect=1)
                     * 
                     */
                    void SetEtlContent(const std::string& _etlContent);

                    /**
                     * 判断参数 EtlContent 是否已赋值
                     * @return EtlContent 是否已赋值
                     * 
                     */
                    bool EtlContentHasBeenSet() const;

                    /**
                     * 获取Task status. Valid values: 1 (enabled) and 2 (disabled).
                     * @return EnableFlag Task status. Valid values: 1 (enabled) and 2 (disabled).
                     * 
                     */
                    int64_t GetEnableFlag() const;

                    /**
                     * 设置Task status. Valid values: 1 (enabled) and 2 (disabled).
                     * @param _enableFlag Task status. Valid values: 1 (enabled) and 2 (disabled).
                     * 
                     */
                    void SetEnableFlag(const int64_t& _enableFlag);

                    /**
                     * 判断参数 EnableFlag 是否已赋值
                     * @return EnableFlag 是否已赋值
                     * 
                     */
                    bool EnableFlagHasBeenSet() const;

                    /**
                     * 获取Destination topic ID and alias of the data processing task
                     * @return DstResources Destination topic ID and alias of the data processing task
                     * 
                     */
                    std::vector<DataTransformResouceInfo> GetDstResources() const;

                    /**
                     * 设置Destination topic ID and alias of the data processing task
                     * @param _dstResources Destination topic ID and alias of the data processing task
                     * 
                     */
                    void SetDstResources(const std::vector<DataTransformResouceInfo>& _dstResources);

                    /**
                     * 判断参数 DstResources 是否已赋值
                     * @return DstResources 是否已赋值
                     * 
                     */
                    bool DstResourcesHasBeenSet() const;

                    /**
                     * 获取Whether to discard log data after the limit is exceeded
                     * @return BackupGiveUpData Whether to discard log data after the limit is exceeded
                     * 
                     */
                    bool GetBackupGiveUpData() const;

                    /**
                     * 设置Whether to discard log data after the limit is exceeded
                     * @param _backupGiveUpData Whether to discard log data after the limit is exceeded
                     * 
                     */
                    void SetBackupGiveUpData(const bool& _backupGiveUpData);

                    /**
                     * 判断参数 BackupGiveUpData 是否已赋值
                     * @return BackupGiveUpData 是否已赋值
                     * 
                     */
                    bool BackupGiveUpDataHasBeenSet() const;

                    /**
                     * 获取Whether to enable delivery service log. 1 for disabled, 2 for enabled
                     * @return HasServicesLog Whether to enable delivery service log. 1 for disabled, 2 for enabled
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置Whether to enable delivery service log. 1 for disabled, 2 for enabled
                     * @param _hasServicesLog Whether to enable delivery service log. 1 for disabled, 2 for enabled
                     * 
                     */
                    void SetHasServicesLog(const uint64_t& _hasServicesLog);

                    /**
                     * 判断参数 HasServicesLog 是否已赋值
                     * @return HasServicesLog 是否已赋值
                     * 
                     */
                    bool HasServicesLogHasBeenSet() const;

                    /**
                     * 获取Whether to keep the failure log status. Valid values: 1: no; 2: yes.
                     * @return KeepFailureLog Whether to keep the failure log status. Valid values: 1: no; 2: yes.
                     * 
                     */
                    uint64_t GetKeepFailureLog() const;

                    /**
                     * 设置Whether to keep the failure log status. Valid values: 1: no; 2: yes.
                     * @param _keepFailureLog Whether to keep the failure log status. Valid values: 1: no; 2: yes.
                     * 
                     */
                    void SetKeepFailureLog(const uint64_t& _keepFailureLog);

                    /**
                     * 判断参数 KeepFailureLog 是否已赋值
                     * @return KeepFailureLog 是否已赋值
                     * 
                     */
                    bool KeepFailureLogHasBeenSet() const;

                    /**
                     * 获取Field name of a failed log.
                     * @return FailureLogKey Field name of a failed log.
                     * 
                     */
                    std::string GetFailureLogKey() const;

                    /**
                     * 设置Field name of a failed log.
                     * @param _failureLogKey Field name of a failed log.
                     * 
                     */
                    void SetFailureLogKey(const std::string& _failureLogKey);

                    /**
                     * 判断参数 FailureLogKey 是否已赋值
                     * @return FailureLogKey 是否已赋值
                     * 
                     */
                    bool FailureLogKeyHasBeenSet() const;

                    /**
                     * 获取External data source information
                     * @return DataTransformSqlDataSources External data source information
                     * 
                     */
                    std::vector<DataTransformSqlDataSource> GetDataTransformSqlDataSources() const;

                    /**
                     * 设置External data source information
                     * @param _dataTransformSqlDataSources External data source information
                     * 
                     */
                    void SetDataTransformSqlDataSources(const std::vector<DataTransformSqlDataSource>& _dataTransformSqlDataSources);

                    /**
                     * 判断参数 DataTransformSqlDataSources 是否已赋值
                     * @return DataTransformSqlDataSources 是否已赋值
                     * 
                     */
                    bool DataTransformSqlDataSourcesHasBeenSet() const;

                    /**
                     * 获取Set environment variable
                     * @return EnvInfos Set environment variable
                     * 
                     */
                    std::vector<EnvInfo> GetEnvInfos() const;

                    /**
                     * 设置Set environment variable
                     * @param _envInfos Set environment variable
                     * 
                     */
                    void SetEnvInfos(const std::vector<EnvInfo>& _envInfos);

                    /**
                     * 判断参数 EnvInfos 是否已赋值
                     * @return EnvInfos 是否已赋值
                     * 
                     */
                    bool EnvInfosHasBeenSet() const;

                private:

                    /**
                     * Data processing task ID
-Get the data processing task Id by [searching data processing task list basic information](https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1).
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Processing task name
-Get the name of a data processing task by [searching data processing task list basic information](https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1).

Name limit
-Cannot be an empty string
-Cannot contain character '|'
-Up to 255 characters
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Processing statement. When FuncType is 2, EtlContent must use [log_auto_output](https://www.tencentcloud.com/document/product/614/70733?from_cn_redirect=1#b3c58797-4825-4807-bef4-68106e25024f). 

Other reference documents:

-[Create a processing task](https://www.tencentcloud.com/document/product/614/63940?from_cn_redirect=1) 
-[Function overview](https://www.tencentcloud.com/document/product/614/70395?from_cn_redirect=1)
                     */
                    std::string m_etlContent;
                    bool m_etlContentHasBeenSet;

                    /**
                     * Task status. Valid values: 1 (enabled) and 2 (disabled).
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * Destination topic ID and alias of the data processing task
                     */
                    std::vector<DataTransformResouceInfo> m_dstResources;
                    bool m_dstResourcesHasBeenSet;

                    /**
                     * Whether to discard log data after the limit is exceeded
                     */
                    bool m_backupGiveUpData;
                    bool m_backupGiveUpDataHasBeenSet;

                    /**
                     * Whether to enable delivery service log. 1 for disabled, 2 for enabled
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                    /**
                     * Whether to keep the failure log status. Valid values: 1: no; 2: yes.
                     */
                    uint64_t m_keepFailureLog;
                    bool m_keepFailureLogHasBeenSet;

                    /**
                     * Field name of a failed log.
                     */
                    std::string m_failureLogKey;
                    bool m_failureLogKeyHasBeenSet;

                    /**
                     * External data source information
                     */
                    std::vector<DataTransformSqlDataSource> m_dataTransformSqlDataSources;
                    bool m_dataTransformSqlDataSourcesHasBeenSet;

                    /**
                     * Set environment variable
                     */
                    std::vector<EnvInfo> m_envInfos;
                    bool m_envInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYDATATRANSFORMREQUEST_H_
