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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_DESCRIBELOGTAGVALUEREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_DESCRIBELOGTAGVALUEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/LogFilter.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * DescribeLogTagValue request structure.
                */
                class DescribeLogTagValueRequest : public AbstractModel
                {
                public:
                    DescribeLogTagValueRequest();
                    ~DescribeLogTagValueRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The query start time.
                     * @return StartTime The query start time.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置The query start time.
                     * @param _startTime The query start time.
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The query end time.
                     * @return EndTime The query end time.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置The query end time.
                     * @param _endTime The query end time.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Event bus ID
                     * @return EventBusId Event bus ID
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置Event bus ID
                     * @param _eventBusId Event bus ID
                     * 
                     */
                    void SetEventBusId(const std::string& _eventBusId);

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     * 
                     */
                    bool EventBusIdHasBeenSet() const;

                    /**
                     * 获取Aggregation field
                     * @return GroupField Aggregation field
                     * 
                     */
                    std::string GetGroupField() const;

                    /**
                     * 设置Aggregation field
                     * @param _groupField Aggregation field
                     * 
                     */
                    void SetGroupField(const std::string& _groupField);

                    /**
                     * 判断参数 GroupField 是否已赋值
                     * @return GroupField 是否已赋值
                     * 
                     */
                    bool GroupFieldHasBeenSet() const;

                    /**
                     * 获取Number of pages.
                     * @return Page Number of pages.
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置Number of pages.
                     * @param _page Number of pages.
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取Logs returned per page
                     * @return Limit Logs returned per page
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Logs returned per page
                     * @param _limit Logs returned per page
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
                     * 获取Filter conditions
                     * @return Filter Filter conditions
                     * 
                     */
                    std::vector<LogFilter> GetFilter() const;

                    /**
                     * 设置Filter conditions
                     * @param _filter Filter conditions
                     * 
                     */
                    void SetFilter(const std::vector<LogFilter>& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * The query start time.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The query end time.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Event bus ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * Aggregation field
                     */
                    std::string m_groupField;
                    bool m_groupFieldHasBeenSet;

                    /**
                     * Number of pages.
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Logs returned per page
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter conditions
                     */
                    std::vector<LogFilter> m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_DESCRIBELOGTAGVALUEREQUEST_H_
