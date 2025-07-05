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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBESTREAMLINKFLOWSRTSTATISTICSREQUEST_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBESTREAMLINKFLOWSRTSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * DescribeStreamLinkFlowSRTStatistics request structure.
                */
                class DescribeStreamLinkFlowSRTStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeStreamLinkFlowSRTStatisticsRequest();
                    ~DescribeStreamLinkFlowSRTStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The flow ID.
                     * @return FlowId The flow ID.
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置The flow ID.
                     * @param _flowId The flow ID.
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取Whether to query the inputs or outputs. Valid values: input, output.
                     * @return Type Whether to query the inputs or outputs. Valid values: input, output.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Whether to query the inputs or outputs. Valid values: input, output.
                     * @param _type Whether to query the inputs or outputs. Valid values: input, output.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The input or output ID.
                     * @return InputOutputId The input or output ID.
                     * 
                     */
                    std::string GetInputOutputId() const;

                    /**
                     * 设置The input or output ID.
                     * @param _inputOutputId The input or output ID.
                     * 
                     */
                    void SetInputOutputId(const std::string& _inputOutputId);

                    /**
                     * 判断参数 InputOutputId 是否已赋值
                     * @return InputOutputId 是否已赋值
                     * 
                     */
                    bool InputOutputIdHasBeenSet() const;

                    /**
                     * 获取Whether to query the primary or backup pipeline. Valid values: 0, 1.
                     * @return Pipeline Whether to query the primary or backup pipeline. Valid values: 0, 1.
                     * 
                     */
                    std::string GetPipeline() const;

                    /**
                     * 设置Whether to query the primary or backup pipeline. Valid values: 0, 1.
                     * @param _pipeline Whether to query the primary or backup pipeline. Valid values: 0, 1.
                     * 
                     */
                    void SetPipeline(const std::string& _pipeline);

                    /**
                     * 判断参数 Pipeline 是否已赋值
                     * @return Pipeline 是否已赋值
                     * 
                     */
                    bool PipelineHasBeenSet() const;

                    /**
                     * 获取The start time for query, which is 1 hour ago by default. You can query statistics in the last 7 days.
It must be in UTC format, such as `2020-01-01T12:00:00Z`.
                     * @return StartTime The start time for query, which is 1 hour ago by default. You can query statistics in the last 7 days.
It must be in UTC format, such as `2020-01-01T12:00:00Z`.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The start time for query, which is 1 hour ago by default. You can query statistics in the last 7 days.
It must be in UTC format, such as `2020-01-01T12:00:00Z`.
                     * @param _startTime The start time for query, which is 1 hour ago by default. You can query statistics in the last 7 days.
It must be in UTC format, such as `2020-01-01T12:00:00Z`.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The end time for query, which is 1 hour after the start time by default. The longest time range allowed for query is 24 hours.
It must be in UTC format, such as `2020-01-01T12:00:00Z`.
                     * @return EndTime The end time for query, which is 1 hour after the start time by default. The longest time range allowed for query is 24 hours.
It must be in UTC format, such as `2020-01-01T12:00:00Z`.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time for query, which is 1 hour after the start time by default. The longest time range allowed for query is 24 hours.
It must be in UTC format, such as `2020-01-01T12:00:00Z`.
                     * @param _endTime The end time for query, which is 1 hour after the start time by default. The longest time range allowed for query is 24 hours.
It must be in UTC format, such as `2020-01-01T12:00:00Z`.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取The query interval. Valid values: 5s, 1min, 5min, 15min.
                     * @return Period The query interval. Valid values: 5s, 1min, 5min, 15min.
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置The query interval. Valid values: 5s, 1min, 5min, 15min.
                     * @param _period The query interval. Valid values: 5s, 1min, 5min, 15min.
                     * 
                     */
                    void SetPeriod(const std::string& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * The flow ID.
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * Whether to query the inputs or outputs. Valid values: input, output.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The input or output ID.
                     */
                    std::string m_inputOutputId;
                    bool m_inputOutputIdHasBeenSet;

                    /**
                     * Whether to query the primary or backup pipeline. Valid values: 0, 1.
                     */
                    std::string m_pipeline;
                    bool m_pipelineHasBeenSet;

                    /**
                     * The start time for query, which is 1 hour ago by default. You can query statistics in the last 7 days.
It must be in UTC format, such as `2020-01-01T12:00:00Z`.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time for query, which is 1 hour after the start time by default. The longest time range allowed for query is 24 hours.
It must be in UTC format, such as `2020-01-01T12:00:00Z`.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The query interval. Valid values: 5s, 1min, 5min, 15min.
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBESTREAMLINKFLOWSRTSTATISTICSREQUEST_H_
