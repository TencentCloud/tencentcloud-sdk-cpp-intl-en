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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_KEYVALUEARRAYINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_KEYVALUEARRAYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/ValueInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Index key-value information
                */
                class KeyValueArrayInfo : public AbstractModel
                {
                public:
                    KeyValueArrayInfo();
                    ~KeyValueArrayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Field requiring Key-Value or Meta Field Index configuration
                     * @return Key Field requiring Key-Value or Meta Field Index configuration
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Field requiring Key-Value or Meta Field Index configuration
                     * @param _key Field requiring Key-Value or Meta Field Index configuration
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
                     * 获取Field index description
                     * @return Value Field index description
                     * 
                     */
                    ValueInfo GetValue() const;

                    /**
                     * 设置Field index description
                     * @param _value Field index description
                     * 
                     */
                    void SetValue(const ValueInfo& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Field requiring Key-Value or Meta Field Index configuration
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Field index description
                     */
                    ValueInfo m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_KEYVALUEARRAYINFO_H_
