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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_RESTARTINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_RESTARTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * RestartInstance request structure.
                */
                class RestartInstanceRequest : public AbstractModel
                {
                public:
                    RestartInstanceRequest();
                    ~RestartInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance name. Example: cdwpg-xxxx.
                     * @return InstanceId Instance name. Example: cdwpg-xxxx.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance name. Example: cdwpg-xxxx.
                     * @param _instanceId Instance name. Example: cdwpg-xxxx.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Types of node that need to restart. Valid values: gtm, cn, dn and fn.
                     * @return NodeTypes Types of node that need to restart. Valid values: gtm, cn, dn and fn.
                     * 
                     */
                    std::vector<std::string> GetNodeTypes() const;

                    /**
                     * 设置Types of node that need to restart. Valid values: gtm, cn, dn and fn.
                     * @param _nodeTypes Types of node that need to restart. Valid values: gtm, cn, dn and fn.
                     * 
                     */
                    void SetNodeTypes(const std::vector<std::string>& _nodeTypes);

                    /**
                     * 判断参数 NodeTypes 是否已赋值
                     * @return NodeTypes 是否已赋值
                     * 
                     */
                    bool NodeTypesHasBeenSet() const;

                    /**
                     * 获取Specifies th ID of nodes that need to restart.
                     * @return NodeIds Specifies th ID of nodes that need to restart.
                     * 
                     */
                    std::vector<std::string> GetNodeIds() const;

                    /**
                     * 设置Specifies th ID of nodes that need to restart.
                     * @param _nodeIds Specifies th ID of nodes that need to restart.
                     * 
                     */
                    void SetNodeIds(const std::vector<std::string>& _nodeIds);

                    /**
                     * 判断参数 NodeIds 是否已赋值
                     * @return NodeIds 是否已赋值
                     * 
                     */
                    bool NodeIdsHasBeenSet() const;

                private:

                    /**
                     * Instance name. Example: cdwpg-xxxx.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Types of node that need to restart. Valid values: gtm, cn, dn and fn.
                     */
                    std::vector<std::string> m_nodeTypes;
                    bool m_nodeTypesHasBeenSet;

                    /**
                     * Specifies th ID of nodes that need to restart.
                     */
                    std::vector<std::string> m_nodeIds;
                    bool m_nodeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_RESTARTINSTANCEREQUEST_H_
