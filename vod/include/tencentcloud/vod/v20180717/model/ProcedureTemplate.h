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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCEDURETEMPLATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCEDURETEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaProcessTaskInput.h>
#include <tencentcloud/vod/v20180717/model/AiContentReviewTaskInput.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskInput.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskInput.h>
#include <tencentcloud/vod/v20180717/model/WechatMiniProgramPublishTaskInput.h>
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
                * Task flow template details
                */
                class ProcedureTemplate : public AbstractModel
                {
                public:
                    ProcedureTemplate();
                    ~ProcedureTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Task flow name.</p>
                     * @return Name <p>Task flow name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Task flow name.</p>
                     * @param _name <p>Task flow name.</p>
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
                     * 获取<p>Task flow template type. Valid values:</p><li>Preset: system preset task flow template.</li><li>Custom: user-defined task flow template.</li>
                     * @return Type <p>Task flow template type. Valid values:</p><li>Preset: system preset task flow template.</li><li>Custom: user-defined task flow template.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Task flow template type. Valid values:</p><li>Preset: system preset task flow template.</li><li>Custom: user-defined task flow template.</li>
                     * @param _type <p>Task flow template type. Valid values:</p><li>Preset: system preset task flow template.</li><li>Custom: user-defined task flow template.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

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
                     * 获取<p>AI moderation type task parameter *.<br><font color="red">*: This parameter is used to initiate legacy review and is not recommended. It is recommended to use the ReviewAudioVideoTask parameter to initiate review.</font></p>
                     * @return AiContentReviewTask <p>AI moderation type task parameter *.<br><font color="red">*: This parameter is used to initiate legacy review and is not recommended. It is recommended to use the ReviewAudioVideoTask parameter to initiate review.</font></p>
                     * 
                     */
                    AiContentReviewTaskInput GetAiContentReviewTask() const;

                    /**
                     * 设置<p>AI moderation type task parameter *.<br><font color="red">*: This parameter is used to initiate legacy review and is not recommended. It is recommended to use the ReviewAudioVideoTask parameter to initiate review.</font></p>
                     * @param _aiContentReviewTask <p>AI moderation type task parameter *.<br><font color="red">*: This parameter is used to initiate legacy review and is not recommended. It is recommended to use the ReviewAudioVideoTask parameter to initiate review.</font></p>
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
                     * 获取<p>Parameters for the AI intelligent content analysis task.</p>
                     * @return AiAnalysisTask <p>Parameters for the AI intelligent content analysis task.</p>
                     * 
                     */
                    AiAnalysisTaskInput GetAiAnalysisTask() const;

                    /**
                     * 设置<p>Parameters for the AI intelligent content analysis task.</p>
                     * @param _aiAnalysisTask <p>Parameters for the AI intelligent content analysis task.</p>
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
                     * 获取<p>Parameters for the AI content detect-type task.</p>
                     * @return AiRecognitionTaskSet <p>Parameters for the AI content detect-type task.</p>
                     * 
                     */
                    std::vector<AiRecognitionTaskInput> GetAiRecognitionTaskSet() const;

                    /**
                     * 设置<p>Parameters for the AI content detect-type task.</p>
                     * @param _aiRecognitionTaskSet <p>Parameters for the AI content detect-type task.</p>
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
                     * 获取<p>WeChat Mini Program publishing task parameter.</p>
                     * @return MiniProgramPublishTask <p>WeChat Mini Program publishing task parameter.</p>
                     * 
                     */
                    WechatMiniProgramPublishTaskInput GetMiniProgramPublishTask() const;

                    /**
                     * 设置<p>WeChat Mini Program publishing task parameter.</p>
                     * @param _miniProgramPublishTask <p>WeChat Mini Program publishing task parameter.</p>
                     * 
                     */
                    void SetMiniProgramPublishTask(const WechatMiniProgramPublishTaskInput& _miniProgramPublishTask);

                    /**
                     * 判断参数 MiniProgramPublishTask 是否已赋值
                     * @return MiniProgramPublishTask 是否已赋值
                     * 
                     */
                    bool MiniProgramPublishTaskHasBeenSet() const;

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
                     * 获取<p>Parameters for importing the Intelligent Media Assets knowledge base.</p>
                     * @return ImportMediaKnowledgeTaskSet <p>Parameters for importing the Intelligent Media Assets knowledge base.</p>
                     * 
                     */
                    std::vector<ImportMediaKnowledgeTaskInput> GetImportMediaKnowledgeTaskSet() const;

                    /**
                     * 设置<p>Parameters for importing the Intelligent Media Assets knowledge base.</p>
                     * @param _importMediaKnowledgeTaskSet <p>Parameters for importing the Intelligent Media Assets knowledge base.</p>
                     * 
                     */
                    void SetImportMediaKnowledgeTaskSet(const std::vector<ImportMediaKnowledgeTaskInput>& _importMediaKnowledgeTaskSet);

                    /**
                     * 判断参数 ImportMediaKnowledgeTaskSet 是否已赋值
                     * @return ImportMediaKnowledgeTaskSet 是否已赋值
                     * 
                     */
                    bool ImportMediaKnowledgeTaskSetHasBeenSet() const;

                    /**
                     * 获取<p>Template creation time, use <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @return CreateTime <p>Template creation time, use <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Template creation time, use <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @param _createTime <p>Template creation time, use <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Last template modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @return UpdateTime <p>Last template modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Last template modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @param _updateTime <p>Last template modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Task flow name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Task flow template type. Valid values:</p><li>Preset: system preset task flow template.</li><li>Custom: user-defined task flow template.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

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
                     * <p>AI moderation type task parameter *.<br><font color="red">*: This parameter is used to initiate legacy review and is not recommended. It is recommended to use the ReviewAudioVideoTask parameter to initiate review.</font></p>
                     */
                    AiContentReviewTaskInput m_aiContentReviewTask;
                    bool m_aiContentReviewTaskHasBeenSet;

                    /**
                     * <p>Parameters for the AI intelligent content analysis task.</p>
                     */
                    AiAnalysisTaskInput m_aiAnalysisTask;
                    bool m_aiAnalysisTaskHasBeenSet;

                    /**
                     * <p>Parameters for the AI content detect-type task.</p>
                     */
                    std::vector<AiRecognitionTaskInput> m_aiRecognitionTaskSet;
                    bool m_aiRecognitionTaskSetHasBeenSet;

                    /**
                     * <p>This parameter is not recommended. Use AiRecognitionTaskSet instead.</p>
                     */
                    AiRecognitionTaskInput m_aiRecognitionTask;
                    bool m_aiRecognitionTaskHasBeenSet;

                    /**
                     * <p>WeChat Mini Program publishing task parameter.</p>
                     */
                    WechatMiniProgramPublishTaskInput m_miniProgramPublishTask;
                    bool m_miniProgramPublishTaskHasBeenSet;

                    /**
                     * <p>Parameters for the audio and video moderation task.</p>
                     */
                    ProcedureReviewAudioVideoTaskInput m_reviewAudioVideoTask;
                    bool m_reviewAudioVideoTaskHasBeenSet;

                    /**
                     * <p>Parameters for importing the Intelligent Media Assets knowledge base.</p>
                     */
                    std::vector<ImportMediaKnowledgeTaskInput> m_importMediaKnowledgeTaskSet;
                    bool m_importMediaKnowledgeTaskSetHasBeenSet;

                    /**
                     * <p>Template creation time, use <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Last template modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCEDURETEMPLATE_H_
