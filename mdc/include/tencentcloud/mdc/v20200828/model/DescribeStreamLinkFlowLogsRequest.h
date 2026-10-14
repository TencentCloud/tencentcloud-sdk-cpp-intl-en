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
                     * 获取<p>Transport stream Id.</p>
                     * @return FlowId <p>Transport stream Id.</p>
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置<p>Transport stream Id.</p>
                     * @param _flowId <p>Transport stream Id.</p>
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
                     * 获取<p>Start time for statistics, defaults to the last hour, supports querying up to the last 7 days.<br>UTC time, for example, '2020-01-01T12:00:00Z'.</p>
                     * @return StartTime <p>Start time for statistics, defaults to the last hour, supports querying up to the last 7 days.<br>UTC time, for example, '2020-01-01T12:00:00Z'.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start time for statistics, defaults to the last hour, supports querying up to the last 7 days.<br>UTC time, for example, '2020-01-01T12:00:00Z'.</p>
                     * @param _startTime <p>Start time for statistics, defaults to the last hour, supports querying up to the last 7 days.<br>UTC time, for example, '2020-01-01T12:00:00Z'.</p>
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
                     * 获取<p>End time for statistics, defaulting to one hour after StartTime, with support for querying up to 24 hours of data.<br>UTC time, for example, '2020-01-01T12:00:00Z'.</p>
                     * @return EndTime <p>End time for statistics, defaulting to one hour after StartTime, with support for querying up to 24 hours of data.<br>UTC time, for example, '2020-01-01T12:00:00Z'.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End time for statistics, defaulting to one hour after StartTime, with support for querying up to 24 hours of data.<br>UTC time, for example, '2020-01-01T12:00:00Z'.</p>
                     * @param _endTime <p>End time for statistics, defaulting to one hour after StartTime, with support for querying up to 24 hours of data.<br>UTC time, for example, '2020-01-01T12:00:00Z'.</p>
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
                     * 获取<p>Input or output type. Valid values: `input`, `output`.</p>
                     * @return Type <p>Input or output type. Valid values: `input`, `output`.</p>
                     * 
                     */
                    std::vector<std::string> GetType() const;

                    /**
                     * 设置<p>Input or output type. Valid values: `input`, `output`.</p>
                     * @param _type <p>Input or output type. Valid values: `input`, `output`.</p>
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
                     * 获取<p>Primary or backup channel. Option [0|1].</p>
                     * @return Pipeline <p>Primary or backup channel. Option [0|1].</p>
                     * 
                     */
                    std::vector<std::string> GetPipeline() const;

                    /**
                     * 设置<p>Primary or backup channel. Option [0|1].</p>
                     * @param _pipeline <p>Primary or backup channel. Option [0|1].</p>
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
                     * 获取<p>Size per page. Default value: 100. Value range: [1, 1000].</p>
                     * @return PageSize <p>Size per page. Default value: 100. Value range: [1, 1000].</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>Size per page. Default value: 100. Value range: [1, 1000].</p>
                     * @param _pageSize <p>Size per page. Default value: 100. Value range: [1, 1000].</p>
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
                     * 获取<p>Sort by Timestamp in ascending or descending order. The default is descending order. Options: [desc|asc].</p>
                     * @return SortType <p>Sort by Timestamp in ascending or descending order. The default is descending order. Options: [desc|asc].</p>
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置<p>Sort by Timestamp in ascending or descending order. The default is descending order. Options: [desc|asc].</p>
                     * @param _sortType <p>Sort by Timestamp in ascending or descending order. The default is descending order. Options: [desc|asc].</p>
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
                     * 获取<p>Page number. Default value: 1. Value range: [1, 1000].</p>
                     * @return PageNum <p>Page number. Default value: 1. Value range: [1, 1000].</p>
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置<p>Page number. Default value: 1. Value range: [1, 1000].</p>
                     * @param _pageNum <p>Page number. Default value: 1. Value range: [1, 1000].</p>
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
                     * <p>Transport stream Id.</p>
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>Start time for statistics, defaults to the last hour, supports querying up to the last 7 days.<br>UTC time, for example, '2020-01-01T12:00:00Z'.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time for statistics, defaulting to one hour after StartTime, with support for querying up to 24 hours of data.<br>UTC time, for example, '2020-01-01T12:00:00Z'.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Input or output type. Valid values: `input`, `output`.</p>
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Primary or backup channel. Option [0|1].</p>
                     */
                    std::vector<std::string> m_pipeline;
                    bool m_pipelineHasBeenSet;

                    /**
                     * <p>Size per page. Default value: 100. Value range: [1, 1000].</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>Sort by Timestamp in ascending or descending order. The default is descending order. Options: [desc|asc].</p>
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * <p>Page number. Default value: 1. Value range: [1, 1000].</p>
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBESTREAMLINKFLOWLOGSREQUEST_H_
