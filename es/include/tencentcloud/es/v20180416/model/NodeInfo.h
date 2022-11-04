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


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Specification information of a node type in the cluster (such as hot data node, warm data node, or dedicated primary node), including node type, number of nodes, node specification, disk type, and disk size. If `Type` is not specified, it will be a hot data node by default; if the node is a primary node, then the `DiskType` and `DiskSize` parameters will be ignored (as a primary node has no data disks)
                */
                class NodeInfo : public AbstractModel
                {
                public:
                    NodeInfo();
                    ~NodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of nodes
                     * @return NodeNum Number of nodes
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置Number of nodes
                     * @param NodeNum Number of nodes
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
                     * @return NodeType Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
                     * @param NodeType Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取Node type<li>`hotData`: hot data node</li>
<li>`warmData`: warm data node</li>
<li>`dedicatedMaster`: dedicated master node</li>
Default value: `hotData`
                     * @return Type Node type<li>`hotData`: hot data node</li>
<li>`warmData`: warm data node</li>
<li>`dedicatedMaster`: dedicated master node</li>
Default value: `hotData`
                     */
                    std::string GetType() const;

                    /**
                     * 设置Node type<li>`hotData`: hot data node</li>
<li>`warmData`: warm data node</li>
<li>`dedicatedMaster`: dedicated master node</li>
Default value: `hotData`
                     * @param Type Node type<li>`hotData`: hot data node</li>
<li>`warmData`: warm data node</li>
<li>`dedicatedMaster`: dedicated master node</li>
Default value: `hotData`
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Node disk type <li>CLOUD_SSD: SSD cloud storage </li><li>CLOUD_PREMIUM: Premium cloud disk </li>Default value: CLOUD_SSD
                     * @return DiskType Node disk type <li>CLOUD_SSD: SSD cloud storage </li><li>CLOUD_PREMIUM: Premium cloud disk </li>Default value: CLOUD_SSD
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Node disk type <li>CLOUD_SSD: SSD cloud storage </li><li>CLOUD_PREMIUM: Premium cloud disk </li>Default value: CLOUD_SSD
                     * @param DiskType Node disk type <li>CLOUD_SSD: SSD cloud storage </li><li>CLOUD_PREMIUM: Premium cloud disk </li>Default value: CLOUD_SSD
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Node disk size in GB
                     * @return DiskSize Node disk size in GB
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置Node disk size in GB
                     * @param DiskSize Node disk size in GB
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Local disk information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LocalDiskInfo Local disk information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    LocalDiskInfo GetLocalDiskInfo() const;

                    /**
                     * 设置Local disk information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param LocalDiskInfo Local disk information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLocalDiskInfo(const LocalDiskInfo& _localDiskInfo);

                    /**
                     * 判断参数 LocalDiskInfo 是否已赋值
                     * @return LocalDiskInfo 是否已赋值
                     */
                    bool LocalDiskInfoHasBeenSet() const;

                    /**
                     * 获取Number of node disks
                     * @return DiskCount Number of node disks
                     */
                    uint64_t GetDiskCount() const;

                    /**
                     * 设置Number of node disks
                     * @param DiskCount Number of node disks
                     */
                    void SetDiskCount(const uint64_t& _diskCount);

                    /**
                     * 判断参数 DiskCount 是否已赋值
                     * @return DiskCount 是否已赋值
                     */
                    bool DiskCountHasBeenSet() const;

                    /**
                     * 获取Whether to encrypt node disk. 0: no (default); 1: yes.
                     * @return DiskEncrypt Whether to encrypt node disk. 0: no (default); 1: yes.
                     */
                    uint64_t GetDiskEncrypt() const;

                    /**
                     * 设置Whether to encrypt node disk. 0: no (default); 1: yes.
                     * @param DiskEncrypt Whether to encrypt node disk. 0: no (default); 1: yes.
                     */
                    void SetDiskEncrypt(const uint64_t& _diskEncrypt);

                    /**
                     * 判断参数 DiskEncrypt 是否已赋值
                     * @return DiskEncrypt 是否已赋值
                     */
                    bool DiskEncryptHasBeenSet() const;

                    /**
                     * 获取CPU number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CpuNum CPU number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetCpuNum() const;

                    /**
                     * 设置CPU number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CpuNum CPU number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCpuNum(const uint64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取Memory size in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MemSize Memory size in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置Memory size in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param MemSize Memory size in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取/
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiskEnhance /
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetDiskEnhance() const;

                    /**
                     * 设置/
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DiskEnhance /
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDiskEnhance(const int64_t& _diskEnhance);

                    /**
                     * 判断参数 DiskEnhance 是否已赋值
                     * @return DiskEnhance 是否已赋值
                     */
                    bool DiskEnhanceHasBeenSet() const;

                private:

                    /**
                     * Number of nodes
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Node type<li>`hotData`: hot data node</li>
<li>`warmData`: warm data node</li>
<li>`dedicatedMaster`: dedicated master node</li>
Default value: `hotData`
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Node disk type <li>CLOUD_SSD: SSD cloud storage </li><li>CLOUD_PREMIUM: Premium cloud disk </li>Default value: CLOUD_SSD
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Node disk size in GB
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Local disk information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    LocalDiskInfo m_localDiskInfo;
                    bool m_localDiskInfoHasBeenSet;

                    /**
                     * Number of node disks
                     */
                    uint64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                    /**
                     * Whether to encrypt node disk. 0: no (default); 1: yes.
                     */
                    uint64_t m_diskEncrypt;
                    bool m_diskEncryptHasBeenSet;

                    /**
                     * CPU number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * Memory size in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * /
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_diskEnhance;
                    bool m_diskEnhanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_NODEINFO_H_
