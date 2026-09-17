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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYAIANALYSISTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYAIANALYSISTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ClassificationConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/TagConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/CoverConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/FrameTagConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/HighlightsConfigureInfoForUpdate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyAIAnalysisTemplate request structure.
                */
                class ModifyAIAnalysisTemplateRequest : public AbstractModel
                {
                public:
                    ModifyAIAnalysisTemplateRequest();
                    ~ModifyAIAnalysisTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return Definition 
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置
                     * @param _definition 
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

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
                     * @return Name 
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置
                     * @param _name 
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
                     * 获取
                     * @return Comment 
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置
                     * @param _comment 
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
                     * 获取
                     * @return ClassificationConfigure 
                     * 
                     */
                    ClassificationConfigureInfoForUpdate GetClassificationConfigure() const;

                    /**
                     * 设置
                     * @param _classificationConfigure 
                     * 
                     */
                    void SetClassificationConfigure(const ClassificationConfigureInfoForUpdate& _classificationConfigure);

                    /**
                     * 判断参数 ClassificationConfigure 是否已赋值
                     * @return ClassificationConfigure 是否已赋值
                     * 
                     */
                    bool ClassificationConfigureHasBeenSet() const;

                    /**
                     * 获取
                     * @return TagConfigure 
                     * 
                     */
                    TagConfigureInfoForUpdate GetTagConfigure() const;

                    /**
                     * 设置
                     * @param _tagConfigure 
                     * 
                     */
                    void SetTagConfigure(const TagConfigureInfoForUpdate& _tagConfigure);

                    /**
                     * 判断参数 TagConfigure 是否已赋值
                     * @return TagConfigure 是否已赋值
                     * 
                     */
                    bool TagConfigureHasBeenSet() const;

                    /**
                     * 获取
                     * @return CoverConfigure 
                     * 
                     */
                    CoverConfigureInfoForUpdate GetCoverConfigure() const;

                    /**
                     * 设置
                     * @param _coverConfigure 
                     * 
                     */
                    void SetCoverConfigure(const CoverConfigureInfoForUpdate& _coverConfigure);

                    /**
                     * 判断参数 CoverConfigure 是否已赋值
                     * @return CoverConfigure 是否已赋值
                     * 
                     */
                    bool CoverConfigureHasBeenSet() const;

                    /**
                     * 获取
                     * @return FrameTagConfigure 
                     * 
                     */
                    FrameTagConfigureInfoForUpdate GetFrameTagConfigure() const;

                    /**
                     * 设置
                     * @param _frameTagConfigure 
                     * 
                     */
                    void SetFrameTagConfigure(const FrameTagConfigureInfoForUpdate& _frameTagConfigure);

                    /**
                     * 判断参数 FrameTagConfigure 是否已赋值
                     * @return FrameTagConfigure 是否已赋值
                     * 
                     */
                    bool FrameTagConfigureHasBeenSet() const;

                    /**
                     * 获取
                     * @return HighlightConfigure 
                     * 
                     */
                    HighlightsConfigureInfoForUpdate GetHighlightConfigure() const;

                    /**
                     * 设置
                     * @param _highlightConfigure 
                     * 
                     */
                    void SetHighlightConfigure(const HighlightsConfigureInfoForUpdate& _highlightConfigure);

                    /**
                     * 判断参数 HighlightConfigure 是否已赋值
                     * @return HighlightConfigure 是否已赋值
                     * 
                     */
                    bool HighlightConfigureHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 
                     */
                    ClassificationConfigureInfoForUpdate m_classificationConfigure;
                    bool m_classificationConfigureHasBeenSet;

                    /**
                     * 
                     */
                    TagConfigureInfoForUpdate m_tagConfigure;
                    bool m_tagConfigureHasBeenSet;

                    /**
                     * 
                     */
                    CoverConfigureInfoForUpdate m_coverConfigure;
                    bool m_coverConfigureHasBeenSet;

                    /**
                     * 
                     */
                    FrameTagConfigureInfoForUpdate m_frameTagConfigure;
                    bool m_frameTagConfigureHasBeenSet;

                    /**
                     * 
                     */
                    HighlightsConfigureInfoForUpdate m_highlightConfigure;
                    bool m_highlightConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYAIANALYSISTEMPLATEREQUEST_H_
