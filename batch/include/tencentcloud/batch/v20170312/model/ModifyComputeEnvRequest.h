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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_MODIFYCOMPUTEENVREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_MODIFYCOMPUTEENVREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/ComputeEnvData.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyComputeEnv request structure.
                */
                class ModifyComputeEnvRequest : public AbstractModel
                {
                public:
                    ModifyComputeEnvRequest();
                    ~ModifyComputeEnvRequest() = default;
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
                     * 获取Number of desired compute nodes
                     * @return DesiredComputeNodeCount Number of desired compute nodes
                     * 
                     */
                    int64_t GetDesiredComputeNodeCount() const;

                    /**
                     * 设置Number of desired compute nodes
                     * @param _desiredComputeNodeCount Number of desired compute nodes
                     * 
                     */
                    void SetDesiredComputeNodeCount(const int64_t& _desiredComputeNodeCount);

                    /**
                     * 判断参数 DesiredComputeNodeCount 是否已赋值
                     * @return DesiredComputeNodeCount 是否已赋值
                     * 
                     */
                    bool DesiredComputeNodeCountHasBeenSet() const;

                    /**
                     * 获取Compute environment name
                     * @return EnvName Compute environment name
                     * 
                     */
                    std::string GetEnvName() const;

                    /**
                     * 设置Compute environment name
                     * @param _envName Compute environment name
                     * 
                     */
                    void SetEnvName(const std::string& _envName);

                    /**
                     * 判断参数 EnvName 是否已赋值
                     * @return EnvName 是否已赋值
                     * 
                     */
                    bool EnvNameHasBeenSet() const;

                    /**
                     * 获取Compute environment description
                     * @return EnvDescription Compute environment description
                     * 
                     */
                    std::string GetEnvDescription() const;

                    /**
                     * 设置Compute environment description
                     * @param _envDescription Compute environment description
                     * 
                     */
                    void SetEnvDescription(const std::string& _envDescription);

                    /**
                     * 判断参数 EnvDescription 是否已赋值
                     * @return EnvDescription 是否已赋值
                     * 
                     */
                    bool EnvDescriptionHasBeenSet() const;

                    /**
                     * 获取Compute environment attributes
                     * @return EnvData Compute environment attributes
                     * 
                     */
                    ComputeEnvData GetEnvData() const;

                    /**
                     * 设置Compute environment attributes
                     * @param _envData Compute environment attributes
                     * 
                     */
                    void SetEnvData(const ComputeEnvData& _envData);

                    /**
                     * 判断参数 EnvData 是否已赋值
                     * @return EnvData 是否已赋值
                     * 
                     */
                    bool EnvDataHasBeenSet() const;

                private:

                    /**
                     * Compute environment ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * Number of desired compute nodes
                     */
                    int64_t m_desiredComputeNodeCount;
                    bool m_desiredComputeNodeCountHasBeenSet;

                    /**
                     * Compute environment name
                     */
                    std::string m_envName;
                    bool m_envNameHasBeenSet;

                    /**
                     * Compute environment description
                     */
                    std::string m_envDescription;
                    bool m_envDescriptionHasBeenSet;

                    /**
                     * Compute environment attributes
                     */
                    ComputeEnvData m_envData;
                    bool m_envDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_MODIFYCOMPUTEENVREQUEST_H_
