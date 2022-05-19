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

#ifndef TENCENTCLOUD_STS_V20180813_MODEL_TAG_H_
#define TENCENTCLOUD_STS_V20180813_MODEL_TAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sts
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * Information on tags
                */
                class Tag : public AbstractModel
                {
                public:
                    Tag();
                    ~Tag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tag key. It’s up to 128 characters and case-sensitive.
                     * @return Key Tag key. It’s up to 128 characters and case-sensitive.
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Tag key. It’s up to 128 characters and case-sensitive.
                     * @param Key Tag key. It’s up to 128 characters and case-sensitive.
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Tag value. It’s up to 256 characters and case-sensitive.
                     * @return Value Tag value. It’s up to 256 characters and case-sensitive.
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Tag value. It’s up to 256 characters and case-sensitive.
                     * @param Value Tag value. It’s up to 256 characters and case-sensitive.
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Tag key. It’s up to 128 characters and case-sensitive.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Tag value. It’s up to 256 characters and case-sensitive.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_STS_V20180813_MODEL_TAG_H_
