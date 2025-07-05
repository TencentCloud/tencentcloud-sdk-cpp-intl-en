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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_PROJECT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_PROJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/BaseUser.h>
#include <tencentcloud/wedata/v20210820/model/BaseTenant.h>
#include <tencentcloud/wedata/v20210820/model/BaseClusterInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Project Information
                */
                class Project : public AbstractModel
                {
                public:
                    Project();
                    ~Project() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tenant ID of the project
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TenantId Tenant ID of the project
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置Tenant ID of the project
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tenantId Tenant ID of the project
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectId Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectId Project IDNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Project Identifier, English Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectName Project Identifier, English Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project Identifier, English Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectName Project Identifier, English Name
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Project Display Name, can be Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DisplayName Project Display Name, can be Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Project Display Name, can be Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _displayName Project Display Name, can be Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取RegionNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Region RegionNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置RegionNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _region RegionNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取RemarksNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Description RemarksNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置RemarksNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _description RemarksNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _createTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Creator
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Creator Creator
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    BaseUser GetCreator() const;

                    /**
                     * 设置Creator
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _creator Creator
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreator(const BaseUser& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取Tenant Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Tenant Tenant Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    BaseTenant GetTenant() const;

                    /**
                     * 设置Tenant Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tenant Tenant Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTenant(const BaseTenant& _tenant);

                    /**
                     * 判断参数 Tenant 是否已赋值
                     * @return Tenant 是否已赋值
                     * 
                     */
                    bool TenantHasBeenSet() const;

                    /**
                     * 获取Project Administrator
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AdminUsers Project Administrator
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<BaseUser> GetAdminUsers() const;

                    /**
                     * 设置Project Administrator
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _adminUsers Project Administrator
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAdminUsers(const std::vector<BaseUser>& _adminUsers);

                    /**
                     * 判断参数 AdminUsers 是否已赋值
                     * @return AdminUsers 是否已赋值
                     * 
                     */
                    bool AdminUsersHasBeenSet() const;

                    /**
                     * 获取Project-related cluster information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Clusters Project-related cluster information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<BaseClusterInfo> GetClusters() const;

                    /**
                     * 设置Project-related cluster information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _clusters Project-related cluster information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetClusters(const std::vector<BaseClusterInfo>& _clusters);

                    /**
                     * 判断参数 Clusters 是否已赋值
                     * @return Clusters 是否已赋值
                     * 
                     */
                    bool ClustersHasBeenSet() const;

                    /**
                     * 获取Additional configuration parameters for the project
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Params Additional configuration parameters for the project
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置Additional configuration parameters for the project
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _params Additional configuration parameters for the project
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Project Status: 0: disabled, 1: enabled, -3: disabling, 2: enabling
                     * @return Status Project Status: 0: disabled, 1: enabled, -3: disabling, 2: enabling
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Project Status: 0: disabled, 1: enabled, -3: disabling, 2: enabling
                     * @param _status Project Status: 0: disabled, 1: enabled, -3: disabling, 2: enabling
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
                     * 获取Project Type, SIMPLE: simple mode STANDARD: standard mode
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Model Project Type, SIMPLE: simple mode STANDARD: standard mode
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置Project Type, SIMPLE: simple mode STANDARD: standard mode
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _model Project Type, SIMPLE: simple mode STANDARD: standard mode
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                private:

                    /**
                     * Tenant ID of the project
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project Identifier, English Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Project Display Name, can be Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * RegionNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * RemarksNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Creator
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    BaseUser m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Tenant Information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    BaseTenant m_tenant;
                    bool m_tenantHasBeenSet;

                    /**
                     * Project Administrator
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<BaseUser> m_adminUsers;
                    bool m_adminUsersHasBeenSet;

                    /**
                     * Project-related cluster information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<BaseClusterInfo> m_clusters;
                    bool m_clustersHasBeenSet;

                    /**
                     * Additional configuration parameters for the project
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * Project Status: 0: disabled, 1: enabled, -3: disabling, 2: enabling
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Project Type, SIMPLE: simple mode STANDARD: standard mode
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_PROJECT_H_
