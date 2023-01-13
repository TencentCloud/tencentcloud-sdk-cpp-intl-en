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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESLOWLOGTOPSQLSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESLOWLOGTOPSQLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/SchemaItem.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeSlowLogTopSqls request structure.
                */
                class DescribeSlowLogTopSqlsRequest : public AbstractModel
                {
                public:
                    DescribeSlowLogTopSqlsRequest();
                    ~DescribeSlowLogTopSqlsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param InstanceId Instance ID.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Start time, such as "2019-09-10 12:13:14".
                     * @return StartTime Start time, such as "2019-09-10 12:13:14".
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time, such as "2019-09-10 12:13:14".
                     * @param StartTime Start time, such as "2019-09-10 12:13:14".
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time in the format of "2019-09-11 10:13:14". The interval between the end time and the start time can be up to 7 days.
                     * @return EndTime End time in the format of "2019-09-11 10:13:14". The interval between the end time and the start time can be up to 7 days.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time in the format of "2019-09-11 10:13:14". The interval between the end time and the start time can be up to 7 days.
                     * @param EndTime End time in the format of "2019-09-11 10:13:14". The interval between the end time and the start time can be up to 7 days.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Sorting key. Valid values: `QueryTime`, `ExecTimes`, `RowsSent`, `LockTime`, `RowsExamined`. Default value: `QueryTime`.
                     * @return SortBy Sorting key. Valid values: `QueryTime`, `ExecTimes`, `RowsSent`, `LockTime`, `RowsExamined`. Default value: `QueryTime`.
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置Sorting key. Valid values: `QueryTime`, `ExecTimes`, `RowsSent`, `LockTime`, `RowsExamined`. Default value: `QueryTime`.
                     * @param SortBy Sorting key. Valid values: `QueryTime`, `ExecTimes`, `RowsSent`, `LockTime`, `RowsExamined`. Default value: `QueryTime`.
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: `ASC` (ascending), `DESC` (descending). Default value: `DESC`.
                     * @return OrderBy Sorting order. Valid values: `ASC` (ascending), `DESC` (descending). Default value: `DESC`.
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting order. Valid values: `ASC` (ascending), `DESC` (descending). Default value: `DESC`.
                     * @param OrderBy Sorting order. Valid values: `ASC` (ascending), `DESC` (descending). Default value: `DESC`.
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Number of returned results. Default value: `20`. Maximum value: `100`.
                     * @return Limit Number of returned results. Default value: `20`. Maximum value: `100`.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: `20`. Maximum value: `100`.
                     * @param Limit Number of returned results. Default value: `20`. Maximum value: `100`.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: `0`.
                     * @return Offset Offset. Default value: `0`.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: `0`.
                     * @param Offset Offset. Default value: `0`.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Database name array.
                     * @return SchemaList Database name array.
                     */
                    std::vector<SchemaItem> GetSchemaList() const;

                    /**
                     * 设置Database name array.
                     * @param SchemaList Database name array.
                     */
                    void SetSchemaList(const std::vector<SchemaItem>& _schemaList);

                    /**
                     * 判断参数 SchemaList 是否已赋值
                     * @return SchemaList 是否已赋值
                     */
                    bool SchemaListHasBeenSet() const;

                    /**
                     * 获取Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * @return Product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * @param Product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time, such as "2019-09-10 12:13:14".
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time in the format of "2019-09-11 10:13:14". The interval between the end time and the start time can be up to 7 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Sorting key. Valid values: `QueryTime`, `ExecTimes`, `RowsSent`, `LockTime`, `RowsExamined`. Default value: `QueryTime`.
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * Sorting order. Valid values: `ASC` (ascending), `DESC` (descending). Default value: `DESC`.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Number of returned results. Default value: `20`. Maximum value: `100`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: `0`.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Database name array.
                     */
                    std::vector<SchemaItem> m_schemaList;
                    bool m_schemaListHasBeenSet;

                    /**
                     * Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESLOWLOGTOPSQLSREQUEST_H_
