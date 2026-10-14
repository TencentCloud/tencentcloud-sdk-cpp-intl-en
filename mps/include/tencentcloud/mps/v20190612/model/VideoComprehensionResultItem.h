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
                * Video storyboard recognition result.
                */
                class VideoComprehensionResultItem : public AbstractModel
                {
                public:
                    VideoComprehensionResultItem();
                    ~VideoComprehensionResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start time of the storyboard segment, in seconds.

                     * @return StartTime Start time of the storyboard segment, in seconds.

                     * 
                     */
                    double GetStartTime() const;

                    /**
                     * 设置Start time of the storyboard segment, in seconds.

                     * @param _startTime Start time of the storyboard segment, in seconds.

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
                     * 获取Segment end time (unit: second)
                     * @return EndTime Segment end time (unit: second)
                     * 
                     */
                    double GetEndTime() const;

                    /**
                     * 设置Segment end time (unit: second)
                     * @param _endTime Segment end time (unit: second)
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
                     * 获取Description of the storyboard segment information
                     * @return Description Description of the storyboard segment information
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of the storyboard segment information
                     * @param _description Description of the storyboard segment information
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

                private:

                    /**
                     * Start time of the storyboard segment, in seconds.

                     */
                    double m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Segment end time (unit: second)
                     */
                    double m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Segment title.
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Description of the storyboard segment information
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Segment keywords.
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOCOMPREHENSIONRESULTITEM_H_
