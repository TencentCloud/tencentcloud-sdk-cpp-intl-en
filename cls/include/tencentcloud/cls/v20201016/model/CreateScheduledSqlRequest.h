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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATESCHEDULEDSQLREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATESCHEDULEDSQLREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateScheduledSql request structure.
                */
                class CreateScheduledSqlRequest : public AbstractModel
                {
                public:
                    CreateScheduledSqlRequest();
                    ~CreateScheduledSqlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Source log topic ID - Obtain the log topic ID by <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">searching the log topic list</a>.</p>
                     * @return SrcTopicId <p>Source log topic ID - Obtain the log topic ID by <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">searching the log topic list</a>.</p>
                     * 
                     */
                    std::string GetSrcTopicId() const;

                    /**
                     * 设置<p>Source log topic ID - Obtain the log topic ID by <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">searching the log topic list</a>.</p>
                     * @param _srcTopicId <p>Source log topic ID - Obtain the log topic ID by <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">searching the log topic list</a>.</p>
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
                     * 获取<p>Task name, 0-255 characters</p>
                     * @return Name <p>Task name, 0-255 characters</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Task name, 0-255 characters</p>
                     * @param _name <p>Task name, 0-255 characters</p>
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
                     * 获取<p>Task start status. 1: Enabled, 2: Disabled</p>
                     * @return EnableFlag <p>Task start status. 1: Enabled, 2: Disabled</p>
                     * 
                     */
                    int64_t GetEnableFlag() const;

                    /**
                     * 设置<p>Task start status. 1: Enabled, 2: Disabled</p>
                     * @param _enableFlag <p>Task start status. 1: Enabled, 2: Disabled</p>
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
                     * 获取<p>Target log topic for scheduled SQL analysis</p>
                     * @return DstResource <p>Target log topic for scheduled SQL analysis</p>
                     * 
                     */
                    ScheduledSqlResouceInfo GetDstResource() const;

                    /**
                     * 设置<p>Target log topic for scheduled SQL analysis</p>
                     * @param _dstResource <p>Target log topic for scheduled SQL analysis</p>
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
                     * 获取<p>Schedule start time, Unix timestamp, in milliseconds</p>
                     * @return ProcessStartTime <p>Schedule start time, Unix timestamp, in milliseconds</p>
                     * 
                     */
                    uint64_t GetProcessStartTime() const;

                    /**
                     * 设置<p>Schedule start time, Unix timestamp, in milliseconds</p>
                     * @param _processStartTime <p>Schedule start time, Unix timestamp, in milliseconds</p>
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
                     * 获取<p>Time window for a single query. If your target topic is a metric topic, it is recommended that the size of this parameter not exceed 30 minutes, otherwise, metric conversion may fail.</p>
                     * @return ProcessTimeWindow <p>Time window for a single query. If your target topic is a metric topic, it is recommended that the size of this parameter not exceed 30 minutes, otherwise, metric conversion may fail.</p>
                     * 
                     */
                    std::string GetProcessTimeWindow() const;

                    /**
                     * 设置<p>Time window for a single query. If your target topic is a metric topic, it is recommended that the size of this parameter not exceed 30 minutes, otherwise, metric conversion may fail.</p>
                     * @param _processTimeWindow <p>Time window for a single query. If your target topic is a metric topic, it is recommended that the size of this parameter not exceed 30 minutes, otherwise, metric conversion may fail.</p>
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
                     * 获取<p>Scheduling Time Unit</p><p>Value ranges from 1 to 2</p><p>Default value: 1</p><p>The default value is 1 (minute), and the additional value is 2 (second).</p>
                     * @return ProcessPeriodUnit <p>Scheduling Time Unit</p><p>Value ranges from 1 to 2</p><p>Default value: 1</p><p>The default value is 1 (minute), and the additional value is 2 (second).</p>
                     * 
                     */
                    int64_t GetProcessPeriodUnit() const;

                    /**
                     * 设置<p>Scheduling Time Unit</p><p>Value ranges from 1 to 2</p><p>Default value: 1</p><p>The default value is 1 (minute), and the additional value is 2 (second).</p>
                     * @param _processPeriodUnit <p>Scheduling Time Unit</p><p>Value ranges from 1 to 2</p><p>Default value: 1</p><p>The default value is 1 (minute), and the additional value is 2 (second).</p>
                     * 
                     */
                    void SetProcessPeriodUnit(const int64_t& _processPeriodUnit);

                    /**
                     * 判断参数 ProcessPeriodUnit 是否已赋值
                     * @return ProcessPeriodUnit 是否已赋值
                     * 
                     */
                    bool ProcessPeriodUnitHasBeenSet() const;

                    /**
                     * 获取<p>Schedule End Time, required when ProcessType=2, Unix timestamp, in milliseconds</p>
                     * @return ProcessEndTime <p>Schedule End Time, required when ProcessType=2, Unix timestamp, in milliseconds</p>
                     * 
                     */
                    uint64_t GetProcessEndTime() const;

                    /**
                     * 设置<p>Schedule End Time, required when ProcessType=2, Unix timestamp, in milliseconds</p>
                     * @param _processEndTime <p>Schedule End Time, required when ProcessType=2, Unix timestamp, in milliseconds</p>
                     * 
                     */
                    void SetProcessEndTime(const uint64_t& _processEndTime);

                    /**
                     * 判断参数 ProcessEndTime 是否已赋值
                     * @return ProcessEndTime 是否已赋值
                     * 
                     */
                    bool ProcessEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Query syntax rules. Default value: 0. 0: Lucene syntax, 1: CQL syntax</p>
                     * @return SyntaxRule <p>Query syntax rules. Default value: 0. 0: Lucene syntax, 1: CQL syntax</p>
                     * 
                     */
                    uint64_t GetSyntaxRule() const;

                    /**
                     * 设置<p>Query syntax rules. Default value: 0. 0: Lucene syntax, 1: CQL syntax</p>
                     * @param _syntaxRule <p>Query syntax rules. Default value: 0. 0: Lucene syntax, 1: CQL syntax</p>
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
                     * 获取<p>Whether to enable delivery service log. 1: Disabled, 2: Enabled.</p>
                     * @return HasServicesLog <p>Whether to enable delivery service log. 1: Disabled, 2: Enabled.</p>
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置<p>Whether to enable delivery service log. 1: Disabled, 2: Enabled.</p>
                     * @param _hasServicesLog <p>Whether to enable delivery service log. 1: Disabled, 2: Enabled.</p>
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
                     * 获取<p>Full-text search tag. 1: Off, 2: On. Default: 1</p>
                     * @return FullQuery <p>Full-text search tag. 1: Off, 2: On. Default: 1</p>
                     * 
                     */
                    uint64_t GetFullQuery() const;

                    /**
                     * 设置<p>Full-text search tag. 1: Off, 2: On. Default: 1</p>
                     * @param _fullQuery <p>Full-text search tag. 1: Off, 2: On. Default: 1</p>
                     * 
                     */
                    void SetFullQuery(const uint64_t& _fullQuery);

                    /**
                     * 判断参数 FullQuery 是否已赋值
                     * @return FullQuery 是否已赋值
                     * 
                     */
                    bool FullQueryHasBeenSet() const;

                private:

                    /**
                     * <p>Source log topic ID - Obtain the log topic ID by <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">searching the log topic list</a>.</p>
                     */
                    std::string m_srcTopicId;
                    bool m_srcTopicIdHasBeenSet;

                    /**
                     * <p>Task name, 0-255 characters</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Task start status. 1: Enabled, 2: Disabled</p>
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * <p>Target log topic for scheduled SQL analysis</p>
                     */
                    ScheduledSqlResouceInfo m_dstResource;
                    bool m_dstResourceHasBeenSet;

                    /**
                     * <p>Query statement</p>
                     */
                    std::string m_scheduledSqlContent;
                    bool m_scheduledSqlContentHasBeenSet;

                    /**
                     * <p>Schedule start time, Unix timestamp, in milliseconds</p>
                     */
                    uint64_t m_processStartTime;
                    bool m_processStartTimeHasBeenSet;

                    /**
                     * <p>Schedule Type: 1 Continuous Running 2 Specified Time Range</p>
                     */
                    int64_t m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * <p>Scheduling Interval (Minutes), 1-1440 minutes</p>
                     */
                    int64_t m_processPeriod;
                    bool m_processPeriodHasBeenSet;

                    /**
                     * <p>Time window for a single query. If your target topic is a metric topic, it is recommended that the size of this parameter not exceed 30 minutes, otherwise, metric conversion may fail.</p>
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
                     * <p>Scheduling Time Unit</p><p>Value ranges from 1 to 2</p><p>Default value: 1</p><p>The default value is 1 (minute), and the additional value is 2 (second).</p>
                     */
                    int64_t m_processPeriodUnit;
                    bool m_processPeriodUnitHasBeenSet;

                    /**
                     * <p>Schedule End Time, required when ProcessType=2, Unix timestamp, in milliseconds</p>
                     */
                    uint64_t m_processEndTime;
                    bool m_processEndTimeHasBeenSet;

                    /**
                     * <p>Query syntax rules. Default value: 0. 0: Lucene syntax, 1: CQL syntax</p>
                     */
                    uint64_t m_syntaxRule;
                    bool m_syntaxRuleHasBeenSet;

                    /**
                     * <p>Whether to enable delivery service log. 1: Disabled, 2: Enabled.</p>
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                    /**
                     * <p>Full-text search tag. 1: Off, 2: On. Default: 1</p>
                     */
                    uint64_t m_fullQuery;
                    bool m_fullQueryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATESCHEDULEDSQLREQUEST_H_
