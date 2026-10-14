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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBESTREAMLINKFLOWMEDIASTATISTICSREQUEST_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBESTREAMLINKFLOWMEDIASTATISTICSREQUEST_H_

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
                * DescribeStreamLinkFlowMediaStatistics request structure.
                */
                class DescribeStreamLinkFlowMediaStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeStreamLinkFlowMediaStatisticsRequest();
                    ~DescribeStreamLinkFlowMediaStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Transport stream ID.
                     * @return FlowId Transport stream ID.
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置Transport stream ID.
                     * @param _flowId Transport stream ID.
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
                     * 获取Input or output type. Valid values: `input`, `output`.
                     * @return Type Input or output type. Valid values: `input`, `output`.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Input or output type. Valid values: `input`, `output`.
                     * @param _type Input or output type. Valid values: `input`, `output`.
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
                     * 获取Input or output Id.
                     * @return InputOutputId Input or output Id.
                     * 
                     */
                    std::string GetInputOutputId() const;

                    /**
                     * 设置Input or output Id.
                     * @param _inputOutputId Input or output Id.
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
                     * 获取Primary or backup channel. Valid values: 0 and 1.
                     * @return Pipeline Primary or backup channel. Valid values: 0 and 1.
                     * 
                     */
                    std::string GetPipeline() const;

                    /**
                     * 设置Primary or backup channel. Valid values: 0 and 1.
                     * @param _pipeline Primary or backup channel. Valid values: 0 and 1.
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
                     * 获取Query interval. Options: [5s|1min|5min|15min].
                     * @return Period Query interval. Options: [5s|1min|5min|15min].
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置Query interval. Options: [5s|1min|5min|15min].
                     * @param _period Query interval. Options: [5s|1min|5min|15min].
                     * 
                     */
                    void SetPeriod(const std::string& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Start time for statistics. Default value: last hour. You can query data from the last 7 days at most.
UTC time, for example, '2020-01-01T12:00:00Z'.
                     * @return StartTime Start time for statistics. Default value: last hour. You can query data from the last 7 days at most.
UTC time, for example, '2020-01-01T12:00:00Z'.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time for statistics. Default value: last hour. You can query data from the last 7 days at most.
UTC time, for example, '2020-01-01T12:00:00Z'.
                     * @param _startTime Start time for statistics. Default value: last hour. You can query data from the last 7 days at most.
UTC time, for example, '2020-01-01T12:00:00Z'.
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
                     * 获取End time for statistics. Defaults to one hour after `StartTime`. You can query the data of up to 24 hours.
UTC time, for example, '2020-01-01T12:00:00Z'.
                     * @return EndTime End time for statistics. Defaults to one hour after `StartTime`. You can query the data of up to 24 hours.
UTC time, for example, '2020-01-01T12:00:00Z'.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time for statistics. Defaults to one hour after `StartTime`. You can query the data of up to 24 hours.
UTC time, for example, '2020-01-01T12:00:00Z'.
                     * @param _endTime End time for statistics. Defaults to one hour after `StartTime`. You can query the data of up to 24 hours.
UTC time, for example, '2020-01-01T12:00:00Z'.
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
                     * 获取Peer IP address.
                     * @return RemoteIp Peer IP address.
                     * 
                     */
                    std::string GetRemoteIp() const;

                    /**
                     * 设置Peer IP address.
                     * @param _remoteIp Peer IP address.
                     * 
                     */
                    void SetRemoteIp(const std::string& _remoteIp);

                    /**
                     * 判断参数 RemoteIp 是否已赋值
                     * @return RemoteIp 是否已赋值
                     * 
                     */
                    bool RemoteIpHasBeenSet() const;

                private:

                    /**
                     * Transport stream ID.
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * Input or output type. Valid values: `input`, `output`.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Input or output Id.
                     */
                    std::string m_inputOutputId;
                    bool m_inputOutputIdHasBeenSet;

                    /**
                     * Primary or backup channel. Valid values: 0 and 1.
                     */
                    std::string m_pipeline;
                    bool m_pipelineHasBeenSet;

                    /**
                     * Query interval. Options: [5s|1min|5min|15min].
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Start time for statistics. Default value: last hour. You can query data from the last 7 days at most.
UTC time, for example, '2020-01-01T12:00:00Z'.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time for statistics. Defaults to one hour after `StartTime`. You can query the data of up to 24 hours.
UTC time, for example, '2020-01-01T12:00:00Z'.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Peer IP address.
                     */
                    std::string m_remoteIp;
                    bool m_remoteIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBESTREAMLINKFLOWMEDIASTATISTICSREQUEST_H_
