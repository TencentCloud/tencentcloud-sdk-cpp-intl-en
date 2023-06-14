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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBESTREAMLINKFLOWLOGSREQUEST_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBESTREAMLINKFLOWLOGSREQUEST_H_

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
                * DescribeStreamLinkFlowLogs request structure.
                */
                class DescribeStreamLinkFlowLogsRequest : public AbstractModel
                {
                public:
                    DescribeStreamLinkFlowLogsRequest();
                    ~DescribeStreamLinkFlowLogsRequest() = default;
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
                     * 获取Whether to query the inputs or outputs. Valid values: input, output.
                     * @return Type Whether to query the inputs or outputs. Valid values: input, output.
                     * 
                     */
                    std::vector<std::string> GetType() const;

                    /**
                     * 设置Whether to query the inputs or outputs. Valid values: input, output.
                     * @param _type Whether to query the inputs or outputs. Valid values: input, output.
                     * 
                     */
                    void SetType(const std::vector<std::string>& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Whether to query the primary or backup pipeline. Valid values: 0, 1.
                     * @return Pipeline Whether to query the primary or backup pipeline. Valid values: 0, 1.
                     * 
                     */
                    std::vector<std::string> GetPipeline() const;

                    /**
                     * 设置Whether to query the primary or backup pipeline. Valid values: 0, 1.
                     * @param _pipeline Whether to query the primary or backup pipeline. Valid values: 0, 1.
                     * 
                     */
                    void SetPipeline(const std::vector<std::string>& _pipeline);

                    /**
                     * 判断参数 Pipeline 是否已赋值
                     * @return Pipeline 是否已赋值
                     * 
                     */
                    bool PipelineHasBeenSet() const;

                    /**
                     * 获取The page size. Value range: [1, 1000]. Default: 100.
                     * @return PageSize The page size. Value range: [1, 1000]. Default: 100.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置The page size. Value range: [1, 1000]. Default: 100.
                     * @param _pageSize The page size. Value range: [1, 1000]. Default: 100.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Whether to sort the records by timestamp in descending or ascending order. Valid values: desc (default), asc.
                     * @return SortType Whether to sort the records by timestamp in descending or ascending order. Valid values: desc (default), asc.
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置Whether to sort the records by timestamp in descending or ascending order. Valid values: desc (default), asc.
                     * @param _sortType Whether to sort the records by timestamp in descending or ascending order. Valid values: desc (default), asc.
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取The page number. Value range: [1, 1000]. Default: 1.
                     * @return PageNum The page number. Value range: [1, 1000]. Default: 1.
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置The page number. Value range: [1, 1000]. Default: 1.
                     * @param _pageNum The page number. Value range: [1, 1000]. Default: 1.
                     * 
                     */
                    void SetPageNum(const int64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                private:

                    /**
                     * The flow ID.
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

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
                     * Whether to query the inputs or outputs. Valid values: input, output.
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Whether to query the primary or backup pipeline. Valid values: 0, 1.
                     */
                    std::vector<std::string> m_pipeline;
                    bool m_pipelineHasBeenSet;

                    /**
                     * The page size. Value range: [1, 1000]. Default: 100.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Whether to sort the records by timestamp in descending or ascending order. Valid values: desc (default), asc.
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * The page number. Value range: [1, 1000]. Default: 1.
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBESTREAMLINKFLOWLOGSREQUEST_H_
