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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIANALYSISTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIANALYSISTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ClassificationConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/TagConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/CoverConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/FrameTagConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/HighlightsConfigureInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateAIAnalysisTemplate request structure.
                */
                class CreateAIAnalysisTemplateRequest : public AbstractModel
                {
                public:
                    CreateAIAnalysisTemplateRequest();
                    ~CreateAIAnalysisTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Video content analysis template name. Length limit: 64 characters.
                     * @return Name Video content analysis template name. Length limit: 64 characters.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Video content analysis template name. Length limit: 64 characters.
                     * @param Name Video content analysis template name. Length limit: 64 characters.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Video content analysis template description. Length limit: 256 characters.
                     * @return Comment Video content analysis template description. Length limit: 256 characters.
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Video content analysis template description. Length limit: 256 characters.
                     * @param Comment Video content analysis template description. Length limit: 256 characters.
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Control parameter of intelligent categorization task.
                     * @return ClassificationConfigure Control parameter of intelligent categorization task.
                     */
                    ClassificationConfigureInfo GetClassificationConfigure() const;

                    /**
                     * 设置Control parameter of intelligent categorization task.
                     * @param ClassificationConfigure Control parameter of intelligent categorization task.
                     */
                    void SetClassificationConfigure(const ClassificationConfigureInfo& _classificationConfigure);

                    /**
                     * 判断参数 ClassificationConfigure 是否已赋值
                     * @return ClassificationConfigure 是否已赋值
                     */
                    bool ClassificationConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of intelligent tagging task.
                     * @return TagConfigure Control parameter of intelligent tagging task.
                     */
                    TagConfigureInfo GetTagConfigure() const;

                    /**
                     * 设置Control parameter of intelligent tagging task.
                     * @param TagConfigure Control parameter of intelligent tagging task.
                     */
                    void SetTagConfigure(const TagConfigureInfo& _tagConfigure);

                    /**
                     * 判断参数 TagConfigure 是否已赋值
                     * @return TagConfigure 是否已赋值
                     */
                    bool TagConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of intelligent cover generating task.
                     * @return CoverConfigure Control parameter of intelligent cover generating task.
                     */
                    CoverConfigureInfo GetCoverConfigure() const;

                    /**
                     * 设置Control parameter of intelligent cover generating task.
                     * @param CoverConfigure Control parameter of intelligent cover generating task.
                     */
                    void SetCoverConfigure(const CoverConfigureInfo& _coverConfigure);

                    /**
                     * 判断参数 CoverConfigure 是否已赋值
                     * @return CoverConfigure 是否已赋值
                     */
                    bool CoverConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of intelligent frame-specific tagging task.
                     * @return FrameTagConfigure Control parameter of intelligent frame-specific tagging task.
                     */
                    FrameTagConfigureInfo GetFrameTagConfigure() const;

                    /**
                     * 设置Control parameter of intelligent frame-specific tagging task.
                     * @param FrameTagConfigure Control parameter of intelligent frame-specific tagging task.
                     */
                    void SetFrameTagConfigure(const FrameTagConfigureInfo& _frameTagConfigure);

                    /**
                     * 判断参数 FrameTagConfigure 是否已赋值
                     * @return FrameTagConfigure 是否已赋值
                     */
                    bool FrameTagConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of an intelligent highlight generating task.
                     * @return HighlightConfigure Control parameter of an intelligent highlight generating task.
                     */
                    HighlightsConfigureInfo GetHighlightConfigure() const;

                    /**
                     * 设置Control parameter of an intelligent highlight generating task.
                     * @param HighlightConfigure Control parameter of an intelligent highlight generating task.
                     */
                    void SetHighlightConfigure(const HighlightsConfigureInfo& _highlightConfigure);

                    /**
                     * 判断参数 HighlightConfigure 是否已赋值
                     * @return HighlightConfigure 是否已赋值
                     */
                    bool HighlightConfigureHasBeenSet() const;

                    /**
                     * 获取[Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @return SubAppId [Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置[Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @param SubAppId [Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * Video content analysis template name. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Video content analysis template description. Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Control parameter of intelligent categorization task.
                     */
                    ClassificationConfigureInfo m_classificationConfigure;
                    bool m_classificationConfigureHasBeenSet;

                    /**
                     * Control parameter of intelligent tagging task.
                     */
                    TagConfigureInfo m_tagConfigure;
                    bool m_tagConfigureHasBeenSet;

                    /**
                     * Control parameter of intelligent cover generating task.
                     */
                    CoverConfigureInfo m_coverConfigure;
                    bool m_coverConfigureHasBeenSet;

                    /**
                     * Control parameter of intelligent frame-specific tagging task.
                     */
                    FrameTagConfigureInfo m_frameTagConfigure;
                    bool m_frameTagConfigureHasBeenSet;

                    /**
                     * Control parameter of an intelligent highlight generating task.
                     */
                    HighlightsConfigureInfo m_highlightConfigure;
                    bool m_highlightConfigureHasBeenSet;

                    /**
                     * [Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIANALYSISTEMPLATEREQUEST_H_
