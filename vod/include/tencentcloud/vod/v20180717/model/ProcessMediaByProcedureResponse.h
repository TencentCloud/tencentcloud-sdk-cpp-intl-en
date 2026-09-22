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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIABYPROCEDURERESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIABYPROCEDURERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ProcessMediaByProcedure response structure.
                */
                class ProcessMediaByProcedureResponse : public AbstractModel
                {
                public:
                    ProcessMediaByProcedureResponse();
                    ~ProcessMediaByProcedureResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Task ID of the task type Procedure. The task is initiated when the task flow template specified by the input parameter ProcedureName includes one or more of MediaProcessTask, AiAnalysisTask, and AiRecognitionTask.</p>
                     * @return TaskId <p>Task ID of the task type Procedure. The task is initiated when the task flow template specified by the input parameter ProcedureName includes one or more of MediaProcessTask, AiAnalysisTask, and AiRecognitionTask.</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Task ID of the task type ReviewAudioVideo. This task is initiated when the task flow template specified by the input parameter ProcedureName includes ReviewAudioVideoTask.</p>
                     * @return ReviewAudioVideoTaskId <p>Task ID of the task type ReviewAudioVideo. This task is initiated when the task flow template specified by the input parameter ProcedureName includes ReviewAudioVideoTask.</p>
                     * 
                     */
                    std::string GetReviewAudioVideoTaskId() const;

                    /**
                     * 判断参数 ReviewAudioVideoTaskId 是否已赋值
                     * @return ReviewAudioVideoTaskId 是否已赋值
                     * 
                     */
                    bool ReviewAudioVideoTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Task ID of the ImportMediaKnowledge task type. This task is initiated when the task flow template specified by the input parameter ProcedureName includes ImportMediaKnowledgeTaskSet.</p>
                     * @return ImportMediaKnowledgeTaskIdSet <p>Task ID of the ImportMediaKnowledge task type. This task is initiated when the task flow template specified by the input parameter ProcedureName includes ImportMediaKnowledgeTaskSet.</p>
                     * 
                     */
                    std::vector<std::string> GetImportMediaKnowledgeTaskIdSet() const;

                    /**
                     * 判断参数 ImportMediaKnowledgeTaskIdSet 是否已赋值
                     * @return ImportMediaKnowledgeTaskIdSet 是否已赋值
                     * 
                     */
                    bool ImportMediaKnowledgeTaskIdSetHasBeenSet() const;

                private:

                    /**
                     * <p>Task ID of the task type Procedure. The task is initiated when the task flow template specified by the input parameter ProcedureName includes one or more of MediaProcessTask, AiAnalysisTask, and AiRecognitionTask.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Task ID of the task type ReviewAudioVideo. This task is initiated when the task flow template specified by the input parameter ProcedureName includes ReviewAudioVideoTask.</p>
                     */
                    std::string m_reviewAudioVideoTaskId;
                    bool m_reviewAudioVideoTaskIdHasBeenSet;

                    /**
                     * <p>Task ID of the ImportMediaKnowledge task type. This task is initiated when the task flow template specified by the input parameter ProcedureName includes ImportMediaKnowledgeTaskSet.</p>
                     */
                    std::vector<std::string> m_importMediaKnowledgeTaskIdSet;
                    bool m_importMediaKnowledgeTaskIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIABYPROCEDURERESPONSE_H_
