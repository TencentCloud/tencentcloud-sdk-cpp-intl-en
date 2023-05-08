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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_ANONYMOUSCOMPUTEENV_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_ANONYMOUSCOMPUTEENV_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/EnvData.h>
#include <tencentcloud/batch/v20170312/model/MountDataDisk.h>
#include <tencentcloud/batch/v20170312/model/AgentRunningMode.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Compute environment
                */
                class AnonymousComputeEnv : public AbstractModel
                {
                public:
                    AnonymousComputeEnv();
                    ~AnonymousComputeEnv() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Compute environment management type
                     * @return EnvType Compute environment management type
                     */
                    std::string GetEnvType() const;

                    /**
                     * 设置Compute environment management type
                     * @param EnvType Compute environment management type
                     */
                    void SetEnvType(const std::string& _envType);

                    /**
                     * 判断参数 EnvType 是否已赋值
                     * @return EnvType 是否已赋值
                     */
                    bool EnvTypeHasBeenSet() const;

                    /**
                     * 获取Compute environment's parameters
                     * @return EnvData Compute environment's parameters
                     */
                    EnvData GetEnvData() const;

                    /**
                     * 设置Compute environment's parameters
                     * @param EnvData Compute environment's parameters
                     */
                    void SetEnvData(const EnvData& _envData);

                    /**
                     * 判断参数 EnvData 是否已赋值
                     * @return EnvData 是否已赋值
                     */
                    bool EnvDataHasBeenSet() const;

                    /**
                     * 获取Data disk mounting option
                     * @return MountDataDisks Data disk mounting option
                     */
                    std::vector<MountDataDisk> GetMountDataDisks() const;

                    /**
                     * 设置Data disk mounting option
                     * @param MountDataDisks Data disk mounting option
                     */
                    void SetMountDataDisks(const std::vector<MountDataDisk>& _mountDataDisks);

                    /**
                     * 判断参数 MountDataDisks 是否已赋值
                     * @return MountDataDisks 是否已赋值
                     */
                    bool MountDataDisksHasBeenSet() const;

                    /**
                     * 获取Agent running mode; applicable for Windows
                     * @return AgentRunningMode Agent running mode; applicable for Windows
                     */
                    AgentRunningMode GetAgentRunningMode() const;

                    /**
                     * 设置Agent running mode; applicable for Windows
                     * @param AgentRunningMode Agent running mode; applicable for Windows
                     */
                    void SetAgentRunningMode(const AgentRunningMode& _agentRunningMode);

                    /**
                     * 判断参数 AgentRunningMode 是否已赋值
                     * @return AgentRunningMode 是否已赋值
                     */
                    bool AgentRunningModeHasBeenSet() const;

                private:

                    /**
                     * Compute environment management type
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                    /**
                     * Compute environment's parameters
                     */
                    EnvData m_envData;
                    bool m_envDataHasBeenSet;

                    /**
                     * Data disk mounting option
                     */
                    std::vector<MountDataDisk> m_mountDataDisks;
                    bool m_mountDataDisksHasBeenSet;

                    /**
                     * Agent running mode; applicable for Windows
                     */
                    AgentRunningMode m_agentRunningMode;
                    bool m_agentRunningModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_ANONYMOUSCOMPUTEENV_H_
