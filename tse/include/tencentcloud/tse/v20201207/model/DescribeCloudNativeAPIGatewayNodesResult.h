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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYNODESRESULT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYNODESRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayNode.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Obtain gateway node info
                */
                class DescribeCloudNativeAPIGatewayNodesResult : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayNodesResult();
                    ~DescribeCloudNativeAPIGatewayNodesResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Retrieve the cloud native API gateway node list response result.
                     * @return TotalCount Retrieve the cloud native API gateway node list response result.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Retrieve the cloud native API gateway node list response result.
                     * @param _totalCount Retrieve the cloud native API gateway node list response result.
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Cloud native API gateway node list.
                     * @return NodeList Cloud native API gateway node list.
                     * 
                     */
                    std::vector<CloudNativeAPIGatewayNode> GetNodeList() const;

                    /**
                     * 设置Cloud native API gateway node list.
                     * @param _nodeList Cloud native API gateway node list.
                     * 
                     */
                    void SetNodeList(const std::vector<CloudNativeAPIGatewayNode>& _nodeList);

                    /**
                     * 判断参数 NodeList 是否已赋值
                     * @return NodeList 是否已赋值
                     * 
                     */
                    bool NodeListHasBeenSet() const;

                private:

                    /**
                     * Retrieve the cloud native API gateway node list response result.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Cloud native API gateway node list.
                     */
                    std::vector<CloudNativeAPIGatewayNode> m_nodeList;
                    bool m_nodeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYNODESRESULT_H_
