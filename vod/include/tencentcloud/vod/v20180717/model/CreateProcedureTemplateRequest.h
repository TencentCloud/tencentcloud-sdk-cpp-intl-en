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
                     * 获取Task flow name (up to 20 characters).
                     * @return Name Task flow name (up to 20 characters).
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Task flow name (up to 20 characters).
                     * @param _name Task flow name (up to 20 characters).
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
                     * 获取<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @return SubAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @param _subAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
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
                     * 获取Template description. Length limit: 256 characters.
                     * @return Comment Template description. Length limit: 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description. Length limit: 256 characters.
                     * @param _comment Template description. Length limit: 256 characters.
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
                     * 获取Parameter of video processing task.
                     * @return MediaProcessTask Parameter of video processing task.
                     * 
                     */
                    MediaProcessTaskInput GetMediaProcessTask() const;

                    /**
                     * 设置Parameter of video processing task.
                     * @param _mediaProcessTask Parameter of video processing task.
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
                     * 获取The information of the intelligent moderation task\*.
<font color=red>\*: This parameter is used by our old moderation templates and is not recommended. Please use `ReviewAudioVideoTask` instead.</font> 
                     * @return AiContentReviewTask The information of the intelligent moderation task\*.
<font color=red>\*: This parameter is used by our old moderation templates and is not recommended. Please use `ReviewAudioVideoTask` instead.</font> 
                     * 
                     */
                    AiContentReviewTaskInput GetAiContentReviewTask() const;

                    /**
                     * 设置The information of the intelligent moderation task\*.
<font color=red>\*: This parameter is used by our old moderation templates and is not recommended. Please use `ReviewAudioVideoTask` instead.</font> 
                     * @param _aiContentReviewTask The information of the intelligent moderation task\*.
<font color=red>\*: This parameter is used by our old moderation templates and is not recommended. Please use `ReviewAudioVideoTask` instead.</font> 
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
                     * 获取Parameter of AI-based content analysis task.
                     * @return AiAnalysisTask Parameter of AI-based content analysis task.
                     * 
                     */
                    AiAnalysisTaskInput GetAiAnalysisTask() const;

                    /**
                     * 设置Parameter of AI-based content analysis task.
                     * @param _aiAnalysisTask Parameter of AI-based content analysis task.
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
                     * 获取Type parameter of AI-based content recognition task.
                     * @return AiRecognitionTask Type parameter of AI-based content recognition task.
                     * 
                     */
                    AiRecognitionTaskInput GetAiRecognitionTask() const;

                    /**
                     * 设置Type parameter of AI-based content recognition task.
                     * @param _aiRecognitionTask Type parameter of AI-based content recognition task.
                     * 
                     */
                    void SetAiRecognitionTask(const AiRecognitionTaskInput& _aiRecognitionTask);

                    /**
                     * 判断参数 AiRecognitionTask 是否已赋值
                     * @return AiRecognitionTask 是否已赋值
                     * 
                     */
                    bool AiRecognitionTaskHasBeenSet() const;

                    /**
                     * 获取The information of the moderation task.
                     * @return ReviewAudioVideoTask The information of the moderation task.
                     * 
                     */
                    ProcedureReviewAudioVideoTaskInput GetReviewAudioVideoTask() const;

                    /**
                     * 设置The information of the moderation task.
                     * @param _reviewAudioVideoTask The information of the moderation task.
                     * 
                     */
                    void SetReviewAudioVideoTask(const ProcedureReviewAudioVideoTaskInput& _reviewAudioVideoTask);

                    /**
                     * 判断参数 ReviewAudioVideoTask 是否已赋值
                     * @return ReviewAudioVideoTask 是否已赋值
                     * 
                     */
                    bool ReviewAudioVideoTaskHasBeenSet() const;

                private:

                    /**
                     * Task flow name (up to 20 characters).
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Template description. Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Parameter of video processing task.
                     */
                    MediaProcessTaskInput m_mediaProcessTask;
                    bool m_mediaProcessTaskHasBeenSet;

                    /**
                     * The information of the intelligent moderation task\*.
<font color=red>\*: This parameter is used by our old moderation templates and is not recommended. Please use `ReviewAudioVideoTask` instead.</font> 
                     */
                    AiContentReviewTaskInput m_aiContentReviewTask;
                    bool m_aiContentReviewTaskHasBeenSet;

                    /**
                     * Parameter of AI-based content analysis task.
                     */
                    AiAnalysisTaskInput m_aiAnalysisTask;
                    bool m_aiAnalysisTaskHasBeenSet;

                    /**
                     * Type parameter of AI-based content recognition task.
                     */
                    AiRecognitionTaskInput m_aiRecognitionTask;
                    bool m_aiRecognitionTaskHasBeenSet;

                    /**
                     * The information of the moderation task.
                     */
                    ProcedureReviewAudioVideoTaskInput m_reviewAudioVideoTask;
                    bool m_reviewAudioVideoTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEPROCEDURETEMPLATEREQUEST_H_
