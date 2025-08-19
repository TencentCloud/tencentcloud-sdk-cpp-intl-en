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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_DATASOURCEINFO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_DATASOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/BaseStateAction.h>
#include <tencentcloud/bi/v20220105/model/PermissionGroup.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * Data source details
                */
                class DatasourceInfo : public AbstractModel
                {
                public:
                    DatasourceInfo();
                    ~DatasourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database ID.
                     * @return Id Database ID.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Database ID.
                     * @param _id Database ID.
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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
                     * 获取Domain type. Valid values: 1: Tencent Cloud; 2: local.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceType Domain type. Valid values: 1: Tencent Cloud; 2: local.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置Domain type. Valid values: 1: Tencent Cloud; 2: local.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceType Domain type. Valid values: 1: Tencent Cloud; 2: local.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Database driver.
                     * @return DbType Database driver.
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置Database driver.
                     * @param _dbType Database driver.
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
                     * 获取Creation time.

                     * @return CreatedAt Creation time.

                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Creation time.

                     * @param _createdAt Creation time.

                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Modification time.
                     * @return UpdatedAt Modification time.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Modification time.
                     * @param _updatedAt Modification time.
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreatedUser Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedUser() const;

                    /**
                     * 设置Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createdUser Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatedUser(const std::string& _createdUser);

                    /**
                     * 判断参数 CreatedUser 是否已赋值
                     * @return CreatedUser 是否已赋值
                     * 
                     */
                    bool CreatedUserHasBeenSet() const;

                    /**
                     * 获取Catalog value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Catalog Catalog value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置Catalog value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _catalog Catalog value.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Connection type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConnectType Connection type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConnectType() const;

                    /**
                     * 设置Connection type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _connectType Connection type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConnectType(const std::string& _connectType);

                    /**
                     * 判断参数 ConnectType 是否已赋值
                     * @return ConnectType 是否已赋值
                     * 
                     */
                    bool ConnectTypeHasBeenSet() const;

                    /**
                     * 获取Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectId Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Data source description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Desc Data source description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Data source description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _desc Data source description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Data source status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Data source status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Data source status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Data source status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Source platform.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourcePlat Source platform.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSourcePlat() const;

                    /**
                     * 设置Source platform.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourcePlat Source platform.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourcePlat(const std::string& _sourcePlat);

                    /**
                     * 判断参数 SourcePlat 是否已赋值
                     * @return SourcePlat 是否已赋值
                     * 
                     */
                    bool SourcePlatHasBeenSet() const;

                    /**
                     * 获取Extension parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExtraParam Extension parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExtraParam() const;

                    /**
                     * 设置Extension parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extraParam Extension parameter.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Additional information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AddInfo Additional information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddInfo() const;

                    /**
                     * 设置Additional information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _addInfo Additional information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAddInfo(const std::string& _addInfo);

                    /**
                     * 判断参数 AddInfo 是否已赋值
                     * @return AddInfo 是否已赋值
                     * 
                     */
                    bool AddInfoHasBeenSet() const;

                    /**
                     * 获取Project name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectName Project name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectName Project name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Engine type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EngineType Engine type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置Engine type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _engineType Engine type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取Data source owner.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Manager Data source owner.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetManager() const;

                    /**
                     * 设置Data source owner.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _manager Data source owner.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetManager(const std::string& _manager);

                    /**
                     * 判断参数 Manager 是否已赋值
                     * @return Manager 是否已赋值
                     * 
                     */
                    bool ManagerHasBeenSet() const;

                    /**
                     * 获取Operation personnel allowlist.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OperatorWhitelist Operation personnel allowlist.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOperatorWhitelist() const;

                    /**
                     * 设置Operation personnel allowlist.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _operatorWhitelist Operation personnel allowlist.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOperatorWhitelist(const std::string& _operatorWhitelist);

                    /**
                     * 判断参数 OperatorWhitelist 是否已赋值
                     * @return OperatorWhitelist 是否已赋值
                     * 
                     */
                    bool OperatorWhitelistHasBeenSet() const;

                    /**
                     * 获取VPC information of the data source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId VPC information of the data source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC information of the data source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcId VPC information of the data source.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取uniqVpc information of the data source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UniqVpcId uniqVpc information of the data source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置uniqVpc information of the data source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uniqVpcId uniqVpc information of the data source.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Data source region information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionId Data source region information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置Data source region information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _regionId Data source region information.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Operation attributes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StateAction Operation attributes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BaseStateAction GetStateAction() const;

                    /**
                     * 设置Operation attributes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stateAction Operation attributes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStateAction(const BaseStateAction& _stateAction);

                    /**
                     * 判断参数 StateAction 是否已赋值
                     * @return StateAction 是否已赋值
                     * 
                     */
                    bool StateActionHasBeenSet() const;

                    /**
                     * 获取Updater.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdatedUser Updater.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdatedUser() const;

                    /**
                     * 设置Updater.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updatedUser Updater.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdatedUser(const std::string& _updatedUser);

                    /**
                     * 判断参数 UpdatedUser 是否已赋值
                     * @return UpdatedUser 是否已赋值
                     * 
                     */
                    bool UpdatedUserHasBeenSet() const;

                    /**
                     * 获取Permission list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PermissionList Permission list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PermissionGroup> GetPermissionList() const;

                    /**
                     * 设置Permission list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _permissionList Permission list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPermissionList(const std::vector<PermissionGroup>& _permissionList);

                    /**
                     * 判断参数 PermissionList 是否已赋值
                     * @return PermissionList 是否已赋值
                     * 
                     */
                    bool PermissionListHasBeenSet() const;

                    /**
                     * 获取Permission value list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuthList Permission value list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAuthList() const;

                    /**
                     * 设置Permission value list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _authList Permission value list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuthList(const std::vector<std::string>& _authList);

                    /**
                     * 判断参数 AuthList 是否已赋值
                     * @return AuthList 是否已赋值
                     * 
                     */
                    bool AuthListHasBeenSet() const;

                    /**
                     * 获取Third-party data source identifier.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataOrigin Third-party data source identifier.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataOrigin() const;

                    /**
                     * 设置Third-party data source identifier.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataOrigin Third-party data source identifier.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataOriginProjectId Third-party project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataOriginProjectId() const;

                    /**
                     * 设置Third-party project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataOriginProjectId Third-party project ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataOriginDatasourceId Third-party data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataOriginDatasourceId() const;

                    /**
                     * 设置Third-party data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataOriginDatasourceId Third-party data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterId Cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterId Cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Data source name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DbTypeName Data source name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDbTypeName() const;

                    /**
                     * 设置Data source name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dbTypeName Data source name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDbTypeName(const std::string& _dbTypeName);

                    /**
                     * 判断参数 DbTypeName 是否已赋值
                     * @return DbTypeName 是否已赋值
                     * 
                     */
                    bool DbTypeNameHasBeenSet() const;

                    /**
                     * 获取Enable VPC.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UseVPC Enable VPC.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetUseVPC() const;

                    /**
                     * 设置Enable VPC.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _useVPC Enable VPC.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Associated person ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Owner Associated person ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置Associated person ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _owner Associated person ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取Associated person name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OwnerName Associated person name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置Associated person name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ownerName Associated person name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOwnerName(const std::string& _ownerName);

                    /**
                     * 判断参数 OwnerName 是否已赋值
                     * @return OwnerName 是否已赋值
                     * 
                     */
                    bool OwnerNameHasBeenSet() const;

                private:

                    /**
                     * Database ID.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Database name.
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Domain type. Valid values: 1: Tencent Cloud; 2: local.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * Database alias.
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * Database driver.
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

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
                     * Username.
                     */
                    std::string m_dbUser;
                    bool m_dbUserHasBeenSet;

                    /**
                     * Database encoding.
                     */
                    std::string m_charset;
                    bool m_charsetHasBeenSet;

                    /**
                     * Creation time.

                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Modification time.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdUser;
                    bool m_createdUserHasBeenSet;

                    /**
                     * Catalog value.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * Connection type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_connectType;
                    bool m_connectTypeHasBeenSet;

                    /**
                     * Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Data source description.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Data source status.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Source platform.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sourcePlat;
                    bool m_sourcePlatHasBeenSet;

                    /**
                     * Extension parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_extraParam;
                    bool m_extraParamHasBeenSet;

                    /**
                     * Additional information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_addInfo;
                    bool m_addInfoHasBeenSet;

                    /**
                     * Project name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Engine type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * Data source owner.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_manager;
                    bool m_managerHasBeenSet;

                    /**
                     * Operation personnel allowlist.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_operatorWhitelist;
                    bool m_operatorWhitelistHasBeenSet;

                    /**
                     * VPC information of the data source.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * uniqVpc information of the data source.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Data source region information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Operation attributes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BaseStateAction m_stateAction;
                    bool m_stateActionHasBeenSet;

                    /**
                     * Updater.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updatedUser;
                    bool m_updatedUserHasBeenSet;

                    /**
                     * Permission list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PermissionGroup> m_permissionList;
                    bool m_permissionListHasBeenSet;

                    /**
                     * Permission value list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_authList;
                    bool m_authListHasBeenSet;

                    /**
                     * Third-party data source identifier.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataOrigin;
                    bool m_dataOriginHasBeenSet;

                    /**
                     * Third-party project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataOriginProjectId;
                    bool m_dataOriginProjectIdHasBeenSet;

                    /**
                     * Third-party data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataOriginDatasourceId;
                    bool m_dataOriginDatasourceIdHasBeenSet;

                    /**
                     * Cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Data source name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dbTypeName;
                    bool m_dbTypeNameHasBeenSet;

                    /**
                     * Enable VPC.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_useVPC;
                    bool m_useVPCHasBeenSet;

                    /**
                     * Associated person ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * Associated person name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DATASOURCEINFO_H_
