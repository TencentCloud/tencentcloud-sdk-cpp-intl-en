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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWAUDIOVIDEOTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWAUDIOVIDEOTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ReviewAudioVideoSegmentItem.h>
#include <tencentcloud/vod/v20180717/model/ReviewImageResult.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Output of the audio/video moderation task.
                */
                class ReviewAudioVideoTaskOutput : public AbstractModel
                {
                public:
                    ReviewAudioVideoTaskOutput();
                    ~ReviewAudioVideoTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Result suggestion for audio/video content moderation. Value range:
<li>pass: It is recommended to pass.</li>
<li>review: suggest re-examination;</li>
<li>block: suggest banning.</li>
                     * @return Suggestion Result suggestion for audio/video content moderation. Value range:
<li>pass: It is recommended to pass.</li>
<li>review: suggest re-examination;</li>
<li>block: suggest banning.</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Result suggestion for audio/video content moderation. Value range:
<li>pass: It is recommended to pass.</li>
<li>review: suggest re-examination;</li>
<li>block: suggest banning.</li>
                     * @param _suggestion Result suggestion for audio/video content moderation. Value range:
<li>pass: It is recommended to pass.</li>
<li>review: suggest re-examination;</li>
<li>block: suggest banning.</li>
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取Valid when Suggestion is review or block. Indicates the most likely rule violation tag of the audio and video. Value range:
<li>Porn: pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal;</li>
<li>Abuse: abusive language;</li>
<li>Moan: panting.</li>
                     * @return Label Valid when Suggestion is review or block. Indicates the most likely rule violation tag of the audio and video. Value range:
<li>Porn: pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal;</li>
<li>Abuse: abusive language;</li>
<li>Moan: panting.</li>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Valid when Suggestion is review or block. Indicates the most likely rule violation tag of the audio and video. Value range:
<li>Porn: pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal;</li>
<li>Abuse: abusive language;</li>
<li>Moan: panting.</li>
                     * @param _label Valid when Suggestion is review or block. Indicates the most likely rule violation tag of the audio and video. Value range:
<li>Porn: pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal;</li>
<li>Abuse: abusive language;</li>
<li>Moan: panting.</li>
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取Valid when Suggestion is review or block. It indicates the most likely prohibited forms of audio and video. Value range:
<li>Image: people or icons in the image;</li>
<li>OCR: text in the frame;</li>
<li>ASR: text in speech.</li>
<li>Voice: sound.</li>
                     * @return Form Valid when Suggestion is review or block. It indicates the most likely prohibited forms of audio and video. Value range:
<li>Image: people or icons in the image;</li>
<li>OCR: text in the frame;</li>
<li>ASR: text in speech.</li>
<li>Voice: sound.</li>
                     * 
                     */
                    std::string GetForm() const;

                    /**
                     * 设置Valid when Suggestion is review or block. It indicates the most likely prohibited forms of audio and video. Value range:
<li>Image: people or icons in the image;</li>
<li>OCR: text in the frame;</li>
<li>ASR: text in speech.</li>
<li>Voice: sound.</li>
                     * @param _form Valid when Suggestion is review or block. It indicates the most likely prohibited forms of audio and video. Value range:
<li>Image: people or icons in the image;</li>
<li>OCR: text in the frame;</li>
<li>ASR: text in speech.</li>
<li>Voice: sound.</li>
                     * 
                     */
                    void SetForm(const std::string& _form);

                    /**
                     * 判断参数 Form 是否已赋值
                     * @return Form 是否已赋值
                     * 
                     */
                    bool FormHasBeenSet() const;

                    /**
                     * 获取List of video clips suspected of containing violation information.
<font color=red>Note</font>: This list can only display up to the first 10 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     * @return SegmentSet List of video clips suspected of containing violation information.
<font color=red>Note</font>: This list can only display up to the first 10 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     * 
                     */
                    std::vector<ReviewAudioVideoSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置List of video clips suspected of containing violation information.
<font color=red>Note</font>: This list can only display up to the first 10 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     * @param _segmentSet List of video clips suspected of containing violation information.
<font color=red>Note</font>: This list can only display up to the first 10 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     * 
                     */
                    void SetSegmentSet(const std::vector<ReviewAudioVideoSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取URL of video clip list file involved in suspicion of violation information. The file content is in JSON format, and its data structure is consistent with the SegmentSet fields. (The file will not be retained permanently. It will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)
                     * @return SegmentSetFileUrl URL of video clip list file involved in suspicion of violation information. The file content is in JSON format, and its data structure is consistent with the SegmentSet fields. (The file will not be retained permanently. It will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)
                     * 
                     */
                    std::string GetSegmentSetFileUrl() const;

                    /**
                     * 设置URL of video clip list file involved in suspicion of violation information. The file content is in JSON format, and its data structure is consistent with the SegmentSet fields. (The file will not be retained permanently. It will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)
                     * @param _segmentSetFileUrl URL of video clip list file involved in suspicion of violation information. The file content is in JSON format, and its data structure is consistent with the SegmentSet fields. (The file will not be retained permanently. It will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)
                     * 
                     */
                    void SetSegmentSetFileUrl(const std::string& _segmentSetFileUrl);

                    /**
                     * 判断参数 SegmentSetFileUrl 是否已赋值
                     * @return SegmentSetFileUrl 是否已赋值
                     * 
                     */
                    bool SegmentSetFileUrlHasBeenSet() const;

                    /**
                     * 获取Expiration time of the URL of the list of video clips suspected of involving violation information, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return SegmentSetFileUrlExpireTime Expiration time of the URL of the list of video clips suspected of involving violation information, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetSegmentSetFileUrlExpireTime() const;

                    /**
                     * 设置Expiration time of the URL of the list of video clips suspected of involving violation information, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _segmentSetFileUrlExpireTime Expiration time of the URL of the list of video clips suspected of involving violation information, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetSegmentSetFileUrlExpireTime(const std::string& _segmentSetFileUrlExpireTime);

                    /**
                     * 判断参数 SegmentSetFileUrlExpireTime 是否已赋值
                     * @return SegmentSetFileUrlExpireTime 是否已赋值
                     * 
                     */
                    bool SegmentSetFileUrlExpireTimeHasBeenSet() const;

                    /**
                     * 获取Cover review result.
                     * @return CoverReviewResult Cover review result.
                     * 
                     */
                    ReviewImageResult GetCoverReviewResult() const;

                    /**
                     * 设置Cover review result.
                     * @param _coverReviewResult Cover review result.
                     * 
                     */
                    void SetCoverReviewResult(const ReviewImageResult& _coverReviewResult);

                    /**
                     * 判断参数 CoverReviewResult 是否已赋值
                     * @return CoverReviewResult 是否已赋值
                     * 
                     */
                    bool CoverReviewResultHasBeenSet() const;

                private:

                    /**
                     * Result suggestion for audio/video content moderation. Value range:
<li>pass: It is recommended to pass.</li>
<li>review: suggest re-examination;</li>
<li>block: suggest banning.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Valid when Suggestion is review or block. Indicates the most likely rule violation tag of the audio and video. Value range:
<li>Porn: pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal;</li>
<li>Abuse: abusive language;</li>
<li>Moan: panting.</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Valid when Suggestion is review or block. It indicates the most likely prohibited forms of audio and video. Value range:
<li>Image: people or icons in the image;</li>
<li>OCR: text in the frame;</li>
<li>ASR: text in speech.</li>
<li>Voice: sound.</li>
                     */
                    std::string m_form;
                    bool m_formHasBeenSet;

                    /**
                     * List of video clips suspected of containing violation information.
<font color=red>Note</font>: This list can only display up to the first 10 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     */
                    std::vector<ReviewAudioVideoSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * URL of video clip list file involved in suspicion of violation information. The file content is in JSON format, and its data structure is consistent with the SegmentSet fields. (The file will not be retained permanently. It will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)
                     */
                    std::string m_segmentSetFileUrl;
                    bool m_segmentSetFileUrlHasBeenSet;

                    /**
                     * Expiration time of the URL of the list of video clips suspected of involving violation information, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_segmentSetFileUrlExpireTime;
                    bool m_segmentSetFileUrlExpireTimeHasBeenSet;

                    /**
                     * Cover review result.
                     */
                    ReviewImageResult m_coverReviewResult;
                    bool m_coverReviewResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWAUDIOVIDEOTASKOUTPUT_H_
