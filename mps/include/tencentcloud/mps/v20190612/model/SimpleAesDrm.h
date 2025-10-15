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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SIMPLEAESDRM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SIMPLEAESDRM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The AES-128 encryption details.
                */
                class SimpleAesDrm : public AbstractModel
                {
                public:
                    SimpleAesDrm();
                    ~SimpleAesDrm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The URI of decryption key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uri The URI of decryption key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUri() const;

                    /**
                     * 设置The URI of decryption key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uri The URI of decryption key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUri(const std::string& _uri);

                    /**
                     * 判断参数 Uri 是否已赋值
                     * @return Uri 是否已赋值
                     * 
                     */
                    bool UriHasBeenSet() const;

                    /**
                     * 获取Encryption key (32-byte hexadecimal string).
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Key Encryption key (32-byte hexadecimal string).
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Encryption key (32-byte hexadecimal string).
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _key Encryption key (32-byte hexadecimal string).
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Initialization vector for encryption (32-byte hexadecimal string).
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Vector Initialization vector for encryption (32-byte hexadecimal string).
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetVector() const;

                    /**
                     * 设置Initialization vector for encryption (32-byte hexadecimal string).
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _vector Initialization vector for encryption (32-byte hexadecimal string).
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetVector(const std::string& _vector);

                    /**
                     * 判断参数 Vector 是否已赋值
                     * @return Vector 是否已赋值
                     * 
                     */
                    bool VectorHasBeenSet() const;

                private:

                    /**
                     * The URI of decryption key.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                    /**
                     * Encryption key (32-byte hexadecimal string).
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Initialization vector for encryption (32-byte hexadecimal string).
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_vector;
                    bool m_vectorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SIMPLEAESDRM_H_
