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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_INPUTPARAMETER_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_INPUTPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * Parameter value
                */
                class InputParameter : public AbstractModel
                {
                public:
                    InputParameter();
                    ~InputParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter name
                     * @return ParameterKey Parameter name
                     * 
                     */
                    std::string GetParameterKey() const;

                    /**
                     * 设置Parameter name
                     * @param _parameterKey Parameter name
                     * 
                     */
                    void SetParameterKey(const std::string& _parameterKey);

                    /**
                     * 判断参数 ParameterKey 是否已赋值
                     * @return ParameterKey 是否已赋值
                     * 
                     */
                    bool ParameterKeyHasBeenSet() const;

                    /**
                     * 获取Parameter type. Required type: Require, optional type: Optional.
                     * @return Type Parameter type. Required type: Require, optional type: Optional.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Parameter type. Required type: Require, optional type: Optional.
                     * @param _type Parameter type. Required type: Require, optional type: Optional.
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
                     * 获取Parameter value

Note: This field may return null, indicating that no valid value is found.
                     * @return Value Parameter value

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Parameter value

Note: This field may return null, indicating that no valid value is found.
                     * @param _value Parameter value

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
                     * Parameter name
                     */
                    std::string m_parameterKey;
                    bool m_parameterKeyHasBeenSet;

                    /**
                     * Parameter type. Required type: Require, optional type: Optional.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Parameter value

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_INPUTPARAMETER_H_
