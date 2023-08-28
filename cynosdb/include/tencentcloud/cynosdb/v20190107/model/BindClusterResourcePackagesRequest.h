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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINDCLUSTERRESOURCEPACKAGESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINDCLUSTERRESOURCEPACKAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * BindClusterResourcePackages request structure.
                */
                class BindClusterResourcePackagesRequest : public AbstractModel
                {
                public:
                    BindClusterResourcePackagesRequest();
                    ~BindClusterResourcePackagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique ID of a resource pack
                     * @return PackageIds The unique ID of a resource pack
                     * 
                     */
                    std::vector<std::string> GetPackageIds() const;

                    /**
                     * 设置The unique ID of a resource pack
                     * @param _packageIds The unique ID of a resource pack
                     * 
                     */
                    void SetPackageIds(const std::vector<std::string>& _packageIds);

                    /**
                     * 判断参数 PackageIds 是否已赋值
                     * @return PackageIds 是否已赋值
                     * 
                     */
                    bool PackageIdsHasBeenSet() const;

                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * The unique ID of a resource pack
                     */
                    std::vector<std::string> m_packageIds;
                    bool m_packageIdsHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINDCLUSTERRESOURCEPACKAGESREQUEST_H_