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
                     * 获取Task flow name.
                     * @return Name Task flow name.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Task flow name.
                     * @param Name Task flow name.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Type of a task flow template. Valid values:
<li>Preset: preset task flow template;</li>
<li>Custom: custom task flow template.</li>
                     * @return Type Type of a task flow template. Valid values:
<li>Preset: preset task flow template;</li>
<li>Custom: custom task flow template.</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of a task flow template. Valid values:
<li>Preset: preset task flow template;</li>
<li>Custom: custom task flow template.</li>
                     * @param Type Type of a task flow template. Valid values:
<li>Preset: preset task flow template;</li>
<li>Custom: custom task flow template.</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Template description. Length limit: 256 characters.
                     * @return Comment Template description. Length limit: 256 characters.
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description. Length limit: 256 characters.
                     * @param Comment Template description. Length limit: 256 characters.
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Parameter of video processing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MediaProcessTask Parameter of video processing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaProcessTaskInput GetMediaProcessTask() const;

                    /**
                     * 设置Parameter of video processing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MediaProcessTask Parameter of video processing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMediaProcessTask(const MediaProcessTaskInput& _mediaProcessTask);

                    /**
                     * 判断参数 MediaProcessTask 是否已赋值
                     * @return MediaProcessTask 是否已赋值
                     */
                    bool MediaProcessTaskHasBeenSet() const;

                    /**
                     * 获取Parameter of AI-based content audit task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AiContentReviewTask Parameter of AI-based content audit task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AiContentReviewTaskInput GetAiContentReviewTask() const;

                    /**
                     * 设置Parameter of AI-based content audit task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AiContentReviewTask Parameter of AI-based content audit task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAiContentReviewTask(const AiContentReviewTaskInput& _aiContentReviewTask);

                    /**
                     * 判断参数 AiContentReviewTask 是否已赋值
                     * @return AiContentReviewTask 是否已赋值
                     */
                    bool AiContentReviewTaskHasBeenSet() const;

                    /**
                     * 获取Parameter of AI-based content analysis task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AiAnalysisTask Parameter of AI-based content analysis task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AiAnalysisTaskInput GetAiAnalysisTask() const;

                    /**
                     * 设置Parameter of AI-based content analysis task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AiAnalysisTask Parameter of AI-based content analysis task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAiAnalysisTask(const AiAnalysisTaskInput& _aiAnalysisTask);

                    /**
                     * 判断参数 AiAnalysisTask 是否已赋值
                     * @return AiAnalysisTask 是否已赋值
                     */
                    bool AiAnalysisTaskHasBeenSet() const;

                    /**
                     * 获取Type parameter of AI-based content recognition task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AiRecognitionTask Type parameter of AI-based content recognition task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AiRecognitionTaskInput GetAiRecognitionTask() const;

                    /**
                     * 设置Type parameter of AI-based content recognition task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AiRecognitionTask Type parameter of AI-based content recognition task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAiRecognitionTask(const AiRecognitionTaskInput& _aiRecognitionTask);

                    /**
                     * 判断参数 AiRecognitionTask 是否已赋值
                     * @return AiRecognitionTask 是否已赋值
                     */
                    bool AiRecognitionTaskHasBeenSet() const;

                    /**
                     * 获取Parameter of a release on WeChat Mini Program task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MiniProgramPublishTask Parameter of a release on WeChat Mini Program task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    WechatMiniProgramPublishTaskInput GetMiniProgramPublishTask() const;

                    /**
                     * 设置Parameter of a release on WeChat Mini Program task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MiniProgramPublishTask Parameter of a release on WeChat Mini Program task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMiniProgramPublishTask(const WechatMiniProgramPublishTaskInput& _miniProgramPublishTask);

                    /**
                     * 判断参数 MiniProgramPublishTask 是否已赋值
                     * @return MiniProgramPublishTask 是否已赋值
                     */
                    bool MiniProgramPublishTaskHasBeenSet() const;

                    /**
                     * 获取Creation time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return CreateTime Creation time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param CreateTime Creation time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modified time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return UpdateTime Last modified time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param UpdateTime Last modified time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Task flow name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Type of a task flow template. Valid values:
<li>Preset: preset task flow template;</li>
<li>Custom: custom task flow template.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Template description. Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Parameter of video processing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaProcessTaskInput m_mediaProcessTask;
                    bool m_mediaProcessTaskHasBeenSet;

                    /**
                     * Parameter of AI-based content audit task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AiContentReviewTaskInput m_aiContentReviewTask;
                    bool m_aiContentReviewTaskHasBeenSet;

                    /**
                     * Parameter of AI-based content analysis task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AiAnalysisTaskInput m_aiAnalysisTask;
                    bool m_aiAnalysisTaskHasBeenSet;

                    /**
                     * Type parameter of AI-based content recognition task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AiRecognitionTaskInput m_aiRecognitionTask;
                    bool m_aiRecognitionTaskHasBeenSet;

                    /**
                     * Parameter of a release on WeChat Mini Program task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    WechatMiniProgramPublishTaskInput m_miniProgramPublishTask;
                    bool m_miniProgramPublishTaskHasBeenSet;

                    /**
                     * Creation time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modified time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCEDURETEMPLATE_H_
