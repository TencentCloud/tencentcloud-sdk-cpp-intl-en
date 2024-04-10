/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                     * 获取Protocol type, including plaintext, sasl_plaintext, or sasl_ssl. sasl_ssl is recommended for encrypted connections and user authentication.Required input parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Protocol Protocol type, including plaintext, sasl_plaintext, or sasl_ssl. sasl_ssl is recommended for encrypted connections and user authentication.Required input parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol type, including plaintext, sasl_plaintext, or sasl_ssl. sasl_ssl is recommended for encrypted connections and user authentication.Required input parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _protocol Protocol type, including plaintext, sasl_plaintext, or sasl_ssl. sasl_ssl is recommended for encrypted connections and user authentication.Required input parameters
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Encryption type, supports PLAIN, SCRAM-SHA-256, or SCRAM-SHA-512.Required when the Protocol is sasl_plaintext or sasl_ssl.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Mechanism Encryption type, supports PLAIN, SCRAM-SHA-256, or SCRAM-SHA-512.Required when the Protocol is sasl_plaintext or sasl_ssl.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMechanism() const;

                    /**
                     * 设置Encryption type, supports PLAIN, SCRAM-SHA-256, or SCRAM-SHA-512.Required when the Protocol is sasl_plaintext or sasl_ssl.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mechanism Encryption type, supports PLAIN, SCRAM-SHA-256, or SCRAM-SHA-512.Required when the Protocol is sasl_plaintext or sasl_ssl.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取UsernameRequired when the Protocol is sasl_plaintext or sasl_ssl.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserName UsernameRequired when the Protocol is sasl_plaintext or sasl_ssl.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置UsernameRequired when the Protocol is sasl_plaintext or sasl_ssl.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userName UsernameRequired when the Protocol is sasl_plaintext or sasl_ssl.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取User PasswordRequired when the Protocol is sasl_plaintext or sasl_ssl.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Password User PasswordRequired when the Protocol is sasl_plaintext or sasl_ssl.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置User PasswordRequired when the Protocol is sasl_plaintext or sasl_ssl.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _password User PasswordRequired when the Protocol is sasl_plaintext or sasl_ssl.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Protocol type, including plaintext, sasl_plaintext, or sasl_ssl. sasl_ssl is recommended for encrypted connections and user authentication.Required input parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Encryption type, supports PLAIN, SCRAM-SHA-256, or SCRAM-SHA-512.Required when the Protocol is sasl_plaintext or sasl_ssl.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mechanism;
                    bool m_mechanismHasBeenSet;

                    /**
                     * UsernameRequired when the Protocol is sasl_plaintext or sasl_ssl.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * User PasswordRequired when the Protocol is sasl_plaintext or sasl_ssl.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_KAFKAPROTOCOLINFO_H_
