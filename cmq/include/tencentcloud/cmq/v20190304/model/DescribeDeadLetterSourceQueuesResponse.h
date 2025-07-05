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

#ifndef TENCENTCLOUD_CMQ_V20190304_MODEL_DESCRIBEDEADLETTERSOURCEQUEUESRESPONSE_H_
#define TENCENTCLOUD_CMQ_V20190304_MODEL_DESCRIBEDEADLETTERSOURCEQUEUESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cmq/v20190304/model/DeadLetterSource.h>


namespace TencentCloud
{
    namespace Cmq
    {
        namespace V20190304
        {
            namespace Model
            {
                /**
                * DescribeDeadLetterSourceQueues response structure.
                */
                class DescribeDeadLetterSourceQueuesResponse : public AbstractModel
                {
                public:
                    DescribeDeadLetterSourceQueuesResponse();
                    ~DescribeDeadLetterSourceQueuesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of eligible queues
                     * @return TotalCount Number of eligible queues
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
                     * 获取Source queues of dead letter queue
                     * @return QueueSet Source queues of dead letter queue
                     * 
                     */
                    std::vector<DeadLetterSource> GetQueueSet() const;

                    /**
                     * 判断参数 QueueSet 是否已赋值
                     * @return QueueSet 是否已赋值
                     * 
                     */
                    bool QueueSetHasBeenSet() const;

                private:

                    /**
                     * Number of eligible queues
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Source queues of dead letter queue
                     */
                    std::vector<DeadLetterSource> m_queueSet;
                    bool m_queueSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_MODEL_DESCRIBEDEADLETTERSOURCEQUEUESRESPONSE_H_
