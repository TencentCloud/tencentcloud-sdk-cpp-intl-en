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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMIZEDHEADER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMIZEDHEADER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Custom header that can be configured for HTTP/HTTPS health check policies under a LoadBalancer.
                */
                class CustomizedHeader : public AbstractModel
                {
                public:
                    CustomizedHeader();
                    ~CustomizedHeader() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Custom header key.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return Key Custom header key.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Custom header key.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _key Custom header key.
Note: This field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取Custom header value.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return Value Custom header value.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Custom header value.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _value Custom header value.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Custom header key.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Custom header value.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMIZEDHEADER_H_
