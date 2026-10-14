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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_MASTERNODEINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_MASTERNODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Instance-dedicated primary node-related information
                */
                class MasterNodeInfo : public AbstractModel
                {
                public:
                    MasterNodeInfo();
                    ~MasterNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether the dedicated master node is enabled or not
                     * @return EnableDedicatedMaster Whether the dedicated master node is enabled or not
                     * 
                     */
                    bool GetEnableDedicatedMaster() const;

                    /**
                     * 设置Whether the dedicated master node is enabled or not
                     * @param _enableDedicatedMaster Whether the dedicated master node is enabled or not
                     * 
                     */
                    void SetEnableDedicatedMaster(const bool& _enableDedicatedMaster);

                    /**
                     * 判断参数 EnableDedicatedMaster 是否已赋值
                     * @return EnableDedicatedMaster 是否已赋值
                     * 
                     */
                    bool EnableDedicatedMasterHasBeenSet() const;

                    /**
                     * 获取Dedicated primary node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li>
                     * @return MasterNodeType Dedicated primary node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li>
                     * 
                     */
                    std::string GetMasterNodeType() const;

                    /**
                     * 设置Dedicated primary node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li>
                     * @param _masterNodeType Dedicated primary node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li>
                     * 
                     */
                    void SetMasterNodeType(const std::string& _masterNodeType);

                    /**
                     * 判断参数 MasterNodeType 是否已赋值
                     * @return MasterNodeType 是否已赋值
                     * 
                     */
                    bool MasterNodeTypeHasBeenSet() const;

                    /**
                     * 获取Number of dedicated primary nodes
                     * @return MasterNodeNum Number of dedicated primary nodes
                     * 
                     */
                    uint64_t GetMasterNodeNum() const;

                    /**
                     * 设置Number of dedicated primary nodes
                     * @param _masterNodeNum Number of dedicated primary nodes
                     * 
                     */
                    void SetMasterNodeNum(const uint64_t& _masterNodeNum);

                    /**
                     * 判断参数 MasterNodeNum 是否已赋值
                     * @return MasterNodeNum 是否已赋值
                     * 
                     */
                    bool MasterNodeNumHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores of the dedicated master node
                     * @return MasterNodeCpuNum Number of CPU cores of the dedicated master node
                     * 
                     */
                    uint64_t GetMasterNodeCpuNum() const;

                    /**
                     * 设置Number of CPU cores of the dedicated master node
                     * @param _masterNodeCpuNum Number of CPU cores of the dedicated master node
                     * 
                     */
                    void SetMasterNodeCpuNum(const uint64_t& _masterNodeCpuNum);

                    /**
                     * 判断参数 MasterNodeCpuNum 是否已赋值
                     * @return MasterNodeCpuNum 是否已赋值
                     * 
                     */
                    bool MasterNodeCpuNumHasBeenSet() const;

                    /**
                     * 获取Dedicated primary node memory size, in GB.
                     * @return MasterNodeMemSize Dedicated primary node memory size, in GB.
                     * 
                     */
                    uint64_t GetMasterNodeMemSize() const;

                    /**
                     * 设置Dedicated primary node memory size, in GB.
                     * @param _masterNodeMemSize Dedicated primary node memory size, in GB.
                     * 
                     */
                    void SetMasterNodeMemSize(const uint64_t& _masterNodeMemSize);

                    /**
                     * 判断参数 MasterNodeMemSize 是否已赋值
                     * @return MasterNodeMemSize 是否已赋值
                     * 
                     */
                    bool MasterNodeMemSizeHasBeenSet() const;

                    /**
                     * 获取Dedicated primary node disk size in GB
                     * @return MasterNodeDiskSize Dedicated primary node disk size in GB
                     * 
                     */
                    uint64_t GetMasterNodeDiskSize() const;

                    /**
                     * 设置Dedicated primary node disk size in GB
                     * @param _masterNodeDiskSize Dedicated primary node disk size in GB
                     * 
                     */
                    void SetMasterNodeDiskSize(const uint64_t& _masterNodeDiskSize);

                    /**
                     * 判断参数 MasterNodeDiskSize 是否已赋值
                     * @return MasterNodeDiskSize 是否已赋值
                     * 
                     */
                    bool MasterNodeDiskSizeHasBeenSet() const;

                    /**
                     * 获取Dedicated primary node disk type
                     * @return MasterNodeDiskType Dedicated primary node disk type
                     * 
                     */
                    std::string GetMasterNodeDiskType() const;

                    /**
                     * 设置Dedicated primary node disk type
                     * @param _masterNodeDiskType Dedicated primary node disk type
                     * 
                     */
                    void SetMasterNodeDiskType(const std::string& _masterNodeDiskType);

                    /**
                     * 判断参数 MasterNodeDiskType 是否已赋值
                     * @return MasterNodeDiskType 是否已赋值
                     * 
                     */
                    bool MasterNodeDiskTypeHasBeenSet() const;

                private:

                    /**
                     * Whether the dedicated master node is enabled or not
                     */
                    bool m_enableDedicatedMaster;
                    bool m_enableDedicatedMasterHasBeenSet;

                    /**
                     * Dedicated primary node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li>
                     */
                    std::string m_masterNodeType;
                    bool m_masterNodeTypeHasBeenSet;

                    /**
                     * Number of dedicated primary nodes
                     */
                    uint64_t m_masterNodeNum;
                    bool m_masterNodeNumHasBeenSet;

                    /**
                     * Number of CPU cores of the dedicated master node
                     */
                    uint64_t m_masterNodeCpuNum;
                    bool m_masterNodeCpuNumHasBeenSet;

                    /**
                     * Dedicated primary node memory size, in GB.
                     */
                    uint64_t m_masterNodeMemSize;
                    bool m_masterNodeMemSizeHasBeenSet;

                    /**
                     * Dedicated primary node disk size in GB
                     */
                    uint64_t m_masterNodeDiskSize;
                    bool m_masterNodeDiskSizeHasBeenSet;

                    /**
                     * Dedicated primary node disk type
                     */
                    std::string m_masterNodeDiskType;
                    bool m_masterNodeDiskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_MASTERNODEINFO_H_
