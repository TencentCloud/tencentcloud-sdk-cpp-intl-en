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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DETECTLENGTHLIMITCONDITION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DETECTLENGTHLIMITCONDITION_H_

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
                * Length limit detection condition configuration.
                */
                class DetectLengthLimitCondition : public AbstractModel
                {
                public:
                    DetectLengthLimitCondition();
                    ~DetectLengthLimitCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter name of the matched condition. Values:.
<li>`body_depth`: detection depth of the request body packet part.</li>
                     * @return Name Parameter name of the matched condition. Values:.
<li>`body_depth`: detection depth of the request body packet part.</li>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Parameter name of the matched condition. Values:.
<li>`body_depth`: detection depth of the request body packet part.</li>
                     * @param _name Parameter name of the matched condition. Values:.
<li>`body_depth`: detection depth of the request body packet part.</li>
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
                     * 获取Parameter value of the matched condition, used in pairs with the `Name` parameter.
When the `Name` value is body_depth, `Values` only support passing in a single value. Values:
<li>`8KB`;</li>
<li>`64KB`;</li>
<li>`128KB`.</li>
                     * @return Values Parameter value of the matched condition, used in pairs with the `Name` parameter.
When the `Name` value is body_depth, `Values` only support passing in a single value. Values:
<li>`8KB`;</li>
<li>`64KB`;</li>
<li>`128KB`.</li>
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Parameter value of the matched condition, used in pairs with the `Name` parameter.
When the `Name` value is body_depth, `Values` only support passing in a single value. Values:
<li>`8KB`;</li>
<li>`64KB`;</li>
<li>`128KB`.</li>
                     * @param _values Parameter value of the matched condition, used in pairs with the `Name` parameter.
When the `Name` value is body_depth, `Values` only support passing in a single value. Values:
<li>`8KB`;</li>
<li>`64KB`;</li>
<li>`128KB`.</li>
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * Parameter name of the matched condition. Values:.
<li>`body_depth`: detection depth of the request body packet part.</li>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Parameter value of the matched condition, used in pairs with the `Name` parameter.
When the `Name` value is body_depth, `Values` only support passing in a single value. Values:
<li>`8KB`;</li>
<li>`64KB`;</li>
<li>`128KB`.</li>
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DETECTLENGTHLIMITCONDITION_H_
