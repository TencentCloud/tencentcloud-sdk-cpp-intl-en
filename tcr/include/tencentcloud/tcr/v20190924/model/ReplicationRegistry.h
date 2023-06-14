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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONREGISTRY_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONREGISTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * ID of Enterprise Registry replication instance
                */
                class ReplicationRegistry : public AbstractModel
                {
                public:
                    ReplicationRegistry();
                    ~ReplicationRegistry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Master instance ID
                     * @return RegistryId Master instance ID
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置Master instance ID
                     * @param _registryId Master instance ID
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取Replication instance ID
                     * @return ReplicationRegistryId Replication instance ID
                     * 
                     */
                    std::string GetReplicationRegistryId() const;

                    /**
                     * 设置Replication instance ID
                     * @param _replicationRegistryId Replication instance ID
                     * 
                     */
                    void SetReplicationRegistryId(const std::string& _replicationRegistryId);

                    /**
                     * 判断参数 ReplicationRegistryId 是否已赋值
                     * @return ReplicationRegistryId 是否已赋值
                     * 
                     */
                    bool ReplicationRegistryIdHasBeenSet() const;

                    /**
                     * 获取Region ID of the replication instance
                     * @return ReplicationRegionId Region ID of the replication instance
                     * 
                     */
                    uint64_t GetReplicationRegionId() const;

                    /**
                     * 设置Region ID of the replication instance
                     * @param _replicationRegionId Region ID of the replication instance
                     * 
                     */
                    void SetReplicationRegionId(const uint64_t& _replicationRegionId);

                    /**
                     * 判断参数 ReplicationRegionId 是否已赋值
                     * @return ReplicationRegionId 是否已赋值
                     * 
                     */
                    bool ReplicationRegionIdHasBeenSet() const;

                    /**
                     * 获取Region name of the replication instance
                     * @return ReplicationRegionName Region name of the replication instance
                     * 
                     */
                    std::string GetReplicationRegionName() const;

                    /**
                     * 设置Region name of the replication instance
                     * @param _replicationRegionName Region name of the replication instance
                     * 
                     */
                    void SetReplicationRegionName(const std::string& _replicationRegionName);

                    /**
                     * 判断参数 ReplicationRegionName 是否已赋值
                     * @return ReplicationRegionName 是否已赋值
                     * 
                     */
                    bool ReplicationRegionNameHasBeenSet() const;

                    /**
                     * 获取Status of the replication instance
                     * @return Status Status of the replication instance
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status of the replication instance
                     * @param _status Status of the replication instance
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreatedAt Creation time
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Creation time
                     * @param _createdAt Creation time
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                private:

                    /**
                     * Master instance ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Replication instance ID
                     */
                    std::string m_replicationRegistryId;
                    bool m_replicationRegistryIdHasBeenSet;

                    /**
                     * Region ID of the replication instance
                     */
                    uint64_t m_replicationRegionId;
                    bool m_replicationRegionIdHasBeenSet;

                    /**
                     * Region name of the replication instance
                     */
                    std::string m_replicationRegionName;
                    bool m_replicationRegionNameHasBeenSet;

                    /**
                     * Status of the replication instance
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONREGISTRY_H_
