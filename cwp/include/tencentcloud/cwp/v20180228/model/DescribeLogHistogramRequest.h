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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGHISTOGRAMREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGHISTOGRAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeLogHistogram request structure.
                */
                class DescribeLogHistogramRequest : public AbstractModel
                {
                public:
                    DescribeLogHistogramRequest();
                    ~DescribeLogHistogramRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time of logs to be queried, which is a Unix timestamp in milliseconds
                     * @return StartTime Start time of logs to be queried, which is a Unix timestamp in milliseconds
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time of logs to be queried, which is a Unix timestamp in milliseconds
                     * @param _startTime Start time of logs to be queried, which is a Unix timestamp in milliseconds
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
                     * 获取End time of logs to be queried, which is a Unix timestamp in milliseconds
                     * @return EndTime End time of logs to be queried, which is a Unix timestamp in milliseconds
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time of logs to be queried, which is a Unix timestamp in milliseconds
                     * @param _endTime End time of logs to be queried, which is a Unix timestamp in milliseconds
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
                     * 获取Query statement
                     * @return QueryString Query statement
                     * 
                     */
                    std::string GetQueryString() const;

                    /**
                     * 设置Query statement
                     * @param _queryString Query statement
                     * 
                     */
                    void SetQueryString(const std::string& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     * 
                     */
                    bool QueryStringHasBeenSet() const;

                    /**
                     * 获取Time interval, in ms
                     * @return Interval Time interval, in ms
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置Time interval, in ms
                     * @param _interval Time interval, in ms
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                private:

                    /**
                     * Start time of logs to be queried, which is a Unix timestamp in milliseconds
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of logs to be queried, which is a Unix timestamp in milliseconds
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Query statement
                     */
                    std::string m_queryString;
                    bool m_queryStringHasBeenSet;

                    /**
                     * Time interval, in ms
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGHISTOGRAMREQUEST_H_
