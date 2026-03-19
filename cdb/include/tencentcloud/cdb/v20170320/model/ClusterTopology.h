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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CLUSTERTOPOLOGY_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CLUSTERTOPOLOGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/ReadWriteNode.h>
#include <tencentcloud/cdb/v20170320/model/ReadonlyNode.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Topology configuration of nodes for cloud disk edition.
                */
                class ClusterTopology : public AbstractModel
                {
                public:
                    ClusterTopology();
                    ~ClusterTopology() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取RW node topology.
Description: NodeId can be obtained through [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1).
                     * @return ReadWriteNode RW node topology.
Description: NodeId can be obtained through [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1).
                     * 
                     */
                    ReadWriteNode GetReadWriteNode() const;

                    /**
                     * 设置RW node topology.
Description: NodeId can be obtained through [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1).
                     * @param _readWriteNode RW node topology.
Description: NodeId can be obtained through [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1).
                     * 
                     */
                    void SetReadWriteNode(const ReadWriteNode& _readWriteNode);

                    /**
                     * 判断参数 ReadWriteNode 是否已赋值
                     * @return ReadWriteNode 是否已赋值
                     * 
                     */
                    bool ReadWriteNodeHasBeenSet() const;

                    /**
                     * 获取RO node topology.
Description: NodeId can be obtained through [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1).
                     * @return ReadOnlyNodes RO node topology.
Description: NodeId can be obtained through [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1).
                     * 
                     */
                    std::vector<ReadonlyNode> GetReadOnlyNodes() const;

                    /**
                     * 设置RO node topology.
Description: NodeId can be obtained through [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1).
                     * @param _readOnlyNodes RO node topology.
Description: NodeId can be obtained through [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1).
                     * 
                     */
                    void SetReadOnlyNodes(const std::vector<ReadonlyNode>& _readOnlyNodes);

                    /**
                     * 判断参数 ReadOnlyNodes 是否已赋值
                     * @return ReadOnlyNodes 是否已赋值
                     * 
                     */
                    bool ReadOnlyNodesHasBeenSet() const;

                private:

                    /**
                     * RW node topology.
Description: NodeId can be obtained through [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1).
                     */
                    ReadWriteNode m_readWriteNode;
                    bool m_readWriteNodeHasBeenSet;

                    /**
                     * RO node topology.
Description: NodeId can be obtained through [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1).
                     */
                    std::vector<ReadonlyNode> m_readOnlyNodes;
                    bool m_readOnlyNodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CLUSTERTOPOLOGY_H_
