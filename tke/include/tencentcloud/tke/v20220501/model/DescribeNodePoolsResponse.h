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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBENODEPOOLSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBENODEPOOLSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/NodePool.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * DescribeNodePools response structure.
                */
                class DescribeNodePoolsResponse : public AbstractModel
                {
                public:
                    DescribeNodePoolsResponse();
                    ~DescribeNodePoolsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Node pool list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return NodePools Node pool list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<NodePool> GetNodePools() const;

                    /**
                     * 判断参数 NodePools 是否已赋值
                     * @return NodePools 是否已赋值
                     * 
                     */
                    bool NodePoolsHasBeenSet() const;

                    /**
                     * 获取Total resources
                     * @return TotalCount Total resources
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Node pool list
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<NodePool> m_nodePools;
                    bool m_nodePoolsHasBeenSet;

                    /**
                     * Total resources
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBENODEPOOLSRESPONSE_H_
