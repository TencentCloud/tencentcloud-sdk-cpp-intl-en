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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTEMPLATEITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTEMPLATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * AI-based intelligent analysis template details
                */
                class AIAnalysisTemplateItem : public AbstractModel
                {
                public:
                    AIAnalysisTemplateItem();
                    ~AIAnalysisTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of intelligent analysis template.
                     * @return Definition Unique ID of intelligent analysis template.
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Unique ID of intelligent analysis template.
                     * @param Definition Unique ID of intelligent analysis template.
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Intelligent analysis template name.
                     * @return Name Intelligent analysis template name.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Intelligent analysis template name.
                     * @param Name Intelligent analysis template name.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Intelligent analysis template description.
                     * @return Comment Intelligent analysis template description.
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Intelligent analysis template description.
                     * @param Comment Intelligent analysis template description.
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Control parameter of intelligent categorization task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ClassificationConfigure Control parameter of intelligent categorization task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ClassificationConfigureInfo GetClassificationConfigure() const;

                    /**
                     * 设置Control parameter of intelligent categorization task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ClassificationConfigure Control parameter of intelligent categorization task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClassificationConfigure(const ClassificationConfigureInfo& _classificationConfigure);

                    /**
                     * 判断参数 ClassificationConfigure 是否已赋值
                     * @return ClassificationConfigure 是否已赋值
                     */
                    bool ClassificationConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of intelligent tagging task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TagConfigure Control parameter of intelligent tagging task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    TagConfigureInfo GetTagConfigure() const;

                    /**
                     * 设置Control parameter of intelligent tagging task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TagConfigure Control parameter of intelligent tagging task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTagConfigure(const TagConfigureInfo& _tagConfigure);

                    /**
                     * 判断参数 TagConfigure 是否已赋值
                     * @return TagConfigure 是否已赋值
                     */
                    bool TagConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of intelligent cover generating task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CoverConfigure Control parameter of intelligent cover generating task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    CoverConfigureInfo GetCoverConfigure() const;

                    /**
                     * 设置Control parameter of intelligent cover generating task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CoverConfigure Control parameter of intelligent cover generating task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCoverConfigure(const CoverConfigureInfo& _coverConfigure);

                    /**
                     * 判断参数 CoverConfigure 是否已赋值
                     * @return CoverConfigure 是否已赋值
                     */
                    bool CoverConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of intelligent frame-specific tagging task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FrameTagConfigure Control parameter of intelligent frame-specific tagging task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    FrameTagConfigureInfo GetFrameTagConfigure() const;

                    /**
                     * 设置Control parameter of intelligent frame-specific tagging task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param FrameTagConfigure Control parameter of intelligent frame-specific tagging task.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creation time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     * @return CreateTime Creation time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     * @param CreateTime Creation time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modified time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     * @return UpdateTime Last modified time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     * @param UpdateTime Last modified time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Unique ID of intelligent analysis template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Intelligent analysis template name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Intelligent analysis template description.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Control parameter of intelligent categorization task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ClassificationConfigureInfo m_classificationConfigure;
                    bool m_classificationConfigureHasBeenSet;

                    /**
                     * Control parameter of intelligent tagging task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    TagConfigureInfo m_tagConfigure;
                    bool m_tagConfigureHasBeenSet;

                    /**
                     * Control parameter of intelligent cover generating task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    CoverConfigureInfo m_coverConfigure;
                    bool m_coverConfigureHasBeenSet;

                    /**
                     * Control parameter of intelligent frame-specific tagging task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    FrameTagConfigureInfo m_frameTagConfigure;
                    bool m_frameTagConfigureHasBeenSet;

                    /**
                     * Control parameter of an intelligent highlight generating task.
                     */
                    HighlightsConfigureInfo m_highlightConfigure;
                    bool m_highlightConfigureHasBeenSet;

                    /**
                     * Creation time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modified time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTEMPLATEITEM_H_
