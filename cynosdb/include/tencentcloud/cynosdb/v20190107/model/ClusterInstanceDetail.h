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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERINSTANCEDETAIL_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERINSTANCEDETAIL_H_

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
                * Cluster instance information
                */
                class ClusterInstanceDetail : public AbstractModel
                {
                public:
                    ClusterInstanceDetail();
                    ~ClusterInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param InstanceName Instance name
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Engine type
                     * @return InstanceType Engine type
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Engine type
                     * @param InstanceType Engine type
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Instance status
                     * @return InstanceStatus Instance status
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置Instance status
                     * @param InstanceStatus Instance status
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取Instance status description
                     * @return InstanceStatusDesc Instance status description
                     */
                    std::string GetInstanceStatusDesc() const;

                    /**
                     * 设置Instance status description
                     * @param InstanceStatusDesc Instance status description
                     */
                    void SetInstanceStatusDesc(const std::string& _instanceStatusDesc);

                    /**
                     * 判断参数 InstanceStatusDesc 是否已赋值
                     * @return InstanceStatusDesc 是否已赋值
                     */
                    bool InstanceStatusDescHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores
                     * @return InstanceCpu Number of CPU cores
                     */
                    int64_t GetInstanceCpu() const;

                    /**
                     * 设置Number of CPU cores
                     * @param InstanceCpu Number of CPU cores
                     */
                    void SetInstanceCpu(const int64_t& _instanceCpu);

                    /**
                     * 判断参数 InstanceCpu 是否已赋值
                     * @return InstanceCpu 是否已赋值
                     */
                    bool InstanceCpuHasBeenSet() const;

                    /**
                     * 获取Memory
                     * @return InstanceMemory Memory
                     */
                    int64_t GetInstanceMemory() const;

                    /**
                     * 设置Memory
                     * @param InstanceMemory Memory
                     */
                    void SetInstanceMemory(const int64_t& _instanceMemory);

                    /**
                     * 判断参数 InstanceMemory 是否已赋值
                     * @return InstanceMemory 是否已赋值
                     */
                    bool InstanceMemoryHasBeenSet() const;

                    /**
                     * 获取Disk
                     * @return InstanceStorage Disk
                     */
                    int64_t GetInstanceStorage() const;

                    /**
                     * 设置Disk
                     * @param InstanceStorage Disk
                     */
                    void SetInstanceStorage(const int64_t& _instanceStorage);

                    /**
                     * 判断参数 InstanceStorage 是否已赋值
                     * @return InstanceStorage 是否已赋值
                     */
                    bool InstanceStorageHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Engine type
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Instance status
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Instance status description
                     */
                    std::string m_instanceStatusDesc;
                    bool m_instanceStatusDescHasBeenSet;

                    /**
                     * Number of CPU cores
                     */
                    int64_t m_instanceCpu;
                    bool m_instanceCpuHasBeenSet;

                    /**
                     * Memory
                     */
                    int64_t m_instanceMemory;
                    bool m_instanceMemoryHasBeenSet;

                    /**
                     * Disk
                     */
                    int64_t m_instanceStorage;
                    bool m_instanceStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERINSTANCEDETAIL_H_
