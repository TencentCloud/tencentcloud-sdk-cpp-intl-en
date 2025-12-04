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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVEAIPARAGRAPHINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVEAIPARAGRAPHINFO_H_

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
                class LiveAiParagraphInfo : public AbstractModel
                {
                public:
                    LiveAiParagraphInfo();
                    ~LiveAiParagraphInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Segment summary.
                     * @return Summary Segment summary.
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置Segment summary.
                     * @param _summary Segment summary.
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
                     * 获取Segment keyword.
                     * @return Keywords Segment keyword.
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置Segment keyword.
                     * @param _keywords Segment keyword.
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
                     * 获取Starting time point of the segment, in seconds.
                     * @return StartTimeOffset Starting time point of the segment, in seconds.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Starting time point of the segment, in seconds.
                     * @param _startTimeOffset Starting time point of the segment, in seconds.
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
                     * 获取End time point of the segment, in seconds.
                     * @return EndTimeOffset End time point of the segment, in seconds.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time point of the segment, in seconds.
                     * @param _endTimeOffset End time point of the segment, in seconds.
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取Starting time point of the live streaming segment in ISO date and time format.	
                     * @return BeginTime Starting time point of the live streaming segment in ISO date and time format.	
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置Starting time point of the live streaming segment in ISO date and time format.	
                     * @param _beginTime Starting time point of the live streaming segment in ISO date and time format.	
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取End time point of the live streaming segment in ISO date and time format.	
                     * @return EndTime End time point of the live streaming segment in ISO date and time format.	
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time point of the live streaming segment in ISO date and time format.	
                     * @param _endTime End time point of the live streaming segment in ISO date and time format.	
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Segment summary.
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * Segment title.
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Segment keyword.
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * Starting time point of the segment, in seconds.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time point of the segment, in seconds.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * Starting time point of the live streaming segment in ISO date and time format.	
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * End time point of the live streaming segment in ISO date and time format.	
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVEAIPARAGRAPHINFO_H_
