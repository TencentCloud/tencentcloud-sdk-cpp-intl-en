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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEAPPLICATIONSREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEAPPLICATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeApplications request structure.
                */
                class DescribeApplicationsRequest : public AbstractModel
                {
                public:
                    DescribeApplicationsRequest();
                    ~DescribeApplicationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the cluster whose applications will be queried
                     * @return ClusterId ID of the cluster whose applications will be queried
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置ID of the cluster whose applications will be queried
                     * @param ClusterId ID of the cluster whose applications will be queried
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取The maximum number of results returned per page
                     * @return Limit The maximum number of results returned per page
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The maximum number of results returned per page
                     * @param Limit The maximum number of results returned per page
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination offset
                     * @return Offset Pagination offset
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset
                     * @param Offset Pagination offset
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Application status used as a filter condition
                     * @return CensorStatus Application status used as a filter condition
                     */
                    int64_t GetCensorStatus() const;

                    /**
                     * 设置Application status used as a filter condition
                     * @param CensorStatus Application status used as a filter condition
                     */
                    void SetCensorStatus(const int64_t& _censorStatus);

                    /**
                     * 判断参数 CensorStatus 是否已赋值
                     * @return CensorStatus 是否已赋值
                     */
                    bool CensorStatusHasBeenSet() const;

                    /**
                     * 获取Table group ID used as a filter condition
                     * @return TableGroupId Table group ID used as a filter condition
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置Table group ID used as a filter condition
                     * @param TableGroupId Table group ID used as a filter condition
                     */
                    void SetTableGroupId(const std::string& _tableGroupId);

                    /**
                     * 判断参数 TableGroupId 是否已赋值
                     * @return TableGroupId 是否已赋值
                     */
                    bool TableGroupIdHasBeenSet() const;

                    /**
                     * 获取Table name used as a filter condition
                     * @return TableName Table name used as a filter condition
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name used as a filter condition
                     * @param TableName Table name used as a filter condition
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取Applicant UIN used as a filter condition
                     * @return Applicant Applicant UIN used as a filter condition
                     */
                    std::string GetApplicant() const;

                    /**
                     * 设置Applicant UIN used as a filter condition
                     * @param Applicant Applicant UIN used as a filter condition
                     */
                    void SetApplicant(const std::string& _applicant);

                    /**
                     * 判断参数 Applicant 是否已赋值
                     * @return Applicant 是否已赋值
                     */
                    bool ApplicantHasBeenSet() const;

                    /**
                     * 获取Application type used as a filter condition
                     * @return ApplyType Application type used as a filter condition
                     */
                    int64_t GetApplyType() const;

                    /**
                     * 设置Application type used as a filter condition
                     * @param ApplyType Application type used as a filter condition
                     */
                    void SetApplyType(const int64_t& _applyType);

                    /**
                     * 判断参数 ApplyType 是否已赋值
                     * @return ApplyType 是否已赋值
                     */
                    bool ApplyTypeHasBeenSet() const;

                private:

                    /**
                     * ID of the cluster whose applications will be queried
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * The maximum number of results returned per page
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Application status used as a filter condition
                     */
                    int64_t m_censorStatus;
                    bool m_censorStatusHasBeenSet;

                    /**
                     * Table group ID used as a filter condition
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * Table name used as a filter condition
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Applicant UIN used as a filter condition
                     */
                    std::string m_applicant;
                    bool m_applicantHasBeenSet;

                    /**
                     * Application type used as a filter condition
                     */
                    int64_t m_applyType;
                    bool m_applyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEAPPLICATIONSREQUEST_H_
