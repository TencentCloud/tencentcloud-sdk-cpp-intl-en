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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETABLESNAMEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETABLESNAMEREQUEST_H_

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
                * DescribeTablesName request structure.
                */
                class DescribeTablesNameRequest : public AbstractModel
                {
                public:
                    DescribeTablesNameRequest();
                    ~DescribeTablesNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List all the data tables in the database.
                     * @return DatabaseName List all the data tables in the database.
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置List all the data tables in the database.
                     * @param _databaseName List all the data tables in the database.
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取Quantity of returns. It is 10 by default, and the maximum value is 100.
                     * @return Limit Quantity of returns. It is 10 by default, and the maximum value is 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Quantity of returns. It is 10 by default, and the maximum value is 100.
                     * @param _limit Quantity of returns. It is 10 by default, and the maximum value is 100.
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
                     * 获取Data offset. It starts from 0 and is 0 by default.
                     * @return Offset Data offset. It starts from 0 and is 0 by default.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Data offset. It starts from 0 and is 0 by default.
                     * @param _offset Data offset. It starts from 0 and is 0 by default.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Filter criteria. The following filter types are supported. The Name should be one of them.
Table-name - String - (filter criteria) data table name, such as table-001.
table-id - String - (filter criteria) table id, such as 12342.
                     * @return Filters Filter criteria. The following filter types are supported. The Name should be one of them.
Table-name - String - (filter criteria) data table name, such as table-001.
table-id - String - (filter criteria) table id, such as 12342.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria. The following filter types are supported. The Name should be one of them.
Table-name - String - (filter criteria) data table name, such as table-001.
table-id - String - (filter criteria) table id, such as 12342.
                     * @param _filters Filter criteria. The following filter types are supported. The Name should be one of them.
Table-name - String - (filter criteria) data table name, such as table-001.
table-id - String - (filter criteria) table id, such as 12342.
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Specified data source name to be queried, and it is DataLakeCatalog by default.
                     * @return DatasourceConnectionName Specified data source name to be queried, and it is DataLakeCatalog by default.
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置Specified data source name to be queried, and it is DataLakeCatalog by default.
                     * @param _datasourceConnectionName Specified data source name to be queried, and it is DataLakeCatalog by default.
                     * 
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                    /**
                     * 获取Start time: It is used to filter the update time, and the format is yyyy-mm-dd HH:MM:SS.
                     * @return StartTime Start time: It is used to filter the update time, and the format is yyyy-mm-dd HH:MM:SS.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time: It is used to filter the update time, and the format is yyyy-mm-dd HH:MM:SS.
                     * @param _startTime Start time: It is used to filter the update time, and the format is yyyy-mm-dd HH:MM:SS.
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
                     * 获取End time: It is used to filter the update time, and the format is yyyy-mm-dd HH:MM:SS.
                     * @return EndTime End time: It is used to filter the update time, and the format is yyyy-mm-dd HH:MM:SS.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time: It is used to filter the update time, and the format is yyyy-mm-dd HH:MM:SS.
                     * @param _endTime End time: It is used to filter the update time, and the format is yyyy-mm-dd HH:MM:SS.
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
                     * 获取Sorting fields, and they support CreateTime (creation time), UpdateTime (update time), StorageSize (storage space), RecordCount (number of rows), and Name (table name) (The ascending order according to names will be adopted if it is not passed).
                     * @return Sort Sorting fields, and they support CreateTime (creation time), UpdateTime (update time), StorageSize (storage space), RecordCount (number of rows), and Name (table name) (The ascending order according to names will be adopted if it is not passed).
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Sorting fields, and they support CreateTime (creation time), UpdateTime (update time), StorageSize (storage space), RecordCount (number of rows), and Name (table name) (The ascending order according to names will be adopted if it is not passed).
                     * @param _sort Sorting fields, and they support CreateTime (creation time), UpdateTime (update time), StorageSize (storage space), RecordCount (number of rows), and Name (table name) (The ascending order according to names will be adopted if it is not passed).
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
                     * 获取Sorting fields, and false means the descending order (by default) while true means the ascending order.
                     * @return Asc Sorting fields, and false means the descending order (by default) while true means the ascending order.
                     * 
                     */
                    bool GetAsc() const;

                    /**
                     * 设置Sorting fields, and false means the descending order (by default) while true means the ascending order.
                     * @param _asc Sorting fields, and false means the descending order (by default) while true means the ascending order.
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
                     * 获取Table type, query of the table type, and the available value is EXTERNAL_TABLE,INDEX_TABLE,MANAGED_TABLE,MATERIALIZED_VIEW,TABLE,VIEW,VIRTUAL_VIEW
                     * @return TableType Table type, query of the table type, and the available value is EXTERNAL_TABLE,INDEX_TABLE,MANAGED_TABLE,MATERIALIZED_VIEW,TABLE,VIEW,VIRTUAL_VIEW
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置Table type, query of the table type, and the available value is EXTERNAL_TABLE,INDEX_TABLE,MANAGED_TABLE,MATERIALIZED_VIEW,TABLE,VIEW,VIRTUAL_VIEW
                     * @param _tableType Table type, query of the table type, and the available value is EXTERNAL_TABLE,INDEX_TABLE,MANAGED_TABLE,MATERIALIZED_VIEW,TABLE,VIEW,VIRTUAL_VIEW
                     * 
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     * 
                     */
                    bool TableTypeHasBeenSet() const;

                    /**
                     * 获取Filter fields - table format: If no criteria are specified, all the items will be checked; LAKEFS: managed table; ICEBERG: non-managed iceberg table; HIVE: non-managed hive table; OTHER: other non-managed tables.
                     * @return TableFormat Filter fields - table format: If no criteria are specified, all the items will be checked; LAKEFS: managed table; ICEBERG: non-managed iceberg table; HIVE: non-managed hive table; OTHER: other non-managed tables.
                     * 
                     */
                    std::string GetTableFormat() const;

                    /**
                     * 设置Filter fields - table format: If no criteria are specified, all the items will be checked; LAKEFS: managed table; ICEBERG: non-managed iceberg table; HIVE: non-managed hive table; OTHER: other non-managed tables.
                     * @param _tableFormat Filter fields - table format: If no criteria are specified, all the items will be checked; LAKEFS: managed table; ICEBERG: non-managed iceberg table; HIVE: non-managed hive table; OTHER: other non-managed tables.
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
                     * List all the data tables in the database.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Quantity of returns. It is 10 by default, and the maximum value is 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Data offset. It starts from 0 and is 0 by default.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter criteria. The following filter types are supported. The Name should be one of them.
Table-name - String - (filter criteria) data table name, such as table-001.
table-id - String - (filter criteria) table id, such as 12342.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Specified data source name to be queried, and it is DataLakeCatalog by default.
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                    /**
                     * Start time: It is used to filter the update time, and the format is yyyy-mm-dd HH:MM:SS.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time: It is used to filter the update time, and the format is yyyy-mm-dd HH:MM:SS.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Sorting fields, and they support CreateTime (creation time), UpdateTime (update time), StorageSize (storage space), RecordCount (number of rows), and Name (table name) (The ascending order according to names will be adopted if it is not passed).
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * Sorting fields, and false means the descending order (by default) while true means the ascending order.
                     */
                    bool m_asc;
                    bool m_ascHasBeenSet;

                    /**
                     * Table type, query of the table type, and the available value is EXTERNAL_TABLE,INDEX_TABLE,MANAGED_TABLE,MATERIALIZED_VIEW,TABLE,VIEW,VIRTUAL_VIEW
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * Filter fields - table format: If no criteria are specified, all the items will be checked; LAKEFS: managed table; ICEBERG: non-managed iceberg table; HIVE: non-managed hive table; OTHER: other non-managed tables.
                     */
                    std::string m_tableFormat;
                    bool m_tableFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETABLESNAMEREQUEST_H_
