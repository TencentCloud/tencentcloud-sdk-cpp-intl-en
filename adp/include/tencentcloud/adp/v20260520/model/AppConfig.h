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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppExperienceConfig.h>
#include <tencentcloud/adp/v20260520/model/AppGreetingConfig.h>
#include <tencentcloud/adp/v20260520/model/AppMemoryConfig.h>
#include <tencentcloud/adp/v20260520/model/AppModeConfig.h>
#include <tencentcloud/adp/v20260520/model/AppModelConfig.h>
#include <tencentcloud/adp/v20260520/model/AppWebSearchConfig.h>
#include <tencentcloud/adp/v20260520/model/AppWorkflowConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * App configuration - All user-modifiable configurations
                */
                class AppConfig : public AbstractModel
                {
                public:
                    AppConfig();
                    ~AppConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Trial configuration
                     * @return Experience Trial configuration
                     * 
                     */
                    AppExperienceConfig GetExperience() const;

                    /**
                     * 设置Trial configuration
                     * @param _experience Trial configuration
                     * 
                     */
                    void SetExperience(const AppExperienceConfig& _experience);

                    /**
                     * 判断参数 Experience 是否已赋值
                     * @return Experience 是否已赋值
                     * 
                     */
                    bool ExperienceHasBeenSet() const;

                    /**
                     * 获取Welcome message configuration
                     * @return Greeting Welcome message configuration
                     * 
                     */
                    AppGreetingConfig GetGreeting() const;

                    /**
                     * 设置Welcome message configuration
                     * @param _greeting Welcome message configuration
                     * 
                     */
                    void SetGreeting(const AppGreetingConfig& _greeting);

                    /**
                     * 判断参数 Greeting 是否已赋值
                     * @return Greeting 是否已赋值
                     * 
                     */
                    bool GreetingHasBeenSet() const;

                    /**
                     * 获取Memory configuration
                     * @return Memory Memory configuration
                     * 
                     */
                    AppMemoryConfig GetMemory() const;

                    /**
                     * 设置Memory configuration
                     * @param _memory Memory configuration
                     * 
                     */
                    void SetMemory(const AppMemoryConfig& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Mode-related configuration
                     * @return Mode Mode-related configuration
                     * 
                     */
                    AppModeConfig GetMode() const;

                    /**
                     * 设置Mode-related configuration
                     * @param _mode Mode-related configuration
                     * 
                     */
                    void SetMode(const AppModeConfig& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Model configuration
                     * @return Model Model configuration
                     * 
                     */
                    AppModelConfig GetModel() const;

                    /**
                     * 设置Model configuration
                     * @param _model Model configuration
                     * 
                     */
                    void SetModel(const AppModelConfig& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取Online search configuration
                     * @return WebSearch Online search configuration
                     * 
                     */
                    AppWebSearchConfig GetWebSearch() const;

                    /**
                     * 设置Online search configuration
                     * @param _webSearch Online search configuration
                     * 
                     */
                    void SetWebSearch(const AppWebSearchConfig& _webSearch);

                    /**
                     * 判断参数 WebSearch 是否已赋值
                     * @return WebSearch 是否已赋值
                     * 
                     */
                    bool WebSearchHasBeenSet() const;

                    /**
                     * 获取Workflow configuration
                     * @return Workflow Workflow configuration
                     * 
                     */
                    AppWorkflowConfig GetWorkflow() const;

                    /**
                     * 设置Workflow configuration
                     * @param _workflow Workflow configuration
                     * 
                     */
                    void SetWorkflow(const AppWorkflowConfig& _workflow);

                    /**
                     * 判断参数 Workflow 是否已赋值
                     * @return Workflow 是否已赋值
                     * 
                     */
                    bool WorkflowHasBeenSet() const;

                private:

                    /**
                     * Trial configuration
                     */
                    AppExperienceConfig m_experience;
                    bool m_experienceHasBeenSet;

                    /**
                     * Welcome message configuration
                     */
                    AppGreetingConfig m_greeting;
                    bool m_greetingHasBeenSet;

                    /**
                     * Memory configuration
                     */
                    AppMemoryConfig m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Mode-related configuration
                     */
                    AppModeConfig m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Model configuration
                     */
                    AppModelConfig m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * Online search configuration
                     */
                    AppWebSearchConfig m_webSearch;
                    bool m_webSearchHasBeenSet;

                    /**
                     * Workflow configuration
                     */
                    AppWorkflowConfig m_workflow;
                    bool m_workflowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPCONFIG_H_
