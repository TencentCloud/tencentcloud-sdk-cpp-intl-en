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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATESOURCE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Source type of migration task
                */
                class MigrateSource : public AbstractModel
                {
                public:
                    MigrateSource();
                    ~MigrateSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source instance ID in the format of `mssql-si2823jyl`, which is used when `MigrateType` is 1 (TencentDB for SQL Server)
                     * @return InstanceId Source instance ID in the format of `mssql-si2823jyl`, which is used when `MigrateType` is 1 (TencentDB for SQL Server)
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Source instance ID in the format of `mssql-si2823jyl`, which is used when `MigrateType` is 1 (TencentDB for SQL Server)
                     * @param InstanceId Source instance ID in the format of `mssql-si2823jyl`, which is used when `MigrateType` is 1 (TencentDB for SQL Server)
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取ID of source CVM instance, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     * @return CvmId ID of source CVM instance, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     */
                    std::string GetCvmId() const;

                    /**
                     * 设置ID of source CVM instance, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     * @param CvmId ID of source CVM instance, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     */
                    void SetCvmId(const std::string& _cvmId);

                    /**
                     * 判断参数 CvmId 是否已赋值
                     * @return CvmId 是否已赋值
                     */
                    bool CvmIdHasBeenSet() const;

                    /**
                     * 获取VPC ID of source CVM instance in the format of vpc-6ys9ont9, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     * @return VpcId VPC ID of source CVM instance in the format of vpc-6ys9ont9, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID of source CVM instance in the format of vpc-6ys9ont9, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     * @param VpcId VPC ID of source CVM instance in the format of vpc-6ys9ont9, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID of source CVM instance in the format of subnet-h9extioi, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     * @return SubnetId VPC subnet ID of source CVM instance in the format of subnet-h9extioi, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC subnet ID of source CVM instance in the format of subnet-h9extioi, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     * @param SubnetId VPC subnet ID of source CVM instance in the format of subnet-h9extioi, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Username, which is used when `MigrateType` is 1 or 2
                     * @return UserName Username, which is used when `MigrateType` is 1 or 2
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username, which is used when `MigrateType` is 1 or 2
                     * @param UserName Username, which is used when `MigrateType` is 1 or 2
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Password, which is used when `MigrateType` is 1 or 2
                     * @return Password Password, which is used when `MigrateType` is 1 or 2
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password, which is used when `MigrateType` is 1 or 2
                     * @param Password Password, which is used when `MigrateType` is 1 or 2
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Private IP of source CVM database, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     * @return Ip Private IP of source CVM database, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Private IP of source CVM database, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     * @param Ip Private IP of source CVM database, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Port number of source CVM database, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     * @return Port Port number of source CVM database, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Port number of source CVM database, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     * @param Port Port number of source CVM database, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Source backup address for offline migration, which is used when `MigrateType` is 4 or 5
                     * @return Url Source backup address for offline migration, which is used when `MigrateType` is 4 or 5
                     */
                    std::vector<std::string> GetUrl() const;

                    /**
                     * 设置Source backup address for offline migration, which is used when `MigrateType` is 4 or 5
                     * @param Url Source backup address for offline migration, which is used when `MigrateType` is 4 or 5
                     */
                    void SetUrl(const std::vector<std::string>& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Source backup password for offline migration, which is used when `MigrateType` is 4 or 5
                     * @return UrlPassword Source backup password for offline migration, which is used when `MigrateType` is 4 or 5
                     */
                    std::string GetUrlPassword() const;

                    /**
                     * 设置Source backup password for offline migration, which is used when `MigrateType` is 4 or 5
                     * @param UrlPassword Source backup password for offline migration, which is used when `MigrateType` is 4 or 5
                     */
                    void SetUrlPassword(const std::string& _urlPassword);

                    /**
                     * 判断参数 UrlPassword 是否已赋值
                     * @return UrlPassword 是否已赋值
                     */
                    bool UrlPasswordHasBeenSet() const;

                private:

                    /**
                     * Source instance ID in the format of `mssql-si2823jyl`, which is used when `MigrateType` is 1 (TencentDB for SQL Server)
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ID of source CVM instance, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     */
                    std::string m_cvmId;
                    bool m_cvmIdHasBeenSet;

                    /**
                     * VPC ID of source CVM instance in the format of vpc-6ys9ont9, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC subnet ID of source CVM instance in the format of subnet-h9extioi, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Username, which is used when `MigrateType` is 1 or 2
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Password, which is used when `MigrateType` is 1 or 2
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Private IP of source CVM database, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Port number of source CVM database, which is used when `MigrateType` is 2 (CVM-based self-created SQL Server database)
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Source backup address for offline migration, which is used when `MigrateType` is 4 or 5
                     */
                    std::vector<std::string> m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Source backup password for offline migration, which is used when `MigrateType` is 4 or 5
                     */
                    std::string m_urlPassword;
                    bool m_urlPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATESOURCE_H_
