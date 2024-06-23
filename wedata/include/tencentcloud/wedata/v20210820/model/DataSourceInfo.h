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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Data Source Object
                */
                class DataSourceInfo : public AbstractModel
                {
                public:
                    DataSourceInfo();
                    ~DataSourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取If the data source list is bound to a database, then it is the database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return DatabaseName If the data source list is bound to a database, then it is the database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置If the data source list is bound to a database, then it is the database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _databaseName If the data source list is bound to a database, then it is the database nameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Data source description informationNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Description Data source description informationNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Data source description informationNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _description Data source description informationNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ID Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _iD Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Instance ID of the data source engine, e.g., CDB Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Instance Instance ID of the data source engine, e.g., CDB Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstance() const;

                    /**
                     * 设置Instance ID of the data source engine, e.g., CDB Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _instance Instance ID of the data source engine, e.g., CDB Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstance(const std::string& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取Data Source Name, cannot be empty under the same SpaceNameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Name Data Source Name, cannot be empty under the same SpaceNameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Data Source Name, cannot be empty under the same SpaceNameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _name Data Source Name, cannot be empty under the same SpaceNameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Region to which the data source engine belongs
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Region Region to which the data source engine belongs
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region to which the data source engine belongs
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _region Region to which the data source engine belongs
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Data Source Type: enumerated valuesNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Type Data Source Type: enumerated valuesNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Data Source Type: enumerated valuesNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _type Data Source Type: enumerated valuesNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Cluster ID to which the data source belongs
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ClusterId Cluster ID to which the data source belongs
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID to which the data source belongs
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _clusterId Cluster ID to which the data source belongs
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Application ID AppId
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AppId Application ID AppId
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置Application ID AppId
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _appId Application ID AppId
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Configuration Information Extension of Business Data SourceNote: This field may return null, indicating that no valid value can be obtained.
                     * @return BizParams Configuration Information Extension of Business Data SourceNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetBizParams() const;

                    /**
                     * 设置Configuration Information Extension of Business Data SourceNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _bizParams Configuration Information Extension of Business Data SourceNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetBizParams(const std::string& _bizParams);

                    /**
                     * 判断参数 BizParams 是否已赋值
                     * @return BizParams 是否已赋值
                     * 
                     */
                    bool BizParamsHasBeenSet() const;

                    /**
                     * 获取Data Source Category: Binding Engine, Binding DatabaseNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Category Data Source Category: Binding Engine, Binding DatabaseNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Data Source Category: Binding Engine, Binding DatabaseNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _category Data Source Category: Binding Engine, Binding DatabaseNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取Data Source Display Name, for visual inspectionNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Display Data Source Display Name, for visual inspectionNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDisplay() const;

                    /**
                     * 设置Data Source Display Name, for visual inspectionNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _display Data Source Display Name, for visual inspectionNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDisplay(const std::string& _display);

                    /**
                     * 判断参数 Display 是否已赋值
                     * @return Display 是否已赋值
                     * 
                     */
                    bool DisplayHasBeenSet() const;

                    /**
                     * 获取Data Source Responsible Person Account ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OwnerAccount Data Source Responsible Person Account ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwnerAccount() const;

                    /**
                     * 设置Data Source Responsible Person Account ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ownerAccount Data Source Responsible Person Account ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOwnerAccount(const std::string& _ownerAccount);

                    /**
                     * 判断参数 OwnerAccount 是否已赋值
                     * @return OwnerAccount 是否已赋值
                     * 
                     */
                    bool OwnerAccountHasBeenSet() const;

                    /**
                     * 获取Data source configuration information, stored as JSON KV. The KV storage information varies according to the data source typeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Params Data source configuration information, stored as JSON KV. The KV storage information varies according to the data source typeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置Data source configuration information, stored as JSON KV. The KV storage information varies according to the data source typeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _params Data source configuration information, stored as JSON KV. The KV storage information varies according to the data source typeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取Visibility of the data source, where 1 is visible and 0 is not visible. Default is 1Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Status Visibility of the data source, where 1 is visible and 0 is not visible. Default is 1Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Visibility of the data source, where 1 is visible and 0 is not visible. Default is 1Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _status Visibility of the data source, where 1 is visible and 0 is not visible. Default is 1Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Data source owner account name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OwnerAccountName Data source owner account name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置Data source owner account name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ownerAccountName Data source owner account name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOwnerAccountName(const std::string& _ownerAccountName);

                    /**
                     * 判断参数 OwnerAccountName 是否已赋值
                     * @return OwnerAccountName 是否已赋值
                     * 
                     */
                    bool OwnerAccountNameHasBeenSet() const;

                    /**
                     * 获取Cluster NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ClusterName Cluster NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _clusterName Cluster NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return OwnerProjectId Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwnerProjectId() const;

                    /**
                     * 设置Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _ownerProjectId Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOwnerProjectId(const std::string& _ownerProjectId);

                    /**
                     * 判断参数 OwnerProjectId 是否已赋值
                     * @return OwnerProjectId 是否已赋值
                     * 
                     */
                    bool OwnerProjectIdHasBeenSet() const;

                    /**
                     * 获取Project NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return OwnerProjectName Project NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwnerProjectName() const;

                    /**
                     * 设置Project NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _ownerProjectName Project NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOwnerProjectName(const std::string& _ownerProjectName);

                    /**
                     * 判断参数 OwnerProjectName 是否已赋值
                     * @return OwnerProjectName 是否已赋值
                     * 
                     */
                    bool OwnerProjectNameHasBeenSet() const;

                    /**
                     * 获取Belonging project identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OwnerProjectIdent Belonging project identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwnerProjectIdent() const;

                    /**
                     * 设置Belonging project identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ownerProjectIdent Belonging project identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOwnerProjectIdent(const std::string& _ownerProjectIdent);

                    /**
                     * 判断参数 OwnerProjectIdent 是否已赋值
                     * @return OwnerProjectIdent 是否已赋值
                     * 
                     */
                    bool OwnerProjectIdentHasBeenSet() const;

                    /**
                     * 获取Authorized project
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AuthorityProjectName Authorized project
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAuthorityProjectName() const;

                    /**
                     * 设置Authorized project
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _authorityProjectName Authorized project
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAuthorityProjectName(const std::string& _authorityProjectName);

                    /**
                     * 判断参数 AuthorityProjectName 是否已赋值
                     * @return AuthorityProjectName 是否已赋值
                     * 
                     */
                    bool AuthorityProjectNameHasBeenSet() const;

                    /**
                     * 获取Authorized user
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AuthorityUserName Authorized user
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAuthorityUserName() const;

                    /**
                     * 设置Authorized user
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _authorityUserName Authorized user
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAuthorityUserName(const std::string& _authorityUserName);

                    /**
                     * 判断参数 AuthorityUserName 是否已赋值
                     * @return AuthorityUserName 是否已赋值
                     * 
                     */
                    bool AuthorityUserNameHasBeenSet() const;

                    /**
                     * 获取Edit permissions available
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Edit Edit permissions available
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetEdit() const;

                    /**
                     * 设置Edit permissions available
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _edit Edit permissions available
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEdit(const bool& _edit);

                    /**
                     * 判断参数 Edit 是否已赋值
                     * @return Edit 是否已赋值
                     * 
                     */
                    bool EditHasBeenSet() const;

                    /**
                     * 获取Authorization permissions available
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Author Authorization permissions available
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetAuthor() const;

                    /**
                     * 设置Authorization permissions available
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _author Authorization permissions available
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAuthor(const bool& _author);

                    /**
                     * 判断参数 Author 是否已赋值
                     * @return Author 是否已赋值
                     * 
                     */
                    bool AuthorHasBeenSet() const;

                    /**
                     * 获取Transfer permissions available
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Deliver Transfer permissions available
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetDeliver() const;

                    /**
                     * 设置Transfer permissions available
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _deliver Transfer permissions available
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDeliver(const bool& _deliver);

                    /**
                     * 判断参数 Deliver 是否已赋值
                     * @return Deliver 是否已赋值
                     * 
                     */
                    bool DeliverHasBeenSet() const;

                    /**
                     * 获取Data source status
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DataSourceStatus Data source status
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDataSourceStatus() const;

                    /**
                     * 设置Data source status
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dataSourceStatus Data source status
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDataSourceStatus(const std::string& _dataSourceStatus);

                    /**
                     * 判断参数 DataSourceStatus 是否已赋值
                     * @return DataSourceStatus 是否已赋值
                     * 
                     */
                    bool DataSourceStatusHasBeenSet() const;

                    /**
                     * 获取TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _createTime TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Params JSON string
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ParamsString Params JSON string
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetParamsString() const;

                    /**
                     * 设置Params JSON string
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _paramsString Params JSON string
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetParamsString(const std::string& _paramsString);

                    /**
                     * 判断参数 ParamsString 是否已赋值
                     * @return ParamsString 是否已赋值
                     * 
                     */
                    bool ParamsStringHasBeenSet() const;

                    /**
                     * 获取BizParams JSON string
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BizParamsString BizParams JSON string
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetBizParamsString() const;

                    /**
                     * 设置BizParams JSON string
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _bizParamsString BizParams JSON string
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetBizParamsString(const std::string& _bizParamsString);

                    /**
                     * 判断参数 BizParamsString 是否已赋值
                     * @return BizParamsString 是否已赋值
                     * 
                     */
                    bool BizParamsStringHasBeenSet() const;

                    /**
                     * 获取Modification TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ModifiedTime Modification TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetModifiedTime() const;

                    /**
                     * 设置Modification TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _modifiedTime Modification TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetModifiedTime(const int64_t& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取Data source display type, corresponding to Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ShowType Data source display type, corresponding to Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetShowType() const;

                    /**
                     * 设置Data source display type, corresponding to Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _showType Data source display type, corresponding to Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetShowType(const std::string& _showType);

                    /**
                     * 判断参数 ShowType 是否已赋值
                     * @return ShowType 是否已赋值
                     * 
                     */
                    bool ShowTypeHasBeenSet() const;

                    /**
                     * 获取Current data source production source Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ProductId Current data source production source Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetProductId() const;

                    /**
                     * 设置Current data source production source Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _productId Current data source production source Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetProductId(const uint64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取Current data source development source Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DevelopmentId Current data source development source Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetDevelopmentId() const;

                    /**
                     * 设置Current data source development source Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _developmentId Current data source development source Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDevelopmentId(const uint64_t& _developmentId);

                    /**
                     * 判断参数 DevelopmentId 是否已赋值
                     * @return DevelopmentId 是否已赋值
                     * 
                     */
                    bool DevelopmentIdHasBeenSet() const;

                    /**
                     * 获取Same as params, content is the data for the development data source
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DevelopmentParams Same as params, content is the data for the development data source
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDevelopmentParams() const;

                    /**
                     * 设置Same as params, content is the data for the development data source
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _developmentParams Same as params, content is the data for the development data source
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDevelopmentParams(const std::string& _developmentParams);

                    /**
                     * 判断参数 DevelopmentParams 是否已赋值
                     * @return DevelopmentParams 是否已赋值
                     * 
                     */
                    bool DevelopmentParamsHasBeenSet() const;

                private:

                    /**
                     * If the data source list is bound to a database, then it is the database nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Data source description informationNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Instance ID of the data source engine, e.g., CDB Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * Data Source Name, cannot be empty under the same SpaceNameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Region to which the data source engine belongs
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Data Source Type: enumerated valuesNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Cluster ID to which the data source belongs
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Application ID AppId
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Configuration Information Extension of Business Data SourceNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_bizParams;
                    bool m_bizParamsHasBeenSet;

                    /**
                     * Data Source Category: Binding Engine, Binding DatabaseNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Data Source Display Name, for visual inspectionNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_display;
                    bool m_displayHasBeenSet;

                    /**
                     * Data Source Responsible Person Account ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ownerAccount;
                    bool m_ownerAccountHasBeenSet;

                    /**
                     * Data source configuration information, stored as JSON KV. The KV storage information varies according to the data source typeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * Visibility of the data source, where 1 is visible and 0 is not visible. Default is 1Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Data source owner account name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * Cluster NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ownerProjectId;
                    bool m_ownerProjectIdHasBeenSet;

                    /**
                     * Project NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ownerProjectName;
                    bool m_ownerProjectNameHasBeenSet;

                    /**
                     * Belonging project identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ownerProjectIdent;
                    bool m_ownerProjectIdentHasBeenSet;

                    /**
                     * Authorized project
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_authorityProjectName;
                    bool m_authorityProjectNameHasBeenSet;

                    /**
                     * Authorized user
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_authorityUserName;
                    bool m_authorityUserNameHasBeenSet;

                    /**
                     * Edit permissions available
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_edit;
                    bool m_editHasBeenSet;

                    /**
                     * Authorization permissions available
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_author;
                    bool m_authorHasBeenSet;

                    /**
                     * Transfer permissions available
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_deliver;
                    bool m_deliverHasBeenSet;

                    /**
                     * Data source status
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_dataSourceStatus;
                    bool m_dataSourceStatusHasBeenSet;

                    /**
                     * TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Params JSON string
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_paramsString;
                    bool m_paramsStringHasBeenSet;

                    /**
                     * BizParams JSON string
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_bizParamsString;
                    bool m_bizParamsStringHasBeenSet;

                    /**
                     * Modification TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * Data source display type, corresponding to Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_showType;
                    bool m_showTypeHasBeenSet;

                    /**
                     * Current data source production source Id
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * Current data source development source Id
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_developmentId;
                    bool m_developmentIdHasBeenSet;

                    /**
                     * Same as params, content is the data for the development data source
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_developmentParams;
                    bool m_developmentParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCEINFO_H_
