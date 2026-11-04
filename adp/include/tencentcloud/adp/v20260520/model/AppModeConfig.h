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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPMODECONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPMODECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/MultiAgentConfig.h>
#include <tencentcloud/adp/v20260520/model/SingleWorkflowConfig.h>
#include <tencentcloud/adp/v20260520/model/ClawAgentConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Mode configuration - Contains unique configurations for different modes
                */
                class AppModeConfig : public AbstractModel
                {
                public:
                    AppModeConfig();
                    ~AppModeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Multi-agent configuration (Agent mode)
                     * @return MultiAgentConfig Multi-agent configuration (Agent mode)
                     * 
                     */
                    MultiAgentConfig GetMultiAgentConfig() const;

                    /**
                     * 设置Multi-agent configuration (Agent mode)
                     * @param _multiAgentConfig Multi-agent configuration (Agent mode)
                     * 
                     */
                    void SetMultiAgentConfig(const MultiAgentConfig& _multiAgentConfig);

                    /**
                     * 判断参数 MultiAgentConfig 是否已赋值
                     * @return MultiAgentConfig 是否已赋值
                     * 
                     */
                    bool MultiAgentConfigHasBeenSet() const;

                    /**
                     * 获取Single workflow configuration (single workflow mode)
                     * @return SingleWorkflowConfig Single workflow configuration (single workflow mode)
                     * 
                     */
                    SingleWorkflowConfig GetSingleWorkflowConfig() const;

                    /**
                     * 设置Single workflow configuration (single workflow mode)
                     * @param _singleWorkflowConfig Single workflow configuration (single workflow mode)
                     * 
                     */
                    void SetSingleWorkflowConfig(const SingleWorkflowConfig& _singleWorkflowConfig);

                    /**
                     * 判断参数 SingleWorkflowConfig 是否已赋值
                     * @return SingleWorkflowConfig 是否已赋值
                     * 
                     */
                    bool SingleWorkflowConfigHasBeenSet() const;

                    /**
                     * 获取ClawAgent Configuration (ClawAgent mode)
                     * @return ClawAgentConfig ClawAgent Configuration (ClawAgent mode)
                     * 
                     */
                    ClawAgentConfig GetClawAgentConfig() const;

                    /**
                     * 设置ClawAgent Configuration (ClawAgent mode)
                     * @param _clawAgentConfig ClawAgent Configuration (ClawAgent mode)
                     * 
                     */
                    void SetClawAgentConfig(const ClawAgentConfig& _clawAgentConfig);

                    /**
                     * 判断参数 ClawAgentConfig 是否已赋值
                     * @return ClawAgentConfig 是否已赋值
                     * 
                     */
                    bool ClawAgentConfigHasBeenSet() const;

                private:

                    /**
                     * Multi-agent configuration (Agent mode)
                     */
                    MultiAgentConfig m_multiAgentConfig;
                    bool m_multiAgentConfigHasBeenSet;

                    /**
                     * Single workflow configuration (single workflow mode)
                     */
                    SingleWorkflowConfig m_singleWorkflowConfig;
                    bool m_singleWorkflowConfigHasBeenSet;

                    /**
                     * ClawAgent Configuration (ClawAgent mode)
                     */
                    ClawAgentConfig m_clawAgentConfig;
                    bool m_clawAgentConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPMODECONFIG_H_
