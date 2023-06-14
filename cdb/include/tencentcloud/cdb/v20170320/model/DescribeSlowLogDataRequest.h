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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBESLOWLOGDATAREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBESLOWLOGDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeSlowLogData request structure.
                */
                class DescribeSlowLogDataRequest : public AbstractModel
                {
                public:
                    DescribeSlowLogDataRequest();
                    ~DescribeSlowLogDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Start timestamp, such as 1585142640.
                     * @return StartTime Start timestamp, such as 1585142640.
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Start timestamp, such as 1585142640.
                     * @param _startTime Start timestamp, such as 1585142640.
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End timestamp, such as 1585142640.
                     * @return EndTime End timestamp, such as 1585142640.
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置End timestamp, such as 1585142640.
                     * @param _endTime End timestamp, such as 1585142640.
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Client `Host` list.
                     * @return UserHosts Client `Host` list.
                     * 
                     */
                    std::vector<std::string> GetUserHosts() const;

                    /**
                     * 设置Client `Host` list.
                     * @param _userHosts Client `Host` list.
                     * 
                     */
                    void SetUserHosts(const std::vector<std::string>& _userHosts);

                    /**
                     * 判断参数 UserHosts 是否已赋值
                     * @return UserHosts 是否已赋值
                     * 
                     */
                    bool UserHostsHasBeenSet() const;

                    /**
                     * 获取Client username list.
                     * @return UserNames Client username list.
                     * 
                     */
                    std::vector<std::string> GetUserNames() const;

                    /**
                     * 设置Client username list.
                     * @param _userNames Client username list.
                     * 
                     */
                    void SetUserNames(const std::vector<std::string>& _userNames);

                    /**
                     * 判断参数 UserNames 是否已赋值
                     * @return UserNames 是否已赋值
                     * 
                     */
                    bool UserNamesHasBeenSet() const;

                    /**
                     * 获取Accessed database list.
                     * @return DataBases Accessed database list.
                     * 
                     */
                    std::vector<std::string> GetDataBases() const;

                    /**
                     * 设置Accessed database list.
                     * @param _dataBases Accessed database list.
                     * 
                     */
                    void SetDataBases(const std::vector<std::string>& _dataBases);

                    /**
                     * 判断参数 DataBases 是否已赋值
                     * @return DataBases 是否已赋值
                     * 
                     */
                    bool DataBasesHasBeenSet() const;

                    /**
                     * 获取Sort by field. Valid values: Timestamp, QueryTime, LockTime, RowsExamined, RowsSent.
                     * @return SortBy Sort by field. Valid values: Timestamp, QueryTime, LockTime, RowsExamined, RowsSent.
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置Sort by field. Valid values: Timestamp, QueryTime, LockTime, RowsExamined, RowsSent.
                     * @param _sortBy Sort by field. Valid values: Timestamp, QueryTime, LockTime, RowsExamined, RowsSent.
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: ASC (ascending), DESC (descending).
                     * @return OrderBy Sorting order. Valid values: ASC (ascending), DESC (descending).
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting order. Valid values: ASC (ascending), DESC (descending).
                     * @param _orderBy Sorting order. Valid values: ASC (ascending), DESC (descending).
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * 获取The number of results per page in paginated queries. Default value: 100. Maximum value: 400.
                     * @return Limit The number of results per page in paginated queries. Default value: 100. Maximum value: 400.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of results per page in paginated queries. Default value: 100. Maximum value: 400.
                     * @param _limit The number of results per page in paginated queries. Default value: 100. Maximum value: 400.
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
                     * 获取This parameter is valid only for source or disaster recovery instances. Valid value: `slave`, which indicates pulling logs from the replica.
                     * @return InstType This parameter is valid only for source or disaster recovery instances. Valid value: `slave`, which indicates pulling logs from the replica.
                     * 
                     */
                    std::string GetInstType() const;

                    /**
                     * 设置This parameter is valid only for source or disaster recovery instances. Valid value: `slave`, which indicates pulling logs from the replica.
                     * @param _instType This parameter is valid only for source or disaster recovery instances. Valid value: `slave`, which indicates pulling logs from the replica.
                     * 
                     */
                    void SetInstType(const std::string& _instType);

                    /**
                     * 判断参数 InstType 是否已赋值
                     * @return InstType 是否已赋值
                     * 
                     */
                    bool InstTypeHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start timestamp, such as 1585142640.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End timestamp, such as 1585142640.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Client `Host` list.
                     */
                    std::vector<std::string> m_userHosts;
                    bool m_userHostsHasBeenSet;

                    /**
                     * Client username list.
                     */
                    std::vector<std::string> m_userNames;
                    bool m_userNamesHasBeenSet;

                    /**
                     * Accessed database list.
                     */
                    std::vector<std::string> m_dataBases;
                    bool m_dataBasesHasBeenSet;

                    /**
                     * Sort by field. Valid values: Timestamp, QueryTime, LockTime, RowsExamined, RowsSent.
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * Sorting order. Valid values: ASC (ascending), DESC (descending).
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of results per page in paginated queries. Default value: 100. Maximum value: 400.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * This parameter is valid only for source or disaster recovery instances. Valid value: `slave`, which indicates pulling logs from the replica.
                     */
                    std::string m_instType;
                    bool m_instTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBESLOWLOGDATAREQUEST_H_
