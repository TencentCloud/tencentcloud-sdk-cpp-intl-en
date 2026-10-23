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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELIVERSUMMARY_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELIVERSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
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
                     * 获取Delivery type. Valid values: `store` (storage class), `mq` (message channel).
                     * @return DeliverType Delivery type. Valid values: `store` (storage class), `mq` (message channel).
                     * 
                     */
                    std::string GetDeliverType() const;

                    /**
                     * 设置Delivery type. Valid values: `store` (storage class), `mq` (message channel).
                     * @param _deliverType Delivery type. Valid values: `store` (storage class), `mq` (message channel).
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
                     * 获取Delivery subtype: cls, ckafka.
                     * @return DeliverSubType Delivery subtype: cls, ckafka.
                     * 
                     */
                    std::string GetDeliverSubType() const;

                    /**
                     * 设置Delivery subtype: cls, ckafka.
                     * @param _deliverSubType Delivery subtype: cls, ckafka.
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
                     * 获取Submitter
                     * @return DeliverConsumer Submitter
                     * 
                     */
                    std::string GetDeliverConsumer() const;

                    /**
                     * 设置Submitter
                     * @param _deliverConsumer Submitter
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
                     * 获取Submitter name
                     * @return DeliverConsumerName Submitter name
                     * 
                     */
                    std::string GetDeliverConsumerName() const;

                    /**
                     * 设置Submitter name
                     * @param _deliverConsumerName Submitter name
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
                     * 获取Submission exception error
                     * @return DeliverError Submission exception error
                     * 
                     */
                    std::string GetDeliverError() const;

                    /**
                     * 设置Submission exception error
                     * @param _deliverError Submission exception error
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
                     * Delivery type. Valid values: `store` (storage class), `mq` (message channel).
                     */
                    std::string m_deliverType;
                    bool m_deliverTypeHasBeenSet;

                    /**
                     * Delivery subtype: cls, ckafka.
                     */
                    std::string m_deliverSubType;
                    bool m_deliverSubTypeHasBeenSet;

                    /**
                     * Submitter
                     */
                    std::string m_deliverConsumer;
                    bool m_deliverConsumerHasBeenSet;

                    /**
                     * Submitter name
                     */
                    std::string m_deliverConsumerName;
                    bool m_deliverConsumerNameHasBeenSet;

                    /**
                     * Submission exception error
                     */
                    std::string m_deliverError;
                    bool m_deliverErrorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELIVERSUMMARY_H_
