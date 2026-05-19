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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEMPSTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEMPSTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSAIAnalysisTemplate.h>
#include <tencentcloud/vod/v20180717/model/MPSSmartSubtitleTemplate.h>
#include <tencentcloud/vod/v20180717/model/MPSSmartEraseTemplate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateMPSTemplate request structure.
                */
                class CreateMPSTemplateRequest : public AbstractModel
                {
                public:
                    CreateMPSTemplateRequest();
                    ~CreateMPSTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>Video-on-demand (VOD) <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID.</b></p>
                     * @return SubAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID.</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>Video-on-demand (VOD) <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID.</b></p>
                     * @param _subAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID.</b></p>
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
                     * 获取<p>Type of the MPS template to create. Value:</p><li>AIAnalysis: Create an intelligent analysis template.</li><li>SmartSubtitle: Create an intelligent subtitle template.</li><li>SmartErase: Create an intelligent erasure template.</li>
                     * @return TemplateType <p>Type of the MPS template to create. Value:</p><li>AIAnalysis: Create an intelligent analysis template.</li><li>SmartSubtitle: Create an intelligent subtitle template.</li><li>SmartErase: Create an intelligent erasure template.</li>
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置<p>Type of the MPS template to create. Value:</p><li>AIAnalysis: Create an intelligent analysis template.</li><li>SmartSubtitle: Create an intelligent subtitle template.</li><li>SmartErase: Create an intelligent erasure template.</li>
                     * @param _templateType <p>Type of the MPS template to create. Value:</p><li>AIAnalysis: Create an intelligent analysis template.</li><li>SmartSubtitle: Create an intelligent subtitle template.</li><li>SmartErase: Create an intelligent erasure template.</li>
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
                     * 获取<p>MPS template creation parameters. This parameter is used for transparent transmission to the media processing service (MPS) to create user-defined MPS task templates from the VOD side.<br>Currently only supports creating templates of the following task types through this method:</p><ol><li>AI analysis: only supports filling in the content of Name, Comment, ClassificationConfigure, TagConfigure, CoverConfigure, and FrameTagConfigure parameters in the "<a href="https://www.tencentcloud.com/document/api/862/40249?from_cn_redirect=1">create content analysis template</a>" API. Currently only supports configuring the above parameters in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Smart subtitling: only supports filling in the content of Name, Comment, TranslateSwitch, VideoSrcLanguage, SubtitleFormat, SubtitleType, AsrHotWordsConfigure, TranslateDstLanguage, and ProcessType parameters in the "<a href="https://www.tencentcloud.com/document/api/862/117004?from_cn_redirect=1">create intelligent caption template</a>" API. Currently only supports configuring the above parameters in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Intelligent erasure: only supports filling in the content of Name, Comment, EraseType, EraseSubtitleConfig, EraseWatermarkConfig, and ErasePrivacyConfig parameters in the "<a href="https://www.tencentcloud.com/document/api/862/123735?from_cn_redirect=1">create intelligent erasure template</a>" API. Currently only supports configuring the above parameters in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li></ol><p>Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them. The above pass-through parameters are represented in JSON format.</p>
                     * @return MPSCreateTemplateParams <p>MPS template creation parameters. This parameter is used for transparent transmission to the media processing service (MPS) to create user-defined MPS task templates from the VOD side.<br>Currently only supports creating templates of the following task types through this method:</p><ol><li>AI analysis: only supports filling in the content of Name, Comment, ClassificationConfigure, TagConfigure, CoverConfigure, and FrameTagConfigure parameters in the "<a href="https://www.tencentcloud.com/document/api/862/40249?from_cn_redirect=1">create content analysis template</a>" API. Currently only supports configuring the above parameters in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Smart subtitling: only supports filling in the content of Name, Comment, TranslateSwitch, VideoSrcLanguage, SubtitleFormat, SubtitleType, AsrHotWordsConfigure, TranslateDstLanguage, and ProcessType parameters in the "<a href="https://www.tencentcloud.com/document/api/862/117004?from_cn_redirect=1">create intelligent caption template</a>" API. Currently only supports configuring the above parameters in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Intelligent erasure: only supports filling in the content of Name, Comment, EraseType, EraseSubtitleConfig, EraseWatermarkConfig, and ErasePrivacyConfig parameters in the "<a href="https://www.tencentcloud.com/document/api/862/123735?from_cn_redirect=1">create intelligent erasure template</a>" API. Currently only supports configuring the above parameters in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li></ol><p>Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them. The above pass-through parameters are represented in JSON format.</p>
                     * 
                     */
                    std::string GetMPSCreateTemplateParams() const;

                    /**
                     * 设置<p>MPS template creation parameters. This parameter is used for transparent transmission to the media processing service (MPS) to create user-defined MPS task templates from the VOD side.<br>Currently only supports creating templates of the following task types through this method:</p><ol><li>AI analysis: only supports filling in the content of Name, Comment, ClassificationConfigure, TagConfigure, CoverConfigure, and FrameTagConfigure parameters in the "<a href="https://www.tencentcloud.com/document/api/862/40249?from_cn_redirect=1">create content analysis template</a>" API. Currently only supports configuring the above parameters in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Smart subtitling: only supports filling in the content of Name, Comment, TranslateSwitch, VideoSrcLanguage, SubtitleFormat, SubtitleType, AsrHotWordsConfigure, TranslateDstLanguage, and ProcessType parameters in the "<a href="https://www.tencentcloud.com/document/api/862/117004?from_cn_redirect=1">create intelligent caption template</a>" API. Currently only supports configuring the above parameters in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Intelligent erasure: only supports filling in the content of Name, Comment, EraseType, EraseSubtitleConfig, EraseWatermarkConfig, and ErasePrivacyConfig parameters in the "<a href="https://www.tencentcloud.com/document/api/862/123735?from_cn_redirect=1">create intelligent erasure template</a>" API. Currently only supports configuring the above parameters in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li></ol><p>Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them. The above pass-through parameters are represented in JSON format.</p>
                     * @param _mPSCreateTemplateParams <p>MPS template creation parameters. This parameter is used for transparent transmission to the media processing service (MPS) to create user-defined MPS task templates from the VOD side.<br>Currently only supports creating templates of the following task types through this method:</p><ol><li>AI analysis: only supports filling in the content of Name, Comment, ClassificationConfigure, TagConfigure, CoverConfigure, and FrameTagConfigure parameters in the "<a href="https://www.tencentcloud.com/document/api/862/40249?from_cn_redirect=1">create content analysis template</a>" API. Currently only supports configuring the above parameters in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Smart subtitling: only supports filling in the content of Name, Comment, TranslateSwitch, VideoSrcLanguage, SubtitleFormat, SubtitleType, AsrHotWordsConfigure, TranslateDstLanguage, and ProcessType parameters in the "<a href="https://www.tencentcloud.com/document/api/862/117004?from_cn_redirect=1">create intelligent caption template</a>" API. Currently only supports configuring the above parameters in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Intelligent erasure: only supports filling in the content of Name, Comment, EraseType, EraseSubtitleConfig, EraseWatermarkConfig, and ErasePrivacyConfig parameters in the "<a href="https://www.tencentcloud.com/document/api/862/123735?from_cn_redirect=1">create intelligent erasure template</a>" API. Currently only supports configuring the above parameters in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li></ol><p>Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them. The above pass-through parameters are represented in JSON format.</p>
                     * 
                     */
                    void SetMPSCreateTemplateParams(const std::string& _mPSCreateTemplateParams);

                    /**
                     * 判断参数 MPSCreateTemplateParams 是否已赋值
                     * @return MPSCreateTemplateParams 是否已赋值
                     * 
                     */
                    bool MPSCreateTemplateParamsHasBeenSet() const;

                    /**
                     * 获取<p>Intelligent analysis template parameter. Valid when MPSCreateTemplateParams is empty.</p>
                     * @return AIAnalysisTemplate <p>Intelligent analysis template parameter. Valid when MPSCreateTemplateParams is empty.</p>
                     * 
                     */
                    MPSAIAnalysisTemplate GetAIAnalysisTemplate() const;

                    /**
                     * 设置<p>Intelligent analysis template parameter. Valid when MPSCreateTemplateParams is empty.</p>
                     * @param _aIAnalysisTemplate <p>Intelligent analysis template parameter. Valid when MPSCreateTemplateParams is empty.</p>
                     * 
                     */
                    void SetAIAnalysisTemplate(const MPSAIAnalysisTemplate& _aIAnalysisTemplate);

                    /**
                     * 判断参数 AIAnalysisTemplate 是否已赋值
                     * @return AIAnalysisTemplate 是否已赋值
                     * 
                     */
                    bool AIAnalysisTemplateHasBeenSet() const;

                    /**
                     * 获取<p>Parameter of the intelligent subtitle template. Valid when MPSCreateTemplateParams is empty.</p>
                     * @return SmartSubtitleTemplate <p>Parameter of the intelligent subtitle template. Valid when MPSCreateTemplateParams is empty.</p>
                     * 
                     */
                    MPSSmartSubtitleTemplate GetSmartSubtitleTemplate() const;

                    /**
                     * 设置<p>Parameter of the intelligent subtitle template. Valid when MPSCreateTemplateParams is empty.</p>
                     * @param _smartSubtitleTemplate <p>Parameter of the intelligent subtitle template. Valid when MPSCreateTemplateParams is empty.</p>
                     * 
                     */
                    void SetSmartSubtitleTemplate(const MPSSmartSubtitleTemplate& _smartSubtitleTemplate);

                    /**
                     * 判断参数 SmartSubtitleTemplate 是否已赋值
                     * @return SmartSubtitleTemplate 是否已赋值
                     * 
                     */
                    bool SmartSubtitleTemplateHasBeenSet() const;

                    /**
                     * 获取<p>Intelligent erasure template parameter. Valid when MPSCreateTemplateParams is empty.</p>
                     * @return SmartEraseTemplate <p>Intelligent erasure template parameter. Valid when MPSCreateTemplateParams is empty.</p>
                     * 
                     */
                    MPSSmartEraseTemplate GetSmartEraseTemplate() const;

                    /**
                     * 设置<p>Intelligent erasure template parameter. Valid when MPSCreateTemplateParams is empty.</p>
                     * @param _smartEraseTemplate <p>Intelligent erasure template parameter. Valid when MPSCreateTemplateParams is empty.</p>
                     * 
                     */
                    void SetSmartEraseTemplate(const MPSSmartEraseTemplate& _smartEraseTemplate);

                    /**
                     * 判断参数 SmartEraseTemplate 是否已赋值
                     * @return SmartEraseTemplate 是否已赋值
                     * 
                     */
                    bool SmartEraseTemplateHasBeenSet() const;

                private:

                    /**
                     * <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID.</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Type of the MPS template to create. Value:</p><li>AIAnalysis: Create an intelligent analysis template.</li><li>SmartSubtitle: Create an intelligent subtitle template.</li><li>SmartErase: Create an intelligent erasure template.</li>
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * <p>MPS template creation parameters. This parameter is used for transparent transmission to the media processing service (MPS) to create user-defined MPS task templates from the VOD side.<br>Currently only supports creating templates of the following task types through this method:</p><ol><li>AI analysis: only supports filling in the content of Name, Comment, ClassificationConfigure, TagConfigure, CoverConfigure, and FrameTagConfigure parameters in the "<a href="https://www.tencentcloud.com/document/api/862/40249?from_cn_redirect=1">create content analysis template</a>" API. Currently only supports configuring the above parameters in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Smart subtitling: only supports filling in the content of Name, Comment, TranslateSwitch, VideoSrcLanguage, SubtitleFormat, SubtitleType, AsrHotWordsConfigure, TranslateDstLanguage, and ProcessType parameters in the "<a href="https://www.tencentcloud.com/document/api/862/117004?from_cn_redirect=1">create intelligent caption template</a>" API. Currently only supports configuring the above parameters in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Intelligent erasure: only supports filling in the content of Name, Comment, EraseType, EraseSubtitleConfig, EraseWatermarkConfig, and ErasePrivacyConfig parameters in the "<a href="https://www.tencentcloud.com/document/api/862/123735?from_cn_redirect=1">create intelligent erasure template</a>" API. Currently only supports configuring the above parameters in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li></ol><p>Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them. The above pass-through parameters are represented in JSON format.</p>
                     */
                    std::string m_mPSCreateTemplateParams;
                    bool m_mPSCreateTemplateParamsHasBeenSet;

                    /**
                     * <p>Intelligent analysis template parameter. Valid when MPSCreateTemplateParams is empty.</p>
                     */
                    MPSAIAnalysisTemplate m_aIAnalysisTemplate;
                    bool m_aIAnalysisTemplateHasBeenSet;

                    /**
                     * <p>Parameter of the intelligent subtitle template. Valid when MPSCreateTemplateParams is empty.</p>
                     */
                    MPSSmartSubtitleTemplate m_smartSubtitleTemplate;
                    bool m_smartSubtitleTemplateHasBeenSet;

                    /**
                     * <p>Intelligent erasure template parameter. Valid when MPSCreateTemplateParams is empty.</p>
                     */
                    MPSSmartEraseTemplate m_smartEraseTemplate;
                    bool m_smartEraseTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEMPSTEMPLATEREQUEST_H_
