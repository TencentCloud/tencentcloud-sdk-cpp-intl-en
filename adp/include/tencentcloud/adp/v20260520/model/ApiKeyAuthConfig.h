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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APIKEYAUTHCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APIKEYAUTHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ApiKey authentication configuration
                */
                class ApiKeyAuthConfig : public AbstractModel
                {
                public:
                    ApiKeyAuthConfig();
                    ~ApiKeyAuthConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key position. HEADER/QUERY

Enumeration values:
| uint | Description |
| --- | --- |
Header authentication
| 1 | Query authentication |
                     * @return KeyLocation Key position. HEADER/QUERY

Enumeration values:
| uint | Description |
| --- | --- |
Header authentication
| 1 | Query authentication |
                     * 
                     */
                    int64_t GetKeyLocation() const;

                    /**
                     * 设置Key position. HEADER/QUERY

Enumeration values:
| uint | Description |
| --- | --- |
Header authentication
| 1 | Query authentication |
                     * @param _keyLocation Key position. HEADER/QUERY

Enumeration values:
| uint | Description |
| --- | --- |
Header authentication
| 1 | Query authentication |
                     * 
                     */
                    void SetKeyLocation(const int64_t& _keyLocation);

                    /**
                     * 判断参数 KeyLocation 是否已赋值
                     * @return KeyLocation 是否已赋值
                     * 
                     */
                    bool KeyLocationHasBeenSet() const;

                    /**
                     * 获取Key parameter name
                     * @return KeyParamName Key parameter name
                     * 
                     */
                    std::string GetKeyParamName() const;

                    /**
                     * 设置Key parameter name
                     * @param _keyParamName Key parameter name
                     * 
                     */
                    void SetKeyParamName(const std::string& _keyParamName);

                    /**
                     * 判断参数 KeyParamName 是否已赋值
                     * @return KeyParamName 是否已赋值
                     * 
                     */
                    bool KeyParamNameHasBeenSet() const;

                    /**
                     * 获取Key parameter value
                     * @return KeyParamValue Key parameter value
                     * 
                     */
                    std::string GetKeyParamValue() const;

                    /**
                     * 设置Key parameter value
                     * @param _keyParamValue Key parameter value
                     * 
                     */
                    void SetKeyParamValue(const std::string& _keyParamValue);

                    /**
                     * 判断参数 KeyParamValue 是否已赋值
                     * @return KeyParamValue 是否已赋值
                     * 
                     */
                    bool KeyParamValueHasBeenSet() const;

                private:

                    /**
                     * Key position. HEADER/QUERY

Enumeration values:
| uint | Description |
| --- | --- |
Header authentication
| 1 | Query authentication |
                     */
                    int64_t m_keyLocation;
                    bool m_keyLocationHasBeenSet;

                    /**
                     * Key parameter name
                     */
                    std::string m_keyParamName;
                    bool m_keyParamNameHasBeenSet;

                    /**
                     * Key parameter value
                     */
                    std::string m_keyParamValue;
                    bool m_keyParamValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APIKEYAUTHCONFIG_H_
