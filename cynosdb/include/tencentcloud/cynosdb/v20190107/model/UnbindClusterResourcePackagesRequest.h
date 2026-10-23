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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UNBINDCLUSTERRESOURCEPACKAGESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UNBINDCLUSTERRESOURCEPACKAGESREQUEST_H_

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
                * UnbindClusterResourcePackages request structure.
                */
                class UnbindClusterResourcePackagesRequest : public AbstractModel
                {
                public:
                    UnbindClusterResourcePackagesRequest();
                    ~UnbindClusterResourcePackagesRequest() = default;
                    std::string ToJsonString() const;


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

                    /**
                     * 获取Unique ID of the resource package. If not provided, unbind all resource packages associated with the instance.
                     * @return PackageIds Unique ID of the resource package. If not provided, unbind all resource packages associated with the instance.
                     * 
                     */
                    std::vector<std::string> GetPackageIds() const;

                    /**
                     * 设置Unique ID of the resource package. If not provided, unbind all resource packages associated with the instance.
                     * @param _packageIds Unique ID of the resource package. If not provided, unbind all resource packages associated with the instance.
                     * 
                     */
                    void SetPackageIds(const std::vector<std::string>& _packageIds);

                    /**
                     * 判断参数 PackageIds 是否已赋值
                     * @return PackageIds 是否已赋值
                     * 
                     */
                    bool PackageIdsHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Unique ID of the resource package. If not provided, unbind all resource packages associated with the instance.
                     */
                    std::vector<std::string> m_packageIds;
                    bool m_packageIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UNBINDCLUSTERRESOURCEPACKAGESREQUEST_H_
