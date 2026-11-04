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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_ACCESSKEYPARAMCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_ACCESSKEYPARAMCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Access Key Field Configuration
                */
                class AccessKeyParamConfig : public AbstractModel
                {
                public:
                    AccessKeyParamConfig();
                    ~AccessKeyParamConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Access Key field type. 1: AccessKeyId, 2: AccessKeySecret, 3: SessionToken</p>
                     * @return FieldType <p>Access Key field type. 1: AccessKeyId, 2: AccessKeySecret, 3: SessionToken</p>
                     * 
                     */
                    int64_t GetFieldType() const;

                    /**
                     * 设置<p>Access Key field type. 1: AccessKeyId, 2: AccessKeySecret, 3: SessionToken</p>
                     * @param _fieldType <p>Access Key field type. 1: AccessKeyId, 2: AccessKeySecret, 3: SessionToken</p>
                     * 
                     */
                    void SetFieldType(const int64_t& _fieldType);

                    /**
                     * 判断参数 FieldType 是否已赋值
                     * @return FieldType 是否已赋值
                     * 
                     */
                    bool FieldTypeHasBeenSet() const;

                    /**
                     * 获取<p>Required or not</p>
                     * @return IsRequired <p>Required or not</p>
                     * 
                     */
                    bool GetIsRequired() const;

                    /**
                     * 设置<p>Required or not</p>
                     * @param _isRequired <p>Required or not</p>
                     * 
                     */
                    void SetIsRequired(const bool& _isRequired);

                    /**
                     * 判断参数 IsRequired 是否已赋值
                     * @return IsRequired 是否已赋值
                     * 
                     */
                    bool IsRequiredHasBeenSet() const;

                    /**
                     * 获取<p>header/query field name</p>
                     * @return ParamName <p>header/query field name</p>
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置<p>header/query field name</p>
                     * @param _paramName <p>header/query field name</p>
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
                     * 获取<p>Default value of the AccessKey, which can be empty.</p>
                     * @return ParamValue <p>Default value of the AccessKey, which can be empty.</p>
                     * 
                     */
                    std::string GetParamValue() const;

                    /**
                     * 设置<p>Default value of the AccessKey, which can be empty.</p>
                     * @param _paramValue <p>Default value of the AccessKey, which can be empty.</p>
                     * 
                     */
                    void SetParamValue(const std::string& _paramValue);

                    /**
                     * 判断参数 ParamValue 是否已赋值
                     * @return ParamValue 是否已赋值
                     * 
                     */
                    bool ParamValueHasBeenSet() const;

                private:

                    /**
                     * <p>Access Key field type. 1: AccessKeyId, 2: AccessKeySecret, 3: SessionToken</p>
                     */
                    int64_t m_fieldType;
                    bool m_fieldTypeHasBeenSet;

                    /**
                     * <p>Required or not</p>
                     */
                    bool m_isRequired;
                    bool m_isRequiredHasBeenSet;

                    /**
                     * <p>header/query field name</p>
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * <p>Default value of the AccessKey, which can be empty.</p>
                     */
                    std::string m_paramValue;
                    bool m_paramValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_ACCESSKEYPARAMCONFIG_H_
