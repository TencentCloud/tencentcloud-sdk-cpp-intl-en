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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_KAFKAPROTOCOLINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_KAFKAPROTOCOLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Kafka access protocol
                */
                class KafkaProtocolInfo : public AbstractModel
                {
                public:
                    KafkaProtocolInfo();
                    ~KafkaProtocolInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Protocol type. Supported protocol types include plaintext, sasl_plaintext, or sasl_ssl. Recommend using sasl_ssl. Protocol enables encrypted connection and also requires user authentication.

-Protocol is required when IsEncryptionAddr is true.
-Supported protocol types are as follows:
-plaintext: Plaintext without encryption protocol
-sasl_ssl: sasl authentication + ssl encryption
-ssl: Pure ssl/TLS encryption protocol
-sasl_plaintext: SASL authentication + unencrypted tunnel

                     * @return Protocol Protocol type. Supported protocol types include plaintext, sasl_plaintext, or sasl_ssl. Recommend using sasl_ssl. Protocol enables encrypted connection and also requires user authentication.

-Protocol is required when IsEncryptionAddr is true.
-Supported protocol types are as follows:
-plaintext: Plaintext without encryption protocol
-sasl_ssl: sasl authentication + ssl encryption
-ssl: Pure ssl/TLS encryption protocol
-sasl_plaintext: SASL authentication + unencrypted tunnel

                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol type. Supported protocol types include plaintext, sasl_plaintext, or sasl_ssl. Recommend using sasl_ssl. Protocol enables encrypted connection and also requires user authentication.

-Protocol is required when IsEncryptionAddr is true.
-Supported protocol types are as follows:
-plaintext: Plaintext without encryption protocol
-sasl_ssl: sasl authentication + ssl encryption
-ssl: Pure ssl/TLS encryption protocol
-sasl_plaintext: SASL authentication + unencrypted tunnel

                     * @param _protocol Protocol type. Supported protocol types include plaintext, sasl_plaintext, or sasl_ssl. Recommend using sasl_ssl. Protocol enables encrypted connection and also requires user authentication.

-Protocol is required when IsEncryptionAddr is true.
-Supported protocol types are as follows:
-plaintext: Plaintext without encryption protocol
-sasl_ssl: sasl authentication + ssl encryption
-ssl: Pure ssl/TLS encryption protocol
-sasl_plaintext: SASL authentication + unencrypted tunnel

                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Encryption type, supports PLAIN, SCRAM-SHA-256, or SCRAM-SHA-512.

-Mechanism is required when Protocol is `sasl_plaintext` or `sasl_ssl`.
-Supported encryption types are as follows.
-PLAIN: plaintext authentication
-SCRAM-SHA-256: Based on challenge-response mechanism, uses PBKDF2-HMAC-SHA256 algorithm.
-SCRAM-SHA-512: Enhanced SCRAM that uses the PBKDF2-HMAC-SHA512 algorithm.
                     * @return Mechanism Encryption type, supports PLAIN, SCRAM-SHA-256, or SCRAM-SHA-512.

-Mechanism is required when Protocol is `sasl_plaintext` or `sasl_ssl`.
-Supported encryption types are as follows.
-PLAIN: plaintext authentication
-SCRAM-SHA-256: Based on challenge-response mechanism, uses PBKDF2-HMAC-SHA256 algorithm.
-SCRAM-SHA-512: Enhanced SCRAM that uses the PBKDF2-HMAC-SHA512 algorithm.
                     * 
                     */
                    std::string GetMechanism() const;

                    /**
                     * 设置Encryption type, supports PLAIN, SCRAM-SHA-256, or SCRAM-SHA-512.

-Mechanism is required when Protocol is `sasl_plaintext` or `sasl_ssl`.
-Supported encryption types are as follows.
-PLAIN: plaintext authentication
-SCRAM-SHA-256: Based on challenge-response mechanism, uses PBKDF2-HMAC-SHA256 algorithm.
-SCRAM-SHA-512: Enhanced SCRAM that uses the PBKDF2-HMAC-SHA512 algorithm.
                     * @param _mechanism Encryption type, supports PLAIN, SCRAM-SHA-256, or SCRAM-SHA-512.

-Mechanism is required when Protocol is `sasl_plaintext` or `sasl_ssl`.
-Supported encryption types are as follows.
-PLAIN: plaintext authentication
-SCRAM-SHA-256: Based on challenge-response mechanism, uses PBKDF2-HMAC-SHA256 algorithm.
-SCRAM-SHA-512: Enhanced SCRAM that uses the PBKDF2-HMAC-SHA512 algorithm.
                     * 
                     */
                    void SetMechanism(const std::string& _mechanism);

                    /**
                     * 判断参数 Mechanism 是否已赋值
                     * @return Mechanism 是否已赋值
                     * 
                     */
                    bool MechanismHasBeenSet() const;

                    /**
                     * 获取Username.
Required when Protocol is sasl_plaintext or sasl_ssl
                     * @return UserName Username.
Required when Protocol is sasl_plaintext or sasl_ssl
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username.
Required when Protocol is sasl_plaintext or sasl_ssl
                     * @param _userName Username.
Required when Protocol is sasl_plaintext or sasl_ssl
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取User password.
Required when Protocol is sasl_plaintext or sasl_ssl
                     * @return Password User password.
Required when Protocol is sasl_plaintext or sasl_ssl
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置User password.
Required when Protocol is sasl_plaintext or sasl_ssl
                     * @param _password User password.
Required when Protocol is sasl_plaintext or sasl_ssl
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * Protocol type. Supported protocol types include plaintext, sasl_plaintext, or sasl_ssl. Recommend using sasl_ssl. Protocol enables encrypted connection and also requires user authentication.

-Protocol is required when IsEncryptionAddr is true.
-Supported protocol types are as follows:
-plaintext: Plaintext without encryption protocol
-sasl_ssl: sasl authentication + ssl encryption
-ssl: Pure ssl/TLS encryption protocol
-sasl_plaintext: SASL authentication + unencrypted tunnel

                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Encryption type, supports PLAIN, SCRAM-SHA-256, or SCRAM-SHA-512.

-Mechanism is required when Protocol is `sasl_plaintext` or `sasl_ssl`.
-Supported encryption types are as follows.
-PLAIN: plaintext authentication
-SCRAM-SHA-256: Based on challenge-response mechanism, uses PBKDF2-HMAC-SHA256 algorithm.
-SCRAM-SHA-512: Enhanced SCRAM that uses the PBKDF2-HMAC-SHA512 algorithm.
                     */
                    std::string m_mechanism;
                    bool m_mechanismHasBeenSet;

                    /**
                     * Username.
Required when Protocol is sasl_plaintext or sasl_ssl
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * User password.
Required when Protocol is sasl_plaintext or sasl_ssl
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_KAFKAPROTOCOLINFO_H_
