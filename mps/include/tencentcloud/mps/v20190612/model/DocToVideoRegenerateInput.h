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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DOCTOVIDEOREGENERATEINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DOCTOVIDEOREGENERATEINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Input information for regenerating an AIGC document-to-video task
                */
                class DocToVideoRegenerateInput : public AbstractModel
                {
                public:
                    DocToVideoRegenerateInput();
                    ~DocToVideoRegenerateInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Regeneration scope.</p><p>Enumeration values:</p><ul><li>full: Full regeneration at this stage (for example, modifying the overall number of scenarios)</li><li>scenes: Partial regeneration by scenario (for example, modifying the specific content of a scenario)</li></ul>
                     * @return Scope <p>Regeneration scope.</p><p>Enumeration values:</p><ul><li>full: Full regeneration at this stage (for example, modifying the overall number of scenarios)</li><li>scenes: Partial regeneration by scenario (for example, modifying the specific content of a scenario)</li></ul>
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置<p>Regeneration scope.</p><p>Enumeration values:</p><ul><li>full: Full regeneration at this stage (for example, modifying the overall number of scenarios)</li><li>scenes: Partial regeneration by scenario (for example, modifying the specific content of a scenario)</li></ul>
                     * @param _scope <p>Regeneration scope.</p><p>Enumeration values:</p><ul><li>full: Full regeneration at this stage (for example, modifying the overall number of scenarios)</li><li>scenes: Partial regeneration by scenario (for example, modifying the specific content of a scenario)</li></ul>
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>Prompt content for regeneration.</p>
                     * @return Prompt <p>Prompt content for regeneration.</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>Prompt content for regeneration.</p>
                     * @param _prompt <p>Prompt content for regeneration.</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取<p>Target page ID array for partial regeneration by page. Required only when Scope=scenes. Not repeatable. Up to 5 pages can be regenerated at a time.</p>
                     * @return SceneIds <p>Target page ID array for partial regeneration by page. Required only when Scope=scenes. Not repeatable. Up to 5 pages can be regenerated at a time.</p>
                     * 
                     */
                    std::vector<std::string> GetSceneIds() const;

                    /**
                     * 设置<p>Target page ID array for partial regeneration by page. Required only when Scope=scenes. Not repeatable. Up to 5 pages can be regenerated at a time.</p>
                     * @param _sceneIds <p>Target page ID array for partial regeneration by page. Required only when Scope=scenes. Not repeatable. Up to 5 pages can be regenerated at a time.</p>
                     * 
                     */
                    void SetSceneIds(const std::vector<std::string>& _sceneIds);

                    /**
                     * 判断参数 SceneIds 是否已赋值
                     * @return SceneIds 是否已赋值
                     * 
                     */
                    bool SceneIdsHasBeenSet() const;

                private:

                    /**
                     * <p>Regeneration scope.</p><p>Enumeration values:</p><ul><li>full: Full regeneration at this stage (for example, modifying the overall number of scenarios)</li><li>scenes: Partial regeneration by scenario (for example, modifying the specific content of a scenario)</li></ul>
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>Prompt content for regeneration.</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>Target page ID array for partial regeneration by page. Required only when Scope=scenes. Not repeatable. Up to 5 pages can be regenerated at a time.</p>
                     */
                    std::vector<std::string> m_sceneIds;
                    bool m_sceneIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DOCTOVIDEOREGENERATEINPUT_H_
