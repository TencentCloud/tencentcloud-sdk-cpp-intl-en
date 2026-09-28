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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_HTTPHEADERINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_HTTPHEADERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * HTTP Header information.
                */
                class HTTPHeaderInfo : public AbstractModel
                {
                public:
                    HTTPHeaderInfo();
                    ~HTTPHeaderInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key of the HTTP Header. Length: 1–40 characters. Supported character sets: a-z a-z 0-9 - _
Chinese characters are not allowed. No support for Host and Cookie.
                     * @return Key Key of the HTTP Header. Length: 1–40 characters. Supported character sets: a-z a-z 0-9 - _
Chinese characters are not allowed. No support for Host and Cookie.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Key of the HTTP Header. Length: 1–40 characters. Supported character sets: a-z a-z 0-9 - _
Chinese characters are not allowed. No support for Host and Cookie.
                     * @param _key Key of the HTTP Header. Length: 1–40 characters. Supported character sets: a-z a-z 0-9 - _
Chinese characters are not allowed. No support for Host and Cookie.
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
                     * 获取Value of the HTTP Header. Length: 1-128 characters. Printable characters supported.
Unsupported. It cannot begin or end with a space, and cannot end with a backslash.
                     * @return Values Value of the HTTP Header. Length: 1-128 characters. Printable characters supported.
Unsupported. It cannot begin or end with a space, and cannot end with a backslash.
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Value of the HTTP Header. Length: 1-128 characters. Printable characters supported.
Unsupported. It cannot begin or end with a space, and cannot end with a backslash.
                     * @param _values Value of the HTTP Header. Length: 1-128 characters. Printable characters supported.
Unsupported. It cannot begin or end with a space, and cannot end with a backslash.
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * Key of the HTTP Header. Length: 1–40 characters. Supported character sets: a-z a-z 0-9 - _
Chinese characters are not allowed. No support for Host and Cookie.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Value of the HTTP Header. Length: 1-128 characters. Printable characters supported.
Unsupported. It cannot begin or end with a space, and cannot end with a backslash.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_HTTPHEADERINFO_H_
