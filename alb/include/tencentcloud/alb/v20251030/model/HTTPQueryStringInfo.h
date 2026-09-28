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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_HTTPQUERYSTRINGINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_HTTPQUERYSTRINGINFO_H_

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
                * HTTP query string information
                */
                class HTTPQueryStringInfo : public AbstractModel
                {
                public:
                    HTTPQueryStringInfo();
                    ~HTTPQueryStringInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key of the query string. Length: 1–16 characters. Supports printable characters. Does not support spaces or #[]{}\|<>&.
Supports * as a multi-character wildcard and ? as a single-character wildcard.


                     * @return Key Key of the query string. Length: 1–16 characters. Supports printable characters. Does not support spaces or #[]{}\|<>&.
Supports * as a multi-character wildcard and ? as a single-character wildcard.


                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Key of the query string. Length: 1–16 characters. Supports printable characters. Does not support spaces or #[]{}\|<>&.
Supports * as a multi-character wildcard and ? as a single-character wildcard.


                     * @param _key Key of the query string. Length: 1–16 characters. Supports printable characters. Does not support spaces or #[]{}\|<>&.
Supports * as a multi-character wildcard and ? as a single-character wildcard.


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
                     * 获取Value of the query string. Length: 1–128 characters. Supports printable characters. Does not support spaces or #[]{}\|<>&.
Supports * as a multi-character wildcard and ? as a single-character wildcard.
                     * @return Value Value of the query string. Length: 1–128 characters. Supports printable characters. Does not support spaces or #[]{}\|<>&.
Supports * as a multi-character wildcard and ? as a single-character wildcard.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Value of the query string. Length: 1–128 characters. Supports printable characters. Does not support spaces or #[]{}\|<>&.
Supports * as a multi-character wildcard and ? as a single-character wildcard.
                     * @param _value Value of the query string. Length: 1–128 characters. Supports printable characters. Does not support spaces or #[]{}\|<>&.
Supports * as a multi-character wildcard and ? as a single-character wildcard.
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
                     * Key of the query string. Length: 1–16 characters. Supports printable characters. Does not support spaces or #[]{}\|<>&.
Supports * as a multi-character wildcard and ? as a single-character wildcard.


                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Value of the query string. Length: 1–128 characters. Supports printable characters. Does not support spaces or #[]{}\|<>&.
Supports * as a multi-character wildcard and ? as a single-character wildcard.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_HTTPQUERYSTRINGINFO_H_
