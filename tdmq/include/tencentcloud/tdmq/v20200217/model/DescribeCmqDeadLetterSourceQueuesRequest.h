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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQDEADLETTERSOURCEQUEUESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQDEADLETTERSOURCEQUEUESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeCmqDeadLetterSourceQueues request structure.
                */
                class DescribeCmqDeadLetterSourceQueuesRequest : public AbstractModel
                {
                public:
                    DescribeCmqDeadLetterSourceQueuesRequest();
                    ~DescribeCmqDeadLetterSourceQueuesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Dead letter queue name
                     * @return DeadLetterQueueName Dead letter queue name
                     */
                    std::string GetDeadLetterQueueName() const;

                    /**
                     * 设置Dead letter queue name
                     * @param DeadLetterQueueName Dead letter queue name
                     */
                    void SetDeadLetterQueueName(const std::string& _deadLetterQueueName);

                    /**
                     * 判断参数 DeadLetterQueueName 是否已赋值
                     * @return DeadLetterQueueName 是否已赋值
                     */
                    bool DeadLetterQueueNameHasBeenSet() const;

                    /**
                     * 获取Starting position of the list of topics to be returned on the current page in case of paginated return. If a value is entered, `limit` is required. If this parameter is left empty, 0 will be used by default.
                     * @return Limit Starting position of the list of topics to be returned on the current page in case of paginated return. If a value is entered, `limit` is required. If this parameter is left empty, 0 will be used by default.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Starting position of the list of topics to be returned on the current page in case of paginated return. If a value is entered, `limit` is required. If this parameter is left empty, 0 will be used by default.
                     * @param Limit Starting position of the list of topics to be returned on the current page in case of paginated return. If a value is entered, `limit` is required. If this parameter is left empty, 0 will be used by default.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Number of topics to be returned per page in case of paginated return. If this parameter is not passed in, 20 will be used by default. Maximum value: 50.
                     * @return Offset Number of topics to be returned per page in case of paginated return. If this parameter is not passed in, 20 will be used by default. Maximum value: 50.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Number of topics to be returned per page in case of paginated return. If this parameter is not passed in, 20 will be used by default. Maximum value: 50.
                     * @param Offset Number of topics to be returned per page in case of paginated return. If this parameter is not passed in, 20 will be used by default. Maximum value: 50.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Filter by `SourceQueueName`
                     * @return SourceQueueName Filter by `SourceQueueName`
                     */
                    std::string GetSourceQueueName() const;

                    /**
                     * 设置Filter by `SourceQueueName`
                     * @param SourceQueueName Filter by `SourceQueueName`
                     */
                    void SetSourceQueueName(const std::string& _sourceQueueName);

                    /**
                     * 判断参数 SourceQueueName 是否已赋值
                     * @return SourceQueueName 是否已赋值
                     */
                    bool SourceQueueNameHasBeenSet() const;

                private:

                    /**
                     * Dead letter queue name
                     */
                    std::string m_deadLetterQueueName;
                    bool m_deadLetterQueueNameHasBeenSet;

                    /**
                     * Starting position of the list of topics to be returned on the current page in case of paginated return. If a value is entered, `limit` is required. If this parameter is left empty, 0 will be used by default.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Number of topics to be returned per page in case of paginated return. If this parameter is not passed in, 20 will be used by default. Maximum value: 50.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter by `SourceQueueName`
                     */
                    std::string m_sourceQueueName;
                    bool m_sourceQueueNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQDEADLETTERSOURCEQUEUESREQUEST_H_
