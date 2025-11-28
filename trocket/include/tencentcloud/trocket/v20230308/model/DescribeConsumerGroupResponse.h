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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERGROUPRESPONSE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeConsumerGroup response structure.
                */
                class DescribeConsumerGroupResponse : public AbstractModel
                {
                public:
                    DescribeConsumerGroupResponse();
                    ~DescribeConsumerGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of online consumers.
                     * @return ConsumerNum Number of online consumers.
                     * 
                     */
                    int64_t GetConsumerNum() const;

                    /**
                     * 判断参数 ConsumerNum 是否已赋值
                     * @return ConsumerNum 是否已赋值
                     * 
                     */
                    bool ConsumerNumHasBeenSet() const;

                    /**
                     * 获取TPS
                     * @return Tps TPS
                     * 
                     */
                    int64_t GetTps() const;

                    /**
                     * 判断参数 Tps 是否已赋值
                     * @return Tps 是否已赋值
                     * 
                     */
                    bool TpsHasBeenSet() const;

                    /**
                     * 获取Specifies the number of accumulated messages.
                     * @return ConsumerLag Specifies the number of accumulated messages.
                     * 
                     */
                    int64_t GetConsumerLag() const;

                    /**
                     * 判断参数 ConsumerLag 是否已赋值
                     * @return ConsumerLag 是否已赋值
                     * 
                     */
                    bool ConsumerLagHasBeenSet() const;

                    /**
                     * 获取Consumption type. valid values as follows:.

-PULL: specifies the pull consumption type.
-PUSH: specifies the push consumption type.
-POP: specifies the pop consumption type.
                     * @return ConsumeType Consumption type. valid values as follows:.

-PULL: specifies the pull consumption type.
-PUSH: specifies the push consumption type.
-POP: specifies the pop consumption type.
                     * 
                     */
                    std::string GetConsumeType() const;

                    /**
                     * 判断参数 ConsumeType 是否已赋值
                     * @return ConsumeType 是否已赋值
                     * 
                     */
                    bool ConsumeTypeHasBeenSet() const;

                    /**
                     * 获取Creation time. **It is a Unix timestamp (ms).**
                     * @return CreatedTime Creation time. **It is a Unix timestamp (ms).**
                     * 
                     */
                    int64_t GetCreatedTime() const;

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Specifies whether to use ordered delivery. valid values: true.
Concurrent delivery: false.
                     * @return ConsumeMessageOrderly Specifies whether to use ordered delivery. valid values: true.
Concurrent delivery: false.
                     * 
                     */
                    bool GetConsumeMessageOrderly() const;

                    /**
                     * 判断参数 ConsumeMessageOrderly 是否已赋值
                     * @return ConsumeMessageOrderly 是否已赋值
                     * 
                     */
                    bool ConsumeMessageOrderlyHasBeenSet() const;

                    /**
                     * 获取Whether to enable consumption.
                     * @return ConsumeEnable Whether to enable consumption.
                     * 
                     */
                    bool GetConsumeEnable() const;

                    /**
                     * 判断参数 ConsumeEnable 是否已赋值
                     * @return ConsumeEnable 是否已赋值
                     * 
                     */
                    bool ConsumeEnableHasBeenSet() const;

                    /**
                     * 获取Maximum number of retries.
                     * @return MaxRetryTimes Maximum number of retries.
                     * 
                     */
                    int64_t GetMaxRetryTimes() const;

                    /**
                     * 判断参数 MaxRetryTimes 是否已赋值
                     * @return MaxRetryTimes 是否已赋值
                     * 
                     */
                    bool MaxRetryTimesHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Specifies the consumption mode.
BROADCASTING.
CLUSTERING cluster mode.
                     * @return MessageModel Specifies the consumption mode.
BROADCASTING.
CLUSTERING cluster mode.
                     * 
                     */
                    std::string GetMessageModel() const;

                    /**
                     * 判断参数 MessageModel 是否已赋值
                     * @return MessageModel 是否已赋值
                     * 
                     */
                    bool MessageModelHasBeenSet() const;

                private:

                    /**
                     * Number of online consumers.
                     */
                    int64_t m_consumerNum;
                    bool m_consumerNumHasBeenSet;

                    /**
                     * TPS
                     */
                    int64_t m_tps;
                    bool m_tpsHasBeenSet;

                    /**
                     * Specifies the number of accumulated messages.
                     */
                    int64_t m_consumerLag;
                    bool m_consumerLagHasBeenSet;

                    /**
                     * Consumption type. valid values as follows:.

-PULL: specifies the pull consumption type.
-PUSH: specifies the push consumption type.
-POP: specifies the pop consumption type.
                     */
                    std::string m_consumeType;
                    bool m_consumeTypeHasBeenSet;

                    /**
                     * Creation time. **It is a Unix timestamp (ms).**
                     */
                    int64_t m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Specifies whether to use ordered delivery. valid values: true.
Concurrent delivery: false.
                     */
                    bool m_consumeMessageOrderly;
                    bool m_consumeMessageOrderlyHasBeenSet;

                    /**
                     * Whether to enable consumption.
                     */
                    bool m_consumeEnable;
                    bool m_consumeEnableHasBeenSet;

                    /**
                     * Maximum number of retries.
                     */
                    int64_t m_maxRetryTimes;
                    bool m_maxRetryTimesHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Specifies the consumption mode.
BROADCASTING.
CLUSTERING cluster mode.
                     */
                    std::string m_messageModel;
                    bool m_messageModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERGROUPRESPONSE_H_
