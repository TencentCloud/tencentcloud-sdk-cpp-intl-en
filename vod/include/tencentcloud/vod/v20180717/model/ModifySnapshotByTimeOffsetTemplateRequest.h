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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYSNAPSHOTBYTIMEOFFSETTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYSNAPSHOTBYTIMEOFFSETTEMPLATEREQUEST_H_

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
                * ModifySnapshotByTimeOffsetTemplate request structure.
                */
                class ModifySnapshotByTimeOffsetTemplateRequest : public AbstractModel
                {
                public:
                    ModifySnapshotByTimeOffsetTemplateRequest();
                    ~ModifySnapshotByTimeOffsetTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Unique identifier of screenshot template at specified time point.</p>
                     * @return Definition <p>Unique identifier of screenshot template at specified time point.</p>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置<p>Unique identifier of screenshot template at specified time point.</p>
                     * @param _definition <p>Unique identifier of screenshot template at specified time point.</p>
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, if they access resources in on-demand applications (whether the default application or a newly created application), this field must be filled with the app ID.</b></p>
                     * @return SubAppId <p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, if they access resources in on-demand applications (whether the default application or a newly created application), this field must be filled with the app ID.</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, if they access resources in on-demand applications (whether the default application or a newly created application), this field must be filled with the app ID.</b></p>
                     * @param _subAppId <p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, if they access resources in on-demand applications (whether the default application or a newly created application), this field must be filled with the app ID.</b></p>
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
                     * 获取<p>Screenshot template name at specified time point. Length limit: 64 characters.</p>
                     * @return Name <p>Screenshot template name at specified time point. Length limit: 64 characters.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Screenshot template name at specified time point. Length limit: 64 characters.</p>
                     * @param _name <p>Screenshot template name at specified time point. Length limit: 64 characters.</p>
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
                     * 获取<p>The maximum value of the screenshot width (or long side). Valid values: 0 and [32, 4096]. Unit: px.<li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.</p>
                     * @return Width <p>The maximum value of the screenshot width (or long side). Valid values: 0 and [32, 4096]. Unit: px.<li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.</p>
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置<p>The maximum value of the screenshot width (or long side). Valid values: 0 and [32, 4096]. Unit: px.<li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.</p>
                     * @param _width <p>The maximum value of the screenshot width (or long side). Valid values: 0 and [32, 4096]. Unit: px.<li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.</p>
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取<p>The maximum value of the screenshot height (or short side). Valid values: 0 and [32, 4096]. Unit: px.<li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.</p>
                     * @return Height <p>The maximum value of the screenshot height (or short side). Valid values: 0 and [32, 4096]. Unit: px.<li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.</p>
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置<p>The maximum value of the screenshot height (or short side). Valid values: 0 and [32, 4096]. Unit: px.<li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.</p>
                     * @param _height <p>The maximum value of the screenshot height (or short side). Valid values: 0 and [32, 4096]. Unit: px.<li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.</p>
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取<p>Resolution adaptation. Available values:</p><li>open: enable. At this point, Width represents the long side of the video, and Height represents the short side;</li><li>close: disable. At this point, Width represents the width of the video, and Height represents the height.</li>Default value: open.
                     * @return ResolutionAdaptive <p>Resolution adaptation. Available values:</p><li>open: enable. At this point, Width represents the long side of the video, and Height represents the short side;</li><li>close: disable. At this point, Width represents the width of the video, and Height represents the height.</li>Default value: open.
                     * 
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置<p>Resolution adaptation. Available values:</p><li>open: enable. At this point, Width represents the long side of the video, and Height represents the short side;</li><li>close: disable. At this point, Width represents the width of the video, and Height represents the height.</li>Default value: open.
                     * @param _resolutionAdaptive <p>Resolution adaptation. Available values:</p><li>open: enable. At this point, Width represents the long side of the video, and Height represents the short side;</li><li>close: disable. At this point, Width represents the width of the video, and Height represents the height.</li>Default value: open.
                     * 
                     */
                    void SetResolutionAdaptive(const std::string& _resolutionAdaptive);

                    /**
                     * 判断参数 ResolutionAdaptive 是否已赋值
                     * @return ResolutionAdaptive 是否已赋值
                     * 
                     */
                    bool ResolutionAdaptiveHasBeenSet() const;

                    /**
                     * 获取<p>Image format. Valid values: jpg, png, and webp. Default value: jpg.</p>
                     * @return Format <p>Image format. Valid values: jpg, png, and webp. Default value: jpg.</p>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置<p>Image format. Valid values: jpg, png, and webp. Default value: jpg.</p>
                     * @param _format <p>Image format. Valid values: jpg, png, and webp. Default value: jpg.</p>
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取<p>Transcoding template description. Length limit: 256 characters.</p>
                     * @return Comment <p>Transcoding template description. Length limit: 256 characters.</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>Transcoding template description. Length limit: 256 characters.</p>
                     * @param _comment <p>Transcoding template description. Length limit: 256 characters.</p>
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
                     * 获取<p>Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "filling". Optional filling modes:</p><li>stretch: stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li><li>black: maintain video aspect ratio, with the remaining edge part filled with black.</li><li>white: maintain video aspect ratio, with the edge remainder filled with white.</li><li>gauss: Gaussian blur, maintain video aspect ratio, with the remaining edge part filled with Gaussian blur.</li>Default value: black.
                     * @return FillType <p>Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "filling". Optional filling modes:</p><li>stretch: stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li><li>black: maintain video aspect ratio, with the remaining edge part filled with black.</li><li>white: maintain video aspect ratio, with the edge remainder filled with white.</li><li>gauss: Gaussian blur, maintain video aspect ratio, with the remaining edge part filled with Gaussian blur.</li>Default value: black.
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置<p>Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "filling". Optional filling modes:</p><li>stretch: stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li><li>black: maintain video aspect ratio, with the remaining edge part filled with black.</li><li>white: maintain video aspect ratio, with the edge remainder filled with white.</li><li>gauss: Gaussian blur, maintain video aspect ratio, with the remaining edge part filled with Gaussian blur.</li>Default value: black.
                     * @param _fillType <p>Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "filling". Optional filling modes:</p><li>stretch: stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li><li>black: maintain video aspect ratio, with the remaining edge part filled with black.</li><li>white: maintain video aspect ratio, with the edge remainder filled with white.</li><li>gauss: Gaussian blur, maintain video aspect ratio, with the remaining edge part filled with Gaussian blur.</li>Default value: black.
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
                     * <p>Unique identifier of screenshot template at specified time point.</p>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, if they access resources in on-demand applications (whether the default application or a newly created application), this field must be filled with the app ID.</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Screenshot template name at specified time point. Length limit: 64 characters.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>The maximum value of the screenshot width (or long side). Valid values: 0 and [32, 4096]. Unit: px.<li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.</p>
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>The maximum value of the screenshot height (or short side). Valid values: 0 and [32, 4096]. Unit: px.<li>When Width and Height are both 0, the resolution is from the same source;</li><li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li><li>When Width is non-0 and Height is 0, the Height is scaled proportionally;</li><li>When both Width and Height are non-0, the resolution is specified by the user.</li>Default value: 0.</p>
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * <p>Resolution adaptation. Available values:</p><li>open: enable. At this point, Width represents the long side of the video, and Height represents the short side;</li><li>close: disable. At this point, Width represents the width of the video, and Height represents the height.</li>Default value: open.
                     */
                    std::string m_resolutionAdaptive;
                    bool m_resolutionAdaptiveHasBeenSet;

                    /**
                     * <p>Image format. Valid values: jpg, png, and webp. Default value: jpg.</p>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * <p>Transcoding template description. Length limit: 256 characters.</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "filling". Optional filling modes:</p><li>stretch: stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li><li>black: maintain video aspect ratio, with the remaining edge part filled with black.</li><li>white: maintain video aspect ratio, with the edge remainder filled with white.</li><li>gauss: Gaussian blur, maintain video aspect ratio, with the remaining edge part filled with Gaussian blur.</li>Default value: black.
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYSNAPSHOTBYTIMEOFFSETTEMPLATEREQUEST_H_
