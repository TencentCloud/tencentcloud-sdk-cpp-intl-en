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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWPORNTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWPORNTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaContentReviewSegmentItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Output for intelligent recognition of pornographic content
                */
                class AiReviewPornTaskOutput : public AbstractModel
                {
                public:
                    AiReviewPornTaskOutput();
                    ~AiReviewPornTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Confidence score for the detected pornographic content. Value range: 0-100
                     * @return Confidence Confidence score for the detected pornographic content. Value range: 0-100
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Confidence score for the detected pornographic content. Value range: 0-100
                     * @param Confidence Confidence score for the detected pornographic content. Value range: 0-100
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取Processing suggestion for the detected pornographic content. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     * @return Suggestion Processing suggestion for the detected pornographic content. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Processing suggestion for the detected pornographic content. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     * @param Suggestion Processing suggestion for the detected pornographic content. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取Labels for the detected pornographic content. Valid values:
<li>porn</li>
<li>sexy</li>
<li>vulgar</li>
<li>intimacy</li>
                     * @return Label Labels for the detected pornographic content. Valid values:
<li>porn</li>
<li>sexy</li>
<li>vulgar</li>
<li>intimacy</li>
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Labels for the detected pornographic content. Valid values:
<li>porn</li>
<li>sexy</li>
<li>vulgar</li>
<li>intimacy</li>
                     * @param Label Labels for the detected pornographic content. Valid values:
<li>porn</li>
<li>sexy</li>
<li>vulgar</li>
<li>intimacy</li>
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取List of video segments that contain detected pornographic content
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `SegmentSetFileUrl`.
                     * @return SegmentSet List of video segments that contain detected pornographic content
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `SegmentSetFileUrl`.
                     */
                    std::vector<MediaContentReviewSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置List of video segments that contain detected pornographic content
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `SegmentSetFileUrl`.
                     * @param SegmentSet List of video segments that contain detected pornographic content
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `SegmentSetFileUrl`.
                     */
                    void SetSegmentSet(const std::vector<MediaContentReviewSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取URL to the file for video segments that contain detected pornographic content. The file is in JSON format and has the same data structure as `SegmentSet`. Instead of being saved permanently, the file is deleted upon the expiration time specified by `SegmentSetFileUrlExpireTime`.
                     * @return SegmentSetFileUrl URL to the file for video segments that contain detected pornographic content. The file is in JSON format and has the same data structure as `SegmentSet`. Instead of being saved permanently, the file is deleted upon the expiration time specified by `SegmentSetFileUrlExpireTime`.
                     */
                    std::string GetSegmentSetFileUrl() const;

                    /**
                     * 设置URL to the file for video segments that contain detected pornographic content. The file is in JSON format and has the same data structure as `SegmentSet`. Instead of being saved permanently, the file is deleted upon the expiration time specified by `SegmentSetFileUrlExpireTime`.
                     * @param SegmentSetFileUrl URL to the file for video segments that contain detected pornographic content. The file is in JSON format and has the same data structure as `SegmentSet`. Instead of being saved permanently, the file is deleted upon the expiration time specified by `SegmentSetFileUrlExpireTime`.
                     */
                    void SetSegmentSetFileUrl(const std::string& _segmentSetFileUrl);

                    /**
                     * 判断参数 SegmentSetFileUrl 是否已赋值
                     * @return SegmentSetFileUrl 是否已赋值
                     */
                    bool SegmentSetFileUrlHasBeenSet() const;

                    /**
                     * 获取Expiration time of the URL to the file for video segments that contain detected pornographic content, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)
                     * @return SegmentSetFileUrlExpireTime Expiration time of the URL to the file for video segments that contain detected pornographic content, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)
                     */
                    std::string GetSegmentSetFileUrlExpireTime() const;

                    /**
                     * 设置Expiration time of the URL to the file for video segments that contain detected pornographic content, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)
                     * @param SegmentSetFileUrlExpireTime Expiration time of the URL to the file for video segments that contain detected pornographic content, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)
                     */
                    void SetSegmentSetFileUrlExpireTime(const std::string& _segmentSetFileUrlExpireTime);

                    /**
                     * 判断参数 SegmentSetFileUrlExpireTime 是否已赋值
                     * @return SegmentSetFileUrlExpireTime 是否已赋值
                     */
                    bool SegmentSetFileUrlExpireTimeHasBeenSet() const;

                private:

                    /**
                     * Confidence score for the detected pornographic content. Value range: 0-100
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Processing suggestion for the detected pornographic content. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Labels for the detected pornographic content. Valid values:
<li>porn</li>
<li>sexy</li>
<li>vulgar</li>
<li>intimacy</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * List of video segments that contain detected pornographic content
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `SegmentSetFileUrl`.
                     */
                    std::vector<MediaContentReviewSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * URL to the file for video segments that contain detected pornographic content. The file is in JSON format and has the same data structure as `SegmentSet`. Instead of being saved permanently, the file is deleted upon the expiration time specified by `SegmentSetFileUrlExpireTime`.
                     */
                    std::string m_segmentSetFileUrl;
                    bool m_segmentSetFileUrlHasBeenSet;

                    /**
                     * Expiration time of the URL to the file for video segments that contain detected pornographic content, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)
                     */
                    std::string m_segmentSetFileUrlExpireTime;
                    bool m_segmentSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWPORNTASKOUTPUT_H_
