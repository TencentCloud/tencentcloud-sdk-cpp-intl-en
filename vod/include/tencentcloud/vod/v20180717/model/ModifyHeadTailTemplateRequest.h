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
                     * 获取HeadTail template ID.
                     * @return Definition HeadTail template ID.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置HeadTail template ID.
                     * @param _definition HeadTail template ID.
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
                     * 获取Template name, length limit is 64 characters. Not passing means not modifying.
                     * @return Name Template name, length limit is 64 characters. Not passing means not modifying.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Template name, length limit is 64 characters. Not passing means not modifying.
                     * @param _name Template name, length limit is 64 characters. Not passing means not modifying.
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
                     * 获取Template description, limited to 256 characters. Passing nothing means no modification, passing empty means clearing it.
                     * @return Comment Template description, limited to 256 characters. Passing nothing means no modification, passing empty means clearing it.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description, limited to 256 characters. Passing nothing means no modification, passing empty means clearing it.
                     * @param _comment Template description, limited to 256 characters. Passing nothing means no modification, passing empty means clearing it.
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
                     * 获取Title candidate list, fill in the FileId of the video. When transcoding, the title closest to the aspect ratio of the feature film will be automatically selected (when the aspect ratio is the same, the front candidate will take precedence). Supports up to 5 candidate titles. Not passing it means no modification, passing an empty array means clearing it.
                     * @return HeadCandidateSet Title candidate list, fill in the FileId of the video. When transcoding, the title closest to the aspect ratio of the feature film will be automatically selected (when the aspect ratio is the same, the front candidate will take precedence). Supports up to 5 candidate titles. Not passing it means no modification, passing an empty array means clearing it.
                     * 
                     */
                    std::vector<std::string> GetHeadCandidateSet() const;

                    /**
                     * 设置Title candidate list, fill in the FileId of the video. When transcoding, the title closest to the aspect ratio of the feature film will be automatically selected (when the aspect ratio is the same, the front candidate will take precedence). Supports up to 5 candidate titles. Not passing it means no modification, passing an empty array means clearing it.
                     * @param _headCandidateSet Title candidate list, fill in the FileId of the video. When transcoding, the title closest to the aspect ratio of the feature film will be automatically selected (when the aspect ratio is the same, the front candidate will take precedence). Supports up to 5 candidate titles. Not passing it means no modification, passing an empty array means clearing it.
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
                     * 获取Ending candidate list, fill in the FileId of the video. When transcoding, the ending with the aspect ratio closest to the feature film will be automatically selected (when the aspect ratio is the same, the front candidate will take precedence). Supports up to 5 candidate titles. Not passing it means no modification, passing an empty array means clearing it.
                     * @return TailCandidateSet Ending candidate list, fill in the FileId of the video. When transcoding, the ending with the aspect ratio closest to the feature film will be automatically selected (when the aspect ratio is the same, the front candidate will take precedence). Supports up to 5 candidate titles. Not passing it means no modification, passing an empty array means clearing it.
                     * 
                     */
                    std::vector<std::string> GetTailCandidateSet() const;

                    /**
                     * 设置Ending candidate list, fill in the FileId of the video. When transcoding, the ending with the aspect ratio closest to the feature film will be automatically selected (when the aspect ratio is the same, the front candidate will take precedence). Supports up to 5 candidate titles. Not passing it means no modification, passing an empty array means clearing it.
                     * @param _tailCandidateSet Ending candidate list, fill in the FileId of the video. When transcoding, the ending with the aspect ratio closest to the feature film will be automatically selected (when the aspect ratio is the same, the front candidate will take precedence). Supports up to 5 candidate titles. Not passing it means no modification, passing an empty array means clearing it.
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
The default value is not to be modified.
                     * @return FillType Padding method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the transcoding processing method is "padding". Optional filling method:
<li> stretch: stretch, stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched";</li> 
<li> gauss: Gaussian blur, keep the video aspect ratio unchanged, use Gaussian blur for the remaining edges; </li>
<li> white: leave blank, keep the video aspect ratio unchanged, use the remaining edges for the edge Use white filling; </li>
<li> black: Leave black, keep the video aspect ratio unchanged, and fill the remaining edges with black. </li>
The default value is not to be modified.
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置Padding method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the transcoding processing method is "padding". Optional filling method:
<li> stretch: stretch, stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched";</li> 
<li> gauss: Gaussian blur, keep the video aspect ratio unchanged, use Gaussian blur for the remaining edges; </li>
<li> white: leave blank, keep the video aspect ratio unchanged, use the remaining edges for the edge Use white filling; </li>
<li> black: Leave black, keep the video aspect ratio unchanged, and fill the remaining edges with black. </li>
The default value is not to be modified.
                     * @param _fillType Padding method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the transcoding processing method is "padding". Optional filling method:
<li> stretch: stretch, stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched";</li> 
<li> gauss: Gaussian blur, keep the video aspect ratio unchanged, use Gaussian blur for the remaining edges; </li>
<li> white: leave blank, keep the video aspect ratio unchanged, use the remaining edges for the edge Use white filling; </li>
<li> black: Leave black, keep the video aspect ratio unchanged, and fill the remaining edges with black. </li>
The default value is not to be modified.
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
                     * HeadTail template ID.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Template name, length limit is 64 characters. Not passing means not modifying.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Template description, limited to 256 characters. Passing nothing means no modification, passing empty means clearing it.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Title candidate list, fill in the FileId of the video. When transcoding, the title closest to the aspect ratio of the feature film will be automatically selected (when the aspect ratio is the same, the front candidate will take precedence). Supports up to 5 candidate titles. Not passing it means no modification, passing an empty array means clearing it.
                     */
                    std::vector<std::string> m_headCandidateSet;
                    bool m_headCandidateSetHasBeenSet;

                    /**
                     * Ending candidate list, fill in the FileId of the video. When transcoding, the ending with the aspect ratio closest to the feature film will be automatically selected (when the aspect ratio is the same, the front candidate will take precedence). Supports up to 5 candidate titles. Not passing it means no modification, passing an empty array means clearing it.
                     */
                    std::vector<std::string> m_tailCandidateSet;
                    bool m_tailCandidateSetHasBeenSet;

                    /**
                     * Padding method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the transcoding processing method is "padding". Optional filling method:
<li> stretch: stretch, stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched";</li> 
<li> gauss: Gaussian blur, keep the video aspect ratio unchanged, use Gaussian blur for the remaining edges; </li>
<li> white: leave blank, keep the video aspect ratio unchanged, use the remaining edges for the edge Use white filling; </li>
<li> black: Leave black, keep the video aspect ratio unchanged, and fill the remaining edges with black. </li>
The default value is not to be modified.
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYHEADTAILTEMPLATEREQUEST_H_
