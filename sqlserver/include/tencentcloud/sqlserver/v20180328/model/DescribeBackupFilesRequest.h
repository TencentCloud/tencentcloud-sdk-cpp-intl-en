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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPFILESREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeBackupFiles request structure.
                */
                class DescribeBackupFilesRequest : public AbstractModel
                {
                public:
                    DescribeBackupFilesRequest();
                    ~DescribeBackupFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of mssql-njj2mtpl
                     * @return InstanceId Instance ID in the format of mssql-njj2mtpl
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of mssql-njj2mtpl
                     * @param _instanceId Instance ID in the format of mssql-njj2mtpl
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
                     * 获取Group ID of unarchived backup files, which can be obtained by the `DescribeBackups` API (Querying archived backup record is not supported).
                     * @return GroupId Group ID of unarchived backup files, which can be obtained by the `DescribeBackups` API (Querying archived backup record is not supported).
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Group ID of unarchived backup files, which can be obtained by the `DescribeBackups` API (Querying archived backup record is not supported).
                     * @param _groupId Group ID of unarchived backup files, which can be obtained by the `DescribeBackups` API (Querying archived backup record is not supported).
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Number of entries to be returned per page. Value range: 1-100. Default value: `20`
                     * @return Limit Number of entries to be returned per page. Value range: 1-100. Default value: `20`
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries to be returned per page. Value range: 1-100. Default value: `20`
                     * @param _limit Number of entries to be returned per page. Value range: 1-100. Default value: `20`
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
                     * 获取Page number. Default value: `0`
                     * @return Offset Page number. Default value: `0`
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number. Default value: `0`
                     * @param _offset Page number. Default value: `0`
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
                     * 获取Filter backups by database name. If the parameter is left empty, this filter criterion will not take effect.
                     * @return DatabaseName Filter backups by database name. If the parameter is left empty, this filter criterion will not take effect.
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Filter backups by database name. If the parameter is left empty, this filter criterion will not take effect.
                     * @param _databaseName Filter backups by database name. If the parameter is left empty, this filter criterion will not take effect.
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
                     * 获取List items sorting by backup size. Valid values: `desc`(descending order), `asc` (ascending order). Default value: `desc`.
                     * @return OrderBy List items sorting by backup size. Valid values: `desc`(descending order), `asc` (ascending order). Default value: `desc`.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置List items sorting by backup size. Valid values: `desc`(descending order), `asc` (ascending order). Default value: `desc`.
                     * @param _orderBy List items sorting by backup size. Valid values: `desc`(descending order), `asc` (ascending order). Default value: `desc`.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of mssql-njj2mtpl
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Group ID of unarchived backup files, which can be obtained by the `DescribeBackups` API (Querying archived backup record is not supported).
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Number of entries to be returned per page. Value range: 1-100. Default value: `20`
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page number. Default value: `0`
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter backups by database name. If the parameter is left empty, this filter criterion will not take effect.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * List items sorting by backup size. Valid values: `desc`(descending order), `asc` (ascending order). Default value: `desc`.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPFILESREQUEST_H_
