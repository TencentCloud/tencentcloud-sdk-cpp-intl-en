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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODESCHEMA_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODESCHEMA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RecordField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Integrated Node Schema
                */
                class IntegrationNodeSchema : public AbstractModel
                {
                public:
                    IntegrationNodeSchema();
                    ~IntegrationNodeSchema() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Schema ID Random Unique
                     * @return Id Schema ID Random Unique
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Schema ID Random Unique
                     * @param _id Schema ID Random Unique
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Schema Name
                     * @return Name Schema Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Schema Name
                     * @param _name Schema Name
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
                     * 获取Schema Type
                     * @return Type Schema Type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Schema Type
                     * @param _type Schema Type
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
                     * 获取Schema Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Value Schema Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Schema Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _value Schema Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Schema Extended Attributes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Properties Schema Extended Attributes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<RecordField> GetProperties() const;

                    /**
                     * 设置Schema Extended Attributes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _properties Schema Extended Attributes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetProperties(const std::vector<RecordField>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取Schema Alias
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Alias Schema Alias
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Schema Alias
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _alias Schema Alias
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Field Remarks
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Comment Field Remarks
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Field Remarks
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _comment Field Remarks
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * Schema ID Random Unique
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Schema Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Schema Type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Schema Value
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Schema Extended Attributes
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<RecordField> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * Schema Alias
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Field Remarks
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODESCHEMA_H_
