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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_COLUMN_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_COLUMN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Column information of the data table.
                */
                class Column : public AbstractModel
                {
                public:
                    Column();
                    ~Column() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Column name, which is case-insensitive and can contain up to 25 characters.
                     * @return Name Column name, which is case-insensitive and can contain up to 25 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Column name, which is case-insensitive and can contain up to 25 characters.
                     * @param _name Column name, which is case-insensitive and can contain up to 25 characters.
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
                     * 获取Column type. Valid values:
string|tinyint|smallint|int|bigint|boolean|float|double|decimal|timestamp|date|binary|array<data_type>|map<primitive_type, data_type>|struct<col_name : data_type [COMMENT col_comment], ...>|uniontype<data_type, data_type, ...>.
                     * @return Type Column type. Valid values:
string|tinyint|smallint|int|bigint|boolean|float|double|decimal|timestamp|date|binary|array<data_type>|map<primitive_type, data_type>|struct<col_name : data_type [COMMENT col_comment], ...>|uniontype<data_type, data_type, ...>.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Column type. Valid values:
string|tinyint|smallint|int|bigint|boolean|float|double|decimal|timestamp|date|binary|array<data_type>|map<primitive_type, data_type>|struct<col_name : data_type [COMMENT col_comment], ...>|uniontype<data_type, data_type, ...>.
                     * @param _type Column type. Valid values:
string|tinyint|smallint|int|bigint|boolean|float|double|decimal|timestamp|date|binary|array<data_type>|map<primitive_type, data_type>|struct<col_name : data_type [COMMENT col_comment], ...>|uniontype<data_type, data_type, ...>.
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
                     * 获取Class comment.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Comment Class comment.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Class comment.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _comment Class comment.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Length of the entire numeric value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Precision Length of the entire numeric value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPrecision() const;

                    /**
                     * 设置Length of the entire numeric value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _precision Length of the entire numeric value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPrecision(const int64_t& _precision);

                    /**
                     * 判断参数 Precision 是否已赋值
                     * @return Precision 是否已赋值
                     * 
                     */
                    bool PrecisionHasBeenSet() const;

                    /**
                     * 获取Length of the decimal part
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Scale Length of the decimal part
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetScale() const;

                    /**
                     * 设置Length of the decimal part
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scale Length of the decimal part
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScale(const int64_t& _scale);

                    /**
                     * 判断参数 Scale 是否已赋值
                     * @return Scale 是否已赋值
                     * 
                     */
                    bool ScaleHasBeenSet() const;

                    /**
                     * 获取Whether the column is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Nullable Whether the column is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNullable() const;

                    /**
                     * 设置Whether the column is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nullable Whether the column is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNullable(const std::string& _nullable);

                    /**
                     * 判断参数 Nullable 是否已赋值
                     * @return Nullable 是否已赋值
                     * 
                     */
                    bool NullableHasBeenSet() const;

                    /**
                     * 获取Field position
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Position Field position
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置Field position
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _position Field position
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPosition(const int64_t& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取Field creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Field creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Field creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Field creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Field modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifiedTime Field modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置Field modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modifiedTime Field modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取Whether the column is the partition field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsPartition Whether the column is the partition field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsPartition() const;

                    /**
                     * 设置Whether the column is the partition field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isPartition Whether the column is the partition field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsPartition(const bool& _isPartition);

                    /**
                     * 判断参数 IsPartition 是否已赋值
                     * @return IsPartition 是否已赋值
                     * 
                     */
                    bool IsPartitionHasBeenSet() const;

                private:

                    /**
                     * Column name, which is case-insensitive and can contain up to 25 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Column type. Valid values:
string|tinyint|smallint|int|bigint|boolean|float|double|decimal|timestamp|date|binary|array<data_type>|map<primitive_type, data_type>|struct<col_name : data_type [COMMENT col_comment], ...>|uniontype<data_type, data_type, ...>.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Class comment.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Length of the entire numeric value
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_precision;
                    bool m_precisionHasBeenSet;

                    /**
                     * Length of the decimal part
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_scale;
                    bool m_scaleHasBeenSet;

                    /**
                     * Whether the column is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nullable;
                    bool m_nullableHasBeenSet;

                    /**
                     * Field position
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * Field creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Field modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * Whether the column is the partition field.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isPartition;
                    bool m_isPartitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_COLUMN_H_
