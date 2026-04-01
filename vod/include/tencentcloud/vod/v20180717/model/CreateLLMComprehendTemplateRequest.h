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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATELLMCOMPREHENDTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATELLMCOMPREHENDTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/LLMComprehendSummary.h>
#include <tencentcloud/vod/v20180717/model/LLMComprehendAsr.h>
#include <tencentcloud/vod/v20180717/model/LLMComprehendFaceRecognition.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateLLMComprehendTemplate request structure.
                */
                class CreateLLMComprehendTemplateRequest : public AbstractModel
                {
                public:
                    CreateLLMComprehendTemplateRequest();
                    ~CreateLLMComprehendTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Resolution level. Available values are:</p><ul><li>Audio: Audio-level comprehension</li><li>Video: Video-level comprehension</li></ul>
                     * @return Level <p>Resolution level. Available values are:</p><ul><li>Audio: Audio-level comprehension</li><li>Video: Video-level comprehension</li></ul>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>Resolution level. Available values are:</p><ul><li>Audio: Audio-level comprehension</li><li>Video: Video-level comprehension</li></ul>
                     * @param _level <p>Resolution level. Available values are:</p><ul><li>Audio: Audio-level comprehension</li><li>Video: Video-level comprehension</li></ul>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, they must fill this field with the application ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b></p>
                     * @return SubAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, they must fill this field with the application ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, they must fill this field with the application ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b></p>
                     * @param _subAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, they must fill this field with the application ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b></p>
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
                     * 获取<p>Large model comprehend template name. The length cannot exceed 64 characters.</p>
                     * @return Name <p>Large model comprehend template name. The length cannot exceed 64 characters.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Large model comprehend template name. The length cannot exceed 64 characters.</p>
                     * @param _name <p>Large model comprehend template name. The length cannot exceed 64 characters.</p>
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
                     * 获取<p>Large model comprehend template description information. The length cannot exceed 256 characters.</p>
                     * @return Comment <p>Large model comprehend template description information. The length cannot exceed 256 characters.</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>Large model comprehend template description information. The length cannot exceed 256 characters.</p>
                     * @param _comment <p>Large model comprehend template description information. The length cannot exceed 256 characters.</p>
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
                     * 获取<p>Segment summary parsing configuration</p>
                     * @return Summary <p>Segment summary parsing configuration</p>
                     * 
                     */
                    LLMComprehendSummary GetSummary() const;

                    /**
                     * 设置<p>Segment summary parsing configuration</p>
                     * @param _summary <p>Segment summary parsing configuration</p>
                     * 
                     */
                    void SetSummary(const LLMComprehendSummary& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取<p>Text transcription parsing configuration</p>
                     * @return Asr <p>Text transcription parsing configuration</p>
                     * 
                     */
                    LLMComprehendAsr GetAsr() const;

                    /**
                     * 设置<p>Text transcription parsing configuration</p>
                     * @param _asr <p>Text transcription parsing configuration</p>
                     * 
                     */
                    void SetAsr(const LLMComprehendAsr& _asr);

                    /**
                     * 判断参数 Asr 是否已赋值
                     * @return Asr 是否已赋值
                     * 
                     */
                    bool AsrHasBeenSet() const;

                    /**
                     * 获取<p>Face identification configuration</p>
                     * @return FaceRecognition <p>Face identification configuration</p>
                     * 
                     */
                    LLMComprehendFaceRecognition GetFaceRecognition() const;

                    /**
                     * 设置<p>Face identification configuration</p>
                     * @param _faceRecognition <p>Face identification configuration</p>
                     * 
                     */
                    void SetFaceRecognition(const LLMComprehendFaceRecognition& _faceRecognition);

                    /**
                     * 判断参数 FaceRecognition 是否已赋值
                     * @return FaceRecognition 是否已赋值
                     * 
                     */
                    bool FaceRecognitionHasBeenSet() const;

                private:

                    /**
                     * <p>Resolution level. Available values are:</p><ul><li>Audio: Audio-level comprehension</li><li>Video: Video-level comprehension</li></ul>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, they must fill this field with the application ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Large model comprehend template name. The length cannot exceed 64 characters.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Large model comprehend template description information. The length cannot exceed 256 characters.</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>Segment summary parsing configuration</p>
                     */
                    LLMComprehendSummary m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * <p>Text transcription parsing configuration</p>
                     */
                    LLMComprehendAsr m_asr;
                    bool m_asrHasBeenSet;

                    /**
                     * <p>Face identification configuration</p>
                     */
                    LLMComprehendFaceRecognition m_faceRecognition;
                    bool m_faceRecognitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATELLMCOMPREHENDTEMPLATEREQUEST_H_
