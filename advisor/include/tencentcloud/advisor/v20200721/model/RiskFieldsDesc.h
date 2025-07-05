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

#ifndef TENCENTCLOUD_ADVISOR_V20200721_MODEL_RISKFIELDSDESC_H_
#define TENCENTCLOUD_ADVISOR_V20200721_MODEL_RISKFIELDSDESC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/advisor/v20200721/model/KeyValue.h>


namespace TencentCloud
{
    namespace Advisor
    {
        namespace V20200721
        {
            namespace Model
            {
                /**
                * Risky instance field description
                */
                class RiskFieldsDesc : public AbstractModel
                {
                public:
                    RiskFieldsDesc();
                    ~RiskFieldsDesc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Field ID
                     * @return Field Field ID
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置Field ID
                     * @param _field Field ID
                     * 
                     */
                    void SetField(const std::string& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     * 
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取Field name
                     * @return FieldName Field name
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置Field name
                     * @param _fieldName Field name
                     * 
                     */
                    void SetFieldName(const std::string& _fieldName);

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     * 
                     */
                    bool FieldNameHasBeenSet() const;

                    /**
                     * 获取Field type, 
string: String type, such as "aa"
int: Integer, for example, 111
stringSlice : String array type, such as ["a", "b"]
tags: Tag type, for example: [{"Key":"kkk","Value":"vvv"},{"Key":"kkk2","Value":"vvv2"}]
                     * @return FieldType Field type, 
string: String type, such as "aa"
int: Integer, for example, 111
stringSlice : String array type, such as ["a", "b"]
tags: Tag type, for example: [{"Key":"kkk","Value":"vvv"},{"Key":"kkk2","Value":"vvv2"}]
                     * 
                     */
                    std::string GetFieldType() const;

                    /**
                     * 设置Field type, 
string: String type, such as "aa"
int: Integer, for example, 111
stringSlice : String array type, such as ["a", "b"]
tags: Tag type, for example: [{"Key":"kkk","Value":"vvv"},{"Key":"kkk2","Value":"vvv2"}]
                     * @param _fieldType Field type, 
string: String type, such as "aa"
int: Integer, for example, 111
stringSlice : String array type, such as ["a", "b"]
tags: Tag type, for example: [{"Key":"kkk","Value":"vvv"},{"Key":"kkk2","Value":"vvv2"}]
                     * 
                     */
                    void SetFieldType(const std::string& _fieldType);

                    /**
                     * 判断参数 FieldType 是否已赋值
                     * @return FieldType 是否已赋值
                     * 
                     */
                    bool FieldTypeHasBeenSet() const;

                    /**
                     * 获取Dictionary corresponding to the field value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FieldDict Dictionary corresponding to the field value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<KeyValue> GetFieldDict() const;

                    /**
                     * 设置Dictionary corresponding to the field value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fieldDict Dictionary corresponding to the field value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFieldDict(const std::vector<KeyValue>& _fieldDict);

                    /**
                     * 判断参数 FieldDict 是否已赋值
                     * @return FieldDict 是否已赋值
                     * 
                     */
                    bool FieldDictHasBeenSet() const;

                private:

                    /**
                     * Field ID
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * Field name
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * Field type, 
string: String type, such as "aa"
int: Integer, for example, 111
stringSlice : String array type, such as ["a", "b"]
tags: Tag type, for example: [{"Key":"kkk","Value":"vvv"},{"Key":"kkk2","Value":"vvv2"}]
                     */
                    std::string m_fieldType;
                    bool m_fieldTypeHasBeenSet;

                    /**
                     * Dictionary corresponding to the field value
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<KeyValue> m_fieldDict;
                    bool m_fieldDictHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADVISOR_V20200721_MODEL_RISKFIELDSDESC_H_
