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
                     * 获取Query statement, using PromQL syntax	
                     * @return Query Query statement, using PromQL syntax	
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Query statement, using PromQL syntax	
                     * @param _query Query statement, using PromQL syntax	
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
                     * @return TopicId Metric Topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Metric Topic ID
                     * @param _topicId Metric Topic ID
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
                     * 获取Query time, Unix Timestamp in seconds	
                     * @return Time Query time, Unix Timestamp in seconds	
                     * 
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置Query time, Unix Timestamp in seconds	
                     * @param _time Query time, Unix Timestamp in seconds	
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
                     * Query statement, using PromQL syntax	
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Metric Topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Query time, Unix Timestamp in seconds	
                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_QUERYMETRICREQUEST_H_
