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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQQUEUESRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQQUEUESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/CmqQueue.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeCmqQueues response structure.
                */
                class DescribeCmqQueuesResponse : public AbstractModel
                {
                public:
                    DescribeCmqQueuesResponse();
                    ~DescribeCmqQueuesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of queues.
                     * @return TotalCount The number of queues.
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
                     * 获取Queue list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QueueList Queue list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CmqQueue> GetQueueList() const;

                    /**
                     * 判断参数 QueueList 是否已赋值
                     * @return QueueList 是否已赋值
                     * 
                     */
                    bool QueueListHasBeenSet() const;

                private:

                    /**
                     * The number of queues.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Queue list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CmqQueue> m_queueList;
                    bool m_queueListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQQUEUESRESPONSE_H_
