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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERPARAMSCHEMA_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERPARAMSCHEMA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppTriggerParamSchema.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * AppTriggerParamSchema
                */
                class AppTriggerParamSchema : public AbstractModel
                {
                public:
                    AppTriggerParamSchema();
                    ~AppTriggerParamSchema() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Parameter name</p>
                     * @return ParamName <p>Parameter name</p>
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置<p>Parameter name</p>
                     * @param _paramName <p>Parameter name</p>
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
                     * 获取<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>PARAM_TYPE_STRING</td><td>0</td><td>String</td></tr><tr><td>PARAM_TYPE_INT</td><td>1</td><td>Integer</td></tr><tr><td>PARAM_TYPE_FLOAT</td><td>2</td><td>Floating-point number</td></tr><tr><td>PARAM_TYPE_BOOL</td><td>3</td><td>Boolean value</td></tr><tr><td>PARAM_TYPE_OBJECT</td><td>4</td><td>Object</td></tr><tr><td>PARAM_TYPE_ARRAY_STRING</td><td>5</td><td>String array</td></tr><tr><td>PARAM_TYPE_ARRAY_INT</td><td>6</td><td>Integer array</td></tr><tr><td>PARAM_TYPE_ARRAY_FLOAT</td><td>7</td><td>Floating-point number array</td></tr><tr><td>PARAM_TYPE_ARRAY_BOOL</td><td>8</td><td>Boolean value array</td></tr><tr><td>PARAM_TYPE_ARRAY_OBJECT</td><td>9</td><td>Object array</td></tr><tr><td>PARAM_TYPE_ARRAY_ARRAY</td><td>20</td><td>Nested array</td></tr><tr><td>PARAM_TYPE_NULL</td><td>99</td><td>Null</td></tr><tr><td>PARAM_TYPE_UNSPECIFIED</td><td>100</td><td>Unspecified type, used for OneOf and AnyOf scenarios</td></tr></tbody></table>
                     * @return ParamType <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>PARAM_TYPE_STRING</td><td>0</td><td>String</td></tr><tr><td>PARAM_TYPE_INT</td><td>1</td><td>Integer</td></tr><tr><td>PARAM_TYPE_FLOAT</td><td>2</td><td>Floating-point number</td></tr><tr><td>PARAM_TYPE_BOOL</td><td>3</td><td>Boolean value</td></tr><tr><td>PARAM_TYPE_OBJECT</td><td>4</td><td>Object</td></tr><tr><td>PARAM_TYPE_ARRAY_STRING</td><td>5</td><td>String array</td></tr><tr><td>PARAM_TYPE_ARRAY_INT</td><td>6</td><td>Integer array</td></tr><tr><td>PARAM_TYPE_ARRAY_FLOAT</td><td>7</td><td>Floating-point number array</td></tr><tr><td>PARAM_TYPE_ARRAY_BOOL</td><td>8</td><td>Boolean value array</td></tr><tr><td>PARAM_TYPE_ARRAY_OBJECT</td><td>9</td><td>Object array</td></tr><tr><td>PARAM_TYPE_ARRAY_ARRAY</td><td>20</td><td>Nested array</td></tr><tr><td>PARAM_TYPE_NULL</td><td>99</td><td>Null</td></tr><tr><td>PARAM_TYPE_UNSPECIFIED</td><td>100</td><td>Unspecified type, used for OneOf and AnyOf scenarios</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetParamType() const;

                    /**
                     * 设置<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>PARAM_TYPE_STRING</td><td>0</td><td>String</td></tr><tr><td>PARAM_TYPE_INT</td><td>1</td><td>Integer</td></tr><tr><td>PARAM_TYPE_FLOAT</td><td>2</td><td>Floating-point number</td></tr><tr><td>PARAM_TYPE_BOOL</td><td>3</td><td>Boolean value</td></tr><tr><td>PARAM_TYPE_OBJECT</td><td>4</td><td>Object</td></tr><tr><td>PARAM_TYPE_ARRAY_STRING</td><td>5</td><td>String array</td></tr><tr><td>PARAM_TYPE_ARRAY_INT</td><td>6</td><td>Integer array</td></tr><tr><td>PARAM_TYPE_ARRAY_FLOAT</td><td>7</td><td>Floating-point number array</td></tr><tr><td>PARAM_TYPE_ARRAY_BOOL</td><td>8</td><td>Boolean value array</td></tr><tr><td>PARAM_TYPE_ARRAY_OBJECT</td><td>9</td><td>Object array</td></tr><tr><td>PARAM_TYPE_ARRAY_ARRAY</td><td>20</td><td>Nested array</td></tr><tr><td>PARAM_TYPE_NULL</td><td>99</td><td>Null</td></tr><tr><td>PARAM_TYPE_UNSPECIFIED</td><td>100</td><td>Unspecified type, used for OneOf and AnyOf scenarios</td></tr></tbody></table>
                     * @param _paramType <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>PARAM_TYPE_STRING</td><td>0</td><td>String</td></tr><tr><td>PARAM_TYPE_INT</td><td>1</td><td>Integer</td></tr><tr><td>PARAM_TYPE_FLOAT</td><td>2</td><td>Floating-point number</td></tr><tr><td>PARAM_TYPE_BOOL</td><td>3</td><td>Boolean value</td></tr><tr><td>PARAM_TYPE_OBJECT</td><td>4</td><td>Object</td></tr><tr><td>PARAM_TYPE_ARRAY_STRING</td><td>5</td><td>String array</td></tr><tr><td>PARAM_TYPE_ARRAY_INT</td><td>6</td><td>Integer array</td></tr><tr><td>PARAM_TYPE_ARRAY_FLOAT</td><td>7</td><td>Floating-point number array</td></tr><tr><td>PARAM_TYPE_ARRAY_BOOL</td><td>8</td><td>Boolean value array</td></tr><tr><td>PARAM_TYPE_ARRAY_OBJECT</td><td>9</td><td>Object array</td></tr><tr><td>PARAM_TYPE_ARRAY_ARRAY</td><td>20</td><td>Nested array</td></tr><tr><td>PARAM_TYPE_NULL</td><td>99</td><td>Null</td></tr><tr><td>PARAM_TYPE_UNSPECIFIED</td><td>100</td><td>Unspecified type, used for OneOf and AnyOf scenarios</td></tr></tbody></table>
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
                     * 获取<p>Required or optional</p>
                     * @return Required <p>Required or optional</p>
                     * 
                     */
                    bool GetRequired() const;

                    /**
                     * 设置<p>Required or optional</p>
                     * @param _required <p>Required or optional</p>
                     * 
                     */
                    void SetRequired(const bool& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     * 
                     */
                    bool RequiredHasBeenSet() const;

                    /**
                     * 获取<p>Sub-parameter list</p>
                     * @return SubParamList <p>Sub-parameter list</p>
                     * 
                     */
                    std::vector<AppTriggerParamSchema> GetSubParamList() const;

                    /**
                     * 设置<p>Sub-parameter list</p>
                     * @param _subParamList <p>Sub-parameter list</p>
                     * 
                     */
                    void SetSubParamList(const std::vector<AppTriggerParamSchema>& _subParamList);

                    /**
                     * 判断参数 SubParamList 是否已赋值
                     * @return SubParamList 是否已赋值
                     * 
                     */
                    bool SubParamListHasBeenSet() const;

                private:

                    /**
                     * <p>Parameter name</p>
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>PARAM_TYPE_STRING</td><td>0</td><td>String</td></tr><tr><td>PARAM_TYPE_INT</td><td>1</td><td>Integer</td></tr><tr><td>PARAM_TYPE_FLOAT</td><td>2</td><td>Floating-point number</td></tr><tr><td>PARAM_TYPE_BOOL</td><td>3</td><td>Boolean value</td></tr><tr><td>PARAM_TYPE_OBJECT</td><td>4</td><td>Object</td></tr><tr><td>PARAM_TYPE_ARRAY_STRING</td><td>5</td><td>String array</td></tr><tr><td>PARAM_TYPE_ARRAY_INT</td><td>6</td><td>Integer array</td></tr><tr><td>PARAM_TYPE_ARRAY_FLOAT</td><td>7</td><td>Floating-point number array</td></tr><tr><td>PARAM_TYPE_ARRAY_BOOL</td><td>8</td><td>Boolean value array</td></tr><tr><td>PARAM_TYPE_ARRAY_OBJECT</td><td>9</td><td>Object array</td></tr><tr><td>PARAM_TYPE_ARRAY_ARRAY</td><td>20</td><td>Nested array</td></tr><tr><td>PARAM_TYPE_NULL</td><td>99</td><td>Null</td></tr><tr><td>PARAM_TYPE_UNSPECIFIED</td><td>100</td><td>Unspecified type, used for OneOf and AnyOf scenarios</td></tr></tbody></table>
                     */
                    int64_t m_paramType;
                    bool m_paramTypeHasBeenSet;

                    /**
                     * <p>Required or optional</p>
                     */
                    bool m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * <p>Sub-parameter list</p>
                     */
                    std::vector<AppTriggerParamSchema> m_subParamList;
                    bool m_subParamListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERPARAMSCHEMA_H_
