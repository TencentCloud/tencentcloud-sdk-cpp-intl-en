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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBETOPICMSGSRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBETOPICMSGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/MsgLog.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeTopicMsgs response structure.
                */
                class DescribeTopicMsgsResponse : public AbstractModel
                {
                public:
                    DescribeTopicMsgsResponse();
                    ~DescribeTopicMsgsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total record count.
                     * @return TotalCount Total record count.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Message log list.
                     * @return TopicMsgLogSets Message log list.
                     * 
                     */
                    std::vector<MsgLog> GetTopicMsgLogSets() const;

                    /**
                     * 判断参数 TopicMsgLogSets 是否已赋值
                     * @return TopicMsgLogSets 是否已赋值
                     * 
                     */
                    bool TopicMsgLogSetsHasBeenSet() const;

                private:

                    /**
                     * Total record count.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Message log list.
                     */
                    std::vector<MsgLog> m_topicMsgLogSets;
                    bool m_topicMsgLogSetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBETOPICMSGSRESPONSE_H_
