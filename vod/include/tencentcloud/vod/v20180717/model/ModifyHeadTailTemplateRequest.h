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
                     * 获取<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @return SubAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @param _subAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
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
                     * 获取Template name. Length limit: 64 characters. Leave it empty to skip modification.
                     * @return Name Template name. Length limit: 64 characters. Leave it empty to skip modification.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Template name. Length limit: 64 characters. Leave it empty to skip modification.
                     * @param _name Template name. Length limit: 64 characters. Leave it empty to skip modification.
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
                     * 获取Template description, with a length limit of 256 characters. Not passing it means no modification, while passing an empty value means clearing it.
                     * @return Comment Template description, with a length limit of 256 characters. Not passing it means no modification, while passing an empty value means clearing it.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description, with a length limit of 256 characters. Not passing it means no modification, while passing an empty value means clearing it.
                     * @param _comment Template description, with a length limit of 256 characters. Not passing it means no modification, while passing an empty value means clearing it.
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
                     * 获取Opening Credits Candidate List. Fill in the FileId of the video. During transcoding, the opening scene with the closest aspect ratio to the main content will be automatically selected (identical aspect ratio gives precedence to candidates positioned towards the front). Supports up to 5 title candidates. Not passing represents no modification, passing an empty array represents clearing.
                     * @return HeadCandidateSet Opening Credits Candidate List. Fill in the FileId of the video. During transcoding, the opening scene with the closest aspect ratio to the main content will be automatically selected (identical aspect ratio gives precedence to candidates positioned towards the front). Supports up to 5 title candidates. Not passing represents no modification, passing an empty array represents clearing.
                     * 
                     */
                    std::vector<std::string> GetHeadCandidateSet() const;

                    /**
                     * 设置Opening Credits Candidate List. Fill in the FileId of the video. During transcoding, the opening scene with the closest aspect ratio to the main content will be automatically selected (identical aspect ratio gives precedence to candidates positioned towards the front). Supports up to 5 title candidates. Not passing represents no modification, passing an empty array represents clearing.
                     * @param _headCandidateSet Opening Credits Candidate List. Fill in the FileId of the video. During transcoding, the opening scene with the closest aspect ratio to the main content will be automatically selected (identical aspect ratio gives precedence to candidates positioned towards the front). Supports up to 5 title candidates. Not passing represents no modification, passing an empty array represents clearing.
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
                     * 获取Ending candidate list. Fill in the FileId of the video. During transcoding, the system will automatically select the ending with the aspect ratio closest to the main content (if identical, the candidate positioned towards the front takes precedence). Supports up to 5 title candidates. Omission means no modification, while an empty array means clearing.
                     * @return TailCandidateSet Ending candidate list. Fill in the FileId of the video. During transcoding, the system will automatically select the ending with the aspect ratio closest to the main content (if identical, the candidate positioned towards the front takes precedence). Supports up to 5 title candidates. Omission means no modification, while an empty array means clearing.
                     * 
                     */
                    std::vector<std::string> GetTailCandidateSet() const;

                    /**
                     * 设置Ending candidate list. Fill in the FileId of the video. During transcoding, the system will automatically select the ending with the aspect ratio closest to the main content (if identical, the candidate positioned towards the front takes precedence). Supports up to 5 title candidates. Omission means no modification, while an empty array means clearing.
                     * @param _tailCandidateSet Ending candidate list. Fill in the FileId of the video. During transcoding, the system will automatically select the ending with the aspect ratio closest to the main content (if identical, the candidate positioned towards the front takes precedence). Supports up to 5 title candidates. Omission means no modification, while an empty array means clearing.
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
                     * 获取Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling mode:
<li> stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li>
<li> gauss: Gaussian blur, maintain video aspect ratio, use Gaussian blur for the remaining edge part;</li>
<li> white: Leave blank, maintain video aspect ratio, edge remainder filled with white;</li>
<li>Black: Keep black, maintain video aspect ratio, edges filled with black.</li>
The default value is no modification.
                     * @return FillType Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling mode:
<li> stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li>
<li> gauss: Gaussian blur, maintain video aspect ratio, use Gaussian blur for the remaining edge part;</li>
<li> white: Leave blank, maintain video aspect ratio, edge remainder filled with white;</li>
<li>Black: Keep black, maintain video aspect ratio, edges filled with black.</li>
The default value is no modification.
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling mode:
<li> stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li>
<li> gauss: Gaussian blur, maintain video aspect ratio, use Gaussian blur for the remaining edge part;</li>
<li> white: Leave blank, maintain video aspect ratio, edge remainder filled with white;</li>
<li>Black: Keep black, maintain video aspect ratio, edges filled with black.</li>
The default value is no modification.
                     * @param _fillType Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling mode:
<li> stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li>
<li> gauss: Gaussian blur, maintain video aspect ratio, use Gaussian blur for the remaining edge part;</li>
<li> white: Leave blank, maintain video aspect ratio, edge remainder filled with white;</li>
<li>Black: Keep black, maintain video aspect ratio, edges filled with black.</li>
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
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Template name. Length limit: 64 characters. Leave it empty to skip modification.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Template description, with a length limit of 256 characters. Not passing it means no modification, while passing an empty value means clearing it.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Opening Credits Candidate List. Fill in the FileId of the video. During transcoding, the opening scene with the closest aspect ratio to the main content will be automatically selected (identical aspect ratio gives precedence to candidates positioned towards the front). Supports up to 5 title candidates. Not passing represents no modification, passing an empty array represents clearing.
                     */
                    std::vector<std::string> m_headCandidateSet;
                    bool m_headCandidateSetHasBeenSet;

                    /**
                     * Ending candidate list. Fill in the FileId of the video. During transcoding, the system will automatically select the ending with the aspect ratio closest to the main content (if identical, the candidate positioned towards the front takes precedence). Supports up to 5 title candidates. Omission means no modification, while an empty array means clearing.
                     */
                    std::vector<std::string> m_tailCandidateSet;
                    bool m_tailCandidateSetHasBeenSet;

                    /**
                     * Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling mode:
<li> stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li>
<li> gauss: Gaussian blur, maintain video aspect ratio, use Gaussian blur for the remaining edge part;</li>
<li> white: Leave blank, maintain video aspect ratio, edge remainder filled with white;</li>
<li>Black: Keep black, maintain video aspect ratio, edges filled with black.</li>
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
