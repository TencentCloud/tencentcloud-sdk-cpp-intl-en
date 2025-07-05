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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEDATASOURCEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEDATASOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateDataSource request structure.
                */
                class CreateDataSourceRequest : public AbstractModel
                {
                public:
                    CreateDataSourceRequest();
                    ~CreateDataSourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Data Source Name, cannot be empty under the same SpaceName
                     * @return Name Data Source Name, cannot be empty under the same SpaceName
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Data Source Name, cannot be empty under the same SpaceName
                     * @param _name Data Source Name, cannot be empty under the same SpaceName
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
                     * 获取Data Source Category: Binding Engine, Binding Database
                     * @return Category Data Source Category: Binding Engine, Binding Database
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Data Source Category: Binding Engine, Binding Database
                     * @param _category Data Source Category: Binding Engine, Binding Database
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
                     * 获取Data Source Type: enumerated values
                     * @return Type Data Source Type: enumerated values
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Data Source Type: enumerated values
                     * @param _type Data Source Type: enumerated values
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
                     * 获取Project ID
                     * @return OwnerProjectId Project ID
                     * 
                     */
                    std::string GetOwnerProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _ownerProjectId Project ID
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
                     * 获取Project Name
                     * @return OwnerProjectName Project Name
                     * 
                     */
                    std::string GetOwnerProjectName() const;

                    /**
                     * 设置Project Name
                     * @param _ownerProjectName Project Name
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
                     * 获取Project Name (Chinese)
                     * @return OwnerProjectIdent Project Name (Chinese)
                     * 
                     */
                    std::string GetOwnerProjectIdent() const;

                    /**
                     * 设置Project Name (Chinese)
                     * @param _ownerProjectIdent Project Name (Chinese)
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
                     * 获取Configuration Information Extension of Business Data Source
                     * @return BizParams Configuration Information Extension of Business Data Source
                     * 
                     */
                    std::string GetBizParams() const;

                    /**
                     * 设置Configuration Information Extension of Business Data Source
                     * @param _bizParams Configuration Information Extension of Business Data Source
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
                     * 获取Data source configuration information, stored as JSON KV. The KV storage information varies according to the data source type
                     * @return Params Data source configuration information, stored as JSON KV. The KV storage information varies according to the data source type
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置Data source configuration information, stored as JSON KV. The KV storage information varies according to the data source type
                     * @param _params Data source configuration information, stored as JSON KV. The KV storage information varies according to the data source type
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
                     * 获取Data source description information
                     * @return Description Data source description information
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Data source description information
                     * @param _description Data source description information
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
                     * 获取Data Source Display Name, for visual inspection
                     * @return Display Data Source Display Name, for visual inspection
                     * 
                     */
                    std::string GetDisplay() const;

                    /**
                     * 设置Data Source Display Name, for visual inspection
                     * @param _display Data Source Display Name, for visual inspection
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
                     * 获取If the data source list is bound to a database, then it is the database name
                     * @return DatabaseName If the data source list is bound to a database, then it is the database name
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置If the data source list is bound to a database, then it is the database name
                     * @param _databaseName If the data source list is bound to a database, then it is the database name
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
                     * 获取Instance ID of the data source engine, e.g., CDB Instance ID
                     * @return Instance Instance ID of the data source engine, e.g., CDB Instance ID
                     * 
                     */
                    std::string GetInstance() const;

                    /**
                     * 设置Instance ID of the data source engine, e.g., CDB Instance ID
                     * @param _instance Instance ID of the data source engine, e.g., CDB Instance ID
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
                     * 获取Visibility of the data source, where 1 is visible and 0 is not visible. Default is 1
                     * @return Status Visibility of the data source, where 1 is visible and 0 is not visible. Default is 1
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Visibility of the data source, where 1 is visible and 0 is not visible. Default is 1
                     * @param _status Visibility of the data source, where 1 is visible and 0 is not visible. Default is 1
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
                     * 获取Name of the business space to which the data source belongs
                     * @return ClusterId Name of the business space to which the data source belongs
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Name of the business space to which the data source belongs
                     * @param _clusterId Name of the business space to which the data source belongs
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
                     * 获取Collection Status
                     * @return Collect Collection Status
                     * 
                     */
                    std::string GetCollect() const;

                    /**
                     * 设置Collection Status
                     * @param _collect Collection Status
                     * 
                     */
                    void SetCollect(const std::string& _collect);

                    /**
                     * 判断参数 Collect 是否已赋值
                     * @return Collect 是否已赋值
                     * 
                     */
                    bool CollectHasBeenSet() const;

                    /**
                     * 获取COS Bucket Information
                     * @return COSBucket COS Bucket Information
                     * 
                     */
                    std::string GetCOSBucket() const;

                    /**
                     * 设置COS Bucket Information
                     * @param _cOSBucket COS Bucket Information
                     * 
                     */
                    void SetCOSBucket(const std::string& _cOSBucket);

                    /**
                     * 判断参数 COSBucket 是否已赋值
                     * @return COSBucket 是否已赋值
                     * 
                     */
                    bool COSBucketHasBeenSet() const;

                    /**
                     * 获取cos region
                     * @return COSRegion cos region
                     * 
                     */
                    std::string GetCOSRegion() const;

                    /**
                     * 设置cos region
                     * @param _cOSRegion cos region
                     * 
                     */
                    void SetCOSRegion(const std::string& _cOSRegion);

                    /**
                     * 判断参数 COSRegion 是否已赋值
                     * @return COSRegion 是否已赋值
                     * 
                     */
                    bool COSRegionHasBeenSet() const;

                    /**
                     * 获取Connection Test Result
                     * @return ConnectResult Connection Test Result
                     * 
                     */
                    std::string GetConnectResult() const;

                    /**
                     * 设置Connection Test Result
                     * @param _connectResult Connection Test Result
                     * 
                     */
                    void SetConnectResult(const std::string& _connectResult);

                    /**
                     * 判断参数 ConnectResult 是否已赋值
                     * @return ConnectResult 是否已赋值
                     * 
                     */
                    bool ConnectResultHasBeenSet() const;

                    /**
                     * 获取Development Environment Data Source Configuration
                     * @return DevelopmentParams Development Environment Data Source Configuration
                     * 
                     */
                    std::string GetDevelopmentParams() const;

                    /**
                     * 设置Development Environment Data Source Configuration
                     * @param _developmentParams Development Environment Data Source Configuration
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
                     * Data Source Name, cannot be empty under the same SpaceName
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Data Source Category: Binding Engine, Binding Database
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Data Source Type: enumerated values
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_ownerProjectId;
                    bool m_ownerProjectIdHasBeenSet;

                    /**
                     * Project Name
                     */
                    std::string m_ownerProjectName;
                    bool m_ownerProjectNameHasBeenSet;

                    /**
                     * Project Name (Chinese)
                     */
                    std::string m_ownerProjectIdent;
                    bool m_ownerProjectIdentHasBeenSet;

                    /**
                     * Configuration Information Extension of Business Data Source
                     */
                    std::string m_bizParams;
                    bool m_bizParamsHasBeenSet;

                    /**
                     * Data source configuration information, stored as JSON KV. The KV storage information varies according to the data source type
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * Data source description information
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Data Source Display Name, for visual inspection
                     */
                    std::string m_display;
                    bool m_displayHasBeenSet;

                    /**
                     * If the data source list is bound to a database, then it is the database name
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Instance ID of the data source engine, e.g., CDB Instance ID
                     */
                    std::string m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * Visibility of the data source, where 1 is visible and 0 is not visible. Default is 1
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Name of the business space to which the data source belongs
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Collection Status
                     */
                    std::string m_collect;
                    bool m_collectHasBeenSet;

                    /**
                     * COS Bucket Information
                     */
                    std::string m_cOSBucket;
                    bool m_cOSBucketHasBeenSet;

                    /**
                     * cos region
                     */
                    std::string m_cOSRegion;
                    bool m_cOSRegionHasBeenSet;

                    /**
                     * Connection Test Result
                     */
                    std::string m_connectResult;
                    bool m_connectResultHasBeenSet;

                    /**
                     * Development Environment Data Source Configuration
                     */
                    std::string m_developmentParams;
                    bool m_developmentParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEDATASOURCEREQUEST_H_
