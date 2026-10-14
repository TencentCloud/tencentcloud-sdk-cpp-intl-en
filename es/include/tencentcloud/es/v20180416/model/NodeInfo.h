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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_NODEINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_NODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/LocalDiskInfo.h>
#include <tencentcloud/es/v20180416/model/GpuInfo.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Specification description information of a node type in the cluster (such as hot data node, cold data node, dedicated master node), including node type, number of nodes, node specification, disk type, and disk size. If Type is not specified, it defaults to hot data node. If the node is a master node, the DiskType and DiskSize parameters will be ignored (the primary node has no data disk).
                */
                class NodeInfo : public AbstractModel
                {
                public:
                    NodeInfo();
                    ~NodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Number of nodes.</p>
                     * @return NodeNum <p>Number of nodes.</p>
                     * 
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置<p>Number of nodes.</p>
                     * @param _nodeNum <p>Number of nodes.</p>
                     * 
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取<p>Node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * @return NodeType <p>Node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>Node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * @param _nodeType <p>Node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Node type</p><p>Enumeration values:</p><ul><li>hotData: hot data node</li><li>warmData: cold data node</li><li>dedicatedMaster: dedicated master node</li><li>dedicatedCoordinating: dedicated coordinator node</li><li>dedicatedMl: dedicated Machine Learning node</li></ul>
                     * @return Type <p>Node type</p><p>Enumeration values:</p><ul><li>hotData: hot data node</li><li>warmData: cold data node</li><li>dedicatedMaster: dedicated master node</li><li>dedicatedCoordinating: dedicated coordinator node</li><li>dedicatedMl: dedicated Machine Learning node</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Node type</p><p>Enumeration values:</p><ul><li>hotData: hot data node</li><li>warmData: cold data node</li><li>dedicatedMaster: dedicated master node</li><li>dedicatedCoordinating: dedicated coordinator node</li><li>dedicatedMl: dedicated Machine Learning node</li></ul>
                     * @param _type <p>Node type</p><p>Enumeration values:</p><ul><li>hotData: hot data node</li><li>warmData: cold data node</li><li>dedicatedMaster: dedicated master node</li><li>dedicatedCoordinating: dedicated coordinator node</li><li>dedicatedMl: dedicated Machine Learning node</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Node disk type<li>CLOUD_SSD: ssd cloud disk</li><li>CLOUD_PREMIUM: high-performance cloud disk</li>Default value: CLOUD_SSD</p>
                     * @return DiskType <p>Node disk type<li>CLOUD_SSD: ssd cloud disk</li><li>CLOUD_PREMIUM: high-performance cloud disk</li>Default value: CLOUD_SSD</p>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>Node disk type<li>CLOUD_SSD: ssd cloud disk</li><li>CLOUD_PREMIUM: high-performance cloud disk</li>Default value: CLOUD_SSD</p>
                     * @param _diskType <p>Node disk type<li>CLOUD_SSD: ssd cloud disk</li><li>CLOUD_PREMIUM: high-performance cloud disk</li>Default value: CLOUD_SSD</p>
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取<p>Node disk capacity (GB)</p>
                     * @return DiskSize <p>Node disk capacity (GB)</p>
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置<p>Node disk capacity (GB)</p>
                     * @param _diskSize <p>Node disk capacity (GB)</p>
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>Node local disk information.</p>
                     * @return LocalDiskInfo <p>Node local disk information.</p>
                     * 
                     */
                    LocalDiskInfo GetLocalDiskInfo() const;

                    /**
                     * 设置<p>Node local disk information.</p>
                     * @param _localDiskInfo <p>Node local disk information.</p>
                     * 
                     */
                    void SetLocalDiskInfo(const LocalDiskInfo& _localDiskInfo);

                    /**
                     * 判断参数 LocalDiskInfo 是否已赋值
                     * @return LocalDiskInfo 是否已赋值
                     * 
                     */
                    bool LocalDiskInfoHasBeenSet() const;

                    /**
                     * 获取<p>Number of node disk blocks</p>
                     * @return DiskCount <p>Number of node disk blocks</p>
                     * 
                     */
                    uint64_t GetDiskCount() const;

                    /**
                     * 设置<p>Number of node disk blocks</p>
                     * @param _diskCount <p>Number of node disk blocks</p>
                     * 
                     */
                    void SetDiskCount(const uint64_t& _diskCount);

                    /**
                     * 判断参数 DiskCount 是否已赋值
                     * @return DiskCount 是否已赋值
                     * 
                     */
                    bool DiskCountHasBeenSet() const;

                    /**
                     * 获取<p>Whether the node disk is encrypted. 0: no encryption; 1: encryption; not encrypted by default</p>
                     * @return DiskEncrypt <p>Whether the node disk is encrypted. 0: no encryption; 1: encryption; not encrypted by default</p>
                     * 
                     */
                    uint64_t GetDiskEncrypt() const;

                    /**
                     * 设置<p>Whether the node disk is encrypted. 0: no encryption; 1: encryption; not encrypted by default</p>
                     * @param _diskEncrypt <p>Whether the node disk is encrypted. 0: no encryption; 1: encryption; not encrypted by default</p>
                     * 
                     */
                    void SetDiskEncrypt(const uint64_t& _diskEncrypt);

                    /**
                     * 判断参数 DiskEncrypt 是否已赋值
                     * @return DiskEncrypt 是否已赋值
                     * 
                     */
                    bool DiskEncryptHasBeenSet() const;

                    /**
                     * 获取<p>Custom encryption key id</p>
                     * @return KmsKeyId <p>Custom encryption key id</p>
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置<p>Custom encryption key id</p>
                     * @param _kmsKeyId <p>Custom encryption key id</p>
                     * 
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>Custom encryption key name</p>
                     * @return KmsKeyName <p>Custom encryption key name</p>
                     * 
                     */
                    std::string GetKmsKeyName() const;

                    /**
                     * 设置<p>Custom encryption key name</p>
                     * @param _kmsKeyName <p>Custom encryption key name</p>
                     * 
                     */
                    void SetKmsKeyName(const std::string& _kmsKeyName);

                    /**
                     * 判断参数 KmsKeyName 是否已赋值
                     * @return KmsKeyName 是否已赋值
                     * 
                     */
                    bool KmsKeyNameHasBeenSet() const;

                    /**
                     * 获取<p>Number of CPUs</p>
                     * @return CpuNum <p>Number of CPUs</p>
                     * 
                     */
                    uint64_t GetCpuNum() const;

                    /**
                     * 设置<p>Number of CPUs</p>
                     * @param _cpuNum <p>Number of CPUs</p>
                     * 
                     */
                    void SetCpuNum(const uint64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     * 
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取<p>Memory size, in GB.</p>
                     * @return MemSize <p>Memory size, in GB.</p>
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置<p>Memory size, in GB.</p>
                     * @param _memSize <p>Memory size, in GB.</p>
                     * 
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取<p>Additional hard disk performance</p>
                     * @return DiskEnhance <p>Additional hard disk performance</p>
                     * 
                     */
                    int64_t GetDiskEnhance() const;

                    /**
                     * 设置<p>Additional hard disk performance</p>
                     * @param _diskEnhance <p>Additional hard disk performance</p>
                     * 
                     */
                    void SetDiskEnhance(const int64_t& _diskEnhance);

                    /**
                     * 判断参数 DiskEnhance 是否已赋值
                     * @return DiskEnhance 是否已赋值
                     * 
                     */
                    bool DiskEnhanceHasBeenSet() const;

                    /**
                     * 获取<p>Gpu information of the node</p>
                     * @return GpuInfo <p>Gpu information of the node</p>
                     * 
                     */
                    GpuInfo GetGpuInfo() const;

                    /**
                     * 设置<p>Gpu information of the node</p>
                     * @param _gpuInfo <p>Gpu information of the node</p>
                     * 
                     */
                    void SetGpuInfo(const GpuInfo& _gpuInfo);

                    /**
                     * 判断参数 GpuInfo 是否已赋值
                     * @return GpuInfo 是否已赋值
                     * 
                     */
                    bool GpuInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Number of nodes.</p>
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * <p>Node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>Node type</p><p>Enumeration values:</p><ul><li>hotData: hot data node</li><li>warmData: cold data node</li><li>dedicatedMaster: dedicated master node</li><li>dedicatedCoordinating: dedicated coordinator node</li><li>dedicatedMl: dedicated Machine Learning node</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Node disk type<li>CLOUD_SSD: ssd cloud disk</li><li>CLOUD_PREMIUM: high-performance cloud disk</li>Default value: CLOUD_SSD</p>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>Node disk capacity (GB)</p>
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>Node local disk information.</p>
                     */
                    LocalDiskInfo m_localDiskInfo;
                    bool m_localDiskInfoHasBeenSet;

                    /**
                     * <p>Number of node disk blocks</p>
                     */
                    uint64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                    /**
                     * <p>Whether the node disk is encrypted. 0: no encryption; 1: encryption; not encrypted by default</p>
                     */
                    uint64_t m_diskEncrypt;
                    bool m_diskEncryptHasBeenSet;

                    /**
                     * <p>Custom encryption key id</p>
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * <p>Custom encryption key name</p>
                     */
                    std::string m_kmsKeyName;
                    bool m_kmsKeyNameHasBeenSet;

                    /**
                     * <p>Number of CPUs</p>
                     */
                    uint64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * <p>Memory size, in GB.</p>
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>Additional hard disk performance</p>
                     */
                    int64_t m_diskEnhance;
                    bool m_diskEnhanceHasBeenSet;

                    /**
                     * <p>Gpu information of the node</p>
                     */
                    GpuInfo m_gpuInfo;
                    bool m_gpuInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_NODEINFO_H_
