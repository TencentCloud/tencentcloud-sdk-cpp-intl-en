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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskClassificationResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskCoverResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskTagResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskFrameTagResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Intelligent analysis results
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
<li>FrameTag: intelligent frame-specific tagging</li>
<li>Highlight: intelligent highlight generating</li>
                     * @return Type Task type. Valid values:
<li>Classification: intelligent categorization</li>
<li>Cover: intelligent cover generating</li>
<li>Tag: intelligent tagging</li>
<li>FrameTag: intelligent frame-specific tagging</li>
<li>Highlight: intelligent highlight generating</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置Task type. Valid values:
<li>Classification: intelligent categorization</li>
<li>Cover: intelligent cover generating</li>
<li>Tag: intelligent tagging</li>
<li>FrameTag: intelligent frame-specific tagging</li>
<li>Highlight: intelligent highlight generating</li>
                     * @param Type Task type. Valid values:
<li>Classification: intelligent categorization</li>
<li>Cover: intelligent cover generating</li>
<li>Tag: intelligent tagging</li>
<li>FrameTag: intelligent frame-specific tagging</li>
<li>Highlight: intelligent highlight generating</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Query result of intelligent categorization task in video content analysis, which is valid if task type is `Classification`.
                     * @return ClassificationTask Query result of intelligent categorization task in video content analysis, which is valid if task type is `Classification`.
                     */
                    AiAnalysisTaskClassificationResult GetClassificationTask() const;

                    /**
                     * 设置Query result of intelligent categorization task in video content analysis, which is valid if task type is `Classification`.
                     * @param ClassificationTask Query result of intelligent categorization task in video content analysis, which is valid if task type is `Classification`.
                     */
                    void SetClassificationTask(const AiAnalysisTaskClassificationResult& _classificationTask);

                    /**
                     * 判断参数 ClassificationTask 是否已赋值
                     * @return ClassificationTask 是否已赋值
                     */
                    bool ClassificationTaskHasBeenSet() const;

                    /**
                     * 获取Query result of intelligent cover generating task in video content analysis, which is valid if task type is `Cover`.
                     * @return CoverTask Query result of intelligent cover generating task in video content analysis, which is valid if task type is `Cover`.
                     */
                    AiAnalysisTaskCoverResult GetCoverTask() const;

                    /**
                     * 设置Query result of intelligent cover generating task in video content analysis, which is valid if task type is `Cover`.
                     * @param CoverTask Query result of intelligent cover generating task in video content analysis, which is valid if task type is `Cover`.
                     */
                    void SetCoverTask(const AiAnalysisTaskCoverResult& _coverTask);

                    /**
                     * 判断参数 CoverTask 是否已赋值
                     * @return CoverTask 是否已赋值
                     */
                    bool CoverTaskHasBeenSet() const;

                    /**
                     * 获取Query result of intelligent tagging task in video content analysis, which is valid if task type is `Tag`.
                     * @return TagTask Query result of intelligent tagging task in video content analysis, which is valid if task type is `Tag`.
                     */
                    AiAnalysisTaskTagResult GetTagTask() const;

                    /**
                     * 设置Query result of intelligent tagging task in video content analysis, which is valid if task type is `Tag`.
                     * @param TagTask Query result of intelligent tagging task in video content analysis, which is valid if task type is `Tag`.
                     */
                    void SetTagTask(const AiAnalysisTaskTagResult& _tagTask);

                    /**
                     * 判断参数 TagTask 是否已赋值
                     * @return TagTask 是否已赋值
                     */
                    bool TagTaskHasBeenSet() const;

                    /**
                     * 获取Query result of intelligent frame-specific tagging task in video content analysis, which is valid if task type is `FrameTag`.
                     * @return FrameTagTask Query result of intelligent frame-specific tagging task in video content analysis, which is valid if task type is `FrameTag`.
                     */
                    AiAnalysisTaskFrameTagResult GetFrameTagTask() const;

                    /**
                     * 设置Query result of intelligent frame-specific tagging task in video content analysis, which is valid if task type is `FrameTag`.
                     * @param FrameTagTask Query result of intelligent frame-specific tagging task in video content analysis, which is valid if task type is `FrameTag`.
                     */
                    void SetFrameTagTask(const AiAnalysisTaskFrameTagResult& _frameTagTask);

                    /**
                     * 判断参数 FrameTagTask 是否已赋值
                     * @return FrameTagTask 是否已赋值
                     */
                    bool FrameTagTaskHasBeenSet() const;

                private:

                    /**
                     * Task type. Valid values:
<li>Classification: intelligent categorization</li>
<li>Cover: intelligent cover generating</li>
<li>Tag: intelligent tagging</li>
<li>FrameTag: intelligent frame-specific tagging</li>
<li>Highlight: intelligent highlight generating</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Query result of intelligent categorization task in video content analysis, which is valid if task type is `Classification`.
                     */
                    AiAnalysisTaskClassificationResult m_classificationTask;
                    bool m_classificationTaskHasBeenSet;

                    /**
                     * Query result of intelligent cover generating task in video content analysis, which is valid if task type is `Cover`.
                     */
                    AiAnalysisTaskCoverResult m_coverTask;
                    bool m_coverTaskHasBeenSet;

                    /**
                     * Query result of intelligent tagging task in video content analysis, which is valid if task type is `Tag`.
                     */
                    AiAnalysisTaskTagResult m_tagTask;
                    bool m_tagTaskHasBeenSet;

                    /**
                     * Query result of intelligent frame-specific tagging task in video content analysis, which is valid if task type is `FrameTag`.
                     */
                    AiAnalysisTaskFrameTagResult m_frameTagTask;
                    bool m_frameTagTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISRESULT_H_
