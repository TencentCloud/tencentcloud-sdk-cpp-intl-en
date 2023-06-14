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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPED_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Timestamp hotlink protection advanced configuration mode D
                */
                class AdvancedAuthenticationTypeD : public AbstractModel
                {
                public:
                    AdvancedAuthenticationTypeD();
                    ~AdvancedAuthenticationTypeD() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key used for signature calculation, allowing 6 to 32 bytes of letters and digits.
                     * @return SecretKey Key used for signature calculation, allowing 6 to 32 bytes of letters and digits.
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置Key used for signature calculation, allowing 6 to 32 bytes of letters and digits.
                     * @param _secretKey Key used for signature calculation, allowing 6 to 32 bytes of letters and digits.
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
                     * 获取Alternative key used for authentication after the authentication key (`SecretKey`) failed
                     * @return BackupSecretKey Alternative key used for authentication after the authentication key (`SecretKey`) failed
                     * 
                     */
                    std::string GetBackupSecretKey() const;

                    /**
                     * 设置Alternative key used for authentication after the authentication key (`SecretKey`) failed
                     * @param _backupSecretKey Alternative key used for authentication after the authentication key (`SecretKey`) failed
                     * 
                     */
                    void SetBackupSecretKey(const std::string& _backupSecretKey);

                    /**
                     * 判断参数 BackupSecretKey 是否已赋值
                     * @return BackupSecretKey 是否已赋值
                     * 
                     */
                    bool BackupSecretKeyHasBeenSet() const;

                    /**
                     * 获取Signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     * @return SignParam Signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     * 
                     */
                    std::string GetSignParam() const;

                    /**
                     * 设置Signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     * @param _signParam Signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     * 
                     */
                    void SetSignParam(const std::string& _signParam);

                    /**
                     * 判断参数 SignParam 是否已赋值
                     * @return SignParam 是否已赋值
                     * 
                     */
                    bool SignParamHasBeenSet() const;

                    /**
                     * 获取Time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     * @return TimeParam Time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     * 
                     */
                    std::string GetTimeParam() const;

                    /**
                     * 设置Time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     * @param _timeParam Time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     * 
                     */
                    void SetTimeParam(const std::string& _timeParam);

                    /**
                     * 判断参数 TimeParam 是否已赋值
                     * @return TimeParam 是否已赋值
                     * 
                     */
                    bool TimeParamHasBeenSet() const;

                    /**
                     * 获取Expiration time in seconds
                     * @return ExpireTime Expiration time in seconds
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置Expiration time in seconds
                     * @param _expireTime Expiration time in seconds
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Time format. Valid values: dec (decimal), hex (hexadecimal).
                     * @return TimeFormat Time format. Valid values: dec (decimal), hex (hexadecimal).
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置Time format. Valid values: dec (decimal), hex (hexadecimal).
                     * @param _timeFormat Time format. Valid values: dec (decimal), hex (hexadecimal).
                     * 
                     */
                    void SetTimeFormat(const std::string& _timeFormat);

                    /**
                     * 判断参数 TimeFormat 是否已赋值
                     * @return TimeFormat 是否已赋值
                     * 
                     */
                    bool TimeFormatHasBeenSet() const;

                private:

                    /**
                     * Key used for signature calculation, allowing 6 to 32 bytes of letters and digits.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Alternative key used for authentication after the authentication key (`SecretKey`) failed
                     */
                    std::string m_backupSecretKey;
                    bool m_backupSecretKeyHasBeenSet;

                    /**
                     * Signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     */
                    std::string m_signParam;
                    bool m_signParamHasBeenSet;

                    /**
                     * Time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     */
                    std::string m_timeParam;
                    bool m_timeParamHasBeenSet;

                    /**
                     * Expiration time in seconds
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Time format. Valid values: dec (decimal), hex (hexadecimal).
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPED_H_
