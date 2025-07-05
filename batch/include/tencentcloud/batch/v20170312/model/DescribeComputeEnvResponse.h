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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVRESPONSE_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Placement.h>
#include <tencentcloud/batch/v20170312/model/ComputeNode.h>
#include <tencentcloud/batch/v20170312/model/ComputeNodeMetrics.h>
#include <tencentcloud/batch/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeComputeEnv response structure.
                */
                class DescribeComputeEnvResponse : public AbstractModel
                {
                public:
                    DescribeComputeEnvResponse();
                    ~DescribeComputeEnvResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Compute environment ID
                     * @return EnvId Compute environment ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取Compute environment name
                     * @return EnvName Compute environment name
                     * 
                     */
                    std::string GetEnvName() const;

                    /**
                     * 判断参数 EnvName 是否已赋值
                     * @return EnvName 是否已赋值
                     * 
                     */
                    bool EnvNameHasBeenSet() const;

                    /**
                     * 获取Location information
                     * @return Placement Location information
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取Compute environment creation time
                     * @return CreateTime Compute environment creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取List of compute nodes
                     * @return ComputeNodeSet List of compute nodes
                     * 
                     */
                    std::vector<ComputeNode> GetComputeNodeSet() const;

                    /**
                     * 判断参数 ComputeNodeSet 是否已赋值
                     * @return ComputeNodeSet 是否已赋值
                     * 
                     */
                    bool ComputeNodeSetHasBeenSet() const;

                    /**
                     * 获取Compute node statistical metrics
                     * @return ComputeNodeMetrics Compute node statistical metrics
                     * 
                     */
                    ComputeNodeMetrics GetComputeNodeMetrics() const;

                    /**
                     * 判断参数 ComputeNodeMetrics 是否已赋值
                     * @return ComputeNodeMetrics 是否已赋值
                     * 
                     */
                    bool ComputeNodeMetricsHasBeenSet() const;

                    /**
                     * 获取Number of desired compute nodes
                     * @return DesiredComputeNodeCount Number of desired compute nodes
                     * 
                     */
                    uint64_t GetDesiredComputeNodeCount() const;

                    /**
                     * 判断参数 DesiredComputeNodeCount 是否已赋值
                     * @return DesiredComputeNodeCount 是否已赋值
                     * 
                     */
                    bool DesiredComputeNodeCountHasBeenSet() const;

                    /**
                     * 获取Compute environment type
                     * @return EnvType Compute environment type
                     * 
                     */
                    std::string GetEnvType() const;

                    /**
                     * 判断参数 EnvType 是否已赋值
                     * @return EnvType 是否已赋值
                     * 
                     */
                    bool EnvTypeHasBeenSet() const;

                    /**
                     * 获取Compute environment resource type. Values: `CVM`, `CPM` (Bare Metal)
                     * @return ResourceType Compute environment resource type. Values: `CVM`, `CPM` (Bare Metal)
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Next action
                     * @return NextAction Next action
                     * 
                     */
                    std::string GetNextAction() const;

                    /**
                     * 判断参数 NextAction 是否已赋值
                     * @return NextAction 是否已赋值
                     * 
                     */
                    bool NextActionHasBeenSet() const;

                    /**
                     * 获取Number of compute nodes added to the compute environment
                     * @return AttachedComputeNodeCount Number of compute nodes added to the compute environment
                     * 
                     */
                    uint64_t GetAttachedComputeNodeCount() const;

                    /**
                     * 判断参数 AttachedComputeNodeCount 是否已赋值
                     * @return AttachedComputeNodeCount 是否已赋值
                     * 
                     */
                    bool AttachedComputeNodeCountHasBeenSet() const;

                    /**
                     * 获取Tag list bound to the compute environment.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Tags Tag list bound to the compute environment.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Compute environment ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * Compute environment name
                     */
                    std::string m_envName;
                    bool m_envNameHasBeenSet;

                    /**
                     * Location information
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * Compute environment creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * List of compute nodes
                     */
                    std::vector<ComputeNode> m_computeNodeSet;
                    bool m_computeNodeSetHasBeenSet;

                    /**
                     * Compute node statistical metrics
                     */
                    ComputeNodeMetrics m_computeNodeMetrics;
                    bool m_computeNodeMetricsHasBeenSet;

                    /**
                     * Number of desired compute nodes
                     */
                    uint64_t m_desiredComputeNodeCount;
                    bool m_desiredComputeNodeCountHasBeenSet;

                    /**
                     * Compute environment type
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                    /**
                     * Compute environment resource type. Values: `CVM`, `CPM` (Bare Metal)
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Next action
                     */
                    std::string m_nextAction;
                    bool m_nextActionHasBeenSet;

                    /**
                     * Number of compute nodes added to the compute environment
                     */
                    uint64_t m_attachedComputeNodeCount;
                    bool m_attachedComputeNodeCountHasBeenSet;

                    /**
                     * Tag list bound to the compute environment.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVRESPONSE_H_
