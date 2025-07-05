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
                     * 获取Template name, length limit is 64 characters.
                     * @return Name Template name, length limit is 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Template name, length limit is 64 characters.
                     * @param _name Template name, length limit is 64 characters.
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
                     * 获取<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @return SubAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @param _subAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
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
                     * 获取Template description information, length limit is 256 characters.
                     * @return Comment Template description information, length limit is 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description information, length limit is 256 characters.
                     * @param _comment Template description information, length limit is 256 characters.
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
                     * 获取Title candidate list, fill in the FileId of the video. When transcoding, the title closest to the aspect ratio of the feature film will be automatically selected (when the aspect ratio is the same, the front candidate will take precedence). Supports up to 5 candidate titles.
                     * @return HeadCandidateSet Title candidate list, fill in the FileId of the video. When transcoding, the title closest to the aspect ratio of the feature film will be automatically selected (when the aspect ratio is the same, the front candidate will take precedence). Supports up to 5 candidate titles.
                     * 
                     */
                    std::vector<std::string> GetHeadCandidateSet() const;

                    /**
                     * 设置Title candidate list, fill in the FileId of the video. When transcoding, the title closest to the aspect ratio of the feature film will be automatically selected (when the aspect ratio is the same, the front candidate will take precedence). Supports up to 5 candidate titles.
                     * @param _headCandidateSet Title candidate list, fill in the FileId of the video. When transcoding, the title closest to the aspect ratio of the feature film will be automatically selected (when the aspect ratio is the same, the front candidate will take precedence). Supports up to 5 candidate titles.
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
                     * 获取Ending candidate list, fill in the FileId of the video. When transcoding, the ending with the aspect ratio closest to the feature film will be automatically selected (when the aspect ratio is the same, the front candidate will take precedence). Supports up to 5 candidate endings.
                     * @return TailCandidateSet Ending candidate list, fill in the FileId of the video. When transcoding, the ending with the aspect ratio closest to the feature film will be automatically selected (when the aspect ratio is the same, the front candidate will take precedence). Supports up to 5 candidate endings.
                     * 
                     */
                    std::vector<std::string> GetTailCandidateSet() const;

                    /**
                     * 设置Ending candidate list, fill in the FileId of the video. When transcoding, the ending with the aspect ratio closest to the feature film will be automatically selected (when the aspect ratio is the same, the front candidate will take precedence). Supports up to 5 candidate endings.
                     * @param _tailCandidateSet Ending candidate list, fill in the FileId of the video. When transcoding, the ending with the aspect ratio closest to the feature film will be automatically selected (when the aspect ratio is the same, the front candidate will take precedence). Supports up to 5 candidate endings.
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
                     * 获取Padding method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the transcoding processing method is "padding". Optional filling method:
<li> stretch: stretch, stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched";</li> 
<li> gauss: Gaussian blur, keep the video aspect ratio unchanged, use Gaussian blur for the remaining edges; </li>
<li> white: leave blank, keep the video aspect ratio unchanged, use the remaining edges for the edge Use white filling; </li>
<li> black: Leave black, keep the video aspect ratio unchanged, and fill the remaining edges with black. </li>
Default value: stretch.
                     * @return FillType Padding method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the transcoding processing method is "padding". Optional filling method:
<li> stretch: stretch, stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched";</li> 
<li> gauss: Gaussian blur, keep the video aspect ratio unchanged, use Gaussian blur for the remaining edges; </li>
<li> white: leave blank, keep the video aspect ratio unchanged, use the remaining edges for the edge Use white filling; </li>
<li> black: Leave black, keep the video aspect ratio unchanged, and fill the remaining edges with black. </li>
Default value: stretch.
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置Padding method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the transcoding processing method is "padding". Optional filling method:
<li> stretch: stretch, stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched";</li> 
<li> gauss: Gaussian blur, keep the video aspect ratio unchanged, use Gaussian blur for the remaining edges; </li>
<li> white: leave blank, keep the video aspect ratio unchanged, use the remaining edges for the edge Use white filling; </li>
<li> black: Leave black, keep the video aspect ratio unchanged, and fill the remaining edges with black. </li>
Default value: stretch.
                     * @param _fillType Padding method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the transcoding processing method is "padding". Optional filling method:
<li> stretch: stretch, stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched";</li> 
<li> gauss: Gaussian blur, keep the video aspect ratio unchanged, use Gaussian blur for the remaining edges; </li>
<li> white: leave blank, keep the video aspect ratio unchanged, use the remaining edges for the edge Use white filling; </li>
<li> black: Leave black, keep the video aspect ratio unchanged, and fill the remaining edges with black. </li>
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
                     * Template name, length limit is 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Template description information, length limit is 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Title candidate list, fill in the FileId of the video. When transcoding, the title closest to the aspect ratio of the feature film will be automatically selected (when the aspect ratio is the same, the front candidate will take precedence). Supports up to 5 candidate titles.
                     */
                    std::vector<std::string> m_headCandidateSet;
                    bool m_headCandidateSetHasBeenSet;

                    /**
                     * Ending candidate list, fill in the FileId of the video. When transcoding, the ending with the aspect ratio closest to the feature film will be automatically selected (when the aspect ratio is the same, the front candidate will take precedence). Supports up to 5 candidate endings.
                     */
                    std::vector<std::string> m_tailCandidateSet;
                    bool m_tailCandidateSetHasBeenSet;

                    /**
                     * Padding method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the transcoding processing method is "padding". Optional filling method:
<li> stretch: stretch, stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched";</li> 
<li> gauss: Gaussian blur, keep the video aspect ratio unchanged, use Gaussian blur for the remaining edges; </li>
<li> white: leave blank, keep the video aspect ratio unchanged, use the remaining edges for the edge Use white filling; </li>
<li> black: Leave black, keep the video aspect ratio unchanged, and fill the remaining edges with black. </li>
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
