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
                     * 获取Key name. The length is 1-512 characters. Allowed characters include letters, digits, hyphens, and underscores.
                     * @return Key Key name. The length is 1-512 characters. Allowed characters include letters, digits, hyphens, and underscores.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Key name. The length is 1-512 characters. Allowed characters include letters, digits, hyphens, and underscores.
                     * @param _key Key name. The length is 1-512 characters. Allowed characters include letters, digits, hyphens, and underscores.
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
                     * 获取Expiration time, absolute time. It means the seconds elapsed since midnight (UTC/GMT) on January 1, 1970, and cannot be earlier than the current time. If both Expiration and ExpirationTTL are filled in, ExpirationTTL takes precedence. If neither Expiration nor ExpirationTTL is specified, the key-value pair will never expire.
                     * @return Expiration Expiration time, absolute time. It means the seconds elapsed since midnight (UTC/GMT) on January 1, 1970, and cannot be earlier than the current time. If both Expiration and ExpirationTTL are filled in, ExpirationTTL takes precedence. If neither Expiration nor ExpirationTTL is specified, the key-value pair will never expire.
                     * 
                     */
                    int64_t GetExpiration() const;

                    /**
                     * 设置Expiration time, absolute time. It means the seconds elapsed since midnight (UTC/GMT) on January 1, 1970, and cannot be earlier than the current time. If both Expiration and ExpirationTTL are filled in, ExpirationTTL takes precedence. If neither Expiration nor ExpirationTTL is specified, the key-value pair will never expire.
                     * @param _expiration Expiration time, absolute time. It means the seconds elapsed since midnight (UTC/GMT) on January 1, 1970, and cannot be earlier than the current time. If both Expiration and ExpirationTTL are filled in, ExpirationTTL takes precedence. If neither Expiration nor ExpirationTTL is specified, the key-value pair will never expire.
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
                     * 获取Expiration time, relative time, in seconds. Indicates the data will expire after the specified seconds, must be greater than 0. If both Expiration and ExpirationTTL are filled in, ExpirationTTL takes precedence. If neither Expiration nor ExpirationTTL is specified, the key-value pair will never expire.
                     * @return ExpirationTTL Expiration time, relative time, in seconds. Indicates the data will expire after the specified seconds, must be greater than 0. If both Expiration and ExpirationTTL are filled in, ExpirationTTL takes precedence. If neither Expiration nor ExpirationTTL is specified, the key-value pair will never expire.
                     * 
                     */
                    int64_t GetExpirationTTL() const;

                    /**
                     * 设置Expiration time, relative time, in seconds. Indicates the data will expire after the specified seconds, must be greater than 0. If both Expiration and ExpirationTTL are filled in, ExpirationTTL takes precedence. If neither Expiration nor ExpirationTTL is specified, the key-value pair will never expire.
                     * @param _expirationTTL Expiration time, relative time, in seconds. Indicates the data will expire after the specified seconds, must be greater than 0. If both Expiration and ExpirationTTL are filled in, ExpirationTTL takes precedence. If neither Expiration nor ExpirationTTL is specified, the key-value pair will never expire.
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
                     * Key name. The length is 1-512 characters. Allowed characters include letters, digits, hyphens, and underscores.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Key-value. Cannot be empty and supports up to 1 MB. Supports storing string data.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Expiration time, absolute time. It means the seconds elapsed since midnight (UTC/GMT) on January 1, 1970, and cannot be earlier than the current time. If both Expiration and ExpirationTTL are filled in, ExpirationTTL takes precedence. If neither Expiration nor ExpirationTTL is specified, the key-value pair will never expire.
                     */
                    int64_t m_expiration;
                    bool m_expirationHasBeenSet;

                    /**
                     * Expiration time, relative time, in seconds. Indicates the data will expire after the specified seconds, must be greater than 0. If both Expiration and ExpirationTTL are filled in, ExpirationTTL takes precedence. If neither Expiration nor ExpirationTTL is specified, the key-value pair will never expire.
                     */
                    int64_t m_expirationTTL;
                    bool m_expirationTTLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVPUTREQUEST_H_
