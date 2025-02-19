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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIPARAGRAPHINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIPARAGRAPHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Segment information.
                */
                class AiParagraphInfo : public AbstractModel
                {
                public:
                    AiParagraphInfo();
                    ~AiParagraphInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Segment summary.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Summary Segment summary.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置Segment summary.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _summary Segment summary.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSummary(const std::string& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取Segment title.
                     * @return Title Segment title.
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Segment title.
                     * @param _title Segment title.
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取Segment keywords.
                     * @return Keywords Segment keywords.
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置Segment keywords.
                     * @param _keywords Segment keywords.
                     * 
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取Segmentation start time point, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTimeOffset Segmentation start time point, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Segmentation start time point, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTimeOffset Segmentation start time point, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取Segmentation end time point, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTimeOffset Segmentation end time point, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置Segmentation end time point, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTimeOffset Segmentation end time point, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * Segment summary.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * Segment title.
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Segment keywords.
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * Segmentation start time point, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * Segmentation end time point, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIPARAGRAPHINFO_H_
