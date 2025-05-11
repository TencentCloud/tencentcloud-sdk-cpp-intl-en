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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_METADATAITEM_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_METADATAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Custom metadata key and value.
                */
                class MetadataItem : public AbstractModel
                {
                public:
                    MetadataItem();
                    ~MetadataItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Custom metadata key. it must comply with the regular expression ^[a-zA-Z0-9_-]+$. the length is less than or equal to 128 bytes (case-sensitive).

                     * @return Key Custom metadata key. it must comply with the regular expression ^[a-zA-Z0-9_-]+$. the length is less than or equal to 128 bytes (case-sensitive).

                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Custom metadata key. it must comply with the regular expression ^[a-zA-Z0-9_-]+$. the length is less than or equal to 128 bytes (case-sensitive).

                     * @param _key Custom metadata key. it must comply with the regular expression ^[a-zA-Z0-9_-]+$. the length is less than or equal to 128 bytes (case-sensitive).

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
                     * 获取Specifies a custom metadata value. it supports any data . The size is &le; 256 KB. it is case-sensitive.
                     * @return Value Specifies a custom metadata value. it supports any data . The size is &le; 256 KB. it is case-sensitive.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Specifies a custom metadata value. it supports any data . The size is &le; 256 KB. it is case-sensitive.
                     * @param _value Specifies a custom metadata value. it supports any data . The size is &le; 256 KB. it is case-sensitive.
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
                     * Custom metadata key. it must comply with the regular expression ^[a-zA-Z0-9_-]+$. the length is less than or equal to 128 bytes (case-sensitive).

                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Specifies a custom metadata value. it supports any data . The size is &le; 256 KB. it is case-sensitive.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_METADATAITEM_H_
