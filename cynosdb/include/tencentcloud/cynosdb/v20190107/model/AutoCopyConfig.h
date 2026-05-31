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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUTOCOPYCONFIG_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUTOCOPYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Safe automatically deliver relationship
                */
                class AutoCopyConfig : public AbstractModel
                {
                public:
                    AutoCopyConfig();
                    ~AutoCopyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster ID.
                     * @return ClusterId Cluster ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _clusterId Cluster ID.
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
                     * 获取Safe ID
                     * @return VaultId Safe ID
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置Safe ID
                     * @param _vaultId Safe ID
                     * 
                     */
                    void SetVaultId(const std::string& _vaultId);

                    /**
                     * 判断参数 VaultId 是否已赋值
                     * @return VaultId 是否已赋值
                     * 
                     */
                    bool VaultIdHasBeenSet() const;

                    /**
                     * 获取Safe region
                     * @return VaultRegion Safe region
                     * 
                     */
                    std::string GetVaultRegion() const;

                    /**
                     * 设置Safe region
                     * @param _vaultRegion Safe region
                     * 
                     */
                    void SetVaultRegion(const std::string& _vaultRegion);

                    /**
                     * 判断参数 VaultRegion 是否已赋值
                     * @return VaultRegion 是否已赋值
                     * 
                     */
                    bool VaultRegionHasBeenSet() const;

                    /**
                     * 获取Delivery Type: binlog, redolog, snapshot, logic
                     * @return CopyType Delivery Type: binlog, redolog, snapshot, logic
                     * 
                     */
                    std::string GetCopyType() const;

                    /**
                     * 设置Delivery Type: binlog, redolog, snapshot, logic
                     * @param _copyType Delivery Type: binlog, redolog, snapshot, logic
                     * 
                     */
                    void SetCopyType(const std::string& _copyType);

                    /**
                     * 判断参数 CopyType 是否已赋值
                     * @return CopyType 是否已赋值
                     * 
                     */
                    bool CopyTypeHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Safe ID
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * Safe region
                     */
                    std::string m_vaultRegion;
                    bool m_vaultRegionHasBeenSet;

                    /**
                     * Delivery Type: binlog, redolog, snapshot, logic
                     */
                    std::string m_copyType;
                    bool m_copyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUTOCOPYCONFIG_H_
