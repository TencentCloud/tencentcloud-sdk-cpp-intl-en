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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCONSUMERSLISTINFO_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCONSUMERSLISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * Queue consumer list information.
                */
                class RabbitMQConsumersListInfo : public AbstractModel
                {
                public:
                    RabbitMQConsumersListInfo();
                    ~RabbitMQConsumersListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Client Ip.
                     * @return ClientIp Client Ip.
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置Client Ip.
                     * @param _clientIp Client Ip.
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取Consumer Tag.
                     * @return ConsumerTag Consumer Tag.
                     * 
                     */
                    std::string GetConsumerTag() const;

                    /**
                     * 设置Consumer Tag.
                     * @param _consumerTag Consumer Tag.
                     * 
                     */
                    void SetConsumerTag(const std::string& _consumerTag);

                    /**
                     * 判断参数 ConsumerTag 是否已赋值
                     * @return ConsumerTag 是否已赋值
                     * 
                     */
                    bool ConsumerTagHasBeenSet() const;

                private:

                    /**
                     * Client Ip.
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * Consumer Tag.
                     */
                    std::string m_consumerTag;
                    bool m_consumerTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCONSUMERSLISTINFO_H_
