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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERNODEPOOLDETAILRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERNODEPOOLDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/NodePool.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusterNodePoolDetail response structure.
                */
                class DescribeClusterNodePoolDetailResponse : public AbstractModel
                {
                public:
                    DescribeClusterNodePoolDetailResponse();
                    ~DescribeClusterNodePoolDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Node pool details
                     * @return NodePool Node pool details
                     * 
                     */
                    NodePool GetNodePool() const;

                    /**
                     * 判断参数 NodePool 是否已赋值
                     * @return NodePool 是否已赋值
                     * 
                     */
                    bool NodePoolHasBeenSet() const;

                private:

                    /**
                     * Node pool details
                     */
                    NodePool m_nodePool;
                    bool m_nodePoolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERNODEPOOLDETAILRESPONSE_H_
