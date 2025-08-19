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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_MODIFYDATASOURCEREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_MODIFYDATASOURCEREQUEST_H_

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
                * ModifyDatasource request structure.
                */
                class ModifyDatasourceRequest : public AbstractModel
                {
                public:
                    ModifyDatasourceRequest();
                    ~ModifyDatasourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取HOST
                     * @return DbHost HOST
                     * 
                     */
                    std::string GetDbHost() const;

                    /**
                     * 设置HOST
                     * @param _dbHost HOST
                     * 
                     */
                    void SetDbHost(const std::string& _dbHost);

                    /**
                     * 判断参数 DbHost 是否已赋值
                     * @return DbHost 是否已赋值
                     * 
                     */
                    bool DbHostHasBeenSet() const;

                    /**
                     * 获取Port.
                     * @return DbPort Port.
                     * 
                     */
                    uint64_t GetDbPort() const;

                    /**
                     * 设置Port.
                     * @param _dbPort Port.
                     * 
                     */
                    void SetDbPort(const uint64_t& _dbPort);

                    /**
                     * 判断参数 DbPort 是否已赋值
                     * @return DbPort 是否已赋值
                     * 
                     */
                    bool DbPortHasBeenSet() const;

                    /**
                     * 获取The backend provides dictionaries: domain type. 1: Tencent Cloud; 2: local.
                     * @return ServiceType The backend provides dictionaries: domain type. 1: Tencent Cloud; 2: local.
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置The backend provides dictionaries: domain type. 1: Tencent Cloud; 2: local.
                     * @param _serviceType The backend provides dictionaries: domain type. 1: Tencent Cloud; 2: local.
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
                     * 获取Data source ID.
                     * @return Id Data source ID.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Data source ID.
                     * @param _id Data source ID.
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Catalog value.
                     * @return Catalog Catalog value.
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置Catalog value.
                     * @param _catalog Catalog value.
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

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
                     * 获取Unified identifier of the Tencent Cloud VPC.
                     * @return UniqVpcId Unified identifier of the Tencent Cloud VPC.
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置Unified identifier of the Tencent Cloud VPC.
                     * @param _uniqVpcId Unified identifier of the Tencent Cloud VPC.
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
                     * 获取VPC IP address.
                     * @return Vip VPC IP address.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置VPC IP address.
                     * @param _vip VPC IP address.
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
                     * 获取VPC port.
                     * @return Vport VPC port.
                     * 
                     */
                    std::string GetVport() const;

                    /**
                     * 设置VPC port.
                     * @param _vport VPC port.
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
                     * 获取Tencent Cloud VPC identifier.
                     * @return VpcId Tencent Cloud VPC identifier.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Tencent Cloud VPC identifier.
                     * @param _vpcId Tencent Cloud VPC identifier.
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
                     * 获取Enable VPC.  
                     * @return UseVPC Enable VPC.  
                     * 
                     */
                    bool GetUseVPC() const;

                    /**
                     * 设置Enable VPC.  
                     * @param _useVPC Enable VPC.  
                     * 
                     */
                    void SetUseVPC(const bool& _useVPC);

                    /**
                     * 判断参数 UseVPC 是否已赋值
                     * @return UseVPC 是否已赋值
                     * 
                     */
                    bool UseVPCHasBeenSet() const;

                    /**
                     * 获取Region.
                     * @return RegionId Region.
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置Region.
                     * @param _regionId Region.
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * HOST
                     */
                    std::string m_dbHost;
                    bool m_dbHostHasBeenSet;

                    /**
                     * Port.
                     */
                    uint64_t m_dbPort;
                    bool m_dbPortHasBeenSet;

                    /**
                     * The backend provides dictionaries: domain type. 1: Tencent Cloud; 2: local.
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
                     * Data source ID.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Project ID.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Catalog value.
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

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
                     * Extension parameter.
                     */
                    std::string m_extraParam;
                    bool m_extraParamHasBeenSet;

                    /**
                     * Unified identifier of the Tencent Cloud VPC.
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * VPC IP address.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * VPC port.
                     */
                    std::string m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Tencent Cloud VPC identifier.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Enable VPC.  
                     */
                    bool m_useVPC;
                    bool m_useVPCHasBeenSet;

                    /**
                     * Region.
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_MODIFYDATASOURCEREQUEST_H_
