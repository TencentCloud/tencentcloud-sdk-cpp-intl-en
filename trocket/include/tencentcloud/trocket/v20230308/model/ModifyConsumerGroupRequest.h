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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYCONSUMERGROUPREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYCONSUMERGROUPREQUEST_H_

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
                * ModifyConsumerGroup request structure.
                */
                class ModifyConsumerGroupRequest : public AbstractModel
                {
                public:
                    ModifyConsumerGroupRequest();
                    ~ModifyConsumerGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.com/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * @return InstanceId TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.com/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.com/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * @param _instanceId TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.com/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Consumer group name. It can be obtained from [ConsumeGroupItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ConsumeGroupItem) returned by the API [DescribeConsumerGroupList](https://www.tencentcloud.com/document/api/1493/101535?from_cn_redirect=1) or from the console.
                     * @return ConsumerGroup Consumer group name. It can be obtained from [ConsumeGroupItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ConsumeGroupItem) returned by the API [DescribeConsumerGroupList](https://www.tencentcloud.com/document/api/1493/101535?from_cn_redirect=1) or from the console.
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置Consumer group name. It can be obtained from [ConsumeGroupItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ConsumeGroupItem) returned by the API [DescribeConsumerGroupList](https://www.tencentcloud.com/document/api/1493/101535?from_cn_redirect=1) or from the console.
                     * @param _consumerGroup Consumer group name. It can be obtained from [ConsumeGroupItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ConsumeGroupItem) returned by the API [DescribeConsumerGroupList](https://www.tencentcloud.com/document/api/1493/101535?from_cn_redirect=1) or from the console.
                     * 
                     */
                    void SetConsumerGroup(const std::string& _consumerGroup);

                    /**
                     * 判断参数 ConsumerGroup 是否已赋值
                     * @return ConsumerGroup 是否已赋值
                     * 
                     */
                    bool ConsumerGroupHasBeenSet() const;

                    /**
                     * 获取Whether to enable consumption.
                     * @return ConsumeEnable Whether to enable consumption.
                     * 
                     */
                    bool GetConsumeEnable() const;

                    /**
                     * 设置Whether to enable consumption.
                     * @param _consumeEnable Whether to enable consumption.
                     * 
                     */
                    void SetConsumeEnable(const bool& _consumeEnable);

                    /**
                     * 判断参数 ConsumeEnable 是否已赋值
                     * @return ConsumeEnable 是否已赋值
                     * 
                     */
                    bool ConsumeEnableHasBeenSet() const;

                    /**
                     * 获取Specifies whether to use ordered delivery. valid values: true.
Concurrent delivery: false.
                     * @return ConsumeMessageOrderly Specifies whether to use ordered delivery. valid values: true.
Concurrent delivery: false.
                     * 
                     */
                    bool GetConsumeMessageOrderly() const;

                    /**
                     * 设置Specifies whether to use ordered delivery. valid values: true.
Concurrent delivery: false.
                     * @param _consumeMessageOrderly Specifies whether to use ordered delivery. valid values: true.
Concurrent delivery: false.
                     * 
                     */
                    void SetConsumeMessageOrderly(const bool& _consumeMessageOrderly);

                    /**
                     * 判断参数 ConsumeMessageOrderly 是否已赋值
                     * @return ConsumeMessageOrderly 是否已赋值
                     * 
                     */
                    bool ConsumeMessageOrderlyHasBeenSet() const;

                    /**
                     * 获取Maximum number of retries. Value range: 0 to 1000.
                     * @return MaxRetryTimes Maximum number of retries. Value range: 0 to 1000.
                     * 
                     */
                    int64_t GetMaxRetryTimes() const;

                    /**
                     * 设置Maximum number of retries. Value range: 0 to 1000.
                     * @param _maxRetryTimes Maximum number of retries. Value range: 0 to 1000.
                     * 
                     */
                    void SetMaxRetryTimes(const int64_t& _maxRetryTimes);

                    /**
                     * 判断参数 MaxRetryTimes 是否已赋值
                     * @return MaxRetryTimes 是否已赋值
                     * 
                     */
                    bool MaxRetryTimesHasBeenSet() const;

                    /**
                     * 获取Remarks. Up to 128 characters are allowed.
                     * @return Remark Remarks. Up to 128 characters are allowed.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks. Up to 128 characters are allowed.
                     * @param _remark Remarks. Up to 128 characters are allowed.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.com/document/api/1493/106745?from_cn_redirect=1) or the console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Consumer group name. It can be obtained from [ConsumeGroupItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ConsumeGroupItem) returned by the API [DescribeConsumerGroupList](https://www.tencentcloud.com/document/api/1493/101535?from_cn_redirect=1) or from the console.
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                    /**
                     * Whether to enable consumption.
                     */
                    bool m_consumeEnable;
                    bool m_consumeEnableHasBeenSet;

                    /**
                     * Specifies whether to use ordered delivery. valid values: true.
Concurrent delivery: false.
                     */
                    bool m_consumeMessageOrderly;
                    bool m_consumeMessageOrderlyHasBeenSet;

                    /**
                     * Maximum number of retries. Value range: 0 to 1000.
                     */
                    int64_t m_maxRetryTimes;
                    bool m_maxRetryTimesHasBeenSet;

                    /**
                     * Remarks. Up to 128 characters are allowed.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYCONSUMERGROUPREQUEST_H_
