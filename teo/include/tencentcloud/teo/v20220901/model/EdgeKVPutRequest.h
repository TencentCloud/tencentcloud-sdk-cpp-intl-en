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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVPUTREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVPUTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * EdgeKVPut request structure.
                */
                class EdgeKVPutRequest : public AbstractModel
                {
                public:
                    EdgeKVPutRequest();
                    ~EdgeKVPutRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Namespace name.
                     * @return Namespace Namespace name.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace name.
                     * @param _namespace Namespace name.
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Key name, with a length of 1-512 characters, supports valid UTF-8 characters.
                     * @return Key Key name, with a length of 1-512 characters, supports valid UTF-8 characters.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Key name, with a length of 1-512 characters, supports valid UTF-8 characters.
                     * @param _key Key name, with a length of 1-512 characters, supports valid UTF-8 characters.
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Key-value. Cannot be empty and supports up to 1 MB. Supports storing string data.
                     * @return Value Key-value. Cannot be empty and supports up to 1 MB. Supports storing string data.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Key-value. Cannot be empty and supports up to 1 MB. Supports storing string data.
                     * @param _value Key-value. Cannot be empty and supports up to 1 MB. Supports storing string data.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Expiry date of the key-value pair, absolute time in seconds, represents the seconds elapsed since 00:00:00 on January 1, 1970 (UTC) (Unix timestamp). The value must be greater than or equal to current time + 60, meaning the expiry date is at least 60 seconds from now. When both Expiration and ExpirationTTL are filled, ExpirationTTL takes precedence. If left empty, the key-value pair will never expire.
                     * @return Expiration Expiry date of the key-value pair, absolute time in seconds, represents the seconds elapsed since 00:00:00 on January 1, 1970 (UTC) (Unix timestamp). The value must be greater than or equal to current time + 60, meaning the expiry date is at least 60 seconds from now. When both Expiration and ExpirationTTL are filled, ExpirationTTL takes precedence. If left empty, the key-value pair will never expire.
                     * 
                     */
                    int64_t GetExpiration() const;

                    /**
                     * 设置Expiry date of the key-value pair, absolute time in seconds, represents the seconds elapsed since 00:00:00 on January 1, 1970 (UTC) (Unix timestamp). The value must be greater than or equal to current time + 60, meaning the expiry date is at least 60 seconds from now. When both Expiration and ExpirationTTL are filled, ExpirationTTL takes precedence. If left empty, the key-value pair will never expire.
                     * @param _expiration Expiry date of the key-value pair, absolute time in seconds, represents the seconds elapsed since 00:00:00 on January 1, 1970 (UTC) (Unix timestamp). The value must be greater than or equal to current time + 60, meaning the expiry date is at least 60 seconds from now. When both Expiration and ExpirationTTL are filled, ExpirationTTL takes precedence. If left empty, the key-value pair will never expire.
                     * 
                     */
                    void SetExpiration(const int64_t& _expiration);

                    /**
                     * 判断参数 Expiration 是否已赋值
                     * @return Expiration 是否已赋值
                     * 
                     */
                    bool ExpirationHasBeenSet() const;

                    /**
                     * 获取The survival time of the key-value pair is a relative time in seconds, indicating that the data will expire after transit of specified seconds. Value ranges from 60. When both Expiration and ExpirationTTL are filled, ExpirationTTL takes precedence; if left empty, the key-value pair will never expire.
                     * @return ExpirationTTL The survival time of the key-value pair is a relative time in seconds, indicating that the data will expire after transit of specified seconds. Value ranges from 60. When both Expiration and ExpirationTTL are filled, ExpirationTTL takes precedence; if left empty, the key-value pair will never expire.
                     * 
                     */
                    int64_t GetExpirationTTL() const;

                    /**
                     * 设置The survival time of the key-value pair is a relative time in seconds, indicating that the data will expire after transit of specified seconds. Value ranges from 60. When both Expiration and ExpirationTTL are filled, ExpirationTTL takes precedence; if left empty, the key-value pair will never expire.
                     * @param _expirationTTL The survival time of the key-value pair is a relative time in seconds, indicating that the data will expire after transit of specified seconds. Value ranges from 60. When both Expiration and ExpirationTTL are filled, ExpirationTTL takes precedence; if left empty, the key-value pair will never expire.
                     * 
                     */
                    void SetExpirationTTL(const int64_t& _expirationTTL);

                    /**
                     * 判断参数 ExpirationTTL 是否已赋值
                     * @return ExpirationTTL 是否已赋值
                     * 
                     */
                    bool ExpirationTTLHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Namespace name.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Key name, with a length of 1-512 characters, supports valid UTF-8 characters.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Key-value. Cannot be empty and supports up to 1 MB. Supports storing string data.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Expiry date of the key-value pair, absolute time in seconds, represents the seconds elapsed since 00:00:00 on January 1, 1970 (UTC) (Unix timestamp). The value must be greater than or equal to current time + 60, meaning the expiry date is at least 60 seconds from now. When both Expiration and ExpirationTTL are filled, ExpirationTTL takes precedence. If left empty, the key-value pair will never expire.
                     */
                    int64_t m_expiration;
                    bool m_expirationHasBeenSet;

                    /**
                     * The survival time of the key-value pair is a relative time in seconds, indicating that the data will expire after transit of specified seconds. Value ranges from 60. When both Expiration and ExpirationTTL are filled, ExpirationTTL takes precedence; if left empty, the key-value pair will never expire.
                     */
                    int64_t m_expirationTTL;
                    bool m_expirationTTLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVPUTREQUEST_H_
