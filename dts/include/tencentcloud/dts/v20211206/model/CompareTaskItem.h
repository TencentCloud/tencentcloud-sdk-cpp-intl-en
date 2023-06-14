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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_COMPARETASKITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_COMPARETASKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/CompareObject.h>
#include <tencentcloud/dts/v20211206/model/ProcessProgress.h>
#include <tencentcloud/dts/v20211206/model/CompareOptions.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Information of the data consistency check object
                */
                class CompareTaskItem : public AbstractModel
                {
                public:
                    CompareTaskItem();
                    ~CompareTaskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobId Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jobId Task ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Data consistency check task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CompareTaskId Data consistency check task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCompareTaskId() const;

                    /**
                     * 设置Data consistency check task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _compareTaskId Data consistency check task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCompareTaskId(const std::string& _compareTaskId);

                    /**
                     * 判断参数 CompareTaskId 是否已赋值
                     * @return CompareTaskId 是否已赋值
                     * 
                     */
                    bool CompareTaskIdHasBeenSet() const;

                    /**
                     * 获取Data consistency check task name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskName Data consistency check task name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Data consistency check task name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskName Data consistency check task name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Data consistency check task status. Valid values: `created`, `readyRun`, `running`, `success`, `stopping`, `failed`, `canceled`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Data consistency check task status. Valid values: `created`, `readyRun`, `running`, `success`, `stopping`, `failed`, `canceled`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Data consistency check task status. Valid values: `created`, `readyRun`, `running`, `success`, `stopping`, `failed`, `canceled`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Data consistency check task status. Valid values: `created`, `readyRun`, `running`, `success`, `stopping`, `failed`, `canceled`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Data consistency check task configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Config Data consistency check task configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CompareObject GetConfig() const;

                    /**
                     * 设置Data consistency check task configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _config Data consistency check task configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConfig(const CompareObject& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Check details of the data consistency check task
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CheckProcess Check details of the data consistency check task
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ProcessProgress GetCheckProcess() const;

                    /**
                     * 设置Check details of the data consistency check task
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _checkProcess Check details of the data consistency check task
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCheckProcess(const ProcessProgress& _checkProcess);

                    /**
                     * 判断参数 CheckProcess 是否已赋值
                     * @return CheckProcess 是否已赋值
                     * 
                     */
                    bool CheckProcessHasBeenSet() const;

                    /**
                     * 获取Running details of the data consistency check task
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CompareProcess Running details of the data consistency check task
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ProcessProgress GetCompareProcess() const;

                    /**
                     * 设置Running details of the data consistency check task
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _compareProcess Running details of the data consistency check task
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCompareProcess(const ProcessProgress& _compareProcess);

                    /**
                     * 判断参数 CompareProcess 是否已赋值
                     * @return CompareProcess 是否已赋值
                     * 
                     */
                    bool CompareProcessHasBeenSet() const;

                    /**
                     * 获取Comparison result. Valid values: `same`, `different`, `skipAll`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Conclusion Comparison result. Valid values: `same`, `different`, `skipAll`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConclusion() const;

                    /**
                     * 设置Comparison result. Valid values: `same`, `different`, `skipAll`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _conclusion Comparison result. Valid values: `same`, `different`, `skipAll`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConclusion(const std::string& _conclusion);

                    /**
                     * 判断参数 Conclusion 是否已赋值
                     * @return Conclusion 是否已赋值
                     * 
                     */
                    bool ConclusionHasBeenSet() const;

                    /**
                     * 获取Task creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreatedAt Task creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Task creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createdAt Task creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Task start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartedAt Task start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartedAt() const;

                    /**
                     * 设置Task start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startedAt Task start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartedAt(const std::string& _startedAt);

                    /**
                     * 判断参数 StartedAt 是否已赋值
                     * @return StartedAt 是否已赋值
                     * 
                     */
                    bool StartedAtHasBeenSet() const;

                    /**
                     * 获取Comparison end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FinishedAt Comparison end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFinishedAt() const;

                    /**
                     * 设置Comparison end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _finishedAt Comparison end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFinishedAt(const std::string& _finishedAt);

                    /**
                     * 判断参数 FinishedAt 是否已赋值
                     * @return FinishedAt 是否已赋值
                     * 
                     */
                    bool FinishedAtHasBeenSet() const;

                    /**
                     * 获取Comparison type: (`dataCheck`: Full data comparison; `sampleDataCheck`: Sampling data comparison; `rowsCount`: Row count comparison)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Method Comparison type: (`dataCheck`: Full data comparison; `sampleDataCheck`: Sampling data comparison; `rowsCount`: Row count comparison)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Comparison type: (`dataCheck`: Full data comparison; `sampleDataCheck`: Sampling data comparison; `rowsCount`: Row count comparison)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _method Comparison type: (`dataCheck`: Full data comparison; `sampleDataCheck`: Sampling data comparison; `rowsCount`: Row count comparison)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Configuration information of the comparison task
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Options Configuration information of the comparison task
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CompareOptions GetOptions() const;

                    /**
                     * 设置Configuration information of the comparison task
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _options Configuration information of the comparison task
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOptions(const CompareOptions& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                    /**
                     * 获取Consistency check prompt message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Message Consistency check prompt message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Consistency check prompt message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _message Consistency check prompt message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Data consistency check task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_compareTaskId;
                    bool m_compareTaskIdHasBeenSet;

                    /**
                     * Data consistency check task name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Data consistency check task status. Valid values: `created`, `readyRun`, `running`, `success`, `stopping`, `failed`, `canceled`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Data consistency check task configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CompareObject m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Check details of the data consistency check task
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ProcessProgress m_checkProcess;
                    bool m_checkProcessHasBeenSet;

                    /**
                     * Running details of the data consistency check task
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ProcessProgress m_compareProcess;
                    bool m_compareProcessHasBeenSet;

                    /**
                     * Comparison result. Valid values: `same`, `different`, `skipAll`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_conclusion;
                    bool m_conclusionHasBeenSet;

                    /**
                     * Task creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Task start time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startedAt;
                    bool m_startedAtHasBeenSet;

                    /**
                     * Comparison end time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_finishedAt;
                    bool m_finishedAtHasBeenSet;

                    /**
                     * Comparison type: (`dataCheck`: Full data comparison; `sampleDataCheck`: Sampling data comparison; `rowsCount`: Row count comparison)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Configuration information of the comparison task
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CompareOptions m_options;
                    bool m_optionsHasBeenSet;

                    /**
                     * Consistency check prompt message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_COMPARETASKITEM_H_
