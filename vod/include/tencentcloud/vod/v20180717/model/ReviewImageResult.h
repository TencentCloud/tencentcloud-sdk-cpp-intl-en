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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGERESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ReviewImageSegmentItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Image review result.
                */
                class ReviewImageResult : public AbstractModel
                {
                public:
                    ReviewImageResult();
                    ~ReviewImageResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Result suggestion for image moderation. Value range:
<li>pass: it is recommended to pass;</li>
<li>review: suggest re-examination;</li>
<li>block: suggest banning.</li>
                     * @return Suggestion Result suggestion for image moderation. Value range:
<li>pass: it is recommended to pass;</li>
<li>review: suggest re-examination;</li>
<li>block: suggest banning.</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Result suggestion for image moderation. Value range:
<li>pass: it is recommended to pass;</li>
<li>review: suggest re-examination;</li>
<li>block: suggest banning.</li>
                     * @param _suggestion Result suggestion for image moderation. Value range:
<li>pass: it is recommended to pass;</li>
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
                     * 获取Tag that is most likely to violate the rule. Valid when Suggestion is review or block. Value range:
<li>Porn: Pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal activities;</li>
<li>Abuse: abusive language.</li>
                     * @return Label Tag that is most likely to violate the rule. Valid when Suggestion is review or block. Value range:
<li>Porn: Pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal activities;</li>
<li>Abuse: abusive language.</li>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Tag that is most likely to violate the rule. Valid when Suggestion is review or block. Value range:
<li>Porn: Pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal activities;</li>
<li>Abuse: abusive language.</li>
                     * @param _label Tag that is most likely to violate the rule. Valid when Suggestion is review or block. Value range:
<li>Porn: Pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal activities;</li>
<li>Abuse: abusive language.</li>
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
                     * 获取Valid when Suggestion is review or block. It indicates the most likely prohibited forms. Value range:
<li>Image: people or icons in the image;</li>
<li>OCR: text on the screen.</li>
                     * @return Form Valid when Suggestion is review or block. It indicates the most likely prohibited forms. Value range:
<li>Image: people or icons in the image;</li>
<li>OCR: text on the screen.</li>
                     * 
                     */
                    std::string GetForm() const;

                    /**
                     * 设置Valid when Suggestion is review or block. It indicates the most likely prohibited forms. Value range:
<li>Image: people or icons in the image;</li>
<li>OCR: text on the screen.</li>
                     * @param _form Valid when Suggestion is review or block. It indicates the most likely prohibited forms. Value range:
<li>Image: people or icons in the image;</li>
<li>OCR: text on the screen.</li>
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
                    std::vector<ReviewImageSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置List of video clips suspected of containing violation information.
<font color=red>Note</font>: This list can only display up to the first 10 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     * @param _segmentSet List of video clips suspected of containing violation information.
<font color=red>Note</font>: This list can only display up to the first 10 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     * 
                     */
                    void SetSegmentSet(const std::vector<ReviewImageSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取URL of the video clip list file involved in suspicion of violation information. The file content is in JSON format, and its data structure is consistent with the fields of SegmentSet. (The file is not retained permanently. It will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)
                     * @return SegmentSetFileUrl URL of the video clip list file involved in suspicion of violation information. The file content is in JSON format, and its data structure is consistent with the fields of SegmentSet. (The file is not retained permanently. It will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)
                     * 
                     */
                    std::string GetSegmentSetFileUrl() const;

                    /**
                     * 设置URL of the video clip list file involved in suspicion of violation information. The file content is in JSON format, and its data structure is consistent with the fields of SegmentSet. (The file is not retained permanently. It will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)
                     * @param _segmentSetFileUrl URL of the video clip list file involved in suspicion of violation information. The file content is in JSON format, and its data structure is consistent with the fields of SegmentSet. (The file is not retained permanently. It will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)
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
                     * 获取URL expiry time of the list of video clips suspected of involving violation information in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return SegmentSetFileUrlExpireTime URL expiry time of the list of video clips suspected of involving violation information in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetSegmentSetFileUrlExpireTime() const;

                    /**
                     * 设置URL expiry time of the list of video clips suspected of involving violation information in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _segmentSetFileUrlExpireTime URL expiry time of the list of video clips suspected of involving violation information in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetSegmentSetFileUrlExpireTime(const std::string& _segmentSetFileUrlExpireTime);

                    /**
                     * 判断参数 SegmentSetFileUrlExpireTime 是否已赋值
                     * @return SegmentSetFileUrlExpireTime 是否已赋值
                     * 
                     */
                    bool SegmentSetFileUrlExpireTimeHasBeenSet() const;

                private:

                    /**
                     * Result suggestion for image moderation. Value range:
<li>pass: it is recommended to pass;</li>
<li>review: suggest re-examination;</li>
<li>block: suggest banning.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Tag that is most likely to violate the rule. Valid when Suggestion is review or block. Value range:
<li>Porn: Pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal activities;</li>
<li>Abuse: abusive language.</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Valid when Suggestion is review or block. It indicates the most likely prohibited forms. Value range:
<li>Image: people or icons in the image;</li>
<li>OCR: text on the screen.</li>
                     */
                    std::string m_form;
                    bool m_formHasBeenSet;

                    /**
                     * List of video clips suspected of containing violation information.
<font color=red>Note</font>: This list can only display up to the first 10 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     */
                    std::vector<ReviewImageSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * URL of the video clip list file involved in suspicion of violation information. The file content is in JSON format, and its data structure is consistent with the fields of SegmentSet. (The file is not retained permanently. It will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)
                     */
                    std::string m_segmentSetFileUrl;
                    bool m_segmentSetFileUrlHasBeenSet;

                    /**
                     * URL expiry time of the list of video clips suspected of involving violation information in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_segmentSetFileUrlExpireTime;
                    bool m_segmentSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGERESULT_H_
