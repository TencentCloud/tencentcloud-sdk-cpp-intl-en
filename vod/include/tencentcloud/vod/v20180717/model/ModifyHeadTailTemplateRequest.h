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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYHEADTAILTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYHEADTAILTEMPLATEREQUEST_H_

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
                * ModifyHeadTailTemplate request structure.
                */
                class ModifyHeadTailTemplateRequest : public AbstractModel
                {
                public:
                    ModifyHeadTailTemplateRequest();
                    ~ModifyHeadTailTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Opening and ending template ID.
                     * @return Definition Opening and ending template ID.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Opening and ending template ID.
                     * @param _definition Opening and ending template ID.
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

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
                     * 获取Template name. Length limited to 64 characters. If not passed, no modification is made.
                     * @return Name Template name. Length limited to 64 characters. If not passed, no modification is made.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Template name. Length limited to 64 characters. If not passed, no modification is made.
                     * @param _name Template name. Length limited to 64 characters. If not passed, no modification is made.
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
                     * 获取Template description. Length limited to 256 characters. If not passed, no modification is made. If passed empty, the description is cleared.
                     * @return Comment Template description. Length limited to 256 characters. If not passed, no modification is made. If passed empty, the description is cleared.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description. Length limited to 256 characters. If not passed, no modification is made. If passed empty, the description is cleared.
                     * @param _comment Template description. Length limited to 256 characters. If not passed, no modification is made. If passed empty, the description is cleared.
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
                     * 获取Opening candidate list. Fill in the FileId of the video. During transcoding, the opening closest to the aspect ratio of the main content is automatically selected. If the aspect ratios are identical, the candidate positioned towards the front takes precedence. A maximum of 5 title candidates is supported. Not passing this parameter means no modification, while passing an empty array means clearing.
                     * @return HeadCandidateSet Opening candidate list. Fill in the FileId of the video. During transcoding, the opening closest to the aspect ratio of the main content is automatically selected. If the aspect ratios are identical, the candidate positioned towards the front takes precedence. A maximum of 5 title candidates is supported. Not passing this parameter means no modification, while passing an empty array means clearing.
                     * 
                     */
                    std::vector<std::string> GetHeadCandidateSet() const;

                    /**
                     * 设置Opening candidate list. Fill in the FileId of the video. During transcoding, the opening closest to the aspect ratio of the main content is automatically selected. If the aspect ratios are identical, the candidate positioned towards the front takes precedence. A maximum of 5 title candidates is supported. Not passing this parameter means no modification, while passing an empty array means clearing.
                     * @param _headCandidateSet Opening candidate list. Fill in the FileId of the video. During transcoding, the opening closest to the aspect ratio of the main content is automatically selected. If the aspect ratios are identical, the candidate positioned towards the front takes precedence. A maximum of 5 title candidates is supported. Not passing this parameter means no modification, while passing an empty array means clearing.
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
                     * 获取Ending candidate list. Fill in the FileId of the video. During transcoding, the ending with the aspect ratio closest to the main content is automatically selected. If the aspect ratios are identical, candidates positioned towards the front take precedence. A maximum of 5 title candidates is supported. Not passing this parameter means no modification. Passing an empty array means clearing.
                     * @return TailCandidateSet Ending candidate list. Fill in the FileId of the video. During transcoding, the ending with the aspect ratio closest to the main content is automatically selected. If the aspect ratios are identical, candidates positioned towards the front take precedence. A maximum of 5 title candidates is supported. Not passing this parameter means no modification. Passing an empty array means clearing.
                     * 
                     */
                    std::vector<std::string> GetTailCandidateSet() const;

                    /**
                     * 设置Ending candidate list. Fill in the FileId of the video. During transcoding, the ending with the aspect ratio closest to the main content is automatically selected. If the aspect ratios are identical, candidates positioned towards the front take precedence. A maximum of 5 title candidates is supported. Not passing this parameter means no modification. Passing an empty array means clearing.
                     * @param _tailCandidateSet Ending candidate list. Fill in the FileId of the video. During transcoding, the ending with the aspect ratio closest to the main content is automatically selected. If the aspect ratios are identical, candidates positioned towards the front take precedence. A maximum of 5 title candidates is supported. Not passing this parameter means no modification. Passing an empty array means clearing.
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
                     * 获取Filling method. When the aspect ratio of the video stream configuration width and height parameters is inconsistent with that of the original video, the processing method for transcoding is "padding". Optional filling methods:
<li> stretch: Stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched";</li>
<li> gauss: Gaussian blur, maintain video aspect ratio, and use Gaussian blur for the remaining edge part;</li>
<li> white: leave blank, maintain video aspect ratio, and fill the remaining edges with white;</li>
<li> black: Fill with black. Maintain the video aspect ratio and fill the remaining edges with black.</li>
The default value is no modification.
                     * @return FillType Filling method. When the aspect ratio of the video stream configuration width and height parameters is inconsistent with that of the original video, the processing method for transcoding is "padding". Optional filling methods:
<li> stretch: Stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched";</li>
<li> gauss: Gaussian blur, maintain video aspect ratio, and use Gaussian blur for the remaining edge part;</li>
<li> white: leave blank, maintain video aspect ratio, and fill the remaining edges with white;</li>
<li> black: Fill with black. Maintain the video aspect ratio and fill the remaining edges with black.</li>
The default value is no modification.
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置Filling method. When the aspect ratio of the video stream configuration width and height parameters is inconsistent with that of the original video, the processing method for transcoding is "padding". Optional filling methods:
<li> stretch: Stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched";</li>
<li> gauss: Gaussian blur, maintain video aspect ratio, and use Gaussian blur for the remaining edge part;</li>
<li> white: leave blank, maintain video aspect ratio, and fill the remaining edges with white;</li>
<li> black: Fill with black. Maintain the video aspect ratio and fill the remaining edges with black.</li>
The default value is no modification.
                     * @param _fillType Filling method. When the aspect ratio of the video stream configuration width and height parameters is inconsistent with that of the original video, the processing method for transcoding is "padding". Optional filling methods:
<li> stretch: Stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched";</li>
<li> gauss: Gaussian blur, maintain video aspect ratio, and use Gaussian blur for the remaining edge part;</li>
<li> white: leave blank, maintain video aspect ratio, and fill the remaining edges with white;</li>
<li> black: Fill with black. Maintain the video aspect ratio and fill the remaining edges with black.</li>
The default value is no modification.
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
                     * Opening and ending template ID.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Template name. Length limited to 64 characters. If not passed, no modification is made.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Template description. Length limited to 256 characters. If not passed, no modification is made. If passed empty, the description is cleared.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Opening candidate list. Fill in the FileId of the video. During transcoding, the opening closest to the aspect ratio of the main content is automatically selected. If the aspect ratios are identical, the candidate positioned towards the front takes precedence. A maximum of 5 title candidates is supported. Not passing this parameter means no modification, while passing an empty array means clearing.
                     */
                    std::vector<std::string> m_headCandidateSet;
                    bool m_headCandidateSetHasBeenSet;

                    /**
                     * Ending candidate list. Fill in the FileId of the video. During transcoding, the ending with the aspect ratio closest to the main content is automatically selected. If the aspect ratios are identical, candidates positioned towards the front take precedence. A maximum of 5 title candidates is supported. Not passing this parameter means no modification. Passing an empty array means clearing.
                     */
                    std::vector<std::string> m_tailCandidateSet;
                    bool m_tailCandidateSetHasBeenSet;

                    /**
                     * Filling method. When the aspect ratio of the video stream configuration width and height parameters is inconsistent with that of the original video, the processing method for transcoding is "padding". Optional filling methods:
<li> stretch: Stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched";</li>
<li> gauss: Gaussian blur, maintain video aspect ratio, and use Gaussian blur for the remaining edge part;</li>
<li> white: leave blank, maintain video aspect ratio, and fill the remaining edges with white;</li>
<li> black: Fill with black. Maintain the video aspect ratio and fill the remaining edges with black.</li>
The default value is no modification.
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYHEADTAILTEMPLATEREQUEST_H_
