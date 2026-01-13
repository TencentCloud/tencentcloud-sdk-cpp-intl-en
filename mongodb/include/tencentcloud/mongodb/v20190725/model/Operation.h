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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_OPERATION_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_OPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Operation to be terminated.
                */
                class Operation : public AbstractModel
                {
                public:
                    Operation();
                    ~Operation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of the shard where the operation is performed. The [DescribeCurrentOp](https://www.tencentcloud.com/document/product/240/48120?from_cn_redirect=1) API can be called to query the shard name.
                     * @return ReplicaSetName Name of the shard where the operation is performed. The [DescribeCurrentOp](https://www.tencentcloud.com/document/product/240/48120?from_cn_redirect=1) API can be called to query the shard name.
                     * 
                     */
                    std::string GetReplicaSetName() const;

                    /**
                     * 设置Name of the shard where the operation is performed. The [DescribeCurrentOp](https://www.tencentcloud.com/document/product/240/48120?from_cn_redirect=1) API can be called to query the shard name.
                     * @param _replicaSetName Name of the shard where the operation is performed. The [DescribeCurrentOp](https://www.tencentcloud.com/document/product/240/48120?from_cn_redirect=1) API can be called to query the shard name.
                     * 
                     */
                    void SetReplicaSetName(const std::string& _replicaSetName);

                    /**
                     * 判断参数 ReplicaSetName 是否已赋值
                     * @return ReplicaSetName 是否已赋值
                     * 
                     */
                    bool ReplicaSetNameHasBeenSet() const;

                    /**
                     * 获取Name of the node where the operation is performed. The [DescribeCurrentOp](https://www.tencentcloud.com/document/product/240/48120?from_cn_redirect=1) API can be called to query the node name.
                     * @return NodeName Name of the node where the operation is performed. The [DescribeCurrentOp](https://www.tencentcloud.com/document/product/240/48120?from_cn_redirect=1) API can be called to query the node name.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Name of the node where the operation is performed. The [DescribeCurrentOp](https://www.tencentcloud.com/document/product/240/48120?from_cn_redirect=1) API can be called to query the node name.
                     * @param _nodeName Name of the node where the operation is performed. The [DescribeCurrentOp](https://www.tencentcloud.com/document/product/240/48120?from_cn_redirect=1) API can be called to query the node name.
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Operation number. The [DescribeCurrentOp](https://www.tencentcloud.com/document/product/240/48120?from_cn_redirect=1) API can be called to query the operation number.
                     * @return OpId Operation number. The [DescribeCurrentOp](https://www.tencentcloud.com/document/product/240/48120?from_cn_redirect=1) API can be called to query the operation number.
                     * 
                     */
                    int64_t GetOpId() const;

                    /**
                     * 设置Operation number. The [DescribeCurrentOp](https://www.tencentcloud.com/document/product/240/48120?from_cn_redirect=1) API can be called to query the operation number.
                     * @param _opId Operation number. The [DescribeCurrentOp](https://www.tencentcloud.com/document/product/240/48120?from_cn_redirect=1) API can be called to query the operation number.
                     * 
                     */
                    void SetOpId(const int64_t& _opId);

                    /**
                     * 判断参数 OpId 是否已赋值
                     * @return OpId 是否已赋值
                     * 
                     */
                    bool OpIdHasBeenSet() const;

                private:

                    /**
                     * Name of the shard where the operation is performed. The [DescribeCurrentOp](https://www.tencentcloud.com/document/product/240/48120?from_cn_redirect=1) API can be called to query the shard name.
                     */
                    std::string m_replicaSetName;
                    bool m_replicaSetNameHasBeenSet;

                    /**
                     * Name of the node where the operation is performed. The [DescribeCurrentOp](https://www.tencentcloud.com/document/product/240/48120?from_cn_redirect=1) API can be called to query the node name.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Operation number. The [DescribeCurrentOp](https://www.tencentcloud.com/document/product/240/48120?from_cn_redirect=1) API can be called to query the operation number.
                     */
                    int64_t m_opId;
                    bool m_opIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_OPERATION_H_
