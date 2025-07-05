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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_TERMINATECOMPUTENODESREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_TERMINATECOMPUTENODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * TerminateComputeNodes request structure.
                */
                class TerminateComputeNodesRequest : public AbstractModel
                {
                public:
                    TerminateComputeNodesRequest();
                    ~TerminateComputeNodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Compute environment ID
                     * @return EnvId Compute environment ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置Compute environment ID
                     * @param _envId Compute environment ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取List of compute node IDs
                     * @return ComputeNodeIds List of compute node IDs
                     * 
                     */
                    std::vector<std::string> GetComputeNodeIds() const;

                    /**
                     * 设置List of compute node IDs
                     * @param _computeNodeIds List of compute node IDs
                     * 
                     */
                    void SetComputeNodeIds(const std::vector<std::string>& _computeNodeIds);

                    /**
                     * 判断参数 ComputeNodeIds 是否已赋值
                     * @return ComputeNodeIds 是否已赋值
                     * 
                     */
                    bool ComputeNodeIdsHasBeenSet() const;

                private:

                    /**
                     * Compute environment ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * List of compute node IDs
                     */
                    std::vector<std::string> m_computeNodeIds;
                    bool m_computeNodeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_TERMINATECOMPUTENODESREQUEST_H_
