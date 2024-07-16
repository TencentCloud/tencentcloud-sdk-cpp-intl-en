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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEINSTANCENODESREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEINSTANCENODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeInstanceNodes request structure.
                */
                class DescribeInstanceNodesRequest : public AbstractModel
                {
                public:
                    DescribeInstanceNodesRequest();
                    ~DescribeInstanceNodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster instance ID
                     * @return InstanceId Cluster instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster instance ID
                     * @param _instanceId Cluster instance ID
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
                     * 获取Cluster role type, defaulted as "data node".
                     * @return NodeRole Cluster role type, defaulted as "data node".
                     * 
                     */
                    std::string GetNodeRole() const;

                    /**
                     * 设置Cluster role type, defaulted as "data node".
                     * @param _nodeRole Cluster role type, defaulted as "data node".
                     * 
                     */
                    void SetNodeRole(const std::string& _nodeRole);

                    /**
                     * 判断参数 NodeRole 是否已赋值
                     * @return NodeRole 是否已赋值
                     * 
                     */
                    bool NodeRoleHasBeenSet() const;

                    /**
                     * 获取Pagination parameters. The first page is 0, and the second page is 10.
                     * @return Offset Pagination parameters. The first page is 0, and the second page is 10.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination parameters. The first page is 0, and the second page is 10.
                     * @param _offset Pagination parameters. The first page is 0, and the second page is 10.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Pagination parameters. The pagination step length is 10 by default.
                     * @return Limit Pagination parameters. The pagination step length is 10 by default.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination parameters. The pagination step length is 10 by default.
                     * @param _limit Pagination parameters. The pagination step length is 10 by default.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Display policy, and all items are displayed when All is selected.
                     * @return DisplayPolicy Display policy, and all items are displayed when All is selected.
                     * 
                     */
                    std::string GetDisplayPolicy() const;

                    /**
                     * 设置Display policy, and all items are displayed when All is selected.
                     * @param _displayPolicy Display policy, and all items are displayed when All is selected.
                     * 
                     */
                    void SetDisplayPolicy(const std::string& _displayPolicy);

                    /**
                     * 判断参数 DisplayPolicy 是否已赋值
                     * @return DisplayPolicy 是否已赋值
                     * 
                     */
                    bool DisplayPolicyHasBeenSet() const;

                private:

                    /**
                     * Cluster instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Cluster role type, defaulted as "data node".
                     */
                    std::string m_nodeRole;
                    bool m_nodeRoleHasBeenSet;

                    /**
                     * Pagination parameters. The first page is 0, and the second page is 10.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination parameters. The pagination step length is 10 by default.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Display policy, and all items are displayed when All is selected.
                     */
                    std::string m_displayPolicy;
                    bool m_displayPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEINSTANCENODESREQUEST_H_
