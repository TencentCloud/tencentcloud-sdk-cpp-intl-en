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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELIVERSUMMARY_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELIVERSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Log shipping information.
                */
                class DeliverSummary : public AbstractModel
                {
                public:
                    DeliverSummary();
                    ~DeliverSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Delivery consumers currently only support CLS</p>
                     * @return DeliverConsumer <p>Delivery consumers currently only support CLS</p>
                     * 
                     */
                    std::string GetDeliverConsumer() const;

                    /**
                     * 设置<p>Delivery consumers currently only support CLS</p>
                     * @param _deliverConsumer <p>Delivery consumers currently only support CLS</p>
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
                     * 获取<p>Consumer name submission, currently only support CLS</p>
                     * @return DeliverConsumerName <p>Consumer name submission, currently only support CLS</p>
                     * 
                     */
                    std::string GetDeliverConsumerName() const;

                    /**
                     * 设置<p>Consumer name submission, currently only support CLS</p>
                     * @param _deliverConsumerName <p>Consumer name submission, currently only support CLS</p>
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
                     * 获取<p>Currently only support mq for the delivery type</p>
                     * @return DeliverType <p>Currently only support mq for the delivery type</p>
                     * 
                     */
                    std::string GetDeliverType() const;

                    /**
                     * 设置<p>Currently only support mq for the delivery type</p>
                     * @param _deliverType <p>Currently only support mq for the delivery type</p>
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
                     * 获取<p>Delivery subtype, currently only support CLS</p>
                     * @return DeliverSubType <p>Delivery subtype, currently only support CLS</p>
                     * 
                     */
                    std::string GetDeliverSubType() const;

                    /**
                     * 设置<p>Delivery subtype, currently only support CLS</p>
                     * @param _deliverSubType <p>Delivery subtype, currently only support CLS</p>
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
                     * 获取<p>Delivery error</p>
                     * @return DeliverError <p>Delivery error</p>
                     * 
                     */
                    std::string GetDeliverError() const;

                    /**
                     * 设置<p>Delivery error</p>
                     * @param _deliverError <p>Delivery error</p>
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
                     * <p>Delivery consumers currently only support CLS</p>
                     */
                    std::string m_deliverConsumer;
                    bool m_deliverConsumerHasBeenSet;

                    /**
                     * <p>Consumer name submission, currently only support CLS</p>
                     */
                    std::string m_deliverConsumerName;
                    bool m_deliverConsumerNameHasBeenSet;

                    /**
                     * <p>Currently only support mq for the delivery type</p>
                     */
                    std::string m_deliverType;
                    bool m_deliverTypeHasBeenSet;

                    /**
                     * <p>Delivery subtype, currently only support CLS</p>
                     */
                    std::string m_deliverSubType;
                    bool m_deliverSubTypeHasBeenSet;

                    /**
                     * <p>Delivery error</p>
                     */
                    std::string m_deliverError;
                    bool m_deliverErrorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELIVERSUMMARY_H_
