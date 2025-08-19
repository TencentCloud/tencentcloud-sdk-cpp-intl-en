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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_CREATEDATASOURCECLOUDREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_CREATEDATASOURCECLOUDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * CreateDatasourceCloud request structure.
                */
                class CreateDatasourceCloudRequest : public AbstractModel
                {
                public:
                    CreateDatasourceCloudRequest();
                    ~CreateDatasourceCloudRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The backend provides dictionaries: domain type. 1. Tencent Cloud, 2. local.
                     * @return ServiceType The backend provides dictionaries: domain type. 1. Tencent Cloud, 2. local.
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置The backend provides dictionaries: domain type. 1. Tencent Cloud, 2. local.
                     * @param _serviceType The backend provides dictionaries: domain type. 1. Tencent Cloud, 2. local.
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取Drive.
                     * @return DbType Drive.
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置Drive.
                     * @param _dbType Drive.
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取Database encoding.
                     * @return Charset Database encoding.
                     * 
                     */
                    std::string GetCharset() const;

                    /**
                     * 设置Database encoding.
                     * @param _charset Database encoding.
                     * 
                     */
                    void SetCharset(const std::string& _charset);

                    /**
                     * 判断参数 Charset 是否已赋值
                     * @return Charset 是否已赋值
                     * 
                     */
                    bool CharsetHasBeenSet() const;

                    /**
                     * 获取Username.
                     * @return DbUser Username.
                     * 
                     */
                    std::string GetDbUser() const;

                    /**
                     * 设置Username.
                     * @param _dbUser Username.
                     * 
                     */
                    void SetDbUser(const std::string& _dbUser);

                    /**
                     * 判断参数 DbUser 是否已赋值
                     * @return DbUser 是否已赋值
                     * 
                     */
                    bool DbUserHasBeenSet() const;

                    /**
                     * 获取Password.
                     * @return DbPwd Password.
                     * 
                     */
                    std::string GetDbPwd() const;

                    /**
                     * 设置Password.
                     * @param _dbPwd Password.
                     * 
                     */
                    void SetDbPwd(const std::string& _dbPwd);

                    /**
                     * 判断参数 DbPwd 是否已赋值
                     * @return DbPwd 是否已赋值
                     * 
                     */
                    bool DbPwdHasBeenSet() const;

                    /**
                     * 获取Database name.
                     * @return DbName Database name.
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Database name.
                     * @param _dbName Database name.
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
                     * 获取Database alias.
                     * @return SourceName Database alias.
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置Database alias.
                     * @param _sourceName Database alias.
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Private network IP address of the public cloud.
                     * @return Vip Private network IP address of the public cloud.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Private network IP address of the public cloud.
                     * @param _vip Private network IP address of the public cloud.
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Private network port of the public cloud.
                     * @return Vport Private network port of the public cloud.
                     * 
                     */
                    std::string GetVport() const;

                    /**
                     * 设置Private network port of the public cloud.
                     * @param _vport Private network port of the public cloud.
                     * 
                     */
                    void SetVport(const std::string& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取VPC identifier.
                     * @return VpcId VPC identifier.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC identifier.
                     * @param _vpcId VPC identifier.
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
                     * 获取Unified VPC identifier.
                     * @return UniqVpcId Unified VPC identifier.
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置Unified VPC identifier.
                     * @param _uniqVpcId Unified VPC identifier.
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取Region identifier (gz, bj).
                     * @return RegionId Region identifier (gz, bj).
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置Region identifier (gz, bj).
                     * @param _regionId Region identifier (gz, bj).
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Extension parameter.
                     * @return ExtraParam Extension parameter.
                     * 
                     */
                    std::string GetExtraParam() const;

                    /**
                     * 设置Extension parameter.
                     * @param _extraParam Extension parameter.
                     * 
                     */
                    void SetExtraParam(const std::string& _extraParam);

                    /**
                     * 判断参数 ExtraParam 是否已赋值
                     * @return ExtraParam 是否已赋值
                     * 
                     */
                    bool ExtraParamHasBeenSet() const;

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
                     * 获取Product name of the data source.
                     * @return ProdDbName Product name of the data source.
                     * 
                     */
                    std::string GetProdDbName() const;

                    /**
                     * 设置Product name of the data source.
                     * @param _prodDbName Product name of the data source.
                     * 
                     */
                    void SetProdDbName(const std::string& _prodDbName);

                    /**
                     * 判断参数 ProdDbName 是否已赋值
                     * @return ProdDbName 是否已赋值
                     * 
                     */
                    bool ProdDbNameHasBeenSet() const;

                    /**
                     * 获取Third-party data source identifier.
                     * @return DataOrigin Third-party data source identifier.
                     * 
                     */
                    std::string GetDataOrigin() const;

                    /**
                     * 设置Third-party data source identifier.
                     * @param _dataOrigin Third-party data source identifier.
                     * 
                     */
                    void SetDataOrigin(const std::string& _dataOrigin);

                    /**
                     * 判断参数 DataOrigin 是否已赋值
                     * @return DataOrigin 是否已赋值
                     * 
                     */
                    bool DataOriginHasBeenSet() const;

                    /**
                     * 获取Third-party project ID.
                     * @return DataOriginProjectId Third-party project ID.
                     * 
                     */
                    std::string GetDataOriginProjectId() const;

                    /**
                     * 设置Third-party project ID.
                     * @param _dataOriginProjectId Third-party project ID.
                     * 
                     */
                    void SetDataOriginProjectId(const std::string& _dataOriginProjectId);

                    /**
                     * 判断参数 DataOriginProjectId 是否已赋值
                     * @return DataOriginProjectId 是否已赋值
                     * 
                     */
                    bool DataOriginProjectIdHasBeenSet() const;

                    /**
                     * 获取Third-party data source ID.
                     * @return DataOriginDatasourceId Third-party data source ID.
                     * 
                     */
                    std::string GetDataOriginDatasourceId() const;

                    /**
                     * 设置Third-party data source ID.
                     * @param _dataOriginDatasourceId Third-party data source ID.
                     * 
                     */
                    void SetDataOriginDatasourceId(const std::string& _dataOriginDatasourceId);

                    /**
                     * 判断参数 DataOriginDatasourceId 是否已赋值
                     * @return DataOriginDatasourceId 是否已赋值
                     * 
                     */
                    bool DataOriginDatasourceIdHasBeenSet() const;

                    /**
                     * 获取Cluster ID.
                     * @return ClusterId Cluster ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _clusterId Cluster ID.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return Schema 
                     * 
                     */
                    std::string GetSchema() const;

                    /**
                     * 设置
                     * @param _schema 
                     * 
                     */
                    void SetSchema(const std::string& _schema);

                    /**
                     * 判断参数 Schema 是否已赋值
                     * @return Schema 是否已赋值
                     * 
                     */
                    bool SchemaHasBeenSet() const;

                    /**
                     * 获取
                     * @return DbVersion 
                     * 
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置
                     * @param _dbVersion 
                     * 
                     */
                    void SetDbVersion(const std::string& _dbVersion);

                    /**
                     * 判断参数 DbVersion 是否已赋值
                     * @return DbVersion 是否已赋值
                     * 
                     */
                    bool DbVersionHasBeenSet() const;

                private:

                    /**
                     * The backend provides dictionaries: domain type. 1. Tencent Cloud, 2. local.
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * Drive.
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * Database encoding.
                     */
                    std::string m_charset;
                    bool m_charsetHasBeenSet;

                    /**
                     * Username.
                     */
                    std::string m_dbUser;
                    bool m_dbUserHasBeenSet;

                    /**
                     * Password.
                     */
                    std::string m_dbPwd;
                    bool m_dbPwdHasBeenSet;

                    /**
                     * Database name.
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Database alias.
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Private network IP address of the public cloud.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Private network port of the public cloud.
                     */
                    std::string m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * VPC identifier.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Unified VPC identifier.
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Region identifier (gz, bj).
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Extension parameter.
                     */
                    std::string m_extraParam;
                    bool m_extraParamHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Product name of the data source.
                     */
                    std::string m_prodDbName;
                    bool m_prodDbNameHasBeenSet;

                    /**
                     * Third-party data source identifier.
                     */
                    std::string m_dataOrigin;
                    bool m_dataOriginHasBeenSet;

                    /**
                     * Third-party project ID.
                     */
                    std::string m_dataOriginProjectId;
                    bool m_dataOriginProjectIdHasBeenSet;

                    /**
                     * Third-party data source ID.
                     */
                    std::string m_dataOriginDatasourceId;
                    bool m_dataOriginDatasourceIdHasBeenSet;

                    /**
                     * Cluster ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_CREATEDATASOURCECLOUDREQUEST_H_
