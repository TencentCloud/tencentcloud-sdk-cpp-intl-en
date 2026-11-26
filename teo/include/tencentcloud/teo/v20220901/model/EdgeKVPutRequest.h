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
                     * 获取Key name, 1-512 characters long, supports valid UTF-8 characters.
                     * @return Key Key name, 1-512 characters long, supports valid UTF-8 characters.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Key name, 1-512 characters long, supports valid UTF-8 characters.
                     * @param _key Key name, 1-512 characters long, supports valid UTF-8 characters.
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
                     * 获取Key-value. It cannot be empty and supports up to 1 MB. It supports storing string data.
                     * @return Value Key-value. It cannot be empty and supports up to 1 MB. It supports storing string data.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Key-value. It cannot be empty and supports up to 1 MB. It supports storing string data.
                     * @param _value Key-value. It cannot be empty and supports up to 1 MB. It supports storing string data.
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
                     * 获取Expiration time of the key-value pair. It is an absolute time in seconds, representing the number of seconds elapsed since 00:00:00 (UTC) on January 1, 1970 (Unix timestamp). The value must be greater than or equal to the current time + 60, meaning the Expiration time must be at least 60 seconds from now. If both Expiration and ExpirationTTL are filled in, ExpirationTTL takes precedence. If both are left empty, the key-value pair never expires.
                     * @return Expiration Expiration time of the key-value pair. It is an absolute time in seconds, representing the number of seconds elapsed since 00:00:00 (UTC) on January 1, 1970 (Unix timestamp). The value must be greater than or equal to the current time + 60, meaning the Expiration time must be at least 60 seconds from now. If both Expiration and ExpirationTTL are filled in, ExpirationTTL takes precedence. If both are left empty, the key-value pair never expires.
                     * 
                     */
                    int64_t GetExpiration() const;

                    /**
                     * 设置Expiration time of the key-value pair. It is an absolute time in seconds, representing the number of seconds elapsed since 00:00:00 (UTC) on January 1, 1970 (Unix timestamp). The value must be greater than or equal to the current time + 60, meaning the Expiration time must be at least 60 seconds from now. If both Expiration and ExpirationTTL are filled in, ExpirationTTL takes precedence. If both are left empty, the key-value pair never expires.
                     * @param _expiration Expiration time of the key-value pair. It is an absolute time in seconds, representing the number of seconds elapsed since 00:00:00 (UTC) on January 1, 1970 (Unix timestamp). The value must be greater than or equal to the current time + 60, meaning the Expiration time must be at least 60 seconds from now. If both Expiration and ExpirationTTL are filled in, ExpirationTTL takes precedence. If both are left empty, the key-value pair never expires.
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
                     * 获取Survival time of the key-value pair, relative time, in seconds. It means the data will expire after the specified seconds following the write. Value range: equal to or greater than 60. If both Expiration and ExpirationTTL are filled in, ExpirationTTL takes precedence. If both are left empty, the key-value pair will never expire.
                     * @return ExpirationTTL Survival time of the key-value pair, relative time, in seconds. It means the data will expire after the specified seconds following the write. Value range: equal to or greater than 60. If both Expiration and ExpirationTTL are filled in, ExpirationTTL takes precedence. If both are left empty, the key-value pair will never expire.
                     * 
                     */
                    int64_t GetExpirationTTL() const;

                    /**
                     * 设置Survival time of the key-value pair, relative time, in seconds. It means the data will expire after the specified seconds following the write. Value range: equal to or greater than 60. If both Expiration and ExpirationTTL are filled in, ExpirationTTL takes precedence. If both are left empty, the key-value pair will never expire.
                     * @param _expirationTTL Survival time of the key-value pair, relative time, in seconds. It means the data will expire after the specified seconds following the write. Value range: equal to or greater than 60. If both Expiration and ExpirationTTL are filled in, ExpirationTTL takes precedence. If both are left empty, the key-value pair will never expire.
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
                     * Key name, 1-512 characters long, supports valid UTF-8 characters.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Key-value. It cannot be empty and supports up to 1 MB. It supports storing string data.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Expiration time of the key-value pair. It is an absolute time in seconds, representing the number of seconds elapsed since 00:00:00 (UTC) on January 1, 1970 (Unix timestamp). The value must be greater than or equal to the current time + 60, meaning the Expiration time must be at least 60 seconds from now. If both Expiration and ExpirationTTL are filled in, ExpirationTTL takes precedence. If both are left empty, the key-value pair never expires.
                     */
                    int64_t m_expiration;
                    bool m_expirationHasBeenSet;

                    /**
                     * Survival time of the key-value pair, relative time, in seconds. It means the data will expire after the specified seconds following the write. Value range: equal to or greater than 60. If both Expiration and ExpirationTTL are filled in, ExpirationTTL takes precedence. If both are left empty, the key-value pair will never expire.
                     */
                    int64_t m_expirationTTL;
                    bool m_expirationTTLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVPUTREQUEST_H_
