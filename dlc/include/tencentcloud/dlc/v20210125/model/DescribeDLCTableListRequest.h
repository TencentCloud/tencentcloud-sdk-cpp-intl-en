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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDLCTABLELISTREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDLCTABLELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Filter.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDLCTableList request structure.
                */
                class DescribeDLCTableListRequest : public AbstractModel
                {
                public:
                    DescribeDLCTableListRequest();
                    ~DescribeDLCTableListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Database name
                     * @return DbName Database name
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Database name
                     * @param _dbName Database name
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取Catalog name
                     * @return Catalog Catalog name
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置Catalog name
                     * @param _catalog Catalog name
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取Query the list's filter criteria.
                     * @return Filters Query the list's filter criteria.
                     * 
                     */
                    Filter GetFilters() const;

                    /**
                     * 设置Query the list's filter criteria.
                     * @param _filters Query the list's filter criteria.
                     * 
                     */
                    void SetFilters(const Filter& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Table type
                     * @return Type Table type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Table type
                     * @param _type Table type
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
                     * 获取Start time
                     * @return StartTime Start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param _startTime Start time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return EndTime End time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
                     * @param _endTime End time
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Pagination parameters
                     * @return Limit Pagination parameters
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination parameters
                     * @param _limit Pagination parameters
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination parameters
                     * @return Offset Pagination parameters
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination parameters
                     * @param _offset Pagination parameters
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Sorting fields
                     * @return Sort Sorting fields
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Sorting fields
                     * @param _sort Sorting fields
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取Sorting rules: true for ascending order; false for descending order
                     * @return Asc Sorting rules: true for ascending order; false for descending order
                     * 
                     */
                    bool GetAsc() const;

                    /**
                     * 设置Sorting rules: true for ascending order; false for descending order
                     * @param _asc Sorting rules: true for ascending order; false for descending order
                     * 
                     */
                    void SetAsc(const bool& _asc);

                    /**
                     * 判断参数 Asc 是否已赋值
                     * @return Asc 是否已赋值
                     * 
                     */
                    bool AscHasBeenSet() const;

                    /**
                     * 获取Data format type: hive, iceberg, etc.
                     * @return TableFormat Data format type: hive, iceberg, etc.
                     * 
                     */
                    std::string GetTableFormat() const;

                    /**
                     * 设置Data format type: hive, iceberg, etc.
                     * @param _tableFormat Data format type: hive, iceberg, etc.
                     * 
                     */
                    void SetTableFormat(const std::string& _tableFormat);

                    /**
                     * 判断参数 TableFormat 是否已赋值
                     * @return TableFormat 是否已赋值
                     * 
                     */
                    bool TableFormatHasBeenSet() const;

                private:

                    /**
                     * Database name
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Catalog name
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * Query the list's filter criteria.
                     */
                    Filter m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Table type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Pagination parameters
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination parameters
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting fields
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * Sorting rules: true for ascending order; false for descending order
                     */
                    bool m_asc;
                    bool m_ascHasBeenSet;

                    /**
                     * Data format type: hive, iceberg, etc.
                     */
                    std::string m_tableFormat;
                    bool m_tableFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDLCTABLELISTREQUEST_H_
