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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIANALYSISTEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIANALYSISTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ClassificationConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/TagConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/CoverConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/FrameTagConfigureInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
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
                     * 获取Name of the video analysis template, length limited to 64 characters.
                     * @return Name Name of the video analysis template, length limited to 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the video analysis template, length limited to 64 characters.
                     * @param _name Name of the video analysis template, length limited to 64 characters.
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
                     * 获取Description of the video analysis template, length limited to 256 characters.
                     * @return Comment Description of the video analysis template, length limited to 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Description of the video analysis template, length limited to 256 characters.
                     * @param _comment Description of the video analysis template, length limited to 256 characters.
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
                     * 获取Intelligent Classification Task Control Parameters.
                     * @return ClassificationConfigure Intelligent Classification Task Control Parameters.
                     * 
                     */
                    ClassificationConfigureInfo GetClassificationConfigure() const;

                    /**
                     * 设置Intelligent Classification Task Control Parameters.
                     * @param _classificationConfigure Intelligent Classification Task Control Parameters.
                     * 
                     */
                    void SetClassificationConfigure(const ClassificationConfigureInfo& _classificationConfigure);

                    /**
                     * 判断参数 ClassificationConfigure 是否已赋值
                     * @return ClassificationConfigure 是否已赋值
                     * 
                     */
                    bool ClassificationConfigureHasBeenSet() const;

                    /**
                     * 获取Intelligent tag task control parameter.
                     * @return TagConfigure Intelligent tag task control parameter.
                     * 
                     */
                    TagConfigureInfo GetTagConfigure() const;

                    /**
                     * 设置Intelligent tag task control parameter.
                     * @param _tagConfigure Intelligent tag task control parameter.
                     * 
                     */
                    void SetTagConfigure(const TagConfigureInfo& _tagConfigure);

                    /**
                     * 判断参数 TagConfigure 是否已赋值
                     * @return TagConfigure 是否已赋值
                     * 
                     */
                    bool TagConfigureHasBeenSet() const;

                    /**
                     * 获取Intelligent Cover Task Control Parameters.
                     * @return CoverConfigure Intelligent Cover Task Control Parameters.
                     * 
                     */
                    CoverConfigureInfo GetCoverConfigure() const;

                    /**
                     * 设置Intelligent Cover Task Control Parameters.
                     * @param _coverConfigure Intelligent Cover Task Control Parameters.
                     * 
                     */
                    void SetCoverConfigure(const CoverConfigureInfo& _coverConfigure);

                    /**
                     * 判断参数 CoverConfigure 是否已赋值
                     * @return CoverConfigure 是否已赋值
                     * 
                     */
                    bool CoverConfigureHasBeenSet() const;

                    /**
                     * 获取Intelligent frame-specific tagging task control parameter.
                     * @return FrameTagConfigure Intelligent frame-specific tagging task control parameter.
                     * 
                     */
                    FrameTagConfigureInfo GetFrameTagConfigure() const;

                    /**
                     * 设置Intelligent frame-specific tagging task control parameter.
                     * @param _frameTagConfigure Intelligent frame-specific tagging task control parameter.
                     * 
                     */
                    void SetFrameTagConfigure(const FrameTagConfigureInfo& _frameTagConfigure);

                    /**
                     * 判断参数 FrameTagConfigure 是否已赋值
                     * @return FrameTagConfigure 是否已赋值
                     * 
                     */
                    bool FrameTagConfigureHasBeenSet() const;

                private:

                    /**
                     * Name of the video analysis template, length limited to 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description of the video analysis template, length limited to 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Intelligent Classification Task Control Parameters.
                     */
                    ClassificationConfigureInfo m_classificationConfigure;
                    bool m_classificationConfigureHasBeenSet;

                    /**
                     * Intelligent tag task control parameter.
                     */
                    TagConfigureInfo m_tagConfigure;
                    bool m_tagConfigureHasBeenSet;

                    /**
                     * Intelligent Cover Task Control Parameters.
                     */
                    CoverConfigureInfo m_coverConfigure;
                    bool m_coverConfigureHasBeenSet;

                    /**
                     * Intelligent frame-specific tagging task control parameter.
                     */
                    FrameTagConfigureInfo m_frameTagConfigure;
                    bool m_frameTagConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIANALYSISTEMPLATEREQUEST_H_
