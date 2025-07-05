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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COLUMN_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COLUMN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Column information of the table
                */
                class Column : public AbstractModel
                {
                public:
                    Column();
                    ~Column() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Column name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Column name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Column name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Column name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Column type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Column type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Column type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Column type
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Aggregation type: When the table is an aggregation model (AGG_KEY), the column with the aggregation type is set as the metric column, and other columns are dimension columns. Aggregation type: ●SUM: sum; the values of multiple rows are accumulated. ●REPLACE: replacement; the values in the next batch of data will replace the values in the previously imported rows. ●MAX: retain the maximum value.
 ●MIN: retain the minimum value. ●REPLACE_IF_NOT_NULL: non-null values replacement. The difference from REPLACE is that null values are not replaced. ●HLL_UNION: aggregation method for HLL type columns, which is aggregated by HyperLogLog algorithm. ●BITMAP_UNION: aggregation method for BIMTAP type columns; bitmap union aggregation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AggType Aggregation type: When the table is an aggregation model (AGG_KEY), the column with the aggregation type is set as the metric column, and other columns are dimension columns. Aggregation type: ●SUM: sum; the values of multiple rows are accumulated. ●REPLACE: replacement; the values in the next batch of data will replace the values in the previously imported rows. ●MAX: retain the maximum value.
 ●MIN: retain the minimum value. ●REPLACE_IF_NOT_NULL: non-null values replacement. The difference from REPLACE is that null values are not replaced. ●HLL_UNION: aggregation method for HLL type columns, which is aggregated by HyperLogLog algorithm. ●BITMAP_UNION: aggregation method for BIMTAP type columns; bitmap union aggregation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAggType() const;

                    /**
                     * 设置Aggregation type: When the table is an aggregation model (AGG_KEY), the column with the aggregation type is set as the metric column, and other columns are dimension columns. Aggregation type: ●SUM: sum; the values of multiple rows are accumulated. ●REPLACE: replacement; the values in the next batch of data will replace the values in the previously imported rows. ●MAX: retain the maximum value.
 ●MIN: retain the minimum value. ●REPLACE_IF_NOT_NULL: non-null values replacement. The difference from REPLACE is that null values are not replaced. ●HLL_UNION: aggregation method for HLL type columns, which is aggregated by HyperLogLog algorithm. ●BITMAP_UNION: aggregation method for BIMTAP type columns; bitmap union aggregation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aggType Aggregation type: When the table is an aggregation model (AGG_KEY), the column with the aggregation type is set as the metric column, and other columns are dimension columns. Aggregation type: ●SUM: sum; the values of multiple rows are accumulated. ●REPLACE: replacement; the values in the next batch of data will replace the values in the previously imported rows. ●MAX: retain the maximum value.
 ●MIN: retain the minimum value. ●REPLACE_IF_NOT_NULL: non-null values replacement. The difference from REPLACE is that null values are not replaced. ●HLL_UNION: aggregation method for HLL type columns, which is aggregated by HyperLogLog algorithm. ●BITMAP_UNION: aggregation method for BIMTAP type columns; bitmap union aggregation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAggType(const std::string& _aggType);

                    /**
                     * 判断参数 AggType 是否已赋值
                     * @return AggType 是否已赋值
                     * 
                     */
                    bool AggTypeHasBeenSet() const;

                    /**
                     * 获取Whether the column value is allowed to be Null
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsNull Whether the column value is allowed to be Null
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsNull() const;

                    /**
                     * 设置Whether the column value is allowed to be Null
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isNull Whether the column value is allowed to be Null
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsNull(const bool& _isNull);

                    /**
                     * 判断参数 IsNull 是否已赋值
                     * @return IsNull 是否已赋值
                     * 
                     */
                    bool IsNullHasBeenSet() const;

                    /**
                     * 获取Whether it is a Key column. The meaning of different data models:
●DUP_KEY: The column specified afterwards is the sorting column.
●AGG_KEY: The column specified afterwards is the dimension column.
●UNI_KEY: The column specified afterward is the primary key column.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsKey Whether it is a Key column. The meaning of different data models:
●DUP_KEY: The column specified afterwards is the sorting column.
●AGG_KEY: The column specified afterwards is the dimension column.
●UNI_KEY: The column specified afterward is the primary key column.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsKey() const;

                    /**
                     * 设置Whether it is a Key column. The meaning of different data models:
●DUP_KEY: The column specified afterwards is the sorting column.
●AGG_KEY: The column specified afterwards is the dimension column.
●UNI_KEY: The column specified afterward is the primary key column.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isKey Whether it is a Key column. The meaning of different data models:
●DUP_KEY: The column specified afterwards is the sorting column.
●AGG_KEY: The column specified afterwards is the dimension column.
●UNI_KEY: The column specified afterward is the primary key column.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsKey(const bool& _isKey);

                    /**
                     * 判断参数 IsKey 是否已赋值
                     * @return IsKey 是否已赋值
                     * 
                     */
                    bool IsKeyHasBeenSet() const;

                    /**
                     * 获取Column's default value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefaultValue Column's default value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置Column's default value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defaultValue Column's default value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     * 
                     */
                    bool DefaultValueHasBeenSet() const;

                    /**
                     * 获取Whether it is a partition column. The partition column must be a Key column.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsPartition Whether it is a partition column. The partition column must be a Key column.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsPartition() const;

                    /**
                     * 设置Whether it is a partition column. The partition column must be a Key column.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isPartition Whether it is a partition column. The partition column must be a Key column.

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

                    /**
                     * 获取Whether it is a bucket column. The bucket column of the aggregation model and primary key model must be Key columns, while the bucket column of the detail model can be any column.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsDistribution Whether it is a bucket column. The bucket column of the aggregation model and primary key model must be Key columns, while the bucket column of the detail model can be any column.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsDistribution() const;

                    /**
                     * 设置Whether it is a bucket column. The bucket column of the aggregation model and primary key model must be Key columns, while the bucket column of the detail model can be any column.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isDistribution Whether it is a bucket column. The bucket column of the aggregation model and primary key model must be Key columns, while the bucket column of the detail model can be any column.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsDistribution(const bool& _isDistribution);

                    /**
                     * 判断参数 IsDistribution 是否已赋值
                     * @return IsDistribution 是否已赋值
                     * 
                     */
                    bool IsDistributionHasBeenSet() const;

                    /**
                     * 获取Whether it is an auto-increment column. Supported by TCHouse-D 2.1 version and later.
Limit:
1. Only DUP_KEY and UNI_KEY model tables can contain auto-increment columns.
2. A table can contain at most one auto-increment column.
3. The type of the auto-increment column must be BIGINT type and cannot be null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoInc Whether it is an auto-increment column. Supported by TCHouse-D 2.1 version and later.
Limit:
1. Only DUP_KEY and UNI_KEY model tables can contain auto-increment columns.
2. A table can contain at most one auto-increment column.
3. The type of the auto-increment column must be BIGINT type and cannot be null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAutoInc() const;

                    /**
                     * 设置Whether it is an auto-increment column. Supported by TCHouse-D 2.1 version and later.
Limit:
1. Only DUP_KEY and UNI_KEY model tables can contain auto-increment columns.
2. A table can contain at most one auto-increment column.
3. The type of the auto-increment column must be BIGINT type and cannot be null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _autoInc Whether it is an auto-increment column. Supported by TCHouse-D 2.1 version and later.
Limit:
1. Only DUP_KEY and UNI_KEY model tables can contain auto-increment columns.
2. A table can contain at most one auto-increment column.
3. The type of the auto-increment column must be BIGINT type and cannot be null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAutoInc(const bool& _autoInc);

                    /**
                     * 判断参数 AutoInc 是否已赋值
                     * @return AutoInc 是否已赋值
                     * 
                     */
                    bool AutoIncHasBeenSet() const;

                    /**
                     * 获取Column description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Comment Column description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Column description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _comment Column description
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

                private:

                    /**
                     * Column name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Column type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Aggregation type: When the table is an aggregation model (AGG_KEY), the column with the aggregation type is set as the metric column, and other columns are dimension columns. Aggregation type: ●SUM: sum; the values of multiple rows are accumulated. ●REPLACE: replacement; the values in the next batch of data will replace the values in the previously imported rows. ●MAX: retain the maximum value.
 ●MIN: retain the minimum value. ●REPLACE_IF_NOT_NULL: non-null values replacement. The difference from REPLACE is that null values are not replaced. ●HLL_UNION: aggregation method for HLL type columns, which is aggregated by HyperLogLog algorithm. ●BITMAP_UNION: aggregation method for BIMTAP type columns; bitmap union aggregation.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_aggType;
                    bool m_aggTypeHasBeenSet;

                    /**
                     * Whether the column value is allowed to be Null
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isNull;
                    bool m_isNullHasBeenSet;

                    /**
                     * Whether it is a Key column. The meaning of different data models:
●DUP_KEY: The column specified afterwards is the sorting column.
●AGG_KEY: The column specified afterwards is the dimension column.
●UNI_KEY: The column specified afterward is the primary key column.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isKey;
                    bool m_isKeyHasBeenSet;

                    /**
                     * Column's default value
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * Whether it is a partition column. The partition column must be a Key column.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isPartition;
                    bool m_isPartitionHasBeenSet;

                    /**
                     * Whether it is a bucket column. The bucket column of the aggregation model and primary key model must be Key columns, while the bucket column of the detail model can be any column.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isDistribution;
                    bool m_isDistributionHasBeenSet;

                    /**
                     * Whether it is an auto-increment column. Supported by TCHouse-D 2.1 version and later.
Limit:
1. Only DUP_KEY and UNI_KEY model tables can contain auto-increment columns.
2. A table can contain at most one auto-increment column.
3. The type of the auto-increment column must be BIGINT type and cannot be null.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_autoInc;
                    bool m_autoIncHasBeenSet;

                    /**
                     * Column description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COLUMN_H_
