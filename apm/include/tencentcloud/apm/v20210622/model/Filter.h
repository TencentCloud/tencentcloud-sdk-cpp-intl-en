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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_FILTER_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_FILTER_H_

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
                * Queries filter parameters.
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filtering method (=, !=, in).
                     * @return Type Filtering method (=, !=, in).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Filtering method (=, !=, in).
                     * @param _type Filtering method (=, !=, in).
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
                     * 获取Filter dimension name.
                     * @return Key Filter dimension name.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Filter dimension name.
                     * @param _key Filter dimension name.
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
                     * 获取Filter value. uses commas to separate multiple values in in filtering method.
                     * @return Value Filter value. uses commas to separate multiple values in in filtering method.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Filter value. uses commas to separate multiple values in in filtering method.
                     * @param _value Filter value. uses commas to separate multiple values in in filtering method.
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
                     * Filtering method (=, !=, in).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Filter dimension name.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Filter value. uses commas to separate multiple values in in filtering method.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_FILTER_H_
