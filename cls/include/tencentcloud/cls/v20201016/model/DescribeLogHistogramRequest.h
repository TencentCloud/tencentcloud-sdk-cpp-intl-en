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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGHISTOGRAMREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGHISTOGRAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
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
                     * 获取ID of the log topic to be queried
                     * @return TopicId ID of the log topic to be queried
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置ID of the log topic to be queried
                     * @param TopicId ID of the log topic to be queried
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Start time of the log to be queried, which is a Unix timestamp in milliseconds
                     * @return From Start time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置Start time of the log to be queried, which is a Unix timestamp in milliseconds
                     * @param From Start time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    void SetFrom(const int64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取End time of the log to be queried, which is a Unix timestamp in milliseconds
                     * @return To End time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置End time of the log to be queried, which is a Unix timestamp in milliseconds
                     * @param To End time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    void SetTo(const int64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取Query statement
                     * @return Query Query statement
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Query statement
                     * @param Query Query statement
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取Interval in milliseconds. Condition: (To – From) / Interval ≤ 200
                     * @return Interval Interval in milliseconds. Condition: (To – From) / Interval ≤ 200
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置Interval in milliseconds. Condition: (To – From) / Interval ≤ 200
                     * @param Interval Interval in milliseconds. Condition: (To – From) / Interval ≤ 200
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                private:

                    /**
                     * ID of the log topic to be queried
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Start time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * End time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * Query statement
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Interval in milliseconds. Condition: (To – From) / Interval ≤ 200
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGHISTOGRAMREQUEST_H_
