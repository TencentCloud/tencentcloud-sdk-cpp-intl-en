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
                     * 获取Source Log Topic
                     * @return SrcTopicId Source Log Topic
                     * 
                     */
                    std::string GetSrcTopicId() const;

                    /**
                     * 设置Source Log Topic
                     * @param _srcTopicId Source Log Topic
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
                     * 获取Task Name
                     * @return Name Task Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Task Name
                     * @param _name Task Name
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
                     * 获取Task start status. 1: Enabled, 2: Disabled
                     * @return EnableFlag Task start status. 1: Enabled, 2: Disabled
                     * 
                     */
                    int64_t GetEnableFlag() const;

                    /**
                     * 设置Task start status. 1: Enabled, 2: Disabled
                     * @param _enableFlag Task start status. 1: Enabled, 2: Disabled
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
                     * 获取Target log topic for scheduled SQL analysis
                     * @return DstResource Target log topic for scheduled SQL analysis
                     * 
                     */
                    ScheduledSqlResouceInfo GetDstResource() const;

                    /**
                     * 设置Target log topic for scheduled SQL analysis
                     * @param _dstResource Target log topic for scheduled SQL analysis
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
                     * 获取Query Statement
                     * @return ScheduledSqlContent Query Statement
                     * 
                     */
                    std::string GetScheduledSqlContent() const;

                    /**
                     * 设置Query Statement
                     * @param _scheduledSqlContent Query Statement
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
                     * 获取Schedule Start Time, Unix timestamp, in milliseconds
                     * @return ProcessStartTime Schedule Start Time, Unix timestamp, in milliseconds
                     * 
                     */
                    uint64_t GetProcessStartTime() const;

                    /**
                     * 设置Schedule Start Time, Unix timestamp, in milliseconds
                     * @param _processStartTime Schedule Start Time, Unix timestamp, in milliseconds
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
                     * 获取Time window for a single query. If your target topic is a metric topic, it is recommended that the size of this parameter not exceed 30 minutes, otherwise, metric conversion may fail.
                     * @return ProcessTimeWindow Time window for a single query. If your target topic is a metric topic, it is recommended that the size of this parameter not exceed 30 minutes, otherwise, metric conversion may fail.
                     * 
                     */
                    std::string GetProcessTimeWindow() const;

                    /**
                     * 设置Time window for a single query. If your target topic is a metric topic, it is recommended that the size of this parameter not exceed 30 minutes, otherwise, metric conversion may fail.
                     * @param _processTimeWindow Time window for a single query. If your target topic is a metric topic, it is recommended that the size of this parameter not exceed 30 minutes, otherwise, metric conversion may fail.
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
                     * 获取Schedule End Time. Required field when ProcessType=2, Unix timestamp, in milliseconds
                     * @return ProcessEndTime Schedule End Time. Required field when ProcessType=2, Unix timestamp, in milliseconds
                     * 
                     */
                    uint64_t GetProcessEndTime() const;

                    /**
                     * 设置Schedule End Time. Required field when ProcessType=2, Unix timestamp, in milliseconds
                     * @param _processEndTime Schedule End Time. Required field when ProcessType=2, Unix timestamp, in milliseconds
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
                     * 获取Query syntax rules. Default value is 0. 0: Lucene syntax, 1: CQL syntax
                     * @return SyntaxRule Query syntax rules. Default value is 0. 0: Lucene syntax, 1: CQL syntax
                     * 
                     */
                    uint64_t GetSyntaxRule() const;

                    /**
                     * 设置Query syntax rules. Default value is 0. 0: Lucene syntax, 1: CQL syntax
                     * @param _syntaxRule Query syntax rules. Default value is 0. 0: Lucene syntax, 1: CQL syntax
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
                     * Source Log Topic
                     */
                    std::string m_srcTopicId;
                    bool m_srcTopicIdHasBeenSet;

                    /**
                     * Task Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Task start status. 1: Enabled, 2: Disabled
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * Target log topic for scheduled SQL analysis
                     */
                    ScheduledSqlResouceInfo m_dstResource;
                    bool m_dstResourceHasBeenSet;

                    /**
                     * Query Statement
                     */
                    std::string m_scheduledSqlContent;
                    bool m_scheduledSqlContentHasBeenSet;

                    /**
                     * Schedule Start Time, Unix timestamp, in milliseconds
                     */
                    uint64_t m_processStartTime;
                    bool m_processStartTimeHasBeenSet;

                    /**
                     * Schedule Type: 1 Continuous Running 2 Specified Time Range
                     */
                    int64_t m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * Scheduling Interval (Minutes)
                     */
                    int64_t m_processPeriod;
                    bool m_processPeriodHasBeenSet;

                    /**
                     * Time window for a single query. If your target topic is a metric topic, it is recommended that the size of this parameter not exceed 30 minutes, otherwise, metric conversion may fail.
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
                     * Schedule End Time. Required field when ProcessType=2, Unix timestamp, in milliseconds
                     */
                    uint64_t m_processEndTime;
                    bool m_processEndTimeHasBeenSet;

                    /**
                     * Query syntax rules. Default value is 0. 0: Lucene syntax, 1: CQL syntax
                     */
                    uint64_t m_syntaxRule;
                    bool m_syntaxRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATESCHEDULEDSQLREQUEST_H_
