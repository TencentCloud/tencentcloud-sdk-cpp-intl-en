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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_TERMINATECOMPUTENODEREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_TERMINATECOMPUTENODEREQUEST_H_

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
                * TerminateComputeNode request structure.
                */
                class TerminateComputeNodeRequest : public AbstractModel
                {
                public:
                    TerminateComputeNodeRequest();
                    ~TerminateComputeNodeRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Compute node ID
                     * @return ComputeNodeId Compute node ID
                     */
                    std::string GetComputeNodeId() const;

                    /**
                     * 设置Compute node ID
                     * @param ComputeNodeId Compute node ID
                     */
                    void SetComputeNodeId(const std::string& _computeNodeId);

                    /**
                     * 判断参数 ComputeNodeId 是否已赋值
                     * @return ComputeNodeId 是否已赋值
                     */
                    bool ComputeNodeIdHasBeenSet() const;

                private:

                    /**
                     * Compute environment ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * Compute node ID
                     */
                    std::string m_computeNodeId;
                    bool m_computeNodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_TERMINATECOMPUTENODEREQUEST_H_
