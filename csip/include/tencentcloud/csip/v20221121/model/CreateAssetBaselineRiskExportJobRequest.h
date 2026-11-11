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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEASSETBASELINERISKEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEASSETBASELINERISKEXPORTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateAssetBaselineRiskExportJob request structure.
                */
                class CreateAssetBaselineRiskExportJobRequest : public AbstractModel
                {
                public:
                    CreateAssetBaselineRiskExportJobRequest();
                    ~CreateAssetBaselineRiskExportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Unique asset identifier (UUID), used with AssetType to locate a specific asset.</p>
                     * @return AssetUniqueID <p>Unique asset identifier (UUID), used with AssetType to locate a specific asset.</p>
                     * 
                     */
                    std::string GetAssetUniqueID() const;

                    /**
                     * 设置<p>Unique asset identifier (UUID), used with AssetType to locate a specific asset.</p>
                     * @param _assetUniqueID <p>Unique asset identifier (UUID), used with AssetType to locate a specific asset.</p>
                     * 
                     */
                    void SetAssetUniqueID(const std::string& _assetUniqueID);

                    /**
                     * 判断参数 AssetUniqueID 是否已赋值
                     * @return AssetUniqueID 是否已赋值
                     * 
                     */
                    bool AssetUniqueIDHasBeenSet() const;

                    /**
                     * 获取<p>Asset type. Parameter Value: HOST (host), CLUSTER (cluster).</p>
                     * @return AssetType <p>Asset type. Parameter Value: HOST (host), CLUSTER (cluster).</p>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>Asset type. Parameter Value: HOST (host), CLUSTER (cluster).</p>
                     * @param _assetType <p>Asset type. Parameter Value: HOST (host), CLUSTER (cluster).</p>
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>appid of asset ownership</p>
                     * @return AssetAppID <p>appid of asset ownership</p>
                     * 
                     */
                    uint64_t GetAssetAppID() const;

                    /**
                     * 设置<p>appid of asset ownership</p>
                     * @param _assetAppID <p>appid of asset ownership</p>
                     * 
                     */
                    void SetAssetAppID(const uint64_t& _assetAppID);

                    /**
                     * 判断参数 AssetAppID 是否已赋值
                     * @return AssetAppID 是否已赋值
                     * 
                     */
                    bool AssetAppIDHasBeenSet() const;

                    /**
                     * 获取<p>Export task name</p>
                     * @return Name <p>Export task name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Export task name</p>
                     * @param _name <p>Export task name</p>
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
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Universal Filter Criteria. Supported fields: ItemName (detection item name, blurry), PolicyName (baseline name, blurry), InstanceName (host name, blurry), InstanceID (instance ID, exact), IP (IP, blurry). Different Names are in an AND relationship with each other, while multiple Values under the same Name are in an OR relationship.</p>
                     * @return Filters <p>Universal Filter Criteria. Supported fields: ItemName (detection item name, blurry), PolicyName (baseline name, blurry), InstanceName (host name, blurry), InstanceID (instance ID, exact), IP (IP, blurry). Different Names are in an AND relationship with each other, while multiple Values under the same Name are in an OR relationship.</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>Universal Filter Criteria. Supported fields: ItemName (detection item name, blurry), PolicyName (baseline name, blurry), InstanceName (host name, blurry), InstanceID (instance ID, exact), IP (IP, blurry). Different Names are in an AND relationship with each other, while multiple Values under the same Name are in an OR relationship.</p>
                     * @param _filters <p>Universal Filter Criteria. Supported fields: ItemName (detection item name, blurry), PolicyName (baseline name, blurry), InstanceName (host name, blurry), InstanceID (instance ID, exact), IP (IP, blurry). Different Names are in an AND relationship with each other, while multiple Values under the same Name are in an OR relationship.</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>Unique asset identifier (UUID), used with AssetType to locate a specific asset.</p>
                     */
                    std::string m_assetUniqueID;
                    bool m_assetUniqueIDHasBeenSet;

                    /**
                     * <p>Asset type. Parameter Value: HOST (host), CLUSTER (cluster).</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>appid of asset ownership</p>
                     */
                    uint64_t m_assetAppID;
                    bool m_assetAppIDHasBeenSet;

                    /**
                     * <p>Export task name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Universal Filter Criteria. Supported fields: ItemName (detection item name, blurry), PolicyName (baseline name, blurry), InstanceName (host name, blurry), InstanceID (instance ID, exact), IP (IP, blurry). Different Names are in an AND relationship with each other, while multiple Values under the same Name are in an OR relationship.</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEASSETBASELINERISKEXPORTJOBREQUEST_H_
