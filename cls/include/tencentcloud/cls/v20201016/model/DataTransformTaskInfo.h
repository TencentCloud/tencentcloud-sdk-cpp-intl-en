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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DATATRANSFORMTASKINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DATATRANSFORMTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DataTransformResouceInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Basic information of a data processing task
                */
                class DataTransformTaskInfo : public AbstractModel
                {
                public:
                    DataTransformTaskInfo();
                    ~DataTransformTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data processing task name
                     * @return Name Data processing task name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Data processing task name
                     * @param _name Data processing task name
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
                     * 获取Data processing task ID
                     * @return TaskId Data processing task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Data processing task ID
                     * @param _taskId Data processing task ID
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
                     * 获取Task type. Valid values: 1 (DSL) and 2 (SQL).
                     * @return Type Task type. Valid values: 1 (DSL) and 2 (SQL).
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Task type. Valid values: 1 (DSL) and 2 (SQL).
                     * @param _type Task type. Valid values: 1 (DSL) and 2 (SQL).
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Source log topic
                     * @return SrcTopicId Source log topic
                     * 
                     */
                    std::string GetSrcTopicId() const;

                    /**
                     * 设置Source log topic
                     * @param _srcTopicId Source log topic
                     * 
                     */
                    void SetSrcTopicId(const std::string& _srcTopicId);

                    /**
                     * 判断参数 SrcTopicId 是否已赋值
                     * @return SrcTopicId 是否已赋值
                     * 
                     */
                    bool SrcTopicIdHasBeenSet() const;

                    /**
                     * 获取Current task status. Valid values: 1 (preparing), 2 (in progress), 3 (being stopped), and 4 (stopped).
                     * @return Status Current task status. Valid values: 1 (preparing), 2 (in progress), 3 (being stopped), and 4 (stopped).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Current task status. Valid values: 1 (preparing), 2 (in progress), 3 (being stopped), and 4 (stopped).
                     * @param _status Current task status. Valid values: 1 (preparing), 2 (in progress), 3 (being stopped), and 4 (stopped).
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Task creation time
                     * @return CreateTime Task creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Task creation time
                     * @param _createTime Task creation time
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
                     * 获取Last modified time
                     * @return UpdateTime Last modified time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified time
                     * @param _updateTime Last modified time
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
                     * 获取Last enabled time. If you need to rebuild a cluster, modify this time.
                     * @return LastEnableTime Last enabled time. If you need to rebuild a cluster, modify this time.
                     * 
                     */
                    std::string GetLastEnableTime() const;

                    /**
                     * 设置Last enabled time. If you need to rebuild a cluster, modify this time.
                     * @param _lastEnableTime Last enabled time. If you need to rebuild a cluster, modify this time.
                     * 
                     */
                    void SetLastEnableTime(const std::string& _lastEnableTime);

                    /**
                     * 判断参数 LastEnableTime 是否已赋值
                     * @return LastEnableTime 是否已赋值
                     * 
                     */
                    bool LastEnableTimeHasBeenSet() const;

                    /**
                     * 获取Log topic name
                     * @return SrcTopicName Log topic name
                     * 
                     */
                    std::string GetSrcTopicName() const;

                    /**
                     * 设置Log topic name
                     * @param _srcTopicName Log topic name
                     * 
                     */
                    void SetSrcTopicName(const std::string& _srcTopicName);

                    /**
                     * 判断参数 SrcTopicName 是否已赋值
                     * @return SrcTopicName 是否已赋值
                     * 
                     */
                    bool SrcTopicNameHasBeenSet() const;

                    /**
                     * 获取Logset ID
                     * @return LogsetId Logset ID
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset ID
                     * @param _logsetId Logset ID
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取Target topic ID and alias of the data processing task
                     * @return DstResources Target topic ID and alias of the data processing task
                     * 
                     */
                    std::vector<DataTransformResouceInfo> GetDstResources() const;

                    /**
                     * 设置Target topic ID and alias of the data processing task
                     * @param _dstResources Target topic ID and alias of the data processing task
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
                     * 获取Logical function for data processing
                     * @return EtlContent Logical function for data processing
                     * 
                     */
                    std::string GetEtlContent() const;

                    /**
                     * 设置Logical function for data processing
                     * @param _etlContent Logical function for data processing
                     * 
                     */
                    void SetEtlContent(const std::string& _etlContent);

                    /**
                     * 判断参数 EtlContent 是否已赋值
                     * @return EtlContent 是否已赋值
                     * 
                     */
                    bool EtlContentHasBeenSet() const;

                private:

                    /**
                     * Data processing task name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Data processing task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task status. Valid values: 1 (enabled) and 2 (disabled).
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * Task type. Valid values: 1 (DSL) and 2 (SQL).
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Source log topic
                     */
                    std::string m_srcTopicId;
                    bool m_srcTopicIdHasBeenSet;

                    /**
                     * Current task status. Valid values: 1 (preparing), 2 (in progress), 3 (being stopped), and 4 (stopped).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modified time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Last enabled time. If you need to rebuild a cluster, modify this time.
                     */
                    std::string m_lastEnableTime;
                    bool m_lastEnableTimeHasBeenSet;

                    /**
                     * Log topic name
                     */
                    std::string m_srcTopicName;
                    bool m_srcTopicNameHasBeenSet;

                    /**
                     * Logset ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Target topic ID and alias of the data processing task
                     */
                    std::vector<DataTransformResouceInfo> m_dstResources;
                    bool m_dstResourcesHasBeenSet;

                    /**
                     * Logical function for data processing
                     */
                    std::string m_etlContent;
                    bool m_etlContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DATATRANSFORMTASKINFO_H_
