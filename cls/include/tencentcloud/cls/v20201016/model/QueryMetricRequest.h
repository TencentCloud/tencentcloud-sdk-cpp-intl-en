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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_QUERYMETRICREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_QUERYMETRICREQUEST_H_

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
                * QueryMetric request structure.
                */
                class QueryMetricRequest : public AbstractModel
                {
                public:
                    QueryMetricRequest();
                    ~QueryMetricRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Queries statements; using PromQL syntax	
-Refer to the [Syntax Rules](https://www.tencentcloud.com/document/product/614/90334?from_cn_redirect=1) document
                     * @return Query Queries statements; using PromQL syntax	
-Refer to the [Syntax Rules](https://www.tencentcloud.com/document/product/614/90334?from_cn_redirect=1) document
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Queries statements; using PromQL syntax	
-Refer to the [Syntax Rules](https://www.tencentcloud.com/document/product/614/90334?from_cn_redirect=1) document
                     * @param _query Queries statements; using PromQL syntax	
-Refer to the [Syntax Rules](https://www.tencentcloud.com/document/product/614/90334?from_cn_redirect=1) document
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
                     * 获取Metric Topic ID
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * @return TopicId Metric Topic ID
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Metric Topic ID
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * @param _topicId Metric Topic ID
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Query time, Unix timestamp in seconds. When empty, it represents the current timestamp.

                     * @return Time Query time, Unix timestamp in seconds. When empty, it represents the current timestamp.

                     * 
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置Query time, Unix timestamp in seconds. When empty, it represents the current timestamp.

                     * @param _time Query time, Unix timestamp in seconds. When empty, it represents the current timestamp.

                     * 
                     */
                    void SetTime(const uint64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                private:

                    /**
                     * Queries statements; using PromQL syntax	
-Refer to the [Syntax Rules](https://www.tencentcloud.com/document/product/614/90334?from_cn_redirect=1) document
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Metric Topic ID
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Query time, Unix timestamp in seconds. When empty, it represents the current timestamp.

                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_QUERYMETRICREQUEST_H_
