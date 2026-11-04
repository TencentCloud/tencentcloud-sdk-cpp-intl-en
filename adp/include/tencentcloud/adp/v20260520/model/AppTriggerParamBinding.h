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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERPARAMBINDING_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERPARAMBINDING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppTriggerParamBindingValue.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * AppTriggerParamBinding
                */
                class AppTriggerParamBinding : public AbstractModel
                {
                public:
                    AppTriggerParamBinding();
                    ~AppTriggerParamBinding() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Parameter name.</p>
                     * @return ParamName <p>Parameter name.</p>
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置<p>Parameter name.</p>
                     * @param _paramName <p>Parameter name.</p>
                     * 
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     * 
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取<p>Parameter type</p><p>Enumeration values:</p><ul><li>0: string</li><li>1: integer</li><li>2: floating-point number</li><li>4: object</li><li>5: string array</li><li>6: integer array</li><li>7: floating-point number array</li><li>8: boolean value array</li><li>3: boolean value</li><li>9: object array</li><li>10: file</li><li>11: document</li><li>12: image</li><li>13: audio</li><li>14: video</li><li>15: file array</li><li>16: document array</li><li>17: image array</li><li>18: audio array</li><li>19: video array</li><li>20: nested array</li><li>22: key</li><li>99: null</li><li>100: unspecified type, for OneOf and AnyOf scenarios</li></ul>
                     * @return ParamType <p>Parameter type</p><p>Enumeration values:</p><ul><li>0: string</li><li>1: integer</li><li>2: floating-point number</li><li>4: object</li><li>5: string array</li><li>6: integer array</li><li>7: floating-point number array</li><li>8: boolean value array</li><li>3: boolean value</li><li>9: object array</li><li>10: file</li><li>11: document</li><li>12: image</li><li>13: audio</li><li>14: video</li><li>15: file array</li><li>16: document array</li><li>17: image array</li><li>18: audio array</li><li>19: video array</li><li>20: nested array</li><li>22: key</li><li>99: null</li><li>100: unspecified type, for OneOf and AnyOf scenarios</li></ul>
                     * 
                     */
                    int64_t GetParamType() const;

                    /**
                     * 设置<p>Parameter type</p><p>Enumeration values:</p><ul><li>0: string</li><li>1: integer</li><li>2: floating-point number</li><li>4: object</li><li>5: string array</li><li>6: integer array</li><li>7: floating-point number array</li><li>8: boolean value array</li><li>3: boolean value</li><li>9: object array</li><li>10: file</li><li>11: document</li><li>12: image</li><li>13: audio</li><li>14: video</li><li>15: file array</li><li>16: document array</li><li>17: image array</li><li>18: audio array</li><li>19: video array</li><li>20: nested array</li><li>22: key</li><li>99: null</li><li>100: unspecified type, for OneOf and AnyOf scenarios</li></ul>
                     * @param _paramType <p>Parameter type</p><p>Enumeration values:</p><ul><li>0: string</li><li>1: integer</li><li>2: floating-point number</li><li>4: object</li><li>5: string array</li><li>6: integer array</li><li>7: floating-point number array</li><li>8: boolean value array</li><li>3: boolean value</li><li>9: object array</li><li>10: file</li><li>11: document</li><li>12: image</li><li>13: audio</li><li>14: video</li><li>15: file array</li><li>16: document array</li><li>17: image array</li><li>18: audio array</li><li>19: video array</li><li>20: nested array</li><li>22: key</li><li>99: null</li><li>100: unspecified type, for OneOf and AnyOf scenarios</li></ul>
                     * 
                     */
                    void SetParamType(const int64_t& _paramType);

                    /**
                     * 判断参数 ParamType 是否已赋值
                     * @return ParamType 是否已赋值
                     * 
                     */
                    bool ParamTypeHasBeenSet() const;

                    /**
                     * 获取<p>Parameter value</p>
                     * @return Value <p>Parameter value</p>
                     * 
                     */
                    AppTriggerParamBindingValue GetValue() const;

                    /**
                     * 设置<p>Parameter value</p>
                     * @param _value <p>Parameter value</p>
                     * 
                     */
                    void SetValue(const AppTriggerParamBindingValue& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * <p>Parameter name.</p>
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * <p>Parameter type</p><p>Enumeration values:</p><ul><li>0: string</li><li>1: integer</li><li>2: floating-point number</li><li>4: object</li><li>5: string array</li><li>6: integer array</li><li>7: floating-point number array</li><li>8: boolean value array</li><li>3: boolean value</li><li>9: object array</li><li>10: file</li><li>11: document</li><li>12: image</li><li>13: audio</li><li>14: video</li><li>15: file array</li><li>16: document array</li><li>17: image array</li><li>18: audio array</li><li>19: video array</li><li>20: nested array</li><li>22: key</li><li>99: null</li><li>100: unspecified type, for OneOf and AnyOf scenarios</li></ul>
                     */
                    int64_t m_paramType;
                    bool m_paramTypeHasBeenSet;

                    /**
                     * <p>Parameter value</p>
                     */
                    AppTriggerParamBindingValue m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERPARAMBINDING_H_
