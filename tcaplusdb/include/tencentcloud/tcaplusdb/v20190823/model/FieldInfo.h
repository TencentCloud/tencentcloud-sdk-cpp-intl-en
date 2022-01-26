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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_FIELDINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_FIELDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * The list of table field information
                */
                class FieldInfo : public AbstractModel
                {
                public:
                    FieldInfo();
                    ~FieldInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Table field name
                     * @return FieldName Table field name
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置Table field name
                     * @param FieldName Table field name
                     */
                    void SetFieldName(const std::string& _fieldName);

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     */
                    bool FieldNameHasBeenSet() const;

                    /**
                     * 获取Whether it is a primary key field
                     * @return IsPrimaryKey Whether it is a primary key field
                     */
                    std::string GetIsPrimaryKey() const;

                    /**
                     * 设置Whether it is a primary key field
                     * @param IsPrimaryKey Whether it is a primary key field
                     */
                    void SetIsPrimaryKey(const std::string& _isPrimaryKey);

                    /**
                     * 判断参数 IsPrimaryKey 是否已赋值
                     * @return IsPrimaryKey 是否已赋值
                     */
                    bool IsPrimaryKeyHasBeenSet() const;

                    /**
                     * 获取Field type
                     * @return FieldType Field type
                     */
                    std::string GetFieldType() const;

                    /**
                     * 设置Field type
                     * @param FieldType Field type
                     */
                    void SetFieldType(const std::string& _fieldType);

                    /**
                     * 判断参数 FieldType 是否已赋值
                     * @return FieldType 是否已赋值
                     */
                    bool FieldTypeHasBeenSet() const;

                    /**
                     * 获取Field length
                     * @return FieldSize Field length
                     */
                    int64_t GetFieldSize() const;

                    /**
                     * 设置Field length
                     * @param FieldSize Field length
                     */
                    void SetFieldSize(const int64_t& _fieldSize);

                    /**
                     * 判断参数 FieldSize 是否已赋值
                     * @return FieldSize 是否已赋值
                     */
                    bool FieldSizeHasBeenSet() const;

                private:

                    /**
                     * Table field name
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * Whether it is a primary key field
                     */
                    std::string m_isPrimaryKey;
                    bool m_isPrimaryKeyHasBeenSet;

                    /**
                     * Field type
                     */
                    std::string m_fieldType;
                    bool m_fieldTypeHasBeenSet;

                    /**
                     * Field length
                     */
                    int64_t m_fieldSize;
                    bool m_fieldSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_FIELDINFO_H_
