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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DELIVERSUMMARY_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DELIVERSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Shipping information
                */
                class DeliverSummary : public AbstractModel
                {
                public:
                    DeliverSummary();
                    ~DeliverSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Delivery Type, store (storage class), mq (message channel)</p>
                     * @return DeliverType <p>Delivery Type, store (storage class), mq (message channel)</p>
                     * 
                     */
                    std::string GetDeliverType() const;

                    /**
                     * 设置<p>Delivery Type, store (storage class), mq (message channel)</p>
                     * @param _deliverType <p>Delivery Type, store (storage class), mq (message channel)</p>
                     * 
                     */
                    void SetDeliverType(const std::string& _deliverType);

                    /**
                     * 判断参数 DeliverType 是否已赋值
                     * @return DeliverType 是否已赋值
                     * 
                     */
                    bool DeliverTypeHasBeenSet() const;

                    /**
                     * 获取<p>Delivery subtype: cls, ckafka.</p>
                     * @return DeliverSubType <p>Delivery subtype: cls, ckafka.</p>
                     * 
                     */
                    std::string GetDeliverSubType() const;

                    /**
                     * 设置<p>Delivery subtype: cls, ckafka.</p>
                     * @param _deliverSubType <p>Delivery subtype: cls, ckafka.</p>
                     * 
                     */
                    void SetDeliverSubType(const std::string& _deliverSubType);

                    /**
                     * 判断参数 DeliverSubType 是否已赋值
                     * @return DeliverSubType 是否已赋值
                     * 
                     */
                    bool DeliverSubTypeHasBeenSet() const;

                    /**
                     * 获取<p>Subscriber</p>
                     * @return DeliverConsumer <p>Subscriber</p>
                     * 
                     */
                    std::string GetDeliverConsumer() const;

                    /**
                     * 设置<p>Subscriber</p>
                     * @param _deliverConsumer <p>Subscriber</p>
                     * 
                     */
                    void SetDeliverConsumer(const std::string& _deliverConsumer);

                    /**
                     * 判断参数 DeliverConsumer 是否已赋值
                     * @return DeliverConsumer 是否已赋值
                     * 
                     */
                    bool DeliverConsumerHasBeenSet() const;

                    /**
                     * 获取<p>Subscriber name</p>
                     * @return DeliverConsumerName <p>Subscriber name</p>
                     * 
                     */
                    std::string GetDeliverConsumerName() const;

                    /**
                     * 设置<p>Subscriber name</p>
                     * @param _deliverConsumerName <p>Subscriber name</p>
                     * 
                     */
                    void SetDeliverConsumerName(const std::string& _deliverConsumerName);

                    /**
                     * 判断参数 DeliverConsumerName 是否已赋值
                     * @return DeliverConsumerName 是否已赋值
                     * 
                     */
                    bool DeliverConsumerNameHasBeenSet() const;

                    /**
                     * 获取<p>Delivery</p>
                     * @return DeliverError <p>Delivery</p>
                     * 
                     */
                    std::string GetDeliverError() const;

                    /**
                     * 设置<p>Delivery</p>
                     * @param _deliverError <p>Delivery</p>
                     * 
                     */
                    void SetDeliverError(const std::string& _deliverError);

                    /**
                     * 判断参数 DeliverError 是否已赋值
                     * @return DeliverError 是否已赋值
                     * 
                     */
                    bool DeliverErrorHasBeenSet() const;

                private:

                    /**
                     * <p>Delivery Type, store (storage class), mq (message channel)</p>
                     */
                    std::string m_deliverType;
                    bool m_deliverTypeHasBeenSet;

                    /**
                     * <p>Delivery subtype: cls, ckafka.</p>
                     */
                    std::string m_deliverSubType;
                    bool m_deliverSubTypeHasBeenSet;

                    /**
                     * <p>Subscriber</p>
                     */
                    std::string m_deliverConsumer;
                    bool m_deliverConsumerHasBeenSet;

                    /**
                     * <p>Subscriber name</p>
                     */
                    std::string m_deliverConsumerName;
                    bool m_deliverConsumerNameHasBeenSet;

                    /**
                     * <p>Delivery</p>
                     */
                    std::string m_deliverError;
                    bool m_deliverErrorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DELIVERSUMMARY_H_
