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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ASSET_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Basic metadata object
                */
                class Asset : public AbstractModel
                {
                public:
                    Asset();
                    ~Asset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Primary key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id Primary key
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Primary key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id Primary key
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Object GUID value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Guid Object GUID value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGuid() const;

                    /**
                     * 设置Object GUID value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _guid Object GUID value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGuid(const std::string& _guid);

                    /**
                     * 判断参数 Guid 是否已赋值
                     * @return Guid 是否已赋值
                     * 
                     */
                    bool GuidHasBeenSet() const;

                    /**
                     * 获取Data directory
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Catalog Data directory
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置Data directory
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _catalog Data directory
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
                     * 获取Description information
                     * @return Description Description information
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description information
                     * @param _description Description information
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
                     * 获取Object owner
                     * @return Owner Object owner
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置Object owner
                     * @param _owner Object owner
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
                     * 获取Object owner account
                     * @return OwnerAccount Object owner account
                     * 
                     */
                    std::string GetOwnerAccount() const;

                    /**
                     * 设置Object owner account
                     * @param _ownerAccount Object owner account
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
                     * 获取Permission
                     * @return PermValues Permission
                     * 
                     */
                    std::vector<KVPair> GetPermValues() const;

                    /**
                     * 设置Permission
                     * @param _permValues Permission
                     * 
                     */
                    void SetPermValues(const std::vector<KVPair>& _permValues);

                    /**
                     * 判断参数 PermValues 是否已赋值
                     * @return PermValues 是否已赋值
                     * 
                     */
                    bool PermValuesHasBeenSet() const;

                    /**
                     * 获取Additional attributes
                     * @return Params Additional attributes
                     * 
                     */
                    std::vector<KVPair> GetParams() const;

                    /**
                     * 设置Additional attributes
                     * @param _params Additional attributes
                     * 
                     */
                    void SetParams(const std::vector<KVPair>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取Additional business attributes
                     * @return BizParams Additional business attributes
                     * 
                     */
                    std::vector<KVPair> GetBizParams() const;

                    /**
                     * 设置Additional business attributes
                     * @param _bizParams Additional business attributes
                     * 
                     */
                    void SetBizParams(const std::vector<KVPair>& _bizParams);

                    /**
                     * 判断参数 BizParams 是否已赋值
                     * @return BizParams 是否已赋值
                     * 
                     */
                    bool BizParamsHasBeenSet() const;

                    /**
                     * 获取Data version
                     * @return DataVersion Data version
                     * 
                     */
                    int64_t GetDataVersion() const;

                    /**
                     * 设置Data version
                     * @param _dataVersion Data version
                     * 
                     */
                    void SetDataVersion(const int64_t& _dataVersion);

                    /**
                     * 判断参数 DataVersion 是否已赋值
                     * @return DataVersion 是否已赋值
                     * 
                     */
                    bool DataVersionHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
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
                     * 获取Modification time
                     * @return ModifiedTime Modification time
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置Modification time
                     * @param _modifiedTime Modification time
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取Data source primary key
                     * @return DatasourceId Data source primary key
                     * 
                     */
                    int64_t GetDatasourceId() const;

                    /**
                     * 设置Data source primary key
                     * @param _datasourceId Data source primary key
                     * 
                     */
                    void SetDatasourceId(const int64_t& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                private:

                    /**
                     * Primary key
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Object GUID value
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_guid;
                    bool m_guidHasBeenSet;

                    /**
                     * Data directory
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * Description information
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Object owner
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * Object owner account
                     */
                    std::string m_ownerAccount;
                    bool m_ownerAccountHasBeenSet;

                    /**
                     * Permission
                     */
                    std::vector<KVPair> m_permValues;
                    bool m_permValuesHasBeenSet;

                    /**
                     * Additional attributes
                     */
                    std::vector<KVPair> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * Additional business attributes
                     */
                    std::vector<KVPair> m_bizParams;
                    bool m_bizParamsHasBeenSet;

                    /**
                     * Data version
                     */
                    int64_t m_dataVersion;
                    bool m_dataVersionHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * Data source primary key
                     */
                    int64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ASSET_H_
