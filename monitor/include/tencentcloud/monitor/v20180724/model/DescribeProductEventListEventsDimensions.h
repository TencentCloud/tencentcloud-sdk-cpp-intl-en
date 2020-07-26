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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTEVENTSDIMENSIONS_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTEVENTSDIMENSIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Dimensions of events returned by the DescribeProductEventList API
                */
                class DescribeProductEventListEventsDimensions : public AbstractModel
                {
                public:
                    DescribeProductEventListEventsDimensions();
                    ~DescribeProductEventListEventsDimensions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Dimension name in English.
Note: This field may return null, indicating that no valid value was found.
                     * @return Key Dimension name in English.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Dimension name in English.
Note: This field may return null, indicating that no valid value was found.
                     * @param Key Dimension name in English.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Dimension name in Chinese.
Note: This field may return null, indicating that no valid value was found.
                     * @return Name Dimension name in Chinese.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Dimension name in Chinese.
Note: This field may return null, indicating that no valid value was found.
                     * @param Name Dimension name in Chinese.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Dimension value.
Note: This field may return null, indicating that no valid value was found.
                     * @return Value Dimension value.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Dimension value.
Note: This field may return null, indicating that no valid value was found.
                     * @param Value Dimension value.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Dimension name in English.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Dimension name in Chinese.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Dimension value.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTEVENTSDIMENSIONS_H_
