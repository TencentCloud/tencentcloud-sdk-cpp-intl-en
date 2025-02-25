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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_SPANTAG_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_SPANTAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * Tag.
                */
                class SpanTag : public AbstractModel
                {
                public:
                    SpanTag();
                    ~SpanTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tag type.
                     * @return Type Tag type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Tag type.
                     * @param _type Tag type.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Tag key.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Key Tag key.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Tag key.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _key Tag key.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Tag value
.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Value Tag value
.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Tag value
.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _value Tag value
.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * Tag type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Tag key.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Tag value
.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_SPANTAG_H_
