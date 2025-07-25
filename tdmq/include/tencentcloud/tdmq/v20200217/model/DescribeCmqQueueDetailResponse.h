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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQQUEUEDETAILRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQQUEUEDETAILRESPONSE_H_

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
                * DescribeCmqQueueDetail response structure.
                */
                class DescribeCmqQueueDetailResponse : public AbstractModel
                {
                public:
                    DescribeCmqQueueDetailResponse();
                    ~DescribeCmqQueueDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of queue details.
                     * @return QueueDescribe List of queue details.
                     * 
                     */
                    CmqQueue GetQueueDescribe() const;

                    /**
                     * 判断参数 QueueDescribe 是否已赋值
                     * @return QueueDescribe 是否已赋值
                     * 
                     */
                    bool QueueDescribeHasBeenSet() const;

                private:

                    /**
                     * List of queue details.
                     */
                    CmqQueue m_queueDescribe;
                    bool m_queueDescribeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQQUEUEDETAILRESPONSE_H_
