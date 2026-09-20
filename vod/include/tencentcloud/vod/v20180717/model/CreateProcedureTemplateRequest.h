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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEPROCEDURETEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEPROCEDURETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaProcessTaskInput.h>
#include <tencentcloud/vod/v20180717/model/AiContentReviewTaskInput.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskInput.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskInput.h>
#include <tencentcloud/vod/v20180717/model/ProcedureReviewAudioVideoTaskInput.h>
#include <tencentcloud/vod/v20180717/model/ImportMediaKnowledgeTaskInput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateProcedureTemplate request structure.
                */
                class CreateProcedureTemplateRequest : public AbstractModel
                {
                public:
                    CreateProcedureTemplateRequest();
                    ~CreateProcedureTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Task flow name (supports Chinese, up to 20 characters).</p>
                     * @return Name <p>Task flow name (supports Chinese, up to 20 characters).</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Task flow name (supports Chinese, up to 20 characters).</p>
                     * @param _name <p>Task flow name (supports Chinese, up to 20 characters).</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate VOD services on or after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b></p>
                     * @return SubAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate VOD services on or after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate VOD services on or after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b></p>
                     * @param _subAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate VOD services on or after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Transcoding template description. Length limit: 256 characters.</p>
                     * @return Comment <p>Transcoding template description. Length limit: 256 characters.</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>Transcoding template description. Length limit: 256 characters.</p>
                     * @param _comment <p>Transcoding template description. Length limit: 256 characters.</p>
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取<p>Video processing type task parameters.</p>
                     * @return MediaProcessTask <p>Video processing type task parameters.</p>
                     * 
                     */
                    MediaProcessTaskInput GetMediaProcessTask() const;

                    /**
                     * 设置<p>Video processing type task parameters.</p>
                     * @param _mediaProcessTask <p>Video processing type task parameters.</p>
                     * 
                     */
                    void SetMediaProcessTask(const MediaProcessTaskInput& _mediaProcessTask);

                    /**
                     * 判断参数 MediaProcessTask 是否已赋值
                     * @return MediaProcessTask 是否已赋值
                     * 
                     */
                    bool MediaProcessTaskHasBeenSet() const;

                    /**
                     * 获取<p>AI content review type task parameter *.<br><font color="red">*: This parameter is used to initiate legacy review and is not recommended. It is recommended to use the ReviewAudioVideoTask parameter to initiate review.</font></p>
                     * @return AiContentReviewTask <p>AI content review type task parameter *.<br><font color="red">*: This parameter is used to initiate legacy review and is not recommended. It is recommended to use the ReviewAudioVideoTask parameter to initiate review.</font></p>
                     * 
                     */
                    AiContentReviewTaskInput GetAiContentReviewTask() const;

                    /**
                     * 设置<p>AI content review type task parameter *.<br><font color="red">*: This parameter is used to initiate legacy review and is not recommended. It is recommended to use the ReviewAudioVideoTask parameter to initiate review.</font></p>
                     * @param _aiContentReviewTask <p>AI content review type task parameter *.<br><font color="red">*: This parameter is used to initiate legacy review and is not recommended. It is recommended to use the ReviewAudioVideoTask parameter to initiate review.</font></p>
                     * 
                     */
                    void SetAiContentReviewTask(const AiContentReviewTaskInput& _aiContentReviewTask);

                    /**
                     * 判断参数 AiContentReviewTask 是否已赋值
                     * @return AiContentReviewTask 是否已赋值
                     * 
                     */
                    bool AiContentReviewTaskHasBeenSet() const;

                    /**
                     * 获取<p>Parameters for the AI content analysis task.</p>
                     * @return AiAnalysisTask <p>Parameters for the AI content analysis task.</p>
                     * 
                     */
                    AiAnalysisTaskInput GetAiAnalysisTask() const;

                    /**
                     * 设置<p>Parameters for the AI content analysis task.</p>
                     * @param _aiAnalysisTask <p>Parameters for the AI content analysis task.</p>
                     * 
                     */
                    void SetAiAnalysisTask(const AiAnalysisTaskInput& _aiAnalysisTask);

                    /**
                     * 判断参数 AiAnalysisTask 是否已赋值
                     * @return AiAnalysisTask 是否已赋值
                     * 
                     */
                    bool AiAnalysisTaskHasBeenSet() const;

                    /**
                     * 获取<p>Parameters for the AI content recognition task.</p>
                     * @return AiRecognitionTaskSet <p>Parameters for the AI content recognition task.</p>
                     * 
                     */
                    std::vector<AiRecognitionTaskInput> GetAiRecognitionTaskSet() const;

                    /**
                     * 设置<p>Parameters for the AI content recognition task.</p>
                     * @param _aiRecognitionTaskSet <p>Parameters for the AI content recognition task.</p>
                     * 
                     */
                    void SetAiRecognitionTaskSet(const std::vector<AiRecognitionTaskInput>& _aiRecognitionTaskSet);

                    /**
                     * 判断参数 AiRecognitionTaskSet 是否已赋值
                     * @return AiRecognitionTaskSet 是否已赋值
                     * 
                     */
                    bool AiRecognitionTaskSetHasBeenSet() const;

                    /**
                     * 获取<p>This parameter is not recommended. Use AiRecognitionTaskSet instead.</p>
                     * @return AiRecognitionTask <p>This parameter is not recommended. Use AiRecognitionTaskSet instead.</p>
                     * @deprecated
                     */
                    AiRecognitionTaskInput GetAiRecognitionTask() const;

                    /**
                     * 设置<p>This parameter is not recommended. Use AiRecognitionTaskSet instead.</p>
                     * @param _aiRecognitionTask <p>This parameter is not recommended. Use AiRecognitionTaskSet instead.</p>
                     * @deprecated
                     */
                    void SetAiRecognitionTask(const AiRecognitionTaskInput& _aiRecognitionTask);

                    /**
                     * 判断参数 AiRecognitionTask 是否已赋值
                     * @return AiRecognitionTask 是否已赋值
                     * @deprecated
                     */
                    bool AiRecognitionTaskHasBeenSet() const;

                    /**
                     * 获取<p>Parameters for the audio and video moderation task.</p>
                     * @return ReviewAudioVideoTask <p>Parameters for the audio and video moderation task.</p>
                     * 
                     */
                    ProcedureReviewAudioVideoTaskInput GetReviewAudioVideoTask() const;

                    /**
                     * 设置<p>Parameters for the audio and video moderation task.</p>
                     * @param _reviewAudioVideoTask <p>Parameters for the audio and video moderation task.</p>
                     * 
                     */
                    void SetReviewAudioVideoTask(const ProcedureReviewAudioVideoTaskInput& _reviewAudioVideoTask);

                    /**
                     * 判断参数 ReviewAudioVideoTask 是否已赋值
                     * @return ReviewAudioVideoTask 是否已赋值
                     * 
                     */
                    bool ReviewAudioVideoTaskHasBeenSet() const;

                    /**
                     * 获取<p>Task parameter for importing Intelligent Media Assets knowledge base.</p>
                     * @return ImportMediaKnowledgeTaskSet <p>Task parameter for importing Intelligent Media Assets knowledge base.</p>
                     * 
                     */
                    std::vector<ImportMediaKnowledgeTaskInput> GetImportMediaKnowledgeTaskSet() const;

                    /**
                     * 设置<p>Task parameter for importing Intelligent Media Assets knowledge base.</p>
                     * @param _importMediaKnowledgeTaskSet <p>Task parameter for importing Intelligent Media Assets knowledge base.</p>
                     * 
                     */
                    void SetImportMediaKnowledgeTaskSet(const std::vector<ImportMediaKnowledgeTaskInput>& _importMediaKnowledgeTaskSet);

                    /**
                     * 判断参数 ImportMediaKnowledgeTaskSet 是否已赋值
                     * @return ImportMediaKnowledgeTaskSet 是否已赋值
                     * 
                     */
                    bool ImportMediaKnowledgeTaskSetHasBeenSet() const;

                private:

                    /**
                     * <p>Task flow name (supports Chinese, up to 20 characters).</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate VOD services on or after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Transcoding template description. Length limit: 256 characters.</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>Video processing type task parameters.</p>
                     */
                    MediaProcessTaskInput m_mediaProcessTask;
                    bool m_mediaProcessTaskHasBeenSet;

                    /**
                     * <p>AI content review type task parameter *.<br><font color="red">*: This parameter is used to initiate legacy review and is not recommended. It is recommended to use the ReviewAudioVideoTask parameter to initiate review.</font></p>
                     */
                    AiContentReviewTaskInput m_aiContentReviewTask;
                    bool m_aiContentReviewTaskHasBeenSet;

                    /**
                     * <p>Parameters for the AI content analysis task.</p>
                     */
                    AiAnalysisTaskInput m_aiAnalysisTask;
                    bool m_aiAnalysisTaskHasBeenSet;

                    /**
                     * <p>Parameters for the AI content recognition task.</p>
                     */
                    std::vector<AiRecognitionTaskInput> m_aiRecognitionTaskSet;
                    bool m_aiRecognitionTaskSetHasBeenSet;

                    /**
                     * <p>This parameter is not recommended. Use AiRecognitionTaskSet instead.</p>
                     */
                    AiRecognitionTaskInput m_aiRecognitionTask;
                    bool m_aiRecognitionTaskHasBeenSet;

                    /**
                     * <p>Parameters for the audio and video moderation task.</p>
                     */
                    ProcedureReviewAudioVideoTaskInput m_reviewAudioVideoTask;
                    bool m_reviewAudioVideoTaskHasBeenSet;

                    /**
                     * <p>Task parameter for importing Intelligent Media Assets knowledge base.</p>
                     */
                    std::vector<ImportMediaKnowledgeTaskInput> m_importMediaKnowledgeTaskSet;
                    bool m_importMediaKnowledgeTaskSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEPROCEDURETEMPLATEREQUEST_H_
