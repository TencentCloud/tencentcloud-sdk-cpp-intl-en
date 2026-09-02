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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERPODASSETSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERPODASSETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetClusterPod.h>
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
                * DescribeClusterPodAssets response structure.
                */
                class DescribeClusterPodAssetsResponse : public AbstractModel
                {
                public:
                    DescribeClusterPodAssetsResponse();
                    ~DescribeClusterPodAssetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List
                     * @return Data List
                     * 
                     */
                    std::vector<AssetClusterPod> GetData() const;

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
                     * 获取Cluster Pod Status Enumeration
                     * @return PodStatusList Cluster Pod Status Enumeration
                     * 
                     */
                    std::vector<FilterDataObject> GetPodStatusList() const;

                    /**
                     * 判断参数 PodStatusList 是否已赋值
                     * @return PodStatusList 是否已赋值
                     * 
                     */
                    bool PodStatusListHasBeenSet() const;

                    /**
                     * 获取Namespace Enumeration
                     * @return NamespaceList Namespace Enumeration
                     * 
                     */
                    std::vector<FilterDataObject> GetNamespaceList() const;

                    /**
                     * 判断参数 NamespaceList 是否已赋值
                     * @return NamespaceList 是否已赋值
                     * 
                     */
                    bool NamespaceListHasBeenSet() const;

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

                private:

                    /**
                     * List
                     */
                    std::vector<AssetClusterPod> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Total number.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Cluster Pod Status Enumeration
                     */
                    std::vector<FilterDataObject> m_podStatusList;
                    bool m_podStatusListHasBeenSet;

                    /**
                     * Namespace Enumeration
                     */
                    std::vector<FilterDataObject> m_namespaceList;
                    bool m_namespaceListHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERPODASSETSRESPONSE_H_
