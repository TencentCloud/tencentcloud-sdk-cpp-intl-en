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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SOURCEFIELDINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SOURCEFIELDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Upstream Node Field Information
                */
                class SourceFieldInfo : public AbstractModel
                {
                public:
                    SourceFieldInfo();
                    ~SourceFieldInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Field Name
                     * @return FieldName Field Name
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置Field Name
                     * @param _fieldName Field Name
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
                     * 获取Field Type
                     * @return FieldType Field Type
                     * 
                     */
                    std::string GetFieldType() const;

                    /**
                     * 设置Field Type
                     * @param _fieldType Field Type
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
                     * 获取Field Alias
                     * @return Alias Field Alias
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Field Alias
                     * @param _alias Field Alias
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
                     * 获取Field DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Comment Field DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Field DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _comment Field DescriptionNote: This field may return null, indicating that no valid value can be obtained.
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
                     * Field Name
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * Field Type
                     */
                    std::string m_fieldType;
                    bool m_fieldTypeHasBeenSet;

                    /**
                     * Field Alias
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Field DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SOURCEFIELDINFO_H_
