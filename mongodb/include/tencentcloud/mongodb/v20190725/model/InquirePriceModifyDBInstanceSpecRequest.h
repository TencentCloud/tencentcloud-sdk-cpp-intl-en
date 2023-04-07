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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_INQUIREPRICEMODIFYDBINSTANCESPECREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_INQUIREPRICEMODIFYDBINSTANCESPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * InquirePriceModifyDBInstanceSpec request structure.
                */
                class InquirePriceModifyDBInstanceSpecRequest : public AbstractModel
                {
                public:
                    InquirePriceModifyDBInstanceSpecRequest();
                    ~InquirePriceModifyDBInstanceSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of cmgo-p8vn****. It is the same as the instance ID displayed in the TencentDB console.
                     * @return InstanceId Instance ID in the format of cmgo-p8vn****. It is the same as the instance ID displayed in the TencentDB console.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cmgo-p8vn****. It is the same as the instance ID displayed in the TencentDB console.
                     * @param InstanceId Instance ID in the format of cmgo-p8vn****. It is the same as the instance ID displayed in the TencentDB console.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance memory size in GB after specification adjustment.
                     * @return Memory Instance memory size in GB after specification adjustment.
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Instance memory size in GB after specification adjustment.
                     * @param Memory Instance memory size in GB after specification adjustment.
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Instance disk size in GB after specification adjustment.
                     * @return Volume Instance disk size in GB after specification adjustment.
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置Instance disk size in GB after specification adjustment.
                     * @param Volume Instance disk size in GB after specification adjustment.
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取Number of instance nodes. The number of nodes is left unchanged by default and cannot be changed currently.
                     * @return NodeNum Number of instance nodes. The number of nodes is left unchanged by default and cannot be changed currently.
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置Number of instance nodes. The number of nodes is left unchanged by default and cannot be changed currently.
                     * @param NodeNum Number of instance nodes. The number of nodes is left unchanged by default and cannot be changed currently.
                     */
                    void SetNodeNum(const int64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取Number of instance shards. The number of shards is left unchanged by default and cannot be changed currently.
                     * @return ReplicateSetNum Number of instance shards. The number of shards is left unchanged by default and cannot be changed currently.
                     */
                    int64_t GetReplicateSetNum() const;

                    /**
                     * 设置Number of instance shards. The number of shards is left unchanged by default and cannot be changed currently.
                     * @param ReplicateSetNum Number of instance shards. The number of shards is left unchanged by default and cannot be changed currently.
                     */
                    void SetReplicateSetNum(const int64_t& _replicateSetNum);

                    /**
                     * 判断参数 ReplicateSetNum 是否已赋值
                     * @return ReplicateSetNum 是否已赋值
                     */
                    bool ReplicateSetNumHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of cmgo-p8vn****. It is the same as the instance ID displayed in the TencentDB console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance memory size in GB after specification adjustment.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance disk size in GB after specification adjustment.
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * Number of instance nodes. The number of nodes is left unchanged by default and cannot be changed currently.
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * Number of instance shards. The number of shards is left unchanged by default and cannot be changed currently.
                     */
                    int64_t m_replicateSetNum;
                    bool m_replicateSetNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INQUIREPRICEMODIFYDBINSTANCESPECREQUEST_H_
