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
                * Information of a video splitting task.
                */
                class SplitMediaTaskSegmentInfo : public AbstractModel
                {
                public:
                    SplitMediaTaskSegmentInfo();
                    ~SplitMediaTaskSegmentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input information of a video splitting task.
                     * @return Input Input information of a video splitting task.
                     */
                    SplitMediaTaskInput GetInput() const;

                    /**
                     * 设置Input information of a video splitting task.
                     * @param Input Input information of a video splitting task.
                     */
                    void SetInput(const SplitMediaTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Output information of a video splitting task.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Output Output information of a video splitting task.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    TaskOutputMediaInfo GetOutput() const;

                    /**
                     * 设置Output information of a video splitting task.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Output Output information of a video splitting task.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetOutput(const TaskOutputMediaInfo& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取The task ID for the task type `Procedure`. If a task flow (`ProcedureName`) is specified by [SplitMedia](https://intl.cloud.tencent.com/document/api/266/51098?from_cn_redirect=1), and the task flow includes one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`, the task specified by this parameter will be executed.
                     * @return ProcedureTaskId The task ID for the task type `Procedure`. If a task flow (`ProcedureName`) is specified by [SplitMedia](https://intl.cloud.tencent.com/document/api/266/51098?from_cn_redirect=1), and the task flow includes one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`, the task specified by this parameter will be executed.
                     */
                    std::string GetProcedureTaskId() const;

                    /**
                     * 设置The task ID for the task type `Procedure`. If a task flow (`ProcedureName`) is specified by [SplitMedia](https://intl.cloud.tencent.com/document/api/266/51098?from_cn_redirect=1), and the task flow includes one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`, the task specified by this parameter will be executed.
                     * @param ProcedureTaskId The task ID for the task type `Procedure`. If a task flow (`ProcedureName`) is specified by [SplitMedia](https://intl.cloud.tencent.com/document/api/266/51098?from_cn_redirect=1), and the task flow includes one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`, the task specified by this parameter will be executed.
                     */
                    void SetProcedureTaskId(const std::string& _procedureTaskId);

                    /**
                     * 判断参数 ProcedureTaskId 是否已赋值
                     * @return ProcedureTaskId 是否已赋值
                     */
                    bool ProcedureTaskIdHasBeenSet() const;

                    /**
                     * 获取The task ID for the task type `ReviewAudioVideo`. If a task flow (`ProcedureName`) is specified by [SplitMedia](https://intl.cloud.tencent.com/document/api/266/51098?from_cn_redirect=1), and the task flow includes `ReviewAudioVideoTask`, the task specified by this parameter will be executed.
                     * @return ReviewAudioVideoTaskId The task ID for the task type `ReviewAudioVideo`. If a task flow (`ProcedureName`) is specified by [SplitMedia](https://intl.cloud.tencent.com/document/api/266/51098?from_cn_redirect=1), and the task flow includes `ReviewAudioVideoTask`, the task specified by this parameter will be executed.
                     */
                    std::string GetReviewAudioVideoTaskId() const;

                    /**
                     * 设置The task ID for the task type `ReviewAudioVideo`. If a task flow (`ProcedureName`) is specified by [SplitMedia](https://intl.cloud.tencent.com/document/api/266/51098?from_cn_redirect=1), and the task flow includes `ReviewAudioVideoTask`, the task specified by this parameter will be executed.
                     * @param ReviewAudioVideoTaskId The task ID for the task type `ReviewAudioVideo`. If a task flow (`ProcedureName`) is specified by [SplitMedia](https://intl.cloud.tencent.com/document/api/266/51098?from_cn_redirect=1), and the task flow includes `ReviewAudioVideoTask`, the task specified by this parameter will be executed.
                     */
                    void SetReviewAudioVideoTaskId(const std::string& _reviewAudioVideoTaskId);

                    /**
                     * 判断参数 ReviewAudioVideoTaskId 是否已赋值
                     * @return ReviewAudioVideoTaskId 是否已赋值
                     */
                    bool ReviewAudioVideoTaskIdHasBeenSet() const;

                private:

                    /**
                     * Input information of a video splitting task.
                     */
                    SplitMediaTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Output information of a video splitting task.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    TaskOutputMediaInfo m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * The task ID for the task type `Procedure`. If a task flow (`ProcedureName`) is specified by [SplitMedia](https://intl.cloud.tencent.com/document/api/266/51098?from_cn_redirect=1), and the task flow includes one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`, the task specified by this parameter will be executed.
                     */
                    std::string m_procedureTaskId;
                    bool m_procedureTaskIdHasBeenSet;

                    /**
                     * The task ID for the task type `ReviewAudioVideo`. If a task flow (`ProcedureName`) is specified by [SplitMedia](https://intl.cloud.tencent.com/document/api/266/51098?from_cn_redirect=1), and the task flow includes `ReviewAudioVideoTask`, the task specified by this parameter will be executed.
                     */
                    std::string m_reviewAudioVideoTaskId;
                    bool m_reviewAudioVideoTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SPLITMEDIATASKSEGMENTINFO_H_
