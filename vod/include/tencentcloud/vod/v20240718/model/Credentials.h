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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_CREDENTIALS_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_CREDENTIALS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * Credentials.
                */
                class Credentials : public AbstractModel
                {
                public:
                    Credentials();
                    ~Credentials() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Access Key ID.
                     * @return AccessKeyId Access Key ID.
                     * 
                     */
                    std::string GetAccessKeyId() const;

                    /**
                     * 设置Access Key ID.
                     * @param _accessKeyId Access Key ID.
                     * 
                     */
                    void SetAccessKeyId(const std::string& _accessKeyId);

                    /**
                     * 判断参数 AccessKeyId 是否已赋值
                     * @return AccessKeyId 是否已赋值
                     * 
                     */
                    bool AccessKeyIdHasBeenSet() const;

                    /**
                     * 获取Secret Access Key.
                     * @return SecretAccessKey Secret Access Key.
                     * 
                     */
                    std::string GetSecretAccessKey() const;

                    /**
                     * 设置Secret Access Key.
                     * @param _secretAccessKey Secret Access Key.
                     * 
                     */
                    void SetSecretAccessKey(const std::string& _secretAccessKey);

                    /**
                     * 判断参数 SecretAccessKey 是否已赋值
                     * @return SecretAccessKey 是否已赋值
                     * 
                     */
                    bool SecretAccessKeyHasBeenSet() const;

                    /**
                     * 获取The session token length depends on the binding policy and is no longer than 4096 bytes.
                     * @return SessionToken The session token length depends on the binding policy and is no longer than 4096 bytes.
                     * 
                     */
                    std::string GetSessionToken() const;

                    /**
                     * 设置The session token length depends on the binding policy and is no longer than 4096 bytes.
                     * @param _sessionToken The session token length depends on the binding policy and is no longer than 4096 bytes.
                     * 
                     */
                    void SetSessionToken(const std::string& _sessionToken);

                    /**
                     * 判断参数 SessionToken 是否已赋值
                     * @return SessionToken 是否已赋值
                     * 
                     */
                    bool SessionTokenHasBeenSet() const;

                    /**
                     * 获取The expiration time of the credentials.
                     * @return Expiration The expiration time of the credentials.
                     * 
                     */
                    std::string GetExpiration() const;

                    /**
                     * 设置The expiration time of the credentials.
                     * @param _expiration The expiration time of the credentials.
                     * 
                     */
                    void SetExpiration(const std::string& _expiration);

                    /**
                     * 判断参数 Expiration 是否已赋值
                     * @return Expiration 是否已赋值
                     * 
                     */
                    bool ExpirationHasBeenSet() const;

                private:

                    /**
                     * Access Key ID.
                     */
                    std::string m_accessKeyId;
                    bool m_accessKeyIdHasBeenSet;

                    /**
                     * Secret Access Key.
                     */
                    std::string m_secretAccessKey;
                    bool m_secretAccessKeyHasBeenSet;

                    /**
                     * The session token length depends on the binding policy and is no longer than 4096 bytes.
                     */
                    std::string m_sessionToken;
                    bool m_sessionTokenHasBeenSet;

                    /**
                     * The expiration time of the credentials.
                     */
                    std::string m_expiration;
                    bool m_expirationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_CREDENTIALS_H_
