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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTRISKASSESSMENTEXTRAINFOPAIR_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTRISKASSESSMENTEXTRAINFOPAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * Risk assessment extended attribute key-value pairs.
                */
                class OutputRiskAssessmentExtraInfoPair : public AbstractModel
                {
                public:
                    OutputRiskAssessmentExtraInfoPair();
                    ~OutputRiskAssessmentExtraInfoPair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key.
Note: This field may return null, indicating that no valid value is found.
                     * @return Key Key.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Key.
Note: This field may return null, indicating that no valid value is found.
                     * @param _key Key.
Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Value.
Note: This field may return null, indicating that no valid value is found.
                     * @return Value Value.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Value.
Note: This field may return null, indicating that no valid value is found.
                     * @param _value Value.
Note: This field may return null, indicating that no valid value is found.
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
                     * Key.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Value.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTRISKASSESSMENTEXTRAINFOPAIR_H_
