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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERASSETSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERASSETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetCluster.h>
#include <tencentcloud/csip/v20221121/model/FilterDataObject.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeClusterAssets response structure.
                */
                class DescribeClusterAssetsResponse : public AbstractModel
                {
                public:
                    DescribeClusterAssetsResponse();
                    ~DescribeClusterAssetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List
                     * @return Data List
                     * 
                     */
                    std::vector<AssetCluster> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Total number.
                     * @return TotalCount Total number.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Cluster Type Enumeration
                     * @return ClusterTypeList Cluster Type Enumeration
                     * 
                     */
                    std::vector<FilterDataObject> GetClusterTypeList() const;

                    /**
                     * 判断参数 ClusterTypeList 是否已赋值
                     * @return ClusterTypeList 是否已赋值
                     * 
                     */
                    bool ClusterTypeListHasBeenSet() const;

                    /**
                     * 获取Cluster Status Enumeration
                     * @return ClusterStatusList Cluster Status Enumeration
                     * 
                     */
                    std::vector<FilterDataObject> GetClusterStatusList() const;

                    /**
                     * 判断参数 ClusterStatusList 是否已赋值
                     * @return ClusterStatusList 是否已赋值
                     * 
                     */
                    bool ClusterStatusListHasBeenSet() const;

                    /**
                     * 获取Component Status Enumeration
                     * @return ComponentStatusList Component Status Enumeration
                     * 
                     */
                    std::vector<FilterDataObject> GetComponentStatusList() const;

                    /**
                     * 判断参数 ComponentStatusList 是否已赋值
                     * @return ComponentStatusList 是否已赋值
                     * 
                     */
                    bool ComponentStatusListHasBeenSet() const;

                    /**
                     * 获取VPC Enumeration
                     * @return VpcList VPC Enumeration
                     * 
                     */
                    std::vector<FilterDataObject> GetVpcList() const;

                    /**
                     * 判断参数 VpcList 是否已赋值
                     * @return VpcList 是否已赋值
                     * 
                     */
                    bool VpcListHasBeenSet() const;

                    /**
                     * 获取Region Enumeration
                     * @return RegionList Region Enumeration
                     * 
                     */
                    std::vector<FilterDataObject> GetRegionList() const;

                    /**
                     * 判断参数 RegionList 是否已赋值
                     * @return RegionList 是否已赋值
                     * 
                     */
                    bool RegionListHasBeenSet() const;

                    /**
                     * 获取Tenant Enumeration
                     * @return AppIdList Tenant Enumeration
                     * 
                     */
                    std::vector<FilterDataObject> GetAppIdList() const;

                    /**
                     * 判断参数 AppIdList 是否已赋值
                     * @return AppIdList 是否已赋值
                     * 
                     */
                    bool AppIdListHasBeenSet() const;

                    /**
                     * 获取Cluster protection status enumeration.
                     * @return ProtectStatusList Cluster protection status enumeration.
                     * 
                     */
                    std::vector<FilterDataObject> GetProtectStatusList() const;

                    /**
                     * 判断参数 ProtectStatusList 是否已赋值
                     * @return ProtectStatusList 是否已赋值
                     * 
                     */
                    bool ProtectStatusListHasBeenSet() const;

                private:

                    /**
                     * List
                     */
                    std::vector<AssetCluster> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Total number.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Cluster Type Enumeration
                     */
                    std::vector<FilterDataObject> m_clusterTypeList;
                    bool m_clusterTypeListHasBeenSet;

                    /**
                     * Cluster Status Enumeration
                     */
                    std::vector<FilterDataObject> m_clusterStatusList;
                    bool m_clusterStatusListHasBeenSet;

                    /**
                     * Component Status Enumeration
                     */
                    std::vector<FilterDataObject> m_componentStatusList;
                    bool m_componentStatusListHasBeenSet;

                    /**
                     * VPC Enumeration
                     */
                    std::vector<FilterDataObject> m_vpcList;
                    bool m_vpcListHasBeenSet;

                    /**
                     * Region Enumeration
                     */
                    std::vector<FilterDataObject> m_regionList;
                    bool m_regionListHasBeenSet;

                    /**
                     * Tenant Enumeration
                     */
                    std::vector<FilterDataObject> m_appIdList;
                    bool m_appIdListHasBeenSet;

                    /**
                     * Cluster protection status enumeration.
                     */
                    std::vector<FilterDataObject> m_protectStatusList;
                    bool m_protectStatusListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERASSETSRESPONSE_H_
