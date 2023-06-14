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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISRESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskClassificationResult.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskCoverResult.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskTagResult.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskFrameTagResult.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskHighlightResult.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Intelligent analysis result
                */
                class AiAnalysisResult : public AbstractModel
                {
                public:
                    AiAnalysisResult();
                    ~AiAnalysisResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task type. Valid values:
<li>Classification: intelligent categorization</li>
<li>Cover: intelligent cover generating</li>
<li>Tag: intelligent tagging</li>
<li>FrameTag: intelligent frame tagging</li>
<li>Highlight: intelligent highlight generating</li>
                     * @return Type Task type. Valid values:
<li>Classification: intelligent categorization</li>
<li>Cover: intelligent cover generating</li>
<li>Tag: intelligent tagging</li>
<li>FrameTag: intelligent frame tagging</li>
<li>Highlight: intelligent highlight generating</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Task type. Valid values:
<li>Classification: intelligent categorization</li>
<li>Cover: intelligent cover generating</li>
<li>Tag: intelligent tagging</li>
<li>FrameTag: intelligent frame tagging</li>
<li>Highlight: intelligent highlight generating</li>
                     * @param _type Task type. Valid values:
<li>Classification: intelligent categorization</li>
<li>Cover: intelligent cover generating</li>
<li>Tag: intelligent tagging</li>
<li>FrameTag: intelligent frame tagging</li>
<li>Highlight: intelligent highlight generating</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Query result of intelligent categorization task in video content analysis, which is valid if task type is `Classification`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ClassificationTask Query result of intelligent categorization task in video content analysis, which is valid if task type is `Classification`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiAnalysisTaskClassificationResult GetClassificationTask() const;

                    /**
                     * 设置Query result of intelligent categorization task in video content analysis, which is valid if task type is `Classification`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _classificationTask Query result of intelligent categorization task in video content analysis, which is valid if task type is `Classification`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClassificationTask(const AiAnalysisTaskClassificationResult& _classificationTask);

                    /**
                     * 判断参数 ClassificationTask 是否已赋值
                     * @return ClassificationTask 是否已赋值
                     * 
                     */
                    bool ClassificationTaskHasBeenSet() const;

                    /**
                     * 获取Query result of intelligent cover generating task in video content analysis, which is valid if task type is `Cover`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CoverTask Query result of intelligent cover generating task in video content analysis, which is valid if task type is `Cover`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiAnalysisTaskCoverResult GetCoverTask() const;

                    /**
                     * 设置Query result of intelligent cover generating task in video content analysis, which is valid if task type is `Cover`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _coverTask Query result of intelligent cover generating task in video content analysis, which is valid if task type is `Cover`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCoverTask(const AiAnalysisTaskCoverResult& _coverTask);

                    /**
                     * 判断参数 CoverTask 是否已赋值
                     * @return CoverTask 是否已赋值
                     * 
                     */
                    bool CoverTaskHasBeenSet() const;

                    /**
                     * 获取Query result of intelligent tagging task in video content analysis, which is valid if task type is `Tag`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TagTask Query result of intelligent tagging task in video content analysis, which is valid if task type is `Tag`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiAnalysisTaskTagResult GetTagTask() const;

                    /**
                     * 设置Query result of intelligent tagging task in video content analysis, which is valid if task type is `Tag`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tagTask Query result of intelligent tagging task in video content analysis, which is valid if task type is `Tag`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTagTask(const AiAnalysisTaskTagResult& _tagTask);

                    /**
                     * 判断参数 TagTask 是否已赋值
                     * @return TagTask 是否已赋值
                     * 
                     */
                    bool TagTaskHasBeenSet() const;

                    /**
                     * 获取Query result of intelligent frame-specific tagging task in video content analysis, which is valid if task type is `FrameTag`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FrameTagTask Query result of intelligent frame-specific tagging task in video content analysis, which is valid if task type is `FrameTag`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiAnalysisTaskFrameTagResult GetFrameTagTask() const;

                    /**
                     * 设置Query result of intelligent frame-specific tagging task in video content analysis, which is valid if task type is `FrameTag`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _frameTagTask Query result of intelligent frame-specific tagging task in video content analysis, which is valid if task type is `FrameTag`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFrameTagTask(const AiAnalysisTaskFrameTagResult& _frameTagTask);

                    /**
                     * 判断参数 FrameTagTask 是否已赋值
                     * @return FrameTagTask 是否已赋值
                     * 
                     */
                    bool FrameTagTaskHasBeenSet() const;

                    /**
                     * 获取Query result of an intelligent highlight generating task in video content analysis, which is valid when task type is `Highlight`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HighlightTask Query result of an intelligent highlight generating task in video content analysis, which is valid when task type is `Highlight`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiAnalysisTaskHighlightResult GetHighlightTask() const;

                    /**
                     * 设置Query result of an intelligent highlight generating task in video content analysis, which is valid when task type is `Highlight`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _highlightTask Query result of an intelligent highlight generating task in video content analysis, which is valid when task type is `Highlight`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHighlightTask(const AiAnalysisTaskHighlightResult& _highlightTask);

                    /**
                     * 判断参数 HighlightTask 是否已赋值
                     * @return HighlightTask 是否已赋值
                     * 
                     */
                    bool HighlightTaskHasBeenSet() const;

                private:

                    /**
                     * Task type. Valid values:
<li>Classification: intelligent categorization</li>
<li>Cover: intelligent cover generating</li>
<li>Tag: intelligent tagging</li>
<li>FrameTag: intelligent frame tagging</li>
<li>Highlight: intelligent highlight generating</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Query result of intelligent categorization task in video content analysis, which is valid if task type is `Classification`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AiAnalysisTaskClassificationResult m_classificationTask;
                    bool m_classificationTaskHasBeenSet;

                    /**
                     * Query result of intelligent cover generating task in video content analysis, which is valid if task type is `Cover`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AiAnalysisTaskCoverResult m_coverTask;
                    bool m_coverTaskHasBeenSet;

                    /**
                     * Query result of intelligent tagging task in video content analysis, which is valid if task type is `Tag`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AiAnalysisTaskTagResult m_tagTask;
                    bool m_tagTaskHasBeenSet;

                    /**
                     * Query result of intelligent frame-specific tagging task in video content analysis, which is valid if task type is `FrameTag`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AiAnalysisTaskFrameTagResult m_frameTagTask;
                    bool m_frameTagTaskHasBeenSet;

                    /**
                     * Query result of an intelligent highlight generating task in video content analysis, which is valid when task type is `Highlight`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AiAnalysisTaskHighlightResult m_highlightTask;
                    bool m_highlightTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISRESULT_H_
