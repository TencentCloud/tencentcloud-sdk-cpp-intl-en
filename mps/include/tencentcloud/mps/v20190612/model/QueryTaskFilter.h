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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_QUERYTASKFILTER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_QUERYTASKFILTER_H_

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
                * List filter criteria for querying AIGC tasks
                */
                class QueryTaskFilter : public AbstractModel
                {
                public:
                    QueryTaskFilter();
                    ~QueryTaskFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Task ID.</p>
                     * @return TaskId <p>Task ID.</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>Task ID.</p>
                     * @param _taskId <p>Task ID.</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Task type</p><p>Enumeration values:</p><ul><li>RedrawVideo: Video redraw</li><li>AIDrama: AI drama</li><li>DocGenVideo: Document to video</li><li>FissionVideo: Video fission</li></ul>
                     * @return TaskType <p>Task type</p><p>Enumeration values:</p><ul><li>RedrawVideo: Video redraw</li><li>AIDrama: AI drama</li><li>DocGenVideo: Document to video</li><li>FissionVideo: Video fission</li></ul>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>Task type</p><p>Enumeration values:</p><ul><li>RedrawVideo: Video redraw</li><li>AIDrama: AI drama</li><li>DocGenVideo: Document to video</li><li>FissionVideo: Video fission</li></ul>
                     * @param _taskType <p>Task type</p><p>Enumeration values:</p><ul><li>RedrawVideo: Video redraw</li><li>AIDrama: AI drama</li><li>DocGenVideo: Document to video</li><li>FissionVideo: Video fission</li></ul>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>Task status.</p>
                     * @return TaskStatus <p>Task status.</p>
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置<p>Task status.</p>
                     * @param _taskStatus <p>Task status.</p>
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取<p>Resolution</p>
                     * @return Resolution <p>Resolution</p>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>Resolution</p>
                     * @param _resolution <p>Resolution</p>
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取<p>Aspect ratio.</p>
                     * @return Ratio <p>Aspect ratio.</p>
                     * 
                     */
                    std::string GetRatio() const;

                    /**
                     * 设置<p>Aspect ratio.</p>
                     * @param _ratio <p>Aspect ratio.</p>
                     * 
                     */
                    void SetRatio(const std::string& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                    /**
                     * 获取<p>Task execution mode</p><p>Enumeration values:</p><ul><li>auto: Direct generation</li><li>phased: Generate after confirmation</li></ul>
                     * @return ExecuteMode <p>Task execution mode</p><p>Enumeration values:</p><ul><li>auto: Direct generation</li><li>phased: Generate after confirmation</li></ul>
                     * 
                     */
                    std::string GetExecuteMode() const;

                    /**
                     * 设置<p>Task execution mode</p><p>Enumeration values:</p><ul><li>auto: Direct generation</li><li>phased: Generate after confirmation</li></ul>
                     * @param _executeMode <p>Task execution mode</p><p>Enumeration values:</p><ul><li>auto: Direct generation</li><li>phased: Generate after confirmation</li></ul>
                     * 
                     */
                    void SetExecuteMode(const std::string& _executeMode);

                    /**
                     * 判断参数 ExecuteMode 是否已赋值
                     * @return ExecuteMode 是否已赋值
                     * 
                     */
                    bool ExecuteModeHasBeenSet() const;

                    /**
                     * 获取<p>Fission task video type filter: ugc, talk, display, unboxing, reaction</p><p>Enumeration values:</p><ul><li>ugc: UGC recommendation</li><li>talk: Product talk-over</li><li>display: Product display</li><li>unboxing: Unboxing sharing</li><li>reaction: Reaction display</li></ul>
                     * @return VideoType <p>Fission task video type filter: ugc, talk, display, unboxing, reaction</p><p>Enumeration values:</p><ul><li>ugc: UGC recommendation</li><li>talk: Product talk-over</li><li>display: Product display</li><li>unboxing: Unboxing sharing</li><li>reaction: Reaction display</li></ul>
                     * 
                     */
                    std::string GetVideoType() const;

                    /**
                     * 设置<p>Fission task video type filter: ugc, talk, display, unboxing, reaction</p><p>Enumeration values:</p><ul><li>ugc: UGC recommendation</li><li>talk: Product talk-over</li><li>display: Product display</li><li>unboxing: Unboxing sharing</li><li>reaction: Reaction display</li></ul>
                     * @param _videoType <p>Fission task video type filter: ugc, talk, display, unboxing, reaction</p><p>Enumeration values:</p><ul><li>ugc: UGC recommendation</li><li>talk: Product talk-over</li><li>display: Product display</li><li>unboxing: Unboxing sharing</li><li>reaction: Reaction display</li></ul>
                     * 
                     */
                    void SetVideoType(const std::string& _videoType);

                    /**
                     * 判断参数 VideoType 是否已赋值
                     * @return VideoType 是否已赋值
                     * 
                     */
                    bool VideoTypeHasBeenSet() const;

                    /**
                     * 获取<p>Model type</p><p>Enumeration values:</p><ul><li>standard: standard version</li><li>flagship: advanced edition</li></ul>
                     * @return ModelTier <p>Model type</p><p>Enumeration values:</p><ul><li>standard: standard version</li><li>flagship: advanced edition</li></ul>
                     * 
                     */
                    std::string GetModelTier() const;

                    /**
                     * 设置<p>Model type</p><p>Enumeration values:</p><ul><li>standard: standard version</li><li>flagship: advanced edition</li></ul>
                     * @param _modelTier <p>Model type</p><p>Enumeration values:</p><ul><li>standard: standard version</li><li>flagship: advanced edition</li></ul>
                     * 
                     */
                    void SetModelTier(const std::string& _modelTier);

                    /**
                     * 判断参数 ModelTier 是否已赋值
                     * @return ModelTier 是否已赋值
                     * 
                     */
                    bool ModelTierHasBeenSet() const;

                private:

                    /**
                     * <p>Task ID.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Task type</p><p>Enumeration values:</p><ul><li>RedrawVideo: Video redraw</li><li>AIDrama: AI drama</li><li>DocGenVideo: Document to video</li><li>FissionVideo: Video fission</li></ul>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>Task status.</p>
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * <p>Resolution</p>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * <p>Aspect ratio.</p>
                     */
                    std::string m_ratio;
                    bool m_ratioHasBeenSet;

                    /**
                     * <p>Task execution mode</p><p>Enumeration values:</p><ul><li>auto: Direct generation</li><li>phased: Generate after confirmation</li></ul>
                     */
                    std::string m_executeMode;
                    bool m_executeModeHasBeenSet;

                    /**
                     * <p>Fission task video type filter: ugc, talk, display, unboxing, reaction</p><p>Enumeration values:</p><ul><li>ugc: UGC recommendation</li><li>talk: Product talk-over</li><li>display: Product display</li><li>unboxing: Unboxing sharing</li><li>reaction: Reaction display</li></ul>
                     */
                    std::string m_videoType;
                    bool m_videoTypeHasBeenSet;

                    /**
                     * <p>Model type</p><p>Enumeration values:</p><ul><li>standard: standard version</li><li>flagship: advanced edition</li></ul>
                     */
                    std::string m_modelTier;
                    bool m_modelTierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_QUERYTASKFILTER_H_
