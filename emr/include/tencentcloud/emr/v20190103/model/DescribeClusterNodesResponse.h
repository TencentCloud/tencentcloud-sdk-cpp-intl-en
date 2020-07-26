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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECLUSTERNODESRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECLUSTERNODESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/NodeHardwareInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeClusterNodes response structure.
                */
                class DescribeClusterNodesResponse : public AbstractModel
                {
                public:
                    DescribeClusterNodesResponse();
                    ~DescribeClusterNodesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Total number of queried nodes
                     * @return TotalCnt Total number of queried nodes
                     */
                    int64_t GetTotalCnt() const;

                    /**
                     * 判断参数 TotalCnt 是否已赋值
                     * @return TotalCnt 是否已赋值
                     */
                    bool TotalCntHasBeenSet() const;

                    /**
                     * 获取List of node details
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NodeList List of node details
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<NodeHardwareInfo> GetNodeList() const;

                    /**
                     * 判断参数 NodeList 是否已赋值
                     * @return NodeList 是否已赋值
                     */
                    bool NodeListHasBeenSet() const;

                    /**
                     * 获取List of tag keys owned by user
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TagKeys List of tag keys owned by user
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetTagKeys() const;

                    /**
                     * 判断参数 TagKeys 是否已赋值
                     * @return TagKeys 是否已赋值
                     */
                    bool TagKeysHasBeenSet() const;

                private:

                    /**
                     * Total number of queried nodes
                     */
                    int64_t m_totalCnt;
                    bool m_totalCntHasBeenSet;

                    /**
                     * List of node details
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<NodeHardwareInfo> m_nodeList;
                    bool m_nodeListHasBeenSet;

                    /**
                     * List of tag keys owned by user
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_tagKeys;
                    bool m_tagKeysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECLUSTERNODESRESPONSE_H_
