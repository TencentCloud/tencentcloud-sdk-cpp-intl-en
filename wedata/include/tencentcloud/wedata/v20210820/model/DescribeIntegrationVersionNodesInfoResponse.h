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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONVERSIONNODESINFORESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONVERSIONNODESINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationNodeInfo.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationNodeMapping.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeIntegrationVersionNodesInfo response structure.
                */
                class DescribeIntegrationVersionNodesInfoResponse : public AbstractModel
                {
                public:
                    DescribeIntegrationVersionNodesInfoResponse();
                    ~DescribeIntegrationVersionNodesInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task Node Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Nodes Task Node Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<IntegrationNodeInfo> GetNodes() const;

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     * 
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取Task Mapping Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Mappings Task Mapping Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<IntegrationNodeMapping> GetMappings() const;

                    /**
                     * 判断参数 Mappings 是否已赋值
                     * @return Mappings 是否已赋值
                     * 
                     */
                    bool MappingsHasBeenSet() const;

                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * Task Node Information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<IntegrationNodeInfo> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * Task Mapping Information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<IntegrationNodeMapping> m_mappings;
                    bool m_mappingsHasBeenSet;

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONVERSIONNODESINFORESPONSE_H_
