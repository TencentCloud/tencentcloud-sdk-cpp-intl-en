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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTEENVVIEW_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTEENVVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Placement.h>
#include <tencentcloud/batch/v20170312/model/ComputeNodeMetrics.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Compute environment information
                */
                class ComputeEnvView : public AbstractModel
                {
                public:
                    ComputeEnvView();
                    ~ComputeEnvView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Compute environment ID
                     * @return EnvId Compute environment ID
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置Compute environment ID
                     * @param EnvId Compute environment ID
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取Compute environment name
                     * @return EnvName Compute environment name
                     */
                    std::string GetEnvName() const;

                    /**
                     * 设置Compute environment name
                     * @param EnvName Compute environment name
                     */
                    void SetEnvName(const std::string& _envName);

                    /**
                     * 判断参数 EnvName 是否已赋值
                     * @return EnvName 是否已赋值
                     */
                    bool EnvNameHasBeenSet() const;

                    /**
                     * 获取Location information
                     * @return Placement Location information
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置Location information
                     * @param Placement Location information
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param CreateTime Creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Compute node statistical metrics
                     * @return ComputeNodeMetrics Compute node statistical metrics
                     */
                    ComputeNodeMetrics GetComputeNodeMetrics() const;

                    /**
                     * 设置Compute node statistical metrics
                     * @param ComputeNodeMetrics Compute node statistical metrics
                     */
                    void SetComputeNodeMetrics(const ComputeNodeMetrics& _computeNodeMetrics);

                    /**
                     * 判断参数 ComputeNodeMetrics 是否已赋值
                     * @return ComputeNodeMetrics 是否已赋值
                     */
                    bool ComputeNodeMetricsHasBeenSet() const;

                    /**
                     * 获取Compute environment type
                     * @return EnvType Compute environment type
                     */
                    std::string GetEnvType() const;

                    /**
                     * 设置Compute environment type
                     * @param EnvType Compute environment type
                     */
                    void SetEnvType(const std::string& _envType);

                    /**
                     * 判断参数 EnvType 是否已赋值
                     * @return EnvType 是否已赋值
                     */
                    bool EnvTypeHasBeenSet() const;

                    /**
                     * 获取Number of desired compute nodes
                     * @return DesiredComputeNodeCount Number of desired compute nodes
                     */
                    uint64_t GetDesiredComputeNodeCount() const;

                    /**
                     * 设置Number of desired compute nodes
                     * @param DesiredComputeNodeCount Number of desired compute nodes
                     */
                    void SetDesiredComputeNodeCount(const uint64_t& _desiredComputeNodeCount);

                    /**
                     * 判断参数 DesiredComputeNodeCount 是否已赋值
                     * @return DesiredComputeNodeCount 是否已赋值
                     */
                    bool DesiredComputeNodeCountHasBeenSet() const;

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
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Compute node statistical metrics
                     */
                    ComputeNodeMetrics m_computeNodeMetrics;
                    bool m_computeNodeMetricsHasBeenSet;

                    /**
                     * Compute environment type
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                    /**
                     * Number of desired compute nodes
                     */
                    uint64_t m_desiredComputeNodeCount;
                    bool m_desiredComputeNodeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTEENVVIEW_H_
