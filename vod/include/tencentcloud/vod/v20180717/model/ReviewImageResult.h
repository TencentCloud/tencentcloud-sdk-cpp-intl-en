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
                * Image moderation results.
                */
                class ReviewImageResult : public AbstractModel
                {
                public:
                    ReviewImageResult();
                    ~ReviewImageResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image review result suggestion. Value ranges from...to...
<li>pass: it is recommended to pass;</li>
<li>review: suggest re-examination;</li>
<li>block: Suggest banning.</li>
                     * @return Suggestion Image review result suggestion. Value ranges from...to...
<li>pass: it is recommended to pass;</li>
<li>review: suggest re-examination;</li>
<li>block: Suggest banning.</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Image review result suggestion. Value ranges from...to...
<li>pass: it is recommended to pass;</li>
<li>review: suggest re-examination;</li>
<li>block: Suggest banning.</li>
                     * @param _suggestion Image review result suggestion. Value ranges from...to...
<li>pass: it is recommended to pass;</li>
<li>review: suggest re-examination;</li>
<li>block: Suggest banning.</li>
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
                     * 获取The most likely label for the suspicious content. This parameter is valid if `Suggestion` is `review` or `block`. Valid values: <li>`Porn`</li> <li>`Terror`</li>
                     * @return Label The most likely label for the suspicious content. This parameter is valid if `Suggestion` is `review` or `block`. Valid values: <li>`Porn`</li> <li>`Terror`</li>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置The most likely label for the suspicious content. This parameter is valid if `Suggestion` is `review` or `block`. Valid values: <li>`Porn`</li> <li>`Terror`</li>
                     * @param _label The most likely label for the suspicious content. This parameter is valid if `Suggestion` is `review` or `block`. Valid values: <li>`Porn`</li> <li>`Terror`</li>
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
                     * 获取Valid when Suggestion is review or block, indicating the most likely prohibited forms. Value ranges from...to...
<li>Image: The figure or icon on the screen;</li>
<li>OCR: Text on the screen.</li>
                     * @return Form Valid when Suggestion is review or block, indicating the most likely prohibited forms. Value ranges from...to...
<li>Image: The figure or icon on the screen;</li>
<li>OCR: Text on the screen.</li>
                     * 
                     */
                    std::string GetForm() const;

                    /**
                     * 设置Valid when Suggestion is review or block, indicating the most likely prohibited forms. Value ranges from...to...
<li>Image: The figure or icon on the screen;</li>
<li>OCR: Text on the screen.</li>
                     * @param _form Valid when Suggestion is review or block, indicating the most likely prohibited forms. Value ranges from...to...
<li>Image: The figure or icon on the screen;</li>
<li>OCR: Text on the screen.</li>
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
                     * 获取Video clips suspected of containing violation information.
<font color=red>Note</font>: The list only displays the first 10 elements. To obtain the complete result, refer to the corresponding file in SegmentSetFileUrl.
                     * @return SegmentSet Video clips suspected of containing violation information.
<font color=red>Note</font>: The list only displays the first 10 elements. To obtain the complete result, refer to the corresponding file in SegmentSetFileUrl.
                     * 
                     */
                    std::vector<ReviewImageSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置Video clips suspected of containing violation information.
<font color=red>Note</font>: The list only displays the first 10 elements. To obtain the complete result, refer to the corresponding file in SegmentSetFileUrl.
                     * @param _segmentSet Video clips suspected of containing violation information.
<font color=red>Note</font>: The list only displays the first 10 elements. To obtain the complete result, refer to the corresponding file in SegmentSetFileUrl.
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
                     * 获取URL of video clip list file involved in suspicion of violation information. The content of the file is JSON, consistent with the fields of SegmentSet. (The file will not be retained permanently and will be deleted when reaching SegmentSetFileUrlExpireTime.)
                     * @return SegmentSetFileUrl URL of video clip list file involved in suspicion of violation information. The content of the file is JSON, consistent with the fields of SegmentSet. (The file will not be retained permanently and will be deleted when reaching SegmentSetFileUrlExpireTime.)
                     * 
                     */
                    std::string GetSegmentSetFileUrl() const;

                    /**
                     * 设置URL of video clip list file involved in suspicion of violation information. The content of the file is JSON, consistent with the fields of SegmentSet. (The file will not be retained permanently and will be deleted when reaching SegmentSetFileUrlExpireTime.)
                     * @param _segmentSetFileUrl URL of video clip list file involved in suspicion of violation information. The content of the file is JSON, consistent with the fields of SegmentSet. (The file will not be retained permanently and will be deleted when reaching SegmentSetFileUrlExpireTime.)
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
                     * 获取URL expiry time of the list of video clips suspected of involving violation information, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return SegmentSetFileUrlExpireTime URL expiry time of the list of video clips suspected of involving violation information, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetSegmentSetFileUrlExpireTime() const;

                    /**
                     * 设置URL expiry time of the list of video clips suspected of involving violation information, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _segmentSetFileUrlExpireTime URL expiry time of the list of video clips suspected of involving violation information, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * Image review result suggestion. Value ranges from...to...
<li>pass: it is recommended to pass;</li>
<li>review: suggest re-examination;</li>
<li>block: Suggest banning.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * The most likely label for the suspicious content. This parameter is valid if `Suggestion` is `review` or `block`. Valid values: <li>`Porn`</li> <li>`Terror`</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Valid when Suggestion is review or block, indicating the most likely prohibited forms. Value ranges from...to...
<li>Image: The figure or icon on the screen;</li>
<li>OCR: Text on the screen.</li>
                     */
                    std::string m_form;
                    bool m_formHasBeenSet;

                    /**
                     * Video clips suspected of containing violation information.
<font color=red>Note</font>: The list only displays the first 10 elements. To obtain the complete result, refer to the corresponding file in SegmentSetFileUrl.
                     */
                    std::vector<ReviewImageSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * URL of video clip list file involved in suspicion of violation information. The content of the file is JSON, consistent with the fields of SegmentSet. (The file will not be retained permanently and will be deleted when reaching SegmentSetFileUrlExpireTime.)
                     */
                    std::string m_segmentSetFileUrl;
                    bool m_segmentSetFileUrlHasBeenSet;

                    /**
                     * URL expiry time of the list of video clips suspected of involving violation information, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_segmentSetFileUrlExpireTime;
                    bool m_segmentSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGERESULT_H_
