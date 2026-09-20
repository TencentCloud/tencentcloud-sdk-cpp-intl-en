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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEHEADTAILTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEHEADTAILTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateHeadTailTemplate request structure.
                */
                class CreateHeadTailTemplateRequest : public AbstractModel
                {
                public:
                    CreateHeadTailTemplateRequest();
                    ~CreateHeadTailTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template name, length limited to 64 characters.
                     * @return Name Template name, length limited to 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Template name, length limited to 64 characters.
                     * @param _name Template name, length limited to 64 characters.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     * @return SubAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     * @param _subAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取Template description information. The length cannot exceed 256 characters.
                     * @return Comment Template description information. The length cannot exceed 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description information. The length cannot exceed 256 characters.
                     * @param _comment Template description information. The length cannot exceed 256 characters.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Opening candidate list. Fill in the FileId of the video. During transcoding, the opening scene with the aspect ratio closest to that of the main content is automatically selected. If the aspect ratios are identical, candidates positioned towards the front take precedence. A maximum of 5 opening candidates is supported.
                     * @return HeadCandidateSet Opening candidate list. Fill in the FileId of the video. During transcoding, the opening scene with the aspect ratio closest to that of the main content is automatically selected. If the aspect ratios are identical, candidates positioned towards the front take precedence. A maximum of 5 opening candidates is supported.
                     * 
                     */
                    std::vector<std::string> GetHeadCandidateSet() const;

                    /**
                     * 设置Opening candidate list. Fill in the FileId of the video. During transcoding, the opening scene with the aspect ratio closest to that of the main content is automatically selected. If the aspect ratios are identical, candidates positioned towards the front take precedence. A maximum of 5 opening candidates is supported.
                     * @param _headCandidateSet Opening candidate list. Fill in the FileId of the video. During transcoding, the opening scene with the aspect ratio closest to that of the main content is automatically selected. If the aspect ratios are identical, candidates positioned towards the front take precedence. A maximum of 5 opening candidates is supported.
                     * 
                     */
                    void SetHeadCandidateSet(const std::vector<std::string>& _headCandidateSet);

                    /**
                     * 判断参数 HeadCandidateSet 是否已赋值
                     * @return HeadCandidateSet 是否已赋值
                     * 
                     */
                    bool HeadCandidateSetHasBeenSet() const;

                    /**
                     * 获取Ending candidate list. Fill in the FileId of the video. During transcoding, the ending with the aspect ratio closest to the main content is automatically selected. If the aspect ratios are identical, candidates positioned towards the front are prioritized. A maximum of 5 ending candidates is supported.
                     * @return TailCandidateSet Ending candidate list. Fill in the FileId of the video. During transcoding, the ending with the aspect ratio closest to the main content is automatically selected. If the aspect ratios are identical, candidates positioned towards the front are prioritized. A maximum of 5 ending candidates is supported.
                     * 
                     */
                    std::vector<std::string> GetTailCandidateSet() const;

                    /**
                     * 设置Ending candidate list. Fill in the FileId of the video. During transcoding, the ending with the aspect ratio closest to the main content is automatically selected. If the aspect ratios are identical, candidates positioned towards the front are prioritized. A maximum of 5 ending candidates is supported.
                     * @param _tailCandidateSet Ending candidate list. Fill in the FileId of the video. During transcoding, the ending with the aspect ratio closest to the main content is automatically selected. If the aspect ratios are identical, candidates positioned towards the front are prioritized. A maximum of 5 ending candidates is supported.
                     * 
                     */
                    void SetTailCandidateSet(const std::vector<std::string>& _tailCandidateSet);

                    /**
                     * 判断参数 TailCandidateSet 是否已赋值
                     * @return TailCandidateSet 是否已赋值
                     * 
                     */
                    bool TailCandidateSetHasBeenSet() const;

                    /**
                     * 获取Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling methods:
<li> stretch: stretches each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li>
<li> gauss: Gaussian blur, maintain video aspect ratio, and apply Gaussian blur to the remaining edge part;</li>
<li> white: leave blank, maintain video aspect ratio, and fill the remaining edges with white;</li>
<li> black: Fill with black. Maintain the video aspect ratio, and fill the remaining edges with black.</li>
Default value: stretch.
                     * @return FillType Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling methods:
<li> stretch: stretches each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li>
<li> gauss: Gaussian blur, maintain video aspect ratio, and apply Gaussian blur to the remaining edge part;</li>
<li> white: leave blank, maintain video aspect ratio, and fill the remaining edges with white;</li>
<li> black: Fill with black. Maintain the video aspect ratio, and fill the remaining edges with black.</li>
Default value: stretch.
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling methods:
<li> stretch: stretches each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li>
<li> gauss: Gaussian blur, maintain video aspect ratio, and apply Gaussian blur to the remaining edge part;</li>
<li> white: leave blank, maintain video aspect ratio, and fill the remaining edges with white;</li>
<li> black: Fill with black. Maintain the video aspect ratio, and fill the remaining edges with black.</li>
Default value: stretch.
                     * @param _fillType Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling methods:
<li> stretch: stretches each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li>
<li> gauss: Gaussian blur, maintain video aspect ratio, and apply Gaussian blur to the remaining edge part;</li>
<li> white: leave blank, maintain video aspect ratio, and fill the remaining edges with white;</li>
<li> black: Fill with black. Maintain the video aspect ratio, and fill the remaining edges with black.</li>
Default value: stretch.
                     * 
                     */
                    void SetFillType(const std::string& _fillType);

                    /**
                     * 判断参数 FillType 是否已赋值
                     * @return FillType 是否已赋值
                     * 
                     */
                    bool FillTypeHasBeenSet() const;

                private:

                    /**
                     * Template name, length limited to 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Template description information. The length cannot exceed 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Opening candidate list. Fill in the FileId of the video. During transcoding, the opening scene with the aspect ratio closest to that of the main content is automatically selected. If the aspect ratios are identical, candidates positioned towards the front take precedence. A maximum of 5 opening candidates is supported.
                     */
                    std::vector<std::string> m_headCandidateSet;
                    bool m_headCandidateSetHasBeenSet;

                    /**
                     * Ending candidate list. Fill in the FileId of the video. During transcoding, the ending with the aspect ratio closest to the main content is automatically selected. If the aspect ratios are identical, candidates positioned towards the front are prioritized. A maximum of 5 ending candidates is supported.
                     */
                    std::vector<std::string> m_tailCandidateSet;
                    bool m_tailCandidateSetHasBeenSet;

                    /**
                     * Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling methods:
<li> stretch: stretches each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li>
<li> gauss: Gaussian blur, maintain video aspect ratio, and apply Gaussian blur to the remaining edge part;</li>
<li> white: leave blank, maintain video aspect ratio, and fill the remaining edges with white;</li>
<li> black: Fill with black. Maintain the video aspect ratio, and fill the remaining edges with black.</li>
Default value: stretch.
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEHEADTAILTEMPLATEREQUEST_H_
