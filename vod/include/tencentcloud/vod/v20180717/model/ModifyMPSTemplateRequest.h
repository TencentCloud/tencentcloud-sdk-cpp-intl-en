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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMPSTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMPSTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSAIAnalysisTemplateForUpdate.h>
#include <tencentcloud/vod/v20180717/model/MPSSmartSubtitleTemplateForUpdate.h>
#include <tencentcloud/vod/v20180717/model/MPSSmartEraseTemplateForUpdate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyMPSTemplate request structure.
                */
                class ModifyMPSTemplateRequest : public AbstractModel
                {
                public:
                    ModifyMPSTemplateRequest();
                    ~ModifyMPSTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID.</b></p>
                     * @return SubAppId <p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID.</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID.</b></p>
                     * @param _subAppId <p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID.</b></p>
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
                     * 获取<p>Type of the MPS template that needs to be modified.</p><p>Enumeration value:</p><ul><li>AIAnalysis: Intelligent analysis template</li><li>SmartSubtitle: Intelligent subtitle template</li><li>SmartErase: Intelligent erasure template</li></ul>
                     * @return TemplateType <p>Type of the MPS template that needs to be modified.</p><p>Enumeration value:</p><ul><li>AIAnalysis: Intelligent analysis template</li><li>SmartSubtitle: Intelligent subtitle template</li><li>SmartErase: Intelligent erasure template</li></ul>
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置<p>Type of the MPS template that needs to be modified.</p><p>Enumeration value:</p><ul><li>AIAnalysis: Intelligent analysis template</li><li>SmartSubtitle: Intelligent subtitle template</li><li>SmartErase: Intelligent erasure template</li></ul>
                     * @param _templateType <p>Type of the MPS template that needs to be modified.</p><p>Enumeration value:</p><ul><li>AIAnalysis: Intelligent analysis template</li><li>SmartSubtitle: Intelligent subtitle template</li><li>SmartErase: Intelligent erasure template</li></ul>
                     * 
                     */
                    void SetTemplateType(const std::string& _templateType);

                    /**
                     * 判断参数 TemplateType 是否已赋值
                     * @return TemplateType 是否已赋值
                     * 
                     */
                    bool TemplateTypeHasBeenSet() const;

                    /**
                     * 获取<p>MPS modifies template parameters. This parameter is used for passing through to the media processing service (MPS) to modify user-defined MPS task templates from the VOD side.<br> Currently only support modifying templates of the following task types in this way:</p><ol><li>Audio and video enhancement: Only support filling in the content of Name, Comment, RemoveVideo, RemoveAudio, VideoTemplate, AudioTemplate, and EnhanceConfig parameters in the "<a href="https://www.tencentcloud.com/document/api/862/37578?from_cn_redirect=1">modify transcoding template</a>" interface. Currently only support configuring the above parameters in the template, other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>AI analysis: Only support filling in the content of Name, Comment, ClassificationConfigure, TagConfigure, CoverConfigure, and FrameTagConfigure parameters in the "<a href="https://www.tencentcloud.com/document/api/862/40246?from_cn_redirect=1">modify content analysis template</a>" interface. Currently only support configuring the above parameters in the template, other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Intelligent caption: Only support filling in the content of Name, Comment, TranslateSwitch, VideoSrcLanguage, SubtitleFormat, SubtitleType, AsrHotWordsConfigure, TranslateDstLanguage, and ProcessType parameters in the "<a href="https://www.tencentcloud.com/document/api/862/117001?from_cn_redirect=1">modify intelligent caption template</a>" interface. Currently only support configuring the above parameters in the template, other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Intelligent erasure: Only support filling in the content of Name, Comment, EraseType, EraseSubtitleConfig, EraseWatermarkConfig, and ErasePrivacyConfig parameters in the "<a href="https://www.tencentcloud.com/document/api/862/123732?from_cn_redirect=1">modify intelligent erasure template</a>" interface. Currently only support configuring the above parameters in the template, other parameters are not required. If other parameters are included, the system will automatically ignore them.</li></ol>
                     * @return MPSModifyTemplateParams <p>MPS modifies template parameters. This parameter is used for passing through to the media processing service (MPS) to modify user-defined MPS task templates from the VOD side.<br> Currently only support modifying templates of the following task types in this way:</p><ol><li>Audio and video enhancement: Only support filling in the content of Name, Comment, RemoveVideo, RemoveAudio, VideoTemplate, AudioTemplate, and EnhanceConfig parameters in the "<a href="https://www.tencentcloud.com/document/api/862/37578?from_cn_redirect=1">modify transcoding template</a>" interface. Currently only support configuring the above parameters in the template, other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>AI analysis: Only support filling in the content of Name, Comment, ClassificationConfigure, TagConfigure, CoverConfigure, and FrameTagConfigure parameters in the "<a href="https://www.tencentcloud.com/document/api/862/40246?from_cn_redirect=1">modify content analysis template</a>" interface. Currently only support configuring the above parameters in the template, other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Intelligent caption: Only support filling in the content of Name, Comment, TranslateSwitch, VideoSrcLanguage, SubtitleFormat, SubtitleType, AsrHotWordsConfigure, TranslateDstLanguage, and ProcessType parameters in the "<a href="https://www.tencentcloud.com/document/api/862/117001?from_cn_redirect=1">modify intelligent caption template</a>" interface. Currently only support configuring the above parameters in the template, other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Intelligent erasure: Only support filling in the content of Name, Comment, EraseType, EraseSubtitleConfig, EraseWatermarkConfig, and ErasePrivacyConfig parameters in the "<a href="https://www.tencentcloud.com/document/api/862/123732?from_cn_redirect=1">modify intelligent erasure template</a>" interface. Currently only support configuring the above parameters in the template, other parameters are not required. If other parameters are included, the system will automatically ignore them.</li></ol>
                     * 
                     */
                    std::string GetMPSModifyTemplateParams() const;

                    /**
                     * 设置<p>MPS modifies template parameters. This parameter is used for passing through to the media processing service (MPS) to modify user-defined MPS task templates from the VOD side.<br> Currently only support modifying templates of the following task types in this way:</p><ol><li>Audio and video enhancement: Only support filling in the content of Name, Comment, RemoveVideo, RemoveAudio, VideoTemplate, AudioTemplate, and EnhanceConfig parameters in the "<a href="https://www.tencentcloud.com/document/api/862/37578?from_cn_redirect=1">modify transcoding template</a>" interface. Currently only support configuring the above parameters in the template, other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>AI analysis: Only support filling in the content of Name, Comment, ClassificationConfigure, TagConfigure, CoverConfigure, and FrameTagConfigure parameters in the "<a href="https://www.tencentcloud.com/document/api/862/40246?from_cn_redirect=1">modify content analysis template</a>" interface. Currently only support configuring the above parameters in the template, other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Intelligent caption: Only support filling in the content of Name, Comment, TranslateSwitch, VideoSrcLanguage, SubtitleFormat, SubtitleType, AsrHotWordsConfigure, TranslateDstLanguage, and ProcessType parameters in the "<a href="https://www.tencentcloud.com/document/api/862/117001?from_cn_redirect=1">modify intelligent caption template</a>" interface. Currently only support configuring the above parameters in the template, other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Intelligent erasure: Only support filling in the content of Name, Comment, EraseType, EraseSubtitleConfig, EraseWatermarkConfig, and ErasePrivacyConfig parameters in the "<a href="https://www.tencentcloud.com/document/api/862/123732?from_cn_redirect=1">modify intelligent erasure template</a>" interface. Currently only support configuring the above parameters in the template, other parameters are not required. If other parameters are included, the system will automatically ignore them.</li></ol>
                     * @param _mPSModifyTemplateParams <p>MPS modifies template parameters. This parameter is used for passing through to the media processing service (MPS) to modify user-defined MPS task templates from the VOD side.<br> Currently only support modifying templates of the following task types in this way:</p><ol><li>Audio and video enhancement: Only support filling in the content of Name, Comment, RemoveVideo, RemoveAudio, VideoTemplate, AudioTemplate, and EnhanceConfig parameters in the "<a href="https://www.tencentcloud.com/document/api/862/37578?from_cn_redirect=1">modify transcoding template</a>" interface. Currently only support configuring the above parameters in the template, other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>AI analysis: Only support filling in the content of Name, Comment, ClassificationConfigure, TagConfigure, CoverConfigure, and FrameTagConfigure parameters in the "<a href="https://www.tencentcloud.com/document/api/862/40246?from_cn_redirect=1">modify content analysis template</a>" interface. Currently only support configuring the above parameters in the template, other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Intelligent caption: Only support filling in the content of Name, Comment, TranslateSwitch, VideoSrcLanguage, SubtitleFormat, SubtitleType, AsrHotWordsConfigure, TranslateDstLanguage, and ProcessType parameters in the "<a href="https://www.tencentcloud.com/document/api/862/117001?from_cn_redirect=1">modify intelligent caption template</a>" interface. Currently only support configuring the above parameters in the template, other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Intelligent erasure: Only support filling in the content of Name, Comment, EraseType, EraseSubtitleConfig, EraseWatermarkConfig, and ErasePrivacyConfig parameters in the "<a href="https://www.tencentcloud.com/document/api/862/123732?from_cn_redirect=1">modify intelligent erasure template</a>" interface. Currently only support configuring the above parameters in the template, other parameters are not required. If other parameters are included, the system will automatically ignore them.</li></ol>
                     * 
                     */
                    void SetMPSModifyTemplateParams(const std::string& _mPSModifyTemplateParams);

                    /**
                     * 判断参数 MPSModifyTemplateParams 是否已赋值
                     * @return MPSModifyTemplateParams 是否已赋值
                     * 
                     */
                    bool MPSModifyTemplateParamsHasBeenSet() const;

                    /**
                     * 获取<p>Intelligent analysis template parameter. Valid when MPSModifyTemplateParams is empty.</p>
                     * @return AIAnalysisTemplate <p>Intelligent analysis template parameter. Valid when MPSModifyTemplateParams is empty.</p>
                     * 
                     */
                    MPSAIAnalysisTemplateForUpdate GetAIAnalysisTemplate() const;

                    /**
                     * 设置<p>Intelligent analysis template parameter. Valid when MPSModifyTemplateParams is empty.</p>
                     * @param _aIAnalysisTemplate <p>Intelligent analysis template parameter. Valid when MPSModifyTemplateParams is empty.</p>
                     * 
                     */
                    void SetAIAnalysisTemplate(const MPSAIAnalysisTemplateForUpdate& _aIAnalysisTemplate);

                    /**
                     * 判断参数 AIAnalysisTemplate 是否已赋值
                     * @return AIAnalysisTemplate 是否已赋值
                     * 
                     */
                    bool AIAnalysisTemplateHasBeenSet() const;

                    /**
                     * 获取<p>Intelligent subtitle template parameter. Valid when MPSModifyTemplateParams is empty.</p>
                     * @return SmartSubtitleTemplate <p>Intelligent subtitle template parameter. Valid when MPSModifyTemplateParams is empty.</p>
                     * 
                     */
                    MPSSmartSubtitleTemplateForUpdate GetSmartSubtitleTemplate() const;

                    /**
                     * 设置<p>Intelligent subtitle template parameter. Valid when MPSModifyTemplateParams is empty.</p>
                     * @param _smartSubtitleTemplate <p>Intelligent subtitle template parameter. Valid when MPSModifyTemplateParams is empty.</p>
                     * 
                     */
                    void SetSmartSubtitleTemplate(const MPSSmartSubtitleTemplateForUpdate& _smartSubtitleTemplate);

                    /**
                     * 判断参数 SmartSubtitleTemplate 是否已赋值
                     * @return SmartSubtitleTemplate 是否已赋值
                     * 
                     */
                    bool SmartSubtitleTemplateHasBeenSet() const;

                    /**
                     * 获取<p>Intelligent erasure template parameter. Valid when MPSModifyTemplateParams is empty.</p>
                     * @return SmartEraseTemplate <p>Intelligent erasure template parameter. Valid when MPSModifyTemplateParams is empty.</p>
                     * 
                     */
                    MPSSmartEraseTemplateForUpdate GetSmartEraseTemplate() const;

                    /**
                     * 设置<p>Intelligent erasure template parameter. Valid when MPSModifyTemplateParams is empty.</p>
                     * @param _smartEraseTemplate <p>Intelligent erasure template parameter. Valid when MPSModifyTemplateParams is empty.</p>
                     * 
                     */
                    void SetSmartEraseTemplate(const MPSSmartEraseTemplateForUpdate& _smartEraseTemplate);

                    /**
                     * 判断参数 SmartEraseTemplate 是否已赋值
                     * @return SmartEraseTemplate 是否已赋值
                     * 
                     */
                    bool SmartEraseTemplateHasBeenSet() const;

                private:

                    /**
                     * <p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID.</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Type of the MPS template that needs to be modified.</p><p>Enumeration value:</p><ul><li>AIAnalysis: Intelligent analysis template</li><li>SmartSubtitle: Intelligent subtitle template</li><li>SmartErase: Intelligent erasure template</li></ul>
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * <p>MPS modifies template parameters. This parameter is used for passing through to the media processing service (MPS) to modify user-defined MPS task templates from the VOD side.<br> Currently only support modifying templates of the following task types in this way:</p><ol><li>Audio and video enhancement: Only support filling in the content of Name, Comment, RemoveVideo, RemoveAudio, VideoTemplate, AudioTemplate, and EnhanceConfig parameters in the "<a href="https://www.tencentcloud.com/document/api/862/37578?from_cn_redirect=1">modify transcoding template</a>" interface. Currently only support configuring the above parameters in the template, other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>AI analysis: Only support filling in the content of Name, Comment, ClassificationConfigure, TagConfigure, CoverConfigure, and FrameTagConfigure parameters in the "<a href="https://www.tencentcloud.com/document/api/862/40246?from_cn_redirect=1">modify content analysis template</a>" interface. Currently only support configuring the above parameters in the template, other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Intelligent caption: Only support filling in the content of Name, Comment, TranslateSwitch, VideoSrcLanguage, SubtitleFormat, SubtitleType, AsrHotWordsConfigure, TranslateDstLanguage, and ProcessType parameters in the "<a href="https://www.tencentcloud.com/document/api/862/117001?from_cn_redirect=1">modify intelligent caption template</a>" interface. Currently only support configuring the above parameters in the template, other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Intelligent erasure: Only support filling in the content of Name, Comment, EraseType, EraseSubtitleConfig, EraseWatermarkConfig, and ErasePrivacyConfig parameters in the "<a href="https://www.tencentcloud.com/document/api/862/123732?from_cn_redirect=1">modify intelligent erasure template</a>" interface. Currently only support configuring the above parameters in the template, other parameters are not required. If other parameters are included, the system will automatically ignore them.</li></ol>
                     */
                    std::string m_mPSModifyTemplateParams;
                    bool m_mPSModifyTemplateParamsHasBeenSet;

                    /**
                     * <p>Intelligent analysis template parameter. Valid when MPSModifyTemplateParams is empty.</p>
                     */
                    MPSAIAnalysisTemplateForUpdate m_aIAnalysisTemplate;
                    bool m_aIAnalysisTemplateHasBeenSet;

                    /**
                     * <p>Intelligent subtitle template parameter. Valid when MPSModifyTemplateParams is empty.</p>
                     */
                    MPSSmartSubtitleTemplateForUpdate m_smartSubtitleTemplate;
                    bool m_smartSubtitleTemplateHasBeenSet;

                    /**
                     * <p>Intelligent erasure template parameter. Valid when MPSModifyTemplateParams is empty.</p>
                     */
                    MPSSmartEraseTemplateForUpdate m_smartEraseTemplate;
                    bool m_smartEraseTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMPSTEMPLATEREQUEST_H_
