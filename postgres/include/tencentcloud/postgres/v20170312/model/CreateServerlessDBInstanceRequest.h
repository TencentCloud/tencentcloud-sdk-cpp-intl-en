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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATESERVERLESSDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATESERVERLESSDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateServerlessDBInstance request structure.
                */
                class CreateServerlessDBInstanceRequest : public AbstractModel
                {
                public:
                    CreateServerlessDBInstanceRequest();
                    ~CreateServerlessDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Availability zone ID. Only ap-shanghai-2, ap-beijing-1, and ap-guangzhou-2 are supported during the beta test.
                     * @return Zone Availability zone ID. Only ap-shanghai-2, ap-beijing-1, and ap-guangzhou-2 are supported during the beta test.
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone ID. Only ap-shanghai-2, ap-beijing-1, and ap-guangzhou-2 are supported during the beta test.
                     * @param Zone Availability zone ID. Only ap-shanghai-2, ap-beijing-1, and ap-guangzhou-2 are supported during the beta test.
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Instance name. The value must be unique for the same account.
                     * @return DBInstanceName Instance name. The value must be unique for the same account.
                     */
                    std::string GetDBInstanceName() const;

                    /**
                     * 设置Instance name. The value must be unique for the same account.
                     * @param DBInstanceName Instance name. The value must be unique for the same account.
                     */
                    void SetDBInstanceName(const std::string& _dBInstanceName);

                    /**
                     * 判断参数 DBInstanceName 是否已赋值
                     * @return DBInstanceName 是否已赋值
                     */
                    bool DBInstanceNameHasBeenSet() const;

                    /**
                     * 获取Kernel version of a PostgreSQL instance. Currently, only 10.4 is supported.
                     * @return DBVersion Kernel version of a PostgreSQL instance. Currently, only 10.4 is supported.
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置Kernel version of a PostgreSQL instance. Currently, only 10.4 is supported.
                     * @param DBVersion Kernel version of a PostgreSQL instance. Currently, only 10.4 is supported.
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取Database character set of a PostgreSQL instance. Currently, only UTF-8 is supported.
                     * @return DBCharset Database character set of a PostgreSQL instance. Currently, only UTF-8 is supported.
                     */
                    std::string GetDBCharset() const;

                    /**
                     * 设置Database character set of a PostgreSQL instance. Currently, only UTF-8 is supported.
                     * @param DBCharset Database character set of a PostgreSQL instance. Currently, only UTF-8 is supported.
                     */
                    void SetDBCharset(const std::string& _dBCharset);

                    /**
                     * 判断参数 DBCharset 是否已赋值
                     * @return DBCharset 是否已赋值
                     */
                    bool DBCharsetHasBeenSet() const;

                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param ProjectId Project ID.
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取VPC ID.
                     * @return VpcId VPC ID.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID.
                     * @param VpcId VPC ID.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID.
                     * @return SubnetId VPC subnet ID.
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC subnet ID.
                     * @param SubnetId VPC subnet ID.
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Array of tags to be bound with the instance
                     * @return TagList Array of tags to be bound with the instance
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置Array of tags to be bound with the instance
                     * @param TagList Array of tags to be bound with the instance
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * Availability zone ID. Only ap-shanghai-2, ap-beijing-1, and ap-guangzhou-2 are supported during the beta test.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Instance name. The value must be unique for the same account.
                     */
                    std::string m_dBInstanceName;
                    bool m_dBInstanceNameHasBeenSet;

                    /**
                     * Kernel version of a PostgreSQL instance. Currently, only 10.4 is supported.
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * Database character set of a PostgreSQL instance. Currently, only UTF-8 is supported.
                     */
                    std::string m_dBCharset;
                    bool m_dBCharsetHasBeenSet;

                    /**
                     * Project ID.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * VPC ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC subnet ID.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Array of tags to be bound with the instance
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATESERVERLESSDBINSTANCEREQUEST_H_
