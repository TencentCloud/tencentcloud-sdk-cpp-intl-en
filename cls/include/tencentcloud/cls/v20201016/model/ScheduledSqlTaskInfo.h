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
                     * 获取<p>ScheduledSql task id</p>
                     * @return TaskId <p>ScheduledSql task id</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>ScheduledSql task id</p>
                     * @param _taskId <p>ScheduledSql task id</p>
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
                     * 获取<p>ScheduledSql task name</p>
                     * @return Name <p>ScheduledSql task name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>ScheduledSql task name</p>
                     * @param _name <p>ScheduledSql task name</p>
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
                     * 获取<p>Source log topic id.</p>
                     * @return SrcTopicId <p>Source log topic id.</p>
                     * 
                     */
                    std::string GetSrcTopicId() const;

                    /**
                     * 设置<p>Source log topic id.</p>
                     * @param _srcTopicId <p>Source log topic id.</p>
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
                     * 获取<p>source log topic name</p>
                     * @return SrcTopicName <p>source log topic name</p>
                     * 
                     */
                    std::string GetSrcTopicName() const;

                    /**
                     * 设置<p>source log topic name</p>
                     * @param _srcTopicName <p>source log topic name</p>
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
                     * 获取<p>Scheduled SQL analysis target topic</p>
                     * @return DstResource <p>Scheduled SQL analysis target topic</p>
                     * 
                     */
                    ScheduledSqlResouceInfo GetDstResource() const;

                    /**
                     * 设置<p>Scheduled SQL analysis target topic</p>
                     * @param _dstResource <p>Scheduled SQL analysis target topic</p>
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
                     * 获取<p>Task creation time. Format: yyyy-MM-dd HH:mm:ss</p>
                     * @return CreateTime <p>Task creation time. Format: yyyy-MM-dd HH:mm:ss</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Task creation time. Format: yyyy-MM-dd HH:mm:ss</p>
                     * @param _createTime <p>Task creation time. Format: yyyy-MM-dd HH:mm:ss</p>
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
                     * 获取<p>Task update time. Format: yyyy-MM-dd HH:mm:ss</p>
                     * @return UpdateTime <p>Task update time. Format: yyyy-MM-dd HH:mm:ss</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Task update time. Format: yyyy-MM-dd HH:mm:ss</p>
                     * @param _updateTime <p>Task update time. Format: yyyy-MM-dd HH:mm:ss</p>
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
                     * 获取<p>Task status, 1: Running 2: Stopped 3: Exception - Source log topic not found 4: Exception - Target topic not found</p><p>5: Access permission issue 6: Internal fault 7: Other faults</p>
                     * @return Status <p>Task status, 1: Running 2: Stopped 3: Exception - Source log topic not found 4: Exception - Target topic not found</p><p>5: Access permission issue 6: Internal fault 7: Other faults</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Task status, 1: Running 2: Stopped 3: Exception - Source log topic not found 4: Exception - Target topic not found</p><p>5: Access permission issue 6: Internal fault 7: Other faults</p>
                     * @param _status <p>Task status, 1: Running 2: Stopped 3: Exception - Source log topic not found 4: Exception - Target topic not found</p><p>5: Access permission issue 6: Internal fault 7: Other faults</p>
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
                     * 获取<p>Task status: 1 Enabled, 2 Disabled</p>
                     * @return EnableFlag <p>Task status: 1 Enabled, 2 Disabled</p>
                     * 
                     */
                    int64_t GetEnableFlag() const;

                    /**
                     * 设置<p>Task status: 1 Enabled, 2 Disabled</p>
                     * @param _enableFlag <p>Task status: 1 Enabled, 2 Disabled</p>
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
                     * 获取<p>Query statement</p>
                     * @return ScheduledSqlContent <p>Query statement</p>
                     * 
                     */
                    std::string GetScheduledSqlContent() const;

                    /**
                     * 设置<p>Query statement</p>
                     * @param _scheduledSqlContent <p>Query statement</p>
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
                     * 获取<p>Schedule start time. Format: yyyy-MM-dd HH:mm:ss</p>
                     * @return ProcessStartTime <p>Schedule start time. Format: yyyy-MM-dd HH:mm:ss</p>
                     * 
                     */
                    std::string GetProcessStartTime() const;

                    /**
                     * 设置<p>Schedule start time. Format: yyyy-MM-dd HH:mm:ss</p>
                     * @param _processStartTime <p>Schedule start time. Format: yyyy-MM-dd HH:mm:ss</p>
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
                     * 获取<p>Schedule Type: 1 Continuous Running 2 Specified Time Range</p>
                     * @return ProcessType <p>Schedule Type: 1 Continuous Running 2 Specified Time Range</p>
                     * 
                     */
                    int64_t GetProcessType() const;

                    /**
                     * 设置<p>Schedule Type: 1 Continuous Running 2 Specified Time Range</p>
                     * @param _processType <p>Schedule Type: 1 Continuous Running 2 Specified Time Range</p>
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
                     * 获取<p>Schedule End Time, format: yyyy-MM-dd HH:mm:ss, required when process_type=2</p>
                     * @return ProcessEndTime <p>Schedule End Time, format: yyyy-MM-dd HH:mm:ss, required when process_type=2</p>
                     * 
                     */
                    std::string GetProcessEndTime() const;

                    /**
                     * 设置<p>Schedule End Time, format: yyyy-MM-dd HH:mm:ss, required when process_type=2</p>
                     * @param _processEndTime <p>Schedule End Time, format: yyyy-MM-dd HH:mm:ss, required when process_type=2</p>
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
                     * 获取<p>Scheduling Interval (Minutes), 1-1440 minutes</p>
                     * @return ProcessPeriod <p>Scheduling Interval (Minutes), 1-1440 minutes</p>
                     * 
                     */
                    int64_t GetProcessPeriod() const;

                    /**
                     * 设置<p>Scheduling Interval (Minutes), 1-1440 minutes</p>
                     * @param _processPeriod <p>Scheduling Interval (Minutes), 1-1440 minutes</p>
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
                     * 获取<p>Query Time Window. @m-15m, @m, meaning the last 15 minutes</p>
                     * @return ProcessTimeWindow <p>Query Time Window. @m-15m, @m, meaning the last 15 minutes</p>
                     * 
                     */
                    std::string GetProcessTimeWindow() const;

                    /**
                     * 设置<p>Query Time Window. @m-15m, @m, meaning the last 15 minutes</p>
                     * @param _processTimeWindow <p>Query Time Window. @m-15m, @m, meaning the last 15 minutes</p>
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
                     * 获取<p>Execution delay (seconds), 0-120 seconds, default 60 seconds</p>
                     * @return ProcessDelay <p>Execution delay (seconds), 0-120 seconds, default 60 seconds</p>
                     * 
                     */
                    int64_t GetProcessDelay() const;

                    /**
                     * 设置<p>Execution delay (seconds), 0-120 seconds, default 60 seconds</p>
                     * @param _processDelay <p>Execution delay (seconds), 0-120 seconds, default 60 seconds</p>
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
                     * 获取<p>Regional information of the source topicId. For supported regions, see the <a href="https://www.tencentcloud.com/document/api/614/56474?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">region list</a> document.</p>
                     * @return SrcTopicRegion <p>Regional information of the source topicId. For supported regions, see the <a href="https://www.tencentcloud.com/document/api/614/56474?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">region list</a> document.</p>
                     * 
                     */
                    std::string GetSrcTopicRegion() const;

                    /**
                     * 设置<p>Regional information of the source topicId. For supported regions, see the <a href="https://www.tencentcloud.com/document/api/614/56474?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">region list</a> document.</p>
                     * @param _srcTopicRegion <p>Regional information of the source topicId. For supported regions, see the <a href="https://www.tencentcloud.com/document/api/614/56474?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">region list</a> document.</p>
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
                     * 获取<p>Syntax rules. 0: Lucene syntax, 1: CQL syntax</p>
                     * @return SyntaxRule <p>Syntax rules. 0: Lucene syntax, 1: CQL syntax</p>
                     * 
                     */
                    uint64_t GetSyntaxRule() const;

                    /**
                     * 设置<p>Syntax rules. 0: Lucene syntax, 1: CQL syntax</p>
                     * @param _syntaxRule <p>Syntax rules. 0: Lucene syntax, 1: CQL syntax</p>
                     * 
                     */
                    void SetSyntaxRule(const uint64_t& _syntaxRule);

                    /**
                     * 判断参数 SyntaxRule 是否已赋值
                     * @return SyntaxRule 是否已赋值
                     * 
                     */
                    bool SyntaxRuleHasBeenSet() const;

                    /**
                     * 获取<p>Whether the delivery service log is enabled. 1: Turn off, 2: Turn on.</p>
                     * @return HasServicesLog <p>Whether the delivery service log is enabled. 1: Turn off, 2: Turn on.</p>
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置<p>Whether the delivery service log is enabled. 1: Turn off, 2: Turn on.</p>
                     * @param _hasServicesLog <p>Whether the delivery service log is enabled. 1: Turn off, 2: Turn on.</p>
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
                     * 获取<p>Full-text search tag. 1: Off, 2: On.</p>
                     * @return FullQuery <p>Full-text search tag. 1: Off, 2: On.</p>
                     * 
                     */
                    uint64_t GetFullQuery() const;

                    /**
                     * 设置<p>Full-text search tag. 1: Off, 2: On.</p>
                     * @param _fullQuery <p>Full-text search tag. 1: Off, 2: On.</p>
                     * 
                     */
                    void SetFullQuery(const uint64_t& _fullQuery);

                    /**
                     * 判断参数 FullQuery 是否已赋值
                     * @return FullQuery 是否已赋值
                     * 
                     */
                    bool FullQueryHasBeenSet() const;

                    /**
                     * 获取<p>Scheduling cycle time unit</p><p>Value ranges from 1 to 2</p><p>Default value: 1</p><p>Default value 1 (minute), other value 2 (second)</p>
                     * @return ProcessPeriodUnit <p>Scheduling cycle time unit</p><p>Value ranges from 1 to 2</p><p>Default value: 1</p><p>Default value 1 (minute), other value 2 (second)</p>
                     * 
                     */
                    int64_t GetProcessPeriodUnit() const;

                    /**
                     * 设置<p>Scheduling cycle time unit</p><p>Value ranges from 1 to 2</p><p>Default value: 1</p><p>Default value 1 (minute), other value 2 (second)</p>
                     * @param _processPeriodUnit <p>Scheduling cycle time unit</p><p>Value ranges from 1 to 2</p><p>Default value: 1</p><p>Default value 1 (minute), other value 2 (second)</p>
                     * 
                     */
                    void SetProcessPeriodUnit(const int64_t& _processPeriodUnit);

                    /**
                     * 判断参数 ProcessPeriodUnit 是否已赋值
                     * @return ProcessPeriodUnit 是否已赋值
                     * 
                     */
                    bool ProcessPeriodUnitHasBeenSet() const;

                private:

                    /**
                     * <p>ScheduledSql task id</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>ScheduledSql task name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Source log topic id.</p>
                     */
                    std::string m_srcTopicId;
                    bool m_srcTopicIdHasBeenSet;

                    /**
                     * <p>source log topic name</p>
                     */
                    std::string m_srcTopicName;
                    bool m_srcTopicNameHasBeenSet;

                    /**
                     * <p>Scheduled SQL analysis target topic</p>
                     */
                    ScheduledSqlResouceInfo m_dstResource;
                    bool m_dstResourceHasBeenSet;

                    /**
                     * <p>Task creation time. Format: yyyy-MM-dd HH:mm:ss</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Task update time. Format: yyyy-MM-dd HH:mm:ss</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Task status, 1: Running 2: Stopped 3: Exception - Source log topic not found 4: Exception - Target topic not found</p><p>5: Access permission issue 6: Internal fault 7: Other faults</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Task status: 1 Enabled, 2 Disabled</p>
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * <p>Query statement</p>
                     */
                    std::string m_scheduledSqlContent;
                    bool m_scheduledSqlContentHasBeenSet;

                    /**
                     * <p>Schedule start time. Format: yyyy-MM-dd HH:mm:ss</p>
                     */
                    std::string m_processStartTime;
                    bool m_processStartTimeHasBeenSet;

                    /**
                     * <p>Schedule Type: 1 Continuous Running 2 Specified Time Range</p>
                     */
                    int64_t m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * <p>Schedule End Time, format: yyyy-MM-dd HH:mm:ss, required when process_type=2</p>
                     */
                    std::string m_processEndTime;
                    bool m_processEndTimeHasBeenSet;

                    /**
                     * <p>Scheduling Interval (Minutes), 1-1440 minutes</p>
                     */
                    int64_t m_processPeriod;
                    bool m_processPeriodHasBeenSet;

                    /**
                     * <p>Query Time Window. @m-15m, @m, meaning the last 15 minutes</p>
                     */
                    std::string m_processTimeWindow;
                    bool m_processTimeWindowHasBeenSet;

                    /**
                     * <p>Execution delay (seconds), 0-120 seconds, default 60 seconds</p>
                     */
                    int64_t m_processDelay;
                    bool m_processDelayHasBeenSet;

                    /**
                     * <p>Regional information of the source topicId. For supported regions, see the <a href="https://www.tencentcloud.com/document/api/614/56474?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">region list</a> document.</p>
                     */
                    std::string m_srcTopicRegion;
                    bool m_srcTopicRegionHasBeenSet;

                    /**
                     * <p>Syntax rules. 0: Lucene syntax, 1: CQL syntax</p>
                     */
                    uint64_t m_syntaxRule;
                    bool m_syntaxRuleHasBeenSet;

                    /**
                     * <p>Whether the delivery service log is enabled. 1: Turn off, 2: Turn on.</p>
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                    /**
                     * <p>Full-text search tag. 1: Off, 2: On.</p>
                     */
                    uint64_t m_fullQuery;
                    bool m_fullQueryHasBeenSet;

                    /**
                     * <p>Scheduling cycle time unit</p><p>Value ranges from 1 to 2</p><p>Default value: 1</p><p>Default value 1 (minute), other value 2 (second)</p>
                     */
                    int64_t m_processPeriodUnit;
                    bool m_processPeriodUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SCHEDULEDSQLTASKINFO_H_
