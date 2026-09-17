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
#include <tencentcloud/vod/v20180717/model/MPSEmbedSubtitleTemplate.h>


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
                     * 获取
                     * @return SubAppId 
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置
                     * @param _subAppId 
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
                     * 获取
                     * @return TemplateType 
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置
                     * @param _templateType 
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
                     * 获取
                     * @return MPSCreateTemplateParams 
                     * 
                     */
                    std::string GetMPSCreateTemplateParams() const;

                    /**
                     * 设置
                     * @param _mPSCreateTemplateParams 
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
                     * 获取
                     * @return AIAnalysisTemplate 
                     * 
                     */
                    MPSAIAnalysisTemplate GetAIAnalysisTemplate() const;

                    /**
                     * 设置
                     * @param _aIAnalysisTemplate 
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
                     * 获取
                     * @return SmartSubtitleTemplate 
                     * 
                     */
                    MPSSmartSubtitleTemplate GetSmartSubtitleTemplate() const;

                    /**
                     * 设置
                     * @param _smartSubtitleTemplate 
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
                     * 获取
                     * @return SmartEraseTemplate 
                     * 
                     */
                    MPSSmartEraseTemplate GetSmartEraseTemplate() const;

                    /**
                     * 设置
                     * @param _smartEraseTemplate 
                     * 
                     */
                    void SetSmartEraseTemplate(const MPSSmartEraseTemplate& _smartEraseTemplate);

                    /**
                     * 判断参数 SmartEraseTemplate 是否已赋值
                     * @return SmartEraseTemplate 是否已赋值
                     * 
                     */
                    bool SmartEraseTemplateHasBeenSet() const;

                    /**
                     * 获取
                     * @return EmbedSubtitleTemplate 
                     * 
                     */
                    MPSEmbedSubtitleTemplate GetEmbedSubtitleTemplate() const;

                    /**
                     * 设置
                     * @param _embedSubtitleTemplate 
                     * 
                     */
                    void SetEmbedSubtitleTemplate(const MPSEmbedSubtitleTemplate& _embedSubtitleTemplate);

                    /**
                     * 判断参数 EmbedSubtitleTemplate 是否已赋值
                     * @return EmbedSubtitleTemplate 是否已赋值
                     * 
                     */
                    bool EmbedSubtitleTemplateHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_mPSCreateTemplateParams;
                    bool m_mPSCreateTemplateParamsHasBeenSet;

                    /**
                     * 
                     */
                    MPSAIAnalysisTemplate m_aIAnalysisTemplate;
                    bool m_aIAnalysisTemplateHasBeenSet;

                    /**
                     * 
                     */
                    MPSSmartSubtitleTemplate m_smartSubtitleTemplate;
                    bool m_smartSubtitleTemplateHasBeenSet;

                    /**
                     * 
                     */
                    MPSSmartEraseTemplate m_smartEraseTemplate;
                    bool m_smartEraseTemplateHasBeenSet;

                    /**
                     * 
                     */
                    MPSEmbedSubtitleTemplate m_embedSubtitleTemplate;
                    bool m_embedSubtitleTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEMPSTEMPLATEREQUEST_H_
