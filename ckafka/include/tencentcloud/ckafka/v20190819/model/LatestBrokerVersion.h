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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_LATESTBROKERVERSION_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_LATESTBROKERVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * List of the latest version information.
                */
                class LatestBrokerVersion : public AbstractModel
                {
                public:
                    LatestBrokerVersion();
                    ~LatestBrokerVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CKafka cluster instance version.
                     * @return KafkaVersion CKafka cluster instance version.
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置CKafka cluster instance version.
                     * @param _kafkaVersion CKafka cluster instance version.
                     * 
                     */
                    void SetKafkaVersion(const std::string& _kafkaVersion);

                    /**
                     * 判断参数 KafkaVersion 是否已赋值
                     * @return KafkaVersion 是否已赋值
                     * 
                     */
                    bool KafkaVersionHasBeenSet() const;

                    /**
                     * 获取Broker version number.
                     * @return BrokerVersion Broker version number.
                     * 
                     */
                    std::string GetBrokerVersion() const;

                    /**
                     * 设置Broker version number.
                     * @param _brokerVersion Broker version number.
                     * 
                     */
                    void SetBrokerVersion(const std::string& _brokerVersion);

                    /**
                     * 判断参数 BrokerVersion 是否已赋值
                     * @return BrokerVersion 是否已赋值
                     * 
                     */
                    bool BrokerVersionHasBeenSet() const;

                private:

                    /**
                     * CKafka cluster instance version.
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * Broker version number.
                     */
                    std::string m_brokerVersion;
                    bool m_brokerVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_LATESTBROKERVERSION_H_
