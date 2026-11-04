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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPMEMORYCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPMEMORYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ModelDetailInfo.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Memory configuration
                */
                class AppMemoryConfig : public AbstractModel
                {
                public:
                    AppMemoryConfig();
                    ~AppMemoryConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable long-term memory
                     * @return Enabled Whether to enable long-term memory
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether to enable long-term memory
                     * @param _enabled Whether to enable long-term memory
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Long memory duration
                     * @return LongMemoryDay Long memory duration
                     * 
                     */
                    uint64_t GetLongMemoryDay() const;

                    /**
                     * 设置Long memory duration
                     * @param _longMemoryDay Long memory duration
                     * 
                     */
                    void SetLongMemoryDay(const uint64_t& _longMemoryDay);

                    /**
                     * 判断参数 LongMemoryDay 是否已赋值
                     * @return LongMemoryDay 是否已赋值
                     * 
                     */
                    bool LongMemoryDayHasBeenSet() const;

                    /**
                     * 获取Model configuration
                     * @return Model Model configuration
                     * 
                     */
                    ModelDetailInfo GetModel() const;

                    /**
                     * 设置Model configuration
                     * @param _model Model configuration
                     * 
                     */
                    void SetModel(const ModelDetailInfo& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取prompt content
                     * @return PromptContent prompt content
                     * 
                     */
                    std::string GetPromptContent() const;

                    /**
                     * 设置prompt content
                     * @param _promptContent prompt content
                     * 
                     */
                    void SetPromptContent(const std::string& _promptContent);

                    /**
                     * 判断参数 PromptContent 是否已赋值
                     * @return PromptContent 是否已赋值
                     * 
                     */
                    bool PromptContentHasBeenSet() const;

                    /**
                     * 获取Prompt word mode. Enumeration value: 1: custom
                     * @return PromptMode Prompt word mode. Enumeration value: 1: custom
                     * 
                     */
                    int64_t GetPromptMode() const;

                    /**
                     * 设置Prompt word mode. Enumeration value: 1: custom
                     * @param _promptMode Prompt word mode. Enumeration value: 1: custom
                     * 
                     */
                    void SetPromptMode(const int64_t& _promptMode);

                    /**
                     * 判断参数 PromptMode 是否已赋值
                     * @return PromptMode 是否已赋值
                     * 
                     */
                    bool PromptModeHasBeenSet() const;

                private:

                    /**
                     * Whether to enable long-term memory
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Long memory duration
                     */
                    uint64_t m_longMemoryDay;
                    bool m_longMemoryDayHasBeenSet;

                    /**
                     * Model configuration
                     */
                    ModelDetailInfo m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * prompt content
                     */
                    std::string m_promptContent;
                    bool m_promptContentHasBeenSet;

                    /**
                     * Prompt word mode. Enumeration value: 1: custom
                     */
                    int64_t m_promptMode;
                    bool m_promptModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPMEMORYCONFIG_H_
