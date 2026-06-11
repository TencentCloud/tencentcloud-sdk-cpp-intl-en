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
#include <tencentcloud/cls/v20201016/model/UserKafkaMeta.h>


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
                     * 获取Import Kafka type. 0: Tencent Cloud CKafka; 1: user-built kafka.
                     * @return KafkaType Import Kafka type. 0: Tencent Cloud CKafka; 1: user-built kafka.
                     * 
                     */
                    uint64_t GetKafkaType() const;

                    /**
                     * 设置Import Kafka type. 0: Tencent Cloud CKafka; 1: user-built kafka.
                     * @param _kafkaType Import Kafka type. 0: Tencent Cloud CKafka; 1: user-built kafka.
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
                     * 获取Tencent Cloud CKafka instance ID.
When KafkaType is 0, KafkaInstance is required

- Obtain the instance id by searching the instance list information (https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
                     * @return KafkaInstance Tencent Cloud CKafka instance ID.
When KafkaType is 0, KafkaInstance is required

- Obtain the instance id by searching the instance list information (https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
                     * 
                     */
                    std::string GetKafkaInstance() const;

                    /**
                     * 设置Tencent Cloud CKafka instance ID.
When KafkaType is 0, KafkaInstance is required

- Obtain the instance id by searching the instance list information (https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
                     * @param _kafkaInstance Tencent Cloud CKafka instance ID.
When KafkaType is 0, KafkaInstance is required

- Obtain the instance id by searching the instance list information (https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
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
                     * 获取Whether ServerAddr is an encrypted connection. The default value is false. It is valid when KafkaType is 1, indicating a user self-built Kafka.
                     * @return IsEncryptionAddr Whether ServerAddr is an encrypted connection. The default value is false. It is valid when KafkaType is 1, indicating a user self-built Kafka.
                     * 
                     */
                    bool GetIsEncryptionAddr() const;

                    /**
                     * 设置Whether ServerAddr is an encrypted connection. The default value is false. It is valid when KafkaType is 1, indicating a user self-built Kafka.
                     * @param _isEncryptionAddr Whether ServerAddr is an encrypted connection. The default value is false. It is valid when KafkaType is 1, indicating a user self-built Kafka.
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
                     * 获取Encrypted access protocol. It is required when the parameter KafkaType is 1 and the parameter IsEncryptionAddr is true.
                     * @return Protocol Encrypted access protocol. It is required when the parameter KafkaType is 1 and the parameter IsEncryptionAddr is true.
                     * 
                     */
                    KafkaProtocolInfo GetProtocol() const;

                    /**
                     * 设置Encrypted access protocol. It is required when the parameter KafkaType is 1 and the parameter IsEncryptionAddr is true.
                     * @param _protocol Encrypted access protocol. It is required when the parameter KafkaType is 1 and the parameter IsEncryptionAddr is true.
                     * 
                     */
                    void SetProtocol(const KafkaProtocolInfo& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取User kafka extended information
                     * @return UserKafkaMeta User kafka extended information
                     * 
                     */
                    UserKafkaMeta GetUserKafkaMeta() const;

                    /**
                     * 设置User kafka extended information
                     * @param _userKafkaMeta User kafka extended information
                     * 
                     */
                    void SetUserKafkaMeta(const UserKafkaMeta& _userKafkaMeta);

                    /**
                     * 判断参数 UserKafkaMeta 是否已赋值
                     * @return UserKafkaMeta 是否已赋值
                     * 
                     */
                    bool UserKafkaMetaHasBeenSet() const;

                private:

                    /**
                     * Import Kafka type. 0: Tencent Cloud CKafka; 1: user-built kafka.
                     */
                    uint64_t m_kafkaType;
                    bool m_kafkaTypeHasBeenSet;

                    /**
                     * Tencent Cloud CKafka instance ID.
When KafkaType is 0, KafkaInstance is required

- Obtain the instance id by searching the instance list information (https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
                     */
                    std::string m_kafkaInstance;
                    bool m_kafkaInstanceHasBeenSet;

                    /**
                     * Service AddressWhen KafkaType is 1, ServerAddr is required
                     */
                    std::string m_serverAddr;
                    bool m_serverAddrHasBeenSet;

                    /**
                     * Whether ServerAddr is an encrypted connection. The default value is false. It is valid when KafkaType is 1, indicating a user self-built Kafka.
                     */
                    bool m_isEncryptionAddr;
                    bool m_isEncryptionAddrHasBeenSet;

                    /**
                     * Encrypted access protocol. It is required when the parameter KafkaType is 1 and the parameter IsEncryptionAddr is true.
                     */
                    KafkaProtocolInfo m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * User kafka extended information
                     */
                    UserKafkaMeta m_userKafkaMeta;
                    bool m_userKafkaMetaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CHECKRECHARGEKAFKASERVERREQUEST_H_
