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
                     * 获取Task name
                     * @return Name Task name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Task name
                     * @param _name Task name
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
                     * 获取Query statement
                     * @return ScheduledSqlContent Query statement
                     * 
                     */
                    std::string GetScheduledSqlContent() const;

                    /**
                     * 设置Query statement
                     * @param _scheduledSqlContent Query statement
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
                     * 获取Schedule start time, Unix timestamp, in milliseconds
                     * @return ProcessStartTime Schedule start time, Unix timestamp, in milliseconds
                     * 
                     */
                    uint64_t GetProcessStartTime() const;

                    /**
                     * 设置Schedule start time, Unix timestamp, in milliseconds
                     * @param _processStartTime Schedule start time, Unix timestamp, in milliseconds
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
                     * 获取Schedule type: 1: Continuous running; 2: Specified time range
                     * @return ProcessType Schedule type: 1: Continuous running; 2: Specified time range
                     * 
                     */
                    int64_t GetProcessType() const;

                    /**
                     * 设置Schedule type: 1: Continuous running; 2: Specified time range
                     * @param _processType Schedule type: 1: Continuous running; 2: Specified time range
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
                     * 获取Scheduling interval (minutes)
                     * @return ProcessPeriod Scheduling interval (minutes)
                     * 
                     */
                    int64_t GetProcessPeriod() const;

                    /**
                     * 设置Scheduling interval (minutes)
                     * @param _processPeriod Scheduling interval (minutes)
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
                     * 获取Execution delay (Seconds)
                     * @return ProcessDelay Execution delay (Seconds)
                     * 
                     */
                    int64_t GetProcessDelay() const;

                    /**
                     * 设置Execution delay (Seconds)
                     * @param _processDelay Execution delay (Seconds)
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
                     * 获取Source topic ID region information
                     * @return SrcTopicRegion Source topic ID region information
                     * 
                     */
                    std::string GetSrcTopicRegion() const;

                    /**
                     * 设置Source topic ID region information
                     * @param _srcTopicRegion Source topic ID region information
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
                     * 获取Schedule end time. Required field when ProcessType=2, Unix timestamp, in milliseconds
                     * @return ProcessEndTime Schedule end time. Required field when ProcessType=2, Unix timestamp, in milliseconds
                     * 
                     */
                    uint64_t GetProcessEndTime() const;

                    /**
                     * 设置Schedule end time. Required field when ProcessType=2, Unix timestamp, in milliseconds
                     * @param _processEndTime Schedule end time. Required field when ProcessType=2, Unix timestamp, in milliseconds
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
                     * Source log topic
                     */
                    std::string m_srcTopicId;
                    bool m_srcTopicIdHasBeenSet;

                    /**
                     * Task name
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
                     * Query statement
                     */
                    std::string m_scheduledSqlContent;
                    bool m_scheduledSqlContentHasBeenSet;

                    /**
                     * Schedule start time, Unix timestamp, in milliseconds
                     */
                    uint64_t m_processStartTime;
                    bool m_processStartTimeHasBeenSet;

                    /**
                     * Schedule type: 1: Continuous running; 2: Specified time range
                     */
                    int64_t m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * Scheduling interval (minutes)
                     */
                    int64_t m_processPeriod;
                    bool m_processPeriodHasBeenSet;

                    /**
                     * Time window for a single query. If your target topic is a metric topic, it is recommended that the size of this parameter not exceed 30 minutes, otherwise, metric conversion may fail.
                     */
                    std::string m_processTimeWindow;
                    bool m_processTimeWindowHasBeenSet;

                    /**
                     * Execution delay (Seconds)
                     */
                    int64_t m_processDelay;
                    bool m_processDelayHasBeenSet;

                    /**
                     * Source topic ID region information
                     */
                    std::string m_srcTopicRegion;
                    bool m_srcTopicRegionHasBeenSet;

                    /**
                     * Schedule end time. Required field when ProcessType=2, Unix timestamp, in milliseconds
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
