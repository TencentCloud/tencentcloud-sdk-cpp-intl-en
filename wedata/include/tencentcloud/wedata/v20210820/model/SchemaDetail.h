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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SCHEMADETAIL_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SCHEMADETAIL_H_

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
                * Metadata Field Information
                */
                class SchemaDetail : public AbstractModel
                {
                public:
                    SchemaDetail();
                    ~SchemaDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Column
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ColumnKey Column
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetColumnKey() const;

                    /**
                     * 设置Column
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _columnKey Column
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetColumnKey(const std::string& _columnKey);

                    /**
                     * 判断参数 ColumnKey 是否已赋值
                     * @return ColumnKey 是否已赋值
                     * 
                     */
                    bool ColumnKeyHasBeenSet() const;

                    /**
                     * 获取DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Description DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _description DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Name NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _name NameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Type TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _type TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Column
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_columnKey;
                    bool m_columnKeyHasBeenSet;

                    /**
                     * DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * TypeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SCHEMADETAIL_H_
