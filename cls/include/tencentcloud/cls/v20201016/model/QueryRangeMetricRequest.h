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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_QUERYRANGEMETRICREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_QUERYRANGEMETRICREQUEST_H_

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
                * QueryRangeMetric request structure.
                */
                class QueryRangeMetricRequest : public AbstractModel
                {
                public:
                    QueryRangeMetricRequest();
                    ~QueryRangeMetricRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Queries statements; using PromQL syntax
                     * @return Query Queries statements; using PromQL syntax
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Queries statements; using PromQL syntax
                     * @param _query Queries statements; using PromQL syntax
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
                     * 获取Queries start time; unix timestamp in seconds
                     * @return Start Queries start time; unix timestamp in seconds
                     * 
                     */
                    uint64_t GetStart() const;

                    /**
                     * 设置Queries start time; unix timestamp in seconds
                     * @param _start Queries start time; unix timestamp in seconds
                     * 
                     */
                    void SetStart(const uint64_t& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取Queries end time; unix timestamp in seconds
                     * @return End Queries end time; unix timestamp in seconds
                     * 
                     */
                    uint64_t GetEnd() const;

                    /**
                     * 设置Queries end time; unix timestamp in seconds
                     * @param _end Queries end time; unix timestamp in seconds
                     * 
                     */
                    void SetEnd(const uint64_t& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                    /**
                     * 获取Queries time interval, in seconds
                     * @return Step Queries time interval, in seconds
                     * 
                     */
                    uint64_t GetStep() const;

                    /**
                     * 设置Queries time interval, in seconds
                     * @param _step Queries time interval, in seconds
                     * 
                     */
                    void SetStep(const uint64_t& _step);

                    /**
                     * 判断参数 Step 是否已赋值
                     * @return Step 是否已赋值
                     * 
                     */
                    bool StepHasBeenSet() const;

                private:

                    /**
                     * Metric Topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Queries statements; using PromQL syntax
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Queries start time; unix timestamp in seconds
                     */
                    uint64_t m_start;
                    bool m_startHasBeenSet;

                    /**
                     * Queries end time; unix timestamp in seconds
                     */
                    uint64_t m_end;
                    bool m_endHasBeenSet;

                    /**
                     * Queries time interval, in seconds
                     */
                    uint64_t m_step;
                    bool m_stepHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_QUERYRANGEMETRICREQUEST_H_
