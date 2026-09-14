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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYDOCTOVIDEOTASKSTATUSINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYDOCTOVIDEOTASKSTATUSINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/DocToVideoRegenerateInput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Modify the status input of an AIGC document‑to‑video task
                */
                class ModifyDocToVideoTaskStatusInput : public AbstractModel
                {
                public:
                    ModifyDocToVideoTaskStatusInput();
                    ~ModifyDocToVideoTaskStatusInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Modification action type.</p><p>Enumeration values:</p><ul><li>confirm: Confirm completion of the stage and advance to the next stage</li><li>regenerate: Regenerate the specified stage</li></ul>
                     * @return Action <p>Modification action type.</p><p>Enumeration values:</p><ul><li>confirm: Confirm completion of the stage and advance to the next stage</li><li>regenerate: Regenerate the specified stage</li></ul>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>Modification action type.</p><p>Enumeration values:</p><ul><li>confirm: Confirm completion of the stage and advance to the next stage</li><li>regenerate: Regenerate the specified stage</li></ul>
                     * @param _action <p>Modification action type.</p><p>Enumeration values:</p><ul><li>confirm: Confirm completion of the stage and advance to the next stage</li><li>regenerate: Regenerate the specified stage</li></ul>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>Modify the target stage.</p><p>Enumeration values:</p><ul><li>STAGE_1:<br>When Action=confirm: confirm the outline, continue generating subsequent dubbing, animation effects, and subtitles;<br>When Action=regenerate: regenerate the outline.</li></ul><ul><li>STAGE_2:<br>When Action=confirm: confirm the generated dubbing, animation effects, and subtitles, and generate the final video;<br>When Action=regenerate: regenerate the dubbing, animation effects, and subtitles.</li></ul>
                     * @return Stage <p>Modify the target stage.</p><p>Enumeration values:</p><ul><li>STAGE_1:<br>When Action=confirm: confirm the outline, continue generating subsequent dubbing, animation effects, and subtitles;<br>When Action=regenerate: regenerate the outline.</li></ul><ul><li>STAGE_2:<br>When Action=confirm: confirm the generated dubbing, animation effects, and subtitles, and generate the final video;<br>When Action=regenerate: regenerate the dubbing, animation effects, and subtitles.</li></ul>
                     * 
                     */
                    std::string GetStage() const;

                    /**
                     * 设置<p>Modify the target stage.</p><p>Enumeration values:</p><ul><li>STAGE_1:<br>When Action=confirm: confirm the outline, continue generating subsequent dubbing, animation effects, and subtitles;<br>When Action=regenerate: regenerate the outline.</li></ul><ul><li>STAGE_2:<br>When Action=confirm: confirm the generated dubbing, animation effects, and subtitles, and generate the final video;<br>When Action=regenerate: regenerate the dubbing, animation effects, and subtitles.</li></ul>
                     * @param _stage <p>Modify the target stage.</p><p>Enumeration values:</p><ul><li>STAGE_1:<br>When Action=confirm: confirm the outline, continue generating subsequent dubbing, animation effects, and subtitles;<br>When Action=regenerate: regenerate the outline.</li></ul><ul><li>STAGE_2:<br>When Action=confirm: confirm the generated dubbing, animation effects, and subtitles, and generate the final video;<br>When Action=regenerate: regenerate the dubbing, animation effects, and subtitles.</li></ul>
                     * 
                     */
                    void SetStage(const std::string& _stage);

                    /**
                     * 判断参数 Stage 是否已赋值
                     * @return Stage 是否已赋值
                     * 
                     */
                    bool StageHasBeenSet() const;

                    /**
                     * 获取<p>ID of the target task that needs to be modified.</p>
                     * @return SourceTaskId <p>ID of the target task that needs to be modified.</p>
                     * 
                     */
                    std::string GetSourceTaskId() const;

                    /**
                     * 设置<p>ID of the target task that needs to be modified.</p>
                     * @param _sourceTaskId <p>ID of the target task that needs to be modified.</p>
                     * 
                     */
                    void SetSourceTaskId(const std::string& _sourceTaskId);

                    /**
                     * 判断参数 SourceTaskId 是否已赋值
                     * @return SourceTaskId 是否已赋值
                     * 
                     */
                    bool SourceTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Regenerate the parameter.</p><p>Required only when Action=regenerate.</p>
                     * @return Regenerate <p>Regenerate the parameter.</p><p>Required only when Action=regenerate.</p>
                     * 
                     */
                    DocToVideoRegenerateInput GetRegenerate() const;

                    /**
                     * 设置<p>Regenerate the parameter.</p><p>Required only when Action=regenerate.</p>
                     * @param _regenerate <p>Regenerate the parameter.</p><p>Required only when Action=regenerate.</p>
                     * 
                     */
                    void SetRegenerate(const DocToVideoRegenerateInput& _regenerate);

                    /**
                     * 判断参数 Regenerate 是否已赋值
                     * @return Regenerate 是否已赋值
                     * 
                     */
                    bool RegenerateHasBeenSet() const;

                private:

                    /**
                     * <p>Modification action type.</p><p>Enumeration values:</p><ul><li>confirm: Confirm completion of the stage and advance to the next stage</li><li>regenerate: Regenerate the specified stage</li></ul>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>Modify the target stage.</p><p>Enumeration values:</p><ul><li>STAGE_1:<br>When Action=confirm: confirm the outline, continue generating subsequent dubbing, animation effects, and subtitles;<br>When Action=regenerate: regenerate the outline.</li></ul><ul><li>STAGE_2:<br>When Action=confirm: confirm the generated dubbing, animation effects, and subtitles, and generate the final video;<br>When Action=regenerate: regenerate the dubbing, animation effects, and subtitles.</li></ul>
                     */
                    std::string m_stage;
                    bool m_stageHasBeenSet;

                    /**
                     * <p>ID of the target task that needs to be modified.</p>
                     */
                    std::string m_sourceTaskId;
                    bool m_sourceTaskIdHasBeenSet;

                    /**
                     * <p>Regenerate the parameter.</p><p>Required only when Action=regenerate.</p>
                     */
                    DocToVideoRegenerateInput m_regenerate;
                    bool m_regenerateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYDOCTOVIDEOTASKSTATUSINPUT_H_
