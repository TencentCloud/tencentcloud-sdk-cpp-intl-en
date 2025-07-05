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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RECORDFIELD_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RECORDFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Common Record Fields, agreed with the server to pass in legitimate key-value pairs
                */
                class RecordField : public AbstractModel
                {
                public:
                    RecordField();
                    ~RecordField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Field Name, Extended Field Name
                     * @return Name Field Name, Extended Field Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Field Name, Extended Field Name
                     * @param _name Field Name, Extended Field Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Field Value, Extended Field Value
                     * @return Value Field Value, Extended Field Value
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Field Value, Extended Field Value
                     * @param _value Field Value, Extended Field Value
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
                     * Field Name, Extended Field Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Field Value, Extended Field Value
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RECORDFIELD_H_
