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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SEARCHCLSLOGREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SEARCHCLSLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * SearchClsLog request structure.
                */
                class SearchClsLogRequest : public AbstractModel
                {
                public:
                    SearchClsLogRequest();
                    ~SearchClsLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of logset to be queried
                     * @return LogsetId ID of logset to be queried
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置ID of logset to be queried
                     * @param _logsetId ID of logset to be queried
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取List of IDs of log topics to be queried, separated by commas
                     * @return TopicIds List of IDs of log topics to be queried, separated by commas
                     * 
                     */
                    std::string GetTopicIds() const;

                    /**
                     * 设置List of IDs of log topics to be queried, separated by commas
                     * @param _topicIds List of IDs of log topics to be queried, separated by commas
                     * 
                     */
                    void SetTopicIds(const std::string& _topicIds);

                    /**
                     * 判断参数 TopicIds 是否已赋值
                     * @return TopicIds 是否已赋值
                     * 
                     */
                    bool TopicIdsHasBeenSet() const;

                    /**
                     * 获取Query start time in the format of YYYY-mm-dd HH:MM:SS
                     * @return StartTime Query start time in the format of YYYY-mm-dd HH:MM:SS
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Query start time in the format of YYYY-mm-dd HH:MM:SS
                     * @param _startTime Query start time in the format of YYYY-mm-dd HH:MM:SS
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
                     * 获取Query end time in the format of YYYY-mm-dd HH:MM:SS
                     * @return EndTime Query end time in the format of YYYY-mm-dd HH:MM:SS
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Query end time in the format of YYYY-mm-dd HH:MM:SS
                     * @param _endTime Query end time in the format of YYYY-mm-dd HH:MM:SS
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
                     * 获取Number of logs to be returned at a time. Maximum value: 100
                     * @return Limit Number of logs to be returned at a time. Maximum value: 100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of logs to be returned at a time. Maximum value: 100
                     * @param _limit Number of logs to be returned at a time. Maximum value: 100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Specifies whether to access CDN or ECDN. Valid values: `cdn` (default) and `ecdn`.
                     * @return Channel Specifies whether to access CDN or ECDN. Valid values: `cdn` (default) and `ecdn`.
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置Specifies whether to access CDN or ECDN. Valid values: `cdn` (default) and `ecdn`.
                     * @param _channel Specifies whether to access CDN or ECDN. Valid values: `cdn` (default) and `ecdn`.
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取Query statement. For more details, see [https://intl.cloud.tencent.com/document/product/614/16982?from_cn_redirect=1].
                     * @return Query Query statement. For more details, see [https://intl.cloud.tencent.com/document/product/614/16982?from_cn_redirect=1].
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Query statement. For more details, see [https://intl.cloud.tencent.com/document/product/614/16982?from_cn_redirect=1].
                     * @param _query Query statement. For more details, see [https://intl.cloud.tencent.com/document/product/614/16982?from_cn_redirect=1].
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取This field is used when loading more results. Pass through the last `context` value returned to get more log content. Up to 10,000 logs can be obtained through the cursor. Please narrow down the time range as much as possible.
                     * @return Context This field is used when loading more results. Pass through the last `context` value returned to get more log content. Up to 10,000 logs can be obtained through the cursor. Please narrow down the time range as much as possible.
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置This field is used when loading more results. Pass through the last `context` value returned to get more log content. Up to 10,000 logs can be obtained through the cursor. Please narrow down the time range as much as possible.
                     * @param _context This field is used when loading more results. Pass through the last `context` value returned to get more log content. Up to 10,000 logs can be obtained through the cursor. Please narrow down the time range as much as possible.
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取Sorting by log time. Valid values: asc (ascending), desc (descending). Default value: desc
                     * @return Sort Sorting by log time. Valid values: asc (ascending), desc (descending). Default value: desc
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Sorting by log time. Valid values: asc (ascending), desc (descending). Default value: desc
                     * @param _sort Sorting by log time. Valid values: asc (ascending), desc (descending). Default value: desc
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * ID of logset to be queried
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * List of IDs of log topics to be queried, separated by commas
                     */
                    std::string m_topicIds;
                    bool m_topicIdsHasBeenSet;

                    /**
                     * Query start time in the format of YYYY-mm-dd HH:MM:SS
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end time in the format of YYYY-mm-dd HH:MM:SS
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Number of logs to be returned at a time. Maximum value: 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Specifies whether to access CDN or ECDN. Valid values: `cdn` (default) and `ecdn`.
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * Query statement. For more details, see [https://intl.cloud.tencent.com/document/product/614/16982?from_cn_redirect=1].
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * This field is used when loading more results. Pass through the last `context` value returned to get more log content. Up to 10,000 logs can be obtained through the cursor. Please narrow down the time range as much as possible.
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * Sorting by log time. Valid values: asc (ascending), desc (descending). Default value: desc
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SEARCHCLSLOGREQUEST_H_
