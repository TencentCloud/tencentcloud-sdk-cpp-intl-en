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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SCHEDULEDSQLTASKINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SCHEDULEDSQLTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ScheduledSqlResouceInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ScheduledSql task details
                */
                class ScheduledSqlTaskInfo : public AbstractModel
                {
                public:
                    ScheduledSqlTaskInfo();
                    ~ScheduledSqlTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ScheduledSql task id
                     * @return TaskId ScheduledSql task id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置ScheduledSql task id
                     * @param _taskId ScheduledSql task id
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
                     * 获取ScheduledSql task name
                     * @return Name ScheduledSql task name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置ScheduledSql task name
                     * @param _name ScheduledSql task name
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
                     * 获取Source Log Topic ID
                     * @return SrcTopicId Source Log Topic ID
                     * 
                     */
                    std::string GetSrcTopicId() const;

                    /**
                     * 设置Source Log Topic ID
                     * @param _srcTopicId Source Log Topic ID
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
                     * 获取Source Log Topic Name
                     * @return SrcTopicName Source Log Topic Name
                     * 
                     */
                    std::string GetSrcTopicName() const;

                    /**
                     * 设置Source Log Topic Name
                     * @param _srcTopicName Source Log Topic Name
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
                     * 获取Scheduled SQL analysis of target topic
                     * @return DstResource Scheduled SQL analysis of target topic
                     * 
                     */
                    ScheduledSqlResouceInfo GetDstResource() const;

                    /**
                     * 设置Scheduled SQL analysis of target topic
                     * @param _dstResource Scheduled SQL analysis of target topic
                     * 
                     */
                    void SetDstResource(const ScheduledSqlResouceInfo& _dstResource);

                    /**
                     * 判断参数 DstResource 是否已赋值
                     * @return DstResource 是否已赋值
                     * 
                     */
                    bool DstResourceHasBeenSet() const;

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
                     * 获取Task status: 1: Running 2: Stop 3: Exception - Source log topic not found 4: Exception - target topic not found5: Access permission issue 6: Internal failure 7: Other faults
                     * @return Status Task status: 1: Running 2: Stop 3: Exception - Source log topic not found 4: Exception - target topic not found5: Access permission issue 6: Internal failure 7: Other faults
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task status: 1: Running 2: Stop 3: Exception - Source log topic not found 4: Exception - target topic not found5: Access permission issue 6: Internal failure 7: Other faults
                     * @param _status Task status: 1: Running 2: Stop 3: Exception - Source log topic not found 4: Exception - target topic not found5: Access permission issue 6: Internal failure 7: Other faults
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
                     * 获取Queries statements
                     * @return ScheduledSqlContent Queries statements
                     * 
                     */
                    std::string GetScheduledSqlContent() const;

                    /**
                     * 设置Queries statements
                     * @param _scheduledSqlContent Queries statements
                     * 
                     */
                    void SetScheduledSqlContent(const std::string& _scheduledSqlContent);

                    /**
                     * 判断参数 ScheduledSqlContent 是否已赋值
                     * @return ScheduledSqlContent 是否已赋值
                     * 
                     */
                    bool ScheduledSqlContentHasBeenSet() const;

                    /**
                     * 获取Schedule Start Time
                     * @return ProcessStartTime Schedule Start Time
                     * 
                     */
                    std::string GetProcessStartTime() const;

                    /**
                     * 设置Schedule Start Time
                     * @param _processStartTime Schedule Start Time
                     * 
                     */
                    void SetProcessStartTime(const std::string& _processStartTime);

                    /**
                     * 判断参数 ProcessStartTime 是否已赋值
                     * @return ProcessStartTime 是否已赋值
                     * 
                     */
                    bool ProcessStartTimeHasBeenSet() const;

                    /**
                     * 获取Schedule Type: 1 Continuous Running 2 Specified Time Range
                     * @return ProcessType Schedule Type: 1 Continuous Running 2 Specified Time Range
                     * 
                     */
                    int64_t GetProcessType() const;

                    /**
                     * 设置Schedule Type: 1 Continuous Running 2 Specified Time Range
                     * @param _processType Schedule Type: 1 Continuous Running 2 Specified Time Range
                     * 
                     */
                    void SetProcessType(const int64_t& _processType);

                    /**
                     * 判断参数 ProcessType 是否已赋值
                     * @return ProcessType 是否已赋值
                     * 
                     */
                    bool ProcessTypeHasBeenSet() const;

                    /**
                     * 获取Schedule End Time, required when process_type=2
                     * @return ProcessEndTime Schedule End Time, required when process_type=2
                     * 
                     */
                    std::string GetProcessEndTime() const;

                    /**
                     * 设置Schedule End Time, required when process_type=2
                     * @param _processEndTime Schedule End Time, required when process_type=2
                     * 
                     */
                    void SetProcessEndTime(const std::string& _processEndTime);

                    /**
                     * 判断参数 ProcessEndTime 是否已赋值
                     * @return ProcessEndTime 是否已赋值
                     * 
                     */
                    bool ProcessEndTimeHasBeenSet() const;

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
                     * 获取Query Time Window. @m-15m, @m, meaning the last 15 minutes
                     * @return ProcessTimeWindow Query Time Window. @m-15m, @m, meaning the last 15 minutes
                     * 
                     */
                    std::string GetProcessTimeWindow() const;

                    /**
                     * 设置Query Time Window. @m-15m, @m, meaning the last 15 minutes
                     * @param _processTimeWindow Query Time Window. @m-15m, @m, meaning the last 15 minutes
                     * 
                     */
                    void SetProcessTimeWindow(const std::string& _processTimeWindow);

                    /**
                     * 判断参数 ProcessTimeWindow 是否已赋值
                     * @return ProcessTimeWindow 是否已赋值
                     * 
                     */
                    bool ProcessTimeWindowHasBeenSet() const;

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
                     * 获取Source Topic ID Region Information
                     * @return SrcTopicRegion Source Topic ID Region Information
                     * 
                     */
                    std::string GetSrcTopicRegion() const;

                    /**
                     * 设置Source Topic ID Region Information
                     * @param _srcTopicRegion Source Topic ID Region Information
                     * 
                     */
                    void SetSrcTopicRegion(const std::string& _srcTopicRegion);

                    /**
                     * 判断参数 SrcTopicRegion 是否已赋值
                     * @return SrcTopicRegion 是否已赋值
                     * 
                     */
                    bool SrcTopicRegionHasBeenSet() const;

                    /**
                     * 获取Syntax Rules: 0 Lucene syntax, 1 CQL syntaxNote: This field may return null, indicating that no valid values can be obtained.
                     * @return SyntaxRule Syntax Rules: 0 Lucene syntax, 1 CQL syntaxNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSyntaxRule() const;

                    /**
                     * 设置Syntax Rules: 0 Lucene syntax, 1 CQL syntaxNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _syntaxRule Syntax Rules: 0 Lucene syntax, 1 CQL syntaxNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSyntaxRule(const uint64_t& _syntaxRule);

                    /**
                     * 判断参数 SyntaxRule 是否已赋值
                     * @return SyntaxRule 是否已赋值
                     * 
                     */
                    bool SyntaxRuleHasBeenSet() const;

                private:

                    /**
                     * ScheduledSql task id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * ScheduledSql task name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Source Log Topic ID
                     */
                    std::string m_srcTopicId;
                    bool m_srcTopicIdHasBeenSet;

                    /**
                     * Source Log Topic Name
                     */
                    std::string m_srcTopicName;
                    bool m_srcTopicNameHasBeenSet;

                    /**
                     * Scheduled SQL analysis of target topic
                     */
                    ScheduledSqlResouceInfo m_dstResource;
                    bool m_dstResourceHasBeenSet;

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
                     * Task status: 1: Running 2: Stop 3: Exception - Source log topic not found 4: Exception - target topic not found5: Access permission issue 6: Internal failure 7: Other faults
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task status: 1 Enabled, 2 Disabled
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * Queries statements
                     */
                    std::string m_scheduledSqlContent;
                    bool m_scheduledSqlContentHasBeenSet;

                    /**
                     * Schedule Start Time
                     */
                    std::string m_processStartTime;
                    bool m_processStartTimeHasBeenSet;

                    /**
                     * Schedule Type: 1 Continuous Running 2 Specified Time Range
                     */
                    int64_t m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * Schedule End Time, required when process_type=2
                     */
                    std::string m_processEndTime;
                    bool m_processEndTimeHasBeenSet;

                    /**
                     * Scheduling Interval (Minutes)
                     */
                    int64_t m_processPeriod;
                    bool m_processPeriodHasBeenSet;

                    /**
                     * Query Time Window. @m-15m, @m, meaning the last 15 minutes
                     */
                    std::string m_processTimeWindow;
                    bool m_processTimeWindowHasBeenSet;

                    /**
                     * Execution Delay (Seconds)
                     */
                    int64_t m_processDelay;
                    bool m_processDelayHasBeenSet;

                    /**
                     * Source Topic ID Region Information
                     */
                    std::string m_srcTopicRegion;
                    bool m_srcTopicRegionHasBeenSet;

                    /**
                     * Syntax Rules: 0 Lucene syntax, 1 CQL syntaxNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_syntaxRule;
                    bool m_syntaxRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SCHEDULEDSQLTASKINFO_H_
