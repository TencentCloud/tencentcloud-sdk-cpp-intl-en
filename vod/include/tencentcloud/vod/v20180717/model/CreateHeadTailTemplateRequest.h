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
                     * 获取<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate on-demand services after December 25, 2023, they must fill this field with the application ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b>
                     * @return SubAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate on-demand services after December 25, 2023, they must fill this field with the application ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate on-demand services after December 25, 2023, they must fill this field with the application ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b>
                     * @param _subAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate on-demand services after December 25, 2023, they must fill this field with the application ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b>
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
                     * 获取Opening Credits Candidate List. Fill in the FileId of the video. During transcoding, a title candidate with the aspect ratio closest to the main content will be automatically selected (when identical, precedence is given to candidates positioned towards the front). Supports up to 5 title candidates.
                     * @return HeadCandidateSet Opening Credits Candidate List. Fill in the FileId of the video. During transcoding, a title candidate with the aspect ratio closest to the main content will be automatically selected (when identical, precedence is given to candidates positioned towards the front). Supports up to 5 title candidates.
                     * 
                     */
                    std::vector<std::string> GetHeadCandidateSet() const;

                    /**
                     * 设置Opening Credits Candidate List. Fill in the FileId of the video. During transcoding, a title candidate with the aspect ratio closest to the main content will be automatically selected (when identical, precedence is given to candidates positioned towards the front). Supports up to 5 title candidates.
                     * @param _headCandidateSet Opening Credits Candidate List. Fill in the FileId of the video. During transcoding, a title candidate with the aspect ratio closest to the main content will be automatically selected (when identical, precedence is given to candidates positioned towards the front). Supports up to 5 title candidates.
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
                     * 获取Ending candidate list. Fill in the FileId of the video. During transcoding, the system will automatically select the ending with the closest aspect ratio to the main content (if identical, the candidate positioned towards the front takes precedence). Supports up to 5 ending candidates.
                     * @return TailCandidateSet Ending candidate list. Fill in the FileId of the video. During transcoding, the system will automatically select the ending with the closest aspect ratio to the main content (if identical, the candidate positioned towards the front takes precedence). Supports up to 5 ending candidates.
                     * 
                     */
                    std::vector<std::string> GetTailCandidateSet() const;

                    /**
                     * 设置Ending candidate list. Fill in the FileId of the video. During transcoding, the system will automatically select the ending with the closest aspect ratio to the main content (if identical, the candidate positioned towards the front takes precedence). Supports up to 5 ending candidates.
                     * @param _tailCandidateSet Ending candidate list. Fill in the FileId of the video. During transcoding, the system will automatically select the ending with the closest aspect ratio to the main content (if identical, the candidate positioned towards the front takes precedence). Supports up to 5 ending candidates.
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
                     * 获取Filling method. When video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling mode:
<li> stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be squashed or stretched.</li>
<li> gauss: Gaussian blur, maintain video aspect ratio, use Gaussian blur for the remaining edge part;</li>
<li>White: Leave blank, maintain video aspect ratio, edge remainder filled with white;</li>
<li> black: Keep black edges to maintain video aspect ratio, with edges filled with black.</li>
Default value: stretch.
                     * @return FillType Filling method. When video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling mode:
<li> stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be squashed or stretched.</li>
<li> gauss: Gaussian blur, maintain video aspect ratio, use Gaussian blur for the remaining edge part;</li>
<li>White: Leave blank, maintain video aspect ratio, edge remainder filled with white;</li>
<li> black: Keep black edges to maintain video aspect ratio, with edges filled with black.</li>
Default value: stretch.
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置Filling method. When video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling mode:
<li> stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be squashed or stretched.</li>
<li> gauss: Gaussian blur, maintain video aspect ratio, use Gaussian blur for the remaining edge part;</li>
<li>White: Leave blank, maintain video aspect ratio, edge remainder filled with white;</li>
<li> black: Keep black edges to maintain video aspect ratio, with edges filled with black.</li>
Default value: stretch.
                     * @param _fillType Filling method. When video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling mode:
<li> stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be squashed or stretched.</li>
<li> gauss: Gaussian blur, maintain video aspect ratio, use Gaussian blur for the remaining edge part;</li>
<li>White: Leave blank, maintain video aspect ratio, edge remainder filled with white;</li>
<li> black: Keep black edges to maintain video aspect ratio, with edges filled with black.</li>
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
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate on-demand services after December 25, 2023, they must fill this field with the application ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Template description information. The length cannot exceed 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Opening Credits Candidate List. Fill in the FileId of the video. During transcoding, a title candidate with the aspect ratio closest to the main content will be automatically selected (when identical, precedence is given to candidates positioned towards the front). Supports up to 5 title candidates.
                     */
                    std::vector<std::string> m_headCandidateSet;
                    bool m_headCandidateSetHasBeenSet;

                    /**
                     * Ending candidate list. Fill in the FileId of the video. During transcoding, the system will automatically select the ending with the closest aspect ratio to the main content (if identical, the candidate positioned towards the front takes precedence). Supports up to 5 ending candidates.
                     */
                    std::vector<std::string> m_tailCandidateSet;
                    bool m_tailCandidateSetHasBeenSet;

                    /**
                     * Filling method. When video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling mode:
<li> stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be squashed or stretched.</li>
<li> gauss: Gaussian blur, maintain video aspect ratio, use Gaussian blur for the remaining edge part;</li>
<li>White: Leave blank, maintain video aspect ratio, edge remainder filled with white;</li>
<li> black: Keep black edges to maintain video aspect ratio, with edges filled with black.</li>
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
