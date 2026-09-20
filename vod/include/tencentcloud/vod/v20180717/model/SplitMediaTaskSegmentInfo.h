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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SPLITMEDIATASKSEGMENTINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SPLITMEDIATASKSEGMENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SplitMediaTaskInput.h>
#include <tencentcloud/vod/v20180717/model/TaskOutputMediaInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Video splitting task information.
                */
                class SplitMediaTaskSegmentInfo : public AbstractModel
                {
                public:
                    SplitMediaTaskSegmentInfo();
                    ~SplitMediaTaskSegmentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input information of the video splitting task.
                     * @return Input Input information of the video splitting task.
                     * 
                     */
                    SplitMediaTaskInput GetInput() const;

                    /**
                     * 设置Input information of the video splitting task.
                     * @param _input Input information of the video splitting task.
                     * 
                     */
                    void SetInput(const SplitMediaTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Output information of the video splitting task.
                     * @return Output Output information of the video splitting task.
                     * 
                     */
                    TaskOutputMediaInfo GetOutput() const;

                    /**
                     * 设置Output information of the video splitting task.
                     * @param _output Output information of the video splitting task.
                     * 
                     */
                    void SetOutput(const TaskOutputMediaInfo& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取Task ID of the `Procedure` task type. If a task flow template (`ProcedureName`) is specified in the video split task information list when initiating a video splitting task (https://www.tencentcloud.com/document/api/266/51098?from_cn_redirect=1), the task is initiated when the task flow template specifies one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`.
                     * @return ProcedureTaskId Task ID of the `Procedure` task type. If a task flow template (`ProcedureName`) is specified in the video split task information list when initiating a video splitting task (https://www.tencentcloud.com/document/api/266/51098?from_cn_redirect=1), the task is initiated when the task flow template specifies one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`.
                     * 
                     */
                    std::string GetProcedureTaskId() const;

                    /**
                     * 设置Task ID of the `Procedure` task type. If a task flow template (`ProcedureName`) is specified in the video split task information list when initiating a video splitting task (https://www.tencentcloud.com/document/api/266/51098?from_cn_redirect=1), the task is initiated when the task flow template specifies one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`.
                     * @param _procedureTaskId Task ID of the `Procedure` task type. If a task flow template (`ProcedureName`) is specified in the video split task information list when initiating a video splitting task (https://www.tencentcloud.com/document/api/266/51098?from_cn_redirect=1), the task is initiated when the task flow template specifies one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`.
                     * 
                     */
                    void SetProcedureTaskId(const std::string& _procedureTaskId);

                    /**
                     * 判断参数 ProcedureTaskId 是否已赋值
                     * @return ProcedureTaskId 是否已赋值
                     * 
                     */
                    bool ProcedureTaskIdHasBeenSet() const;

                    /**
                     * 获取Task ID of the `ReviewAudioVideo` type. If a task flow template (`ProcedureName`) is specified in the video split task information list when initiating a [video splitting](https://www.tencentcloud.com/document/api/266/51098?from_cn_redirect=1) task, the task is triggered when `ReviewAudioVideoTask` is specified in the task flow template.
                     * @return ReviewAudioVideoTaskId Task ID of the `ReviewAudioVideo` type. If a task flow template (`ProcedureName`) is specified in the video split task information list when initiating a [video splitting](https://www.tencentcloud.com/document/api/266/51098?from_cn_redirect=1) task, the task is triggered when `ReviewAudioVideoTask` is specified in the task flow template.
                     * 
                     */
                    std::string GetReviewAudioVideoTaskId() const;

                    /**
                     * 设置Task ID of the `ReviewAudioVideo` type. If a task flow template (`ProcedureName`) is specified in the video split task information list when initiating a [video splitting](https://www.tencentcloud.com/document/api/266/51098?from_cn_redirect=1) task, the task is triggered when `ReviewAudioVideoTask` is specified in the task flow template.
                     * @param _reviewAudioVideoTaskId Task ID of the `ReviewAudioVideo` type. If a task flow template (`ProcedureName`) is specified in the video split task information list when initiating a [video splitting](https://www.tencentcloud.com/document/api/266/51098?from_cn_redirect=1) task, the task is triggered when `ReviewAudioVideoTask` is specified in the task flow template.
                     * 
                     */
                    void SetReviewAudioVideoTaskId(const std::string& _reviewAudioVideoTaskId);

                    /**
                     * 判断参数 ReviewAudioVideoTaskId 是否已赋值
                     * @return ReviewAudioVideoTaskId 是否已赋值
                     * 
                     */
                    bool ReviewAudioVideoTaskIdHasBeenSet() const;

                private:

                    /**
                     * Input information of the video splitting task.
                     */
                    SplitMediaTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Output information of the video splitting task.
                     */
                    TaskOutputMediaInfo m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Task ID of the `Procedure` task type. If a task flow template (`ProcedureName`) is specified in the video split task information list when initiating a video splitting task (https://www.tencentcloud.com/document/api/266/51098?from_cn_redirect=1), the task is initiated when the task flow template specifies one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`.
                     */
                    std::string m_procedureTaskId;
                    bool m_procedureTaskIdHasBeenSet;

                    /**
                     * Task ID of the `ReviewAudioVideo` type. If a task flow template (`ProcedureName`) is specified in the video split task information list when initiating a [video splitting](https://www.tencentcloud.com/document/api/266/51098?from_cn_redirect=1) task, the task is triggered when `ReviewAudioVideoTask` is specified in the task flow template.
                     */
                    std::string m_reviewAudioVideoTaskId;
                    bool m_reviewAudioVideoTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SPLITMEDIATASKSEGMENTINFO_H_
