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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CHECKRECHARGEKAFKASERVERREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CHECKRECHARGEKAFKASERVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/KafkaProtocolInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CheckRechargeKafkaServer request structure.
                */
                class CheckRechargeKafkaServerRequest : public AbstractModel
                {
                public:
                    CheckRechargeKafkaServerRequest();
                    ~CheckRechargeKafkaServerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Kafka type. Valid values: 0 (Tencent Cloud CKafka) and 1 (customer's Kafka).
                     * @return KafkaType Kafka type. Valid values: 0 (Tencent Cloud CKafka) and 1 (customer's Kafka).
                     * 
                     */
                    uint64_t GetKafkaType() const;

                    /**
                     * 设置Kafka type. Valid values: 0 (Tencent Cloud CKafka) and 1 (customer's Kafka).
                     * @param _kafkaType Kafka type. Valid values: 0 (Tencent Cloud CKafka) and 1 (customer's Kafka).
                     * 
                     */
                    void SetKafkaType(const uint64_t& _kafkaType);

                    /**
                     * 判断参数 KafkaType 是否已赋值
                     * @return KafkaType 是否已赋值
                     * 
                     */
                    bool KafkaTypeHasBeenSet() const;

                    /**
                     * 获取Tencent Cloud CKafka Instance IDWhen KafkaType is 0, KafkaInstance is required
                     * @return KafkaInstance Tencent Cloud CKafka Instance IDWhen KafkaType is 0, KafkaInstance is required
                     * 
                     */
                    std::string GetKafkaInstance() const;

                    /**
                     * 设置Tencent Cloud CKafka Instance IDWhen KafkaType is 0, KafkaInstance is required
                     * @param _kafkaInstance Tencent Cloud CKafka Instance IDWhen KafkaType is 0, KafkaInstance is required
                     * 
                     */
                    void SetKafkaInstance(const std::string& _kafkaInstance);

                    /**
                     * 判断参数 KafkaInstance 是否已赋值
                     * @return KafkaInstance 是否已赋值
                     * 
                     */
                    bool KafkaInstanceHasBeenSet() const;

                    /**
                     * 获取Service AddressWhen KafkaType is 1, ServerAddr is required
                     * @return ServerAddr Service AddressWhen KafkaType is 1, ServerAddr is required
                     * 
                     */
                    std::string GetServerAddr() const;

                    /**
                     * 设置Service AddressWhen KafkaType is 1, ServerAddr is required
                     * @param _serverAddr Service AddressWhen KafkaType is 1, ServerAddr is required
                     * 
                     */
                    void SetServerAddr(const std::string& _serverAddr);

                    /**
                     * 判断参数 ServerAddr 是否已赋值
                     * @return ServerAddr 是否已赋值
                     * 
                     */
                    bool ServerAddrHasBeenSet() const;

                    /**
                     * 获取Whether the service address uses an encrypted connection
                     * @return IsEncryptionAddr Whether the service address uses an encrypted connection
                     * 
                     */
                    bool GetIsEncryptionAddr() const;

                    /**
                     * 设置Whether the service address uses an encrypted connection
                     * @param _isEncryptionAddr Whether the service address uses an encrypted connection
                     * 
                     */
                    void SetIsEncryptionAddr(const bool& _isEncryptionAddr);

                    /**
                     * 判断参数 IsEncryptionAddr 是否已赋值
                     * @return IsEncryptionAddr 是否已赋值
                     * 
                     */
                    bool IsEncryptionAddrHasBeenSet() const;

                    /**
                     * 获取Encryption access protocol. Required when IsEncryptionAddr parameter is set to true
                     * @return Protocol Encryption access protocol. Required when IsEncryptionAddr parameter is set to true
                     * 
                     */
                    KafkaProtocolInfo GetProtocol() const;

                    /**
                     * 设置Encryption access protocol. Required when IsEncryptionAddr parameter is set to true
                     * @param _protocol Encryption access protocol. Required when IsEncryptionAddr parameter is set to true
                     * 
                     */
                    void SetProtocol(const KafkaProtocolInfo& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * Kafka type. Valid values: 0 (Tencent Cloud CKafka) and 1 (customer's Kafka).
                     */
                    uint64_t m_kafkaType;
                    bool m_kafkaTypeHasBeenSet;

                    /**
                     * Tencent Cloud CKafka Instance IDWhen KafkaType is 0, KafkaInstance is required
                     */
                    std::string m_kafkaInstance;
                    bool m_kafkaInstanceHasBeenSet;

                    /**
                     * Service AddressWhen KafkaType is 1, ServerAddr is required
                     */
                    std::string m_serverAddr;
                    bool m_serverAddrHasBeenSet;

                    /**
                     * Whether the service address uses an encrypted connection
                     */
                    bool m_isEncryptionAddr;
                    bool m_isEncryptionAddrHasBeenSet;

                    /**
                     * Encryption access protocol. Required when IsEncryptionAddr parameter is set to true
                     */
                    KafkaProtocolInfo m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CHECKRECHARGEKAFKASERVERREQUEST_H_
