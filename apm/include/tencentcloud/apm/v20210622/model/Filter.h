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
                     * 获取<p>Filter method (=, !=, in)</p>
                     * @return Type <p>Filter method (=, !=, in)</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Filter method (=, !=, in)</p>
                     * @param _type <p>Filter method (=, !=, in)</p>
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
                     * 获取<p>Filter dimension name</p><p>For details, see the actual interface field description</p>
                     * @return Key <p>Filter dimension name</p><p>For details, see the actual interface field description</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>Filter dimension name</p><p>For details, see the actual interface field description</p>
                     * @param _key <p>Filter dimension name</p><p>For details, see the actual interface field description</p>
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
                     * 获取<p>Filter value. Use comma-separated multiple values for in filtering method.</p>
                     * @return Value <p>Filter value. Use comma-separated multiple values for in filtering method.</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>Filter value. Use comma-separated multiple values for in filtering method.</p>
                     * @param _value <p>Filter value. Use comma-separated multiple values for in filtering method.</p>
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
                     * <p>Filter method (=, !=, in)</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Filter dimension name</p><p>For details, see the actual interface field description</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>Filter value. Use comma-separated multiple values for in filtering method.</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_FILTER_H_
