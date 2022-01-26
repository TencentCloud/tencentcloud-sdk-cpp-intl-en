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
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of mssql-njj2mtpl
                     * @param InstanceId Instance ID in the format of mssql-njj2mtpl
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Group ID of unarchived backup files, which can be obtained by the `DescribeBackups` API
                     * @return GroupId Group ID of unarchived backup files, which can be obtained by the `DescribeBackups` API
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Group ID of unarchived backup files, which can be obtained by the `DescribeBackups` API
                     * @param GroupId Group ID of unarchived backup files, which can be obtained by the `DescribeBackups` API
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Number of entries to be returned per page. Value range: 1-100. Default value: `20`
                     * @return Limit Number of entries to be returned per page. Value range: 1-100. Default value: `20`
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries to be returned per page. Value range: 1-100. Default value: `20`
                     * @param Limit Number of entries to be returned per page. Value range: 1-100. Default value: `20`
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Page number. Default value: `0`
                     * @return Offset Page number. Default value: `0`
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number. Default value: `0`
                     * @param Offset Page number. Default value: `0`
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Filter backups by database name. If the parameter is left empty, this filter criterion will not take effect.
                     * @return DatabaseName Filter backups by database name. If the parameter is left empty, this filter criterion will not take effect.
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Filter backups by database name. If the parameter is left empty, this filter criterion will not take effect.
                     * @param DatabaseName Filter backups by database name. If the parameter is left empty, this filter criterion will not take effect.
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     */
                    bool DatabaseNameHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of mssql-njj2mtpl
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Group ID of unarchived backup files, which can be obtained by the `DescribeBackups` API
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPFILESREQUEST_H_
