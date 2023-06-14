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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_SERVERLESSDBINSTANCE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_SERVERLESSDBINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/ServerlessDBInstanceNetInfo.h>
#include <tencentcloud/postgres/v20170312/model/ServerlessDBAccount.h>
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
                * PostgreSQL for Serverless instance description
                */
                class ServerlessDBInstance : public AbstractModel
                {
                public:
                    ServerlessDBInstance();
                    ~ServerlessDBInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID, which is the unique identifier
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DBInstanceId Instance ID, which is the unique identifier
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID, which is the unique identifier
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _dBInstanceId Instance ID, which is the unique identifier
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DBInstanceName Instance name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDBInstanceName() const;

                    /**
                     * 设置Instance name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _dBInstanceName Instance name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDBInstanceName(const std::string& _dBInstanceName);

                    /**
                     * 判断参数 DBInstanceName 是否已赋值
                     * @return DBInstanceName 是否已赋值
                     * 
                     */
                    bool DBInstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DBInstanceStatus Instance status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDBInstanceStatus() const;

                    /**
                     * 设置Instance status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _dBInstanceStatus Instance status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDBInstanceStatus(const std::string& _dBInstanceStatus);

                    /**
                     * 判断参数 DBInstanceStatus 是否已赋值
                     * @return DBInstanceStatus 是否已赋值
                     * 
                     */
                    bool DBInstanceStatusHasBeenSet() const;

                    /**
                     * 获取Region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Region Region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _region Region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Availability zone
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Zone Availability zone
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _zone Availability zone
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Project ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ProjectId Project ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _projectId Project ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取VPC ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return VpcId VPC ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _vpcId VPC ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SubnetId Subnet ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _subnetId Subnet ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Character set
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DBCharset Character set
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDBCharset() const;

                    /**
                     * 设置Character set
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _dBCharset Character set
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDBCharset(const std::string& _dBCharset);

                    /**
                     * 判断参数 DBCharset 是否已赋值
                     * @return DBCharset 是否已赋值
                     * 
                     */
                    bool DBCharsetHasBeenSet() const;

                    /**
                     * 获取Database version
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DBVersion Database version
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置Database version
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _dBVersion Database version
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     * 
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _createTime Creation time
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Instance network information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DBInstanceNetInfo Instance network information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ServerlessDBInstanceNetInfo> GetDBInstanceNetInfo() const;

                    /**
                     * 设置Instance network information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _dBInstanceNetInfo Instance network information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDBInstanceNetInfo(const std::vector<ServerlessDBInstanceNetInfo>& _dBInstanceNetInfo);

                    /**
                     * 判断参数 DBInstanceNetInfo 是否已赋值
                     * @return DBInstanceNetInfo 是否已赋值
                     * 
                     */
                    bool DBInstanceNetInfoHasBeenSet() const;

                    /**
                     * 获取Instance account information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DBAccountSet Instance account information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ServerlessDBAccount> GetDBAccountSet() const;

                    /**
                     * 设置Instance account information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _dBAccountSet Instance account information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDBAccountSet(const std::vector<ServerlessDBAccount>& _dBAccountSet);

                    /**
                     * 判断参数 DBAccountSet 是否已赋值
                     * @return DBAccountSet 是否已赋值
                     * 
                     */
                    bool DBAccountSetHasBeenSet() const;

                    /**
                     * 获取Information of the databases in an instance
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DBDatabaseList Information of the databases in an instance
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDBDatabaseList() const;

                    /**
                     * 设置Information of the databases in an instance
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _dBDatabaseList Information of the databases in an instance
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDBDatabaseList(const std::vector<std::string>& _dBDatabaseList);

                    /**
                     * 判断参数 DBDatabaseList 是否已赋值
                     * @return DBDatabaseList 是否已赋值
                     * 
                     */
                    bool DBDatabaseListHasBeenSet() const;

                    /**
                     * 获取The array of tags bound to an instance
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TagList The array of tags bound to an instance
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置The array of tags bound to an instance
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _tagList The array of tags bound to an instance
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取Database kernel version
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DBKernelVersion Database kernel version
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDBKernelVersion() const;

                    /**
                     * 设置Database kernel version
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _dBKernelVersion Database kernel version
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDBKernelVersion(const std::string& _dBKernelVersion);

                    /**
                     * 判断参数 DBKernelVersion 是否已赋值
                     * @return DBKernelVersion 是否已赋值
                     * 
                     */
                    bool DBKernelVersionHasBeenSet() const;

                    /**
                     * 获取Database major version number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DBMajorVersion Database major version number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDBMajorVersion() const;

                    /**
                     * 设置Database major version number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _dBMajorVersion Database major version number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDBMajorVersion(const std::string& _dBMajorVersion);

                    /**
                     * 判断参数 DBMajorVersion 是否已赋值
                     * @return DBMajorVersion 是否已赋值
                     * 
                     */
                    bool DBMajorVersionHasBeenSet() const;

                private:

                    /**
                     * Instance ID, which is the unique identifier
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Instance name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_dBInstanceName;
                    bool m_dBInstanceNameHasBeenSet;

                    /**
                     * Instance status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_dBInstanceStatus;
                    bool m_dBInstanceStatusHasBeenSet;

                    /**
                     * Region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Availability zone
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Project ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * VPC ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Character set
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_dBCharset;
                    bool m_dBCharsetHasBeenSet;

                    /**
                     * Database version
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * Creation time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Instance network information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ServerlessDBInstanceNetInfo> m_dBInstanceNetInfo;
                    bool m_dBInstanceNetInfoHasBeenSet;

                    /**
                     * Instance account information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ServerlessDBAccount> m_dBAccountSet;
                    bool m_dBAccountSetHasBeenSet;

                    /**
                     * Information of the databases in an instance
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_dBDatabaseList;
                    bool m_dBDatabaseListHasBeenSet;

                    /**
                     * The array of tags bound to an instance
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * Database kernel version
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_dBKernelVersion;
                    bool m_dBKernelVersionHasBeenSet;

                    /**
                     * Database major version number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_dBMajorVersion;
                    bool m_dBMajorVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_SERVERLESSDBINSTANCE_H_
