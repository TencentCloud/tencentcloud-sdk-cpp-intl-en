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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_RECORDINGRULEYAMLTASKINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_RECORDINGRULEYAMLTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Pre-aggregation YAML task details.
                */
                class RecordingRuleYamlTaskInfo : public AbstractModel
                {
                public:
                    RecordingRuleYamlTaskInfo();
                    ~RecordingRuleYamlTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取YAML configuration file ID.
                     * @return YamlId YAML configuration file ID.
                     * 
                     */
                    std::string GetYamlId() const;

                    /**
                     * 设置YAML configuration file ID.
                     * @param _yamlId YAML configuration file ID.
                     * 
                     */
                    void SetYamlId(const std::string& _yamlId);

                    /**
                     * 判断参数 YamlId 是否已赋值
                     * @return YamlId 是否已赋值
                     * 
                     */
                    bool YamlIdHasBeenSet() const;

                    /**
                     * 获取Source Log Topic ID
                     * @return TopicId Source Log Topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Source Log Topic ID
                     * @param _topicId Source Log Topic ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Log topic ID for the write description.
                     * @return DstTopicId Log topic ID for the write description.
                     * 
                     */
                    std::string GetDstTopicId() const;

                    /**
                     * 设置Log topic ID for the write description.
                     * @param _dstTopicId Log topic ID for the write description.
                     * 
                     */
                    void SetDstTopicId(const std::string& _dstTopicId);

                    /**
                     * 判断参数 DstTopicId 是否已赋值
                     * @return DstTopicId 是否已赋值
                     * 
                     */
                    bool DstTopicIdHasBeenSet() const;

                    /**
                     * 获取Creation Time
                     * @return CreateTime Creation Time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation Time
                     * @param _createTime Creation Time
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
                     * 获取Task Update Time
                     * @return UpdateTime Task Update Time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Task Update Time
                     * @param _updateTime Task Update Time
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
                     * 获取Task status, 1: running 2: stopped 3: error - source log topic not found 4: error - destination topic not found

5: Access permission issue 6: Internal failure 7: Other faults
                     * @return Status Task status, 1: running 2: stopped 3: error - source log topic not found 4: error - destination topic not found

5: Access permission issue 6: Internal failure 7: Other faults
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task status, 1: running 2: stopped 3: error - source log topic not found 4: error - destination topic not found

5: Access permission issue 6: Internal failure 7: Other faults
                     * @param _status Task status, 1: running 2: stopped 3: error - source log topic not found 4: error - destination topic not found

5: Access permission issue 6: Internal failure 7: Other faults
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
                     * 获取Task status: 1 Enabled, 2 Disabled
                     * @return EnableFlag Task status: 1 Enabled, 2 Disabled
                     * 
                     */
                    int64_t GetEnableFlag() const;

                    /**
                     * 设置Task status: 1 Enabled, 2 Disabled
                     * @param _enableFlag Task status: 1 Enabled, 2 Disabled
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
                     * 获取Schedule Start Time
                     * @return ProcessStartTime Schedule Start Time
                     * 
                     */
                    uint64_t GetProcessStartTime() const;

                    /**
                     * 设置Schedule Start Time
                     * @param _processStartTime Schedule Start Time
                     * 
                     */
                    void SetProcessStartTime(const uint64_t& _processStartTime);

                    /**
                     * 判断参数 ProcessStartTime 是否已赋值
                     * @return ProcessStartTime 是否已赋值
                     * 
                     */
                    bool ProcessStartTimeHasBeenSet() const;

                    /**
                     * 获取Scheduling Interval (Minutes)
                     * @return ProcessPeriod Scheduling Interval (Minutes)
                     * 
                     */
                    int64_t GetProcessPeriod() const;

                    /**
                     * 设置Scheduling Interval (Minutes)
                     * @param _processPeriod Scheduling Interval (Minutes)
                     * 
                     */
                    void SetProcessPeriod(const int64_t& _processPeriod);

                    /**
                     * 判断参数 ProcessPeriod 是否已赋值
                     * @return ProcessPeriod 是否已赋值
                     * 
                     */
                    bool ProcessPeriodHasBeenSet() const;

                    /**
                     * 获取Execution Delay (Seconds)
                     * @return ProcessDelay Execution Delay (Seconds)
                     * 
                     */
                    int64_t GetProcessDelay() const;

                    /**
                     * 设置Execution Delay (Seconds)
                     * @param _processDelay Execution Delay (Seconds)
                     * 
                     */
                    void SetProcessDelay(const int64_t& _processDelay);

                    /**
                     * 判断参数 ProcessDelay 是否已赋值
                     * @return ProcessDelay 是否已赋值
                     * 
                     */
                    bool ProcessDelayHasBeenSet() const;

                    /**
                     * 获取Whether to enable service log shipping. Valid values: 1: disable; 2: enable.
                     * @return HasServicesLog Whether to enable service log shipping. Valid values: 1: disable; 2: enable.
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置Whether to enable service log shipping. Valid values: 1: disable; 2: enable.
                     * @param _hasServicesLog Whether to enable service log shipping. Valid values: 1: disable; 2: enable.
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
                     * 获取YAML configuration file name.
                     * @return YamlConfigName YAML configuration file name.
                     * 
                     */
                    std::string GetYamlConfigName() const;

                    /**
                     * 设置YAML configuration file name.
                     * @param _yamlConfigName YAML configuration file name.
                     * 
                     */
                    void SetYamlConfigName(const std::string& _yamlConfigName);

                    /**
                     * 判断参数 YamlConfigName 是否已赋值
                     * @return YamlConfigName 是否已赋值
                     * 
                     */
                    bool YamlConfigNameHasBeenSet() const;

                    /**
                     * 获取YAML configuration file content.
                     * @return YamlContent YAML configuration file content.
                     * 
                     */
                    std::string GetYamlContent() const;

                    /**
                     * 设置YAML configuration file content.
                     * @param _yamlContent YAML configuration file content.
                     * 
                     */
                    void SetYamlContent(const std::string& _yamlContent);

                    /**
                     * 判断参数 YamlContent 是否已赋值
                     * @return YamlContent 是否已赋值
                     * 
                     */
                    bool YamlContentHasBeenSet() const;

                    /**
                     * 获取Number of subtasks of the YAML file.
                     * @return SubTaskCount Number of subtasks of the YAML file.
                     * 
                     */
                    int64_t GetSubTaskCount() const;

                    /**
                     * 设置Number of subtasks of the YAML file.
                     * @param _subTaskCount Number of subtasks of the YAML file.
                     * 
                     */
                    void SetSubTaskCount(const int64_t& _subTaskCount);

                    /**
                     * 判断参数 SubTaskCount 是否已赋值
                     * @return SubTaskCount 是否已赋值
                     * 
                     */
                    bool SubTaskCountHasBeenSet() const;

                private:

                    /**
                     * YAML configuration file ID.
                     */
                    std::string m_yamlId;
                    bool m_yamlIdHasBeenSet;

                    /**
                     * Source Log Topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Log topic ID for the write description.
                     */
                    std::string m_dstTopicId;
                    bool m_dstTopicIdHasBeenSet;

                    /**
                     * Creation Time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Task Update Time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Task status, 1: running 2: stopped 3: error - source log topic not found 4: error - destination topic not found

5: Access permission issue 6: Internal failure 7: Other faults
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task status: 1 Enabled, 2 Disabled
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * Schedule Start Time
                     */
                    uint64_t m_processStartTime;
                    bool m_processStartTimeHasBeenSet;

                    /**
                     * Scheduling Interval (Minutes)
                     */
                    int64_t m_processPeriod;
                    bool m_processPeriodHasBeenSet;

                    /**
                     * Execution Delay (Seconds)
                     */
                    int64_t m_processDelay;
                    bool m_processDelayHasBeenSet;

                    /**
                     * Whether to enable service log shipping. Valid values: 1: disable; 2: enable.
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                    /**
                     * YAML configuration file name.
                     */
                    std::string m_yamlConfigName;
                    bool m_yamlConfigNameHasBeenSet;

                    /**
                     * YAML configuration file content.
                     */
                    std::string m_yamlContent;
                    bool m_yamlContentHasBeenSet;

                    /**
                     * Number of subtasks of the YAML file.
                     */
                    int64_t m_subTaskCount;
                    bool m_subTaskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_RECORDINGRULEYAMLTASKINFO_H_
