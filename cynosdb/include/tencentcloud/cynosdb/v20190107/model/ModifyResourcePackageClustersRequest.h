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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYRESOURCEPACKAGECLUSTERSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYRESOURCEPACKAGECLUSTERSREQUEST_H_

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
                * ModifyResourcePackageClusters request structure.
                */
                class ModifyResourcePackageClustersRequest : public AbstractModel
                {
                public:
                    ModifyResourcePackageClustersRequest();
                    ~ModifyResourcePackageClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique ID of a resource pack
                     * @return PackageId The unique ID of a resource pack
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置The unique ID of a resource pack
                     * @param _packageId The unique ID of a resource pack
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取ID of the cluster to be bound
                     * @return BindClusterIds ID of the cluster to be bound
                     * 
                     */
                    std::vector<std::string> GetBindClusterIds() const;

                    /**
                     * 设置ID of the cluster to be bound
                     * @param _bindClusterIds ID of the cluster to be bound
                     * 
                     */
                    void SetBindClusterIds(const std::vector<std::string>& _bindClusterIds);

                    /**
                     * 判断参数 BindClusterIds 是否已赋值
                     * @return BindClusterIds 是否已赋值
                     * 
                     */
                    bool BindClusterIdsHasBeenSet() const;

                    /**
                     * 获取ID of the cluster to be unbound
                     * @return UnbindClusterIds ID of the cluster to be unbound
                     * 
                     */
                    std::vector<std::string> GetUnbindClusterIds() const;

                    /**
                     * 设置ID of the cluster to be unbound
                     * @param _unbindClusterIds ID of the cluster to be unbound
                     * 
                     */
                    void SetUnbindClusterIds(const std::vector<std::string>& _unbindClusterIds);

                    /**
                     * 判断参数 UnbindClusterIds 是否已赋值
                     * @return UnbindClusterIds 是否已赋值
                     * 
                     */
                    bool UnbindClusterIdsHasBeenSet() const;

                private:

                    /**
                     * The unique ID of a resource pack
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * ID of the cluster to be bound
                     */
                    std::vector<std::string> m_bindClusterIds;
                    bool m_bindClusterIdsHasBeenSet;

                    /**
                     * ID of the cluster to be unbound
                     */
                    std::vector<std::string> m_unbindClusterIds;
                    bool m_unbindClusterIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYRESOURCEPACKAGECLUSTERSREQUEST_H_
