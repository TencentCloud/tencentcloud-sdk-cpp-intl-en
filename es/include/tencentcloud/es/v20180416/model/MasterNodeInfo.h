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
                * Information of the dedicated primary node in an instance
                */
                class MasterNodeInfo : public AbstractModel
                {
                public:
                    MasterNodeInfo();
                    ~MasterNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable the dedicated primary node
                     * @return EnableDedicatedMaster Whether to enable the dedicated primary node
                     * 
                     */
                    bool GetEnableDedicatedMaster() const;

                    /**
                     * 设置Whether to enable the dedicated primary node
                     * @param _enableDedicatedMaster Whether to enable the dedicated primary node
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
                     * 获取Dedicated primary node specification <li>ES.S1.SMALL2: 1-core 2 GB</li><li>ES.S1.MEDIUM4: 2-core 4 GB</li><li>ES.S1.MEDIUM8: 2-core 8 GB</li><li>ES.S1.LARGE16: 4-core 16 GB</li><li>ES.S1.2XLARGE32: 8-core 32 GB</li><li>ES.S1.4XLARGE32: 16-core 32 GB</li><li>ES.S1.4XLARGE64: 16-core 64 GB</li>
                     * @return MasterNodeType Dedicated primary node specification <li>ES.S1.SMALL2: 1-core 2 GB</li><li>ES.S1.MEDIUM4: 2-core 4 GB</li><li>ES.S1.MEDIUM8: 2-core 8 GB</li><li>ES.S1.LARGE16: 4-core 16 GB</li><li>ES.S1.2XLARGE32: 8-core 32 GB</li><li>ES.S1.4XLARGE32: 16-core 32 GB</li><li>ES.S1.4XLARGE64: 16-core 64 GB</li>
                     * 
                     */
                    std::string GetMasterNodeType() const;

                    /**
                     * 设置Dedicated primary node specification <li>ES.S1.SMALL2: 1-core 2 GB</li><li>ES.S1.MEDIUM4: 2-core 4 GB</li><li>ES.S1.MEDIUM8: 2-core 8 GB</li><li>ES.S1.LARGE16: 4-core 16 GB</li><li>ES.S1.2XLARGE32: 8-core 32 GB</li><li>ES.S1.4XLARGE32: 16-core 32 GB</li><li>ES.S1.4XLARGE64: 16-core 64 GB</li>
                     * @param _masterNodeType Dedicated primary node specification <li>ES.S1.SMALL2: 1-core 2 GB</li><li>ES.S1.MEDIUM4: 2-core 4 GB</li><li>ES.S1.MEDIUM8: 2-core 8 GB</li><li>ES.S1.LARGE16: 4-core 16 GB</li><li>ES.S1.2XLARGE32: 8-core 32 GB</li><li>ES.S1.4XLARGE32: 16-core 32 GB</li><li>ES.S1.4XLARGE64: 16-core 64 GB</li>
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
                     * 获取Number of CPU cores of the dedicated primary node
                     * @return MasterNodeCpuNum Number of CPU cores of the dedicated primary node
                     * 
                     */
                    uint64_t GetMasterNodeCpuNum() const;

                    /**
                     * 设置Number of CPU cores of the dedicated primary node
                     * @param _masterNodeCpuNum Number of CPU cores of the dedicated primary node
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
                     * 获取Memory size of the dedicated primary node in GB
                     * @return MasterNodeMemSize Memory size of the dedicated primary node in GB
                     * 
                     */
                    uint64_t GetMasterNodeMemSize() const;

                    /**
                     * 设置Memory size of the dedicated primary node in GB
                     * @param _masterNodeMemSize Memory size of the dedicated primary node in GB
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
                     * 获取Disk size of the dedicated primary node in GB
                     * @return MasterNodeDiskSize Disk size of the dedicated primary node in GB
                     * 
                     */
                    uint64_t GetMasterNodeDiskSize() const;

                    /**
                     * 设置Disk size of the dedicated primary node in GB
                     * @param _masterNodeDiskSize Disk size of the dedicated primary node in GB
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
                     * 获取Disk type of the dedicated primary node
                     * @return MasterNodeDiskType Disk type of the dedicated primary node
                     * 
                     */
                    std::string GetMasterNodeDiskType() const;

                    /**
                     * 设置Disk type of the dedicated primary node
                     * @param _masterNodeDiskType Disk type of the dedicated primary node
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
                     * Whether to enable the dedicated primary node
                     */
                    bool m_enableDedicatedMaster;
                    bool m_enableDedicatedMasterHasBeenSet;

                    /**
                     * Dedicated primary node specification <li>ES.S1.SMALL2: 1-core 2 GB</li><li>ES.S1.MEDIUM4: 2-core 4 GB</li><li>ES.S1.MEDIUM8: 2-core 8 GB</li><li>ES.S1.LARGE16: 4-core 16 GB</li><li>ES.S1.2XLARGE32: 8-core 32 GB</li><li>ES.S1.4XLARGE32: 16-core 32 GB</li><li>ES.S1.4XLARGE64: 16-core 64 GB</li>
                     */
                    std::string m_masterNodeType;
                    bool m_masterNodeTypeHasBeenSet;

                    /**
                     * Number of dedicated primary nodes
                     */
                    uint64_t m_masterNodeNum;
                    bool m_masterNodeNumHasBeenSet;

                    /**
                     * Number of CPU cores of the dedicated primary node
                     */
                    uint64_t m_masterNodeCpuNum;
                    bool m_masterNodeCpuNumHasBeenSet;

                    /**
                     * Memory size of the dedicated primary node in GB
                     */
                    uint64_t m_masterNodeMemSize;
                    bool m_masterNodeMemSizeHasBeenSet;

                    /**
                     * Disk size of the dedicated primary node in GB
                     */
                    uint64_t m_masterNodeDiskSize;
                    bool m_masterNodeDiskSizeHasBeenSet;

                    /**
                     * Disk type of the dedicated primary node
                     */
                    std::string m_masterNodeDiskType;
                    bool m_masterNodeDiskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_MASTERNODEINFO_H_
