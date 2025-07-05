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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TEMPCERTIFICATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TEMPCERTIFICATE_H_

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
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Temporary credential
                */
                class TempCertificate : public AbstractModel
                {
                public:
                    TempCertificate();
                    ~TempCertificate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Temporary security certificate ID.
                     * @return SecretId Temporary security certificate ID.
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置Temporary security certificate ID.
                     * @param _secretId Temporary security certificate ID.
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取Temporary security certificate `Key`.
                     * @return SecretKey Temporary security certificate `Key`.
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置Temporary security certificate `Key`.
                     * @param _secretKey Temporary security certificate `Key`.
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取Token value.
                     * @return Token Token value.
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置Token value.
                     * @param _token Token value.
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取Certificate expiration time. A Unix timestamp will be returned which is accurate down to the second.
                     * @return ExpiredTime Certificate expiration time. A Unix timestamp will be returned which is accurate down to the second.
                     * 
                     */
                    uint64_t GetExpiredTime() const;

                    /**
                     * 设置Certificate expiration time. A Unix timestamp will be returned which is accurate down to the second.
                     * @param _expiredTime Certificate expiration time. A Unix timestamp will be returned which is accurate down to the second.
                     * 
                     */
                    void SetExpiredTime(const uint64_t& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * Temporary security certificate ID.
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * Temporary security certificate `Key`.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Token value.
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * Certificate expiration time. A Unix timestamp will be returned which is accurate down to the second.
                     */
                    uint64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TEMPCERTIFICATE_H_
