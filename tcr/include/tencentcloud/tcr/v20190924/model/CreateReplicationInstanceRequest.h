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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATEREPLICATIONINSTANCEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATEREPLICATIONINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateReplicationInstance request structure.
                */
                class CreateReplicationInstanceRequest : public AbstractModel
                {
                public:
                    CreateReplicationInstanceRequest();
                    ~CreateReplicationInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Master instance ID
                     * @return RegistryId Master instance ID
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置Master instance ID
                     * @param RegistryId Master instance ID
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取Region ID of the replication instance
                     * @return ReplicationRegionId Region ID of the replication instance
                     */
                    uint64_t GetReplicationRegionId() const;

                    /**
                     * 设置Region ID of the replication instance
                     * @param ReplicationRegionId Region ID of the replication instance
                     */
                    void SetReplicationRegionId(const uint64_t& _replicationRegionId);

                    /**
                     * 判断参数 ReplicationRegionId 是否已赋值
                     * @return ReplicationRegionId 是否已赋值
                     */
                    bool ReplicationRegionIdHasBeenSet() const;

                    /**
                     * 获取Region name of the replication instance
                     * @return ReplicationRegionName Region name of the replication instance
                     */
                    std::string GetReplicationRegionName() const;

                    /**
                     * 设置Region name of the replication instance
                     * @param ReplicationRegionName Region name of the replication instance
                     */
                    void SetReplicationRegionName(const std::string& _replicationRegionName);

                    /**
                     * 判断参数 ReplicationRegionName 是否已赋值
                     * @return ReplicationRegionName 是否已赋值
                     */
                    bool ReplicationRegionNameHasBeenSet() const;

                    /**
                     * 获取Whether to sync TCR cloud tags to the COS Bucket
                     * @return SyncTag Whether to sync TCR cloud tags to the COS Bucket
                     */
                    bool GetSyncTag() const;

                    /**
                     * 设置Whether to sync TCR cloud tags to the COS Bucket
                     * @param SyncTag Whether to sync TCR cloud tags to the COS Bucket
                     */
                    void SetSyncTag(const bool& _syncTag);

                    /**
                     * 判断参数 SyncTag 是否已赋值
                     * @return SyncTag 是否已赋值
                     */
                    bool SyncTagHasBeenSet() const;

                private:

                    /**
                     * Master instance ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

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
                     * Whether to sync TCR cloud tags to the COS Bucket
                     */
                    bool m_syncTag;
                    bool m_syncTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATEREPLICATIONINSTANCEREQUEST_H_
