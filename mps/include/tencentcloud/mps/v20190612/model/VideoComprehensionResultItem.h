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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOCOMPREHENSIONRESULTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOCOMPREHENSIONRESULTITEM_H_

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
                * Video shot understanding result.
                */
                class VideoComprehensionResultItem : public AbstractModel
                {
                public:
                    VideoComprehensionResultItem();
                    ~VideoComprehensionResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Segment start time (unit: seconds).

                     * @return StartTime Segment start time (unit: seconds).

                     * 
                     */
                    double GetStartTime() const;

                    /**
                     * 设置Segment start time (unit: seconds).

                     * @param _startTime Segment start time (unit: seconds).

                     * 
                     */
                    void SetStartTime(const double& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Segment end time (unit: s).
                     * @return EndTime Segment end time (unit: s).
                     * 
                     */
                    double GetEndTime() const;

                    /**
                     * 设置Segment end time (unit: s).
                     * @param _endTime Segment end time (unit: s).
                     * 
                     */
                    void SetEndTime(const double& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Video clip title.
                     * @return Title Video clip title.
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Video clip title.
                     * @param _title Video clip title.
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
                     * 获取Storyboard clip information description.
                     * @return Description Storyboard clip information description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Storyboard clip information description.
                     * @param _description Storyboard clip information description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Scene clip keywords.
                     * @return Keywords Scene clip keywords.
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置Scene clip keywords.
                     * @param _keywords Scene clip keywords.
                     * 
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                private:

                    /**
                     * Segment start time (unit: seconds).

                     */
                    double m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Segment end time (unit: s).
                     */
                    double m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Video clip title.
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Storyboard clip information description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Scene clip keywords.
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOCOMPREHENSIONRESULTITEM_H_
