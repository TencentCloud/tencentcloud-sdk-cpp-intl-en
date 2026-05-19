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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYANIMATEDGRAPHICSTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYANIMATEDGRAPHICSTEMPLATEREQUEST_H_

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
                * ModifyAnimatedGraphicsTemplate request structure.
                */
                class ModifyAnimatedGraphicsTemplateRequest : public AbstractModel
                {
                public:
                    ModifyAnimatedGraphicsTemplateRequest();
                    ~ModifyAnimatedGraphicsTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique identifier of the rotation diagram template.
                     * @return Definition Unique identifier of the rotation diagram template.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Unique identifier of the rotation diagram template.
                     * @param _definition Unique identifier of the rotation diagram template.
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
                     * 获取Rotating image template name. Length limit: 64 characters.
                     * @return Name Rotating image template name. Length limit: 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Rotating image template name. Length limit: 64 characters.
                     * @param _name Rotating image template name. Length limit: 64 characters.
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
                     * 获取Maximum value of animated gif width (or long side), value ranges from 0 to [32, 4096], unit: px.<li>When Width and Height are 0, Same Resolution Source;</li><li>When Width is 0 and Height is not 0, proportionally scale Width;</li><li>When Width is not 0 and Height is 0, proportionally scale Height;</li><li>When Width and Height are not 0, resolution specified by user.</li>Default value: 0.
                     * @return Width Maximum value of animated gif width (or long side), value ranges from 0 to [32, 4096], unit: px.<li>When Width and Height are 0, Same Resolution Source;</li><li>When Width is 0 and Height is not 0, proportionally scale Width;</li><li>When Width is not 0 and Height is 0, proportionally scale Height;</li><li>When Width and Height are not 0, resolution specified by user.</li>Default value: 0.
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Maximum value of animated gif width (or long side), value ranges from 0 to [32, 4096], unit: px.<li>When Width and Height are 0, Same Resolution Source;</li><li>When Width is 0 and Height is not 0, proportionally scale Width;</li><li>When Width is not 0 and Height is 0, proportionally scale Height;</li><li>When Width and Height are not 0, resolution specified by user.</li>Default value: 0.
                     * @param _width Maximum value of animated gif width (or long side), value ranges from 0 to [32, 4096], unit: px.<li>When Width and Height are 0, Same Resolution Source;</li><li>When Width is 0 and Height is not 0, proportionally scale Width;</li><li>When Width is not 0 and Height is 0, proportionally scale Height;</li><li>When Width and Height are not 0, resolution specified by user.</li>Default value: 0.
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
                     * 获取The maximum value of animated gif height (or short side), value ranges from 0 to [32, 4096], unit: px. <li>When both Width and Height are 0, the resolution is Same Resolution Source;</li> <li>When Width is 0 and Height is not 0, Width is proportionally scaled;</li> <li>When Width is not 0 and Height is 0, Height is proportionally scaled;</li> <li>When both Width and Height are not 0, the resolution is specified by user.</li> Default value: 0.
                     * @return Height The maximum value of animated gif height (or short side), value ranges from 0 to [32, 4096], unit: px. <li>When both Width and Height are 0, the resolution is Same Resolution Source;</li> <li>When Width is 0 and Height is not 0, Width is proportionally scaled;</li> <li>When Width is not 0 and Height is 0, Height is proportionally scaled;</li> <li>When both Width and Height are not 0, the resolution is specified by user.</li> Default value: 0.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置The maximum value of animated gif height (or short side), value ranges from 0 to [32, 4096], unit: px. <li>When both Width and Height are 0, the resolution is Same Resolution Source;</li> <li>When Width is 0 and Height is not 0, Width is proportionally scaled;</li> <li>When Width is not 0 and Height is 0, Height is proportionally scaled;</li> <li>When both Width and Height are not 0, the resolution is specified by user.</li> Default value: 0.
                     * @param _height The maximum value of animated gif height (or short side), value ranges from 0 to [32, 4096], unit: px. <li>When both Width and Height are 0, the resolution is Same Resolution Source;</li> <li>When Width is 0 and Height is not 0, Width is proportionally scaled;</li> <li>When Width is not 0 and Height is 0, Height is proportionally scaled;</li> <li>When both Width and Height are not 0, the resolution is specified by user.</li> Default value: 0.
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
                     * 获取Resolution adaptation, available values:
<li>open: start. At this point, Width represents the long side of the video, and Height indicates the short side of the video;</li>
<li>close: Close. At this point, Width represents the width of the video, and Height indicates the height of the video.</li>
Default value: open.
                     * @return ResolutionAdaptive Resolution adaptation, available values:
<li>open: start. At this point, Width represents the long side of the video, and Height indicates the short side of the video;</li>
<li>close: Close. At this point, Width represents the width of the video, and Height indicates the height of the video.</li>
Default value: open.
                     * 
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置Resolution adaptation, available values:
<li>open: start. At this point, Width represents the long side of the video, and Height indicates the short side of the video;</li>
<li>close: Close. At this point, Width represents the width of the video, and Height indicates the height of the video.</li>
Default value: open.
                     * @param _resolutionAdaptive Resolution adaptation, available values:
<li>open: start. At this point, Width represents the long side of the video, and Height indicates the short side of the video;</li>
<li>close: Close. At this point, Width represents the width of the video, and Height indicates the height of the video.</li>
Default value: open.
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
                     * 获取Animated image file format, value is gif and webp.
                     * @return Format Animated image file format, value is gif and webp.
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Animated image file format, value is gif and webp.
                     * @param _format Animated image file format, value is gif and webp.
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
                     * 获取Frame rate. Value ranges from 1 to 30. Unit: Hz.
                     * @return Fps Frame rate. Value ranges from 1 to 30. Unit: Hz.
                     * 
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置Frame rate. Value ranges from 1 to 30. Unit: Hz.
                     * @param _fps Frame rate. Value ranges from 1 to 30. Unit: Hz.
                     * 
                     */
                    void SetFps(const uint64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取Image quality. Valid range: 1 - 100. Default value: 75.
                     * @return Quality Image quality. Valid range: 1 - 100. Default value: 75.
                     * 
                     */
                    double GetQuality() const;

                    /**
                     * 设置Image quality. Valid range: 1 - 100. Default value: 75.
                     * @param _quality Image quality. Valid range: 1 - 100. Default value: 75.
                     * 
                     */
                    void SetQuality(const double& _quality);

                    /**
                     * 判断参数 Quality 是否已赋值
                     * @return Quality 是否已赋值
                     * 
                     */
                    bool QualityHasBeenSet() const;

                    /**
                     * 获取Template description, with a length limit of 256 characters.
                     * @return Comment Template description, with a length limit of 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description, with a length limit of 256 characters.
                     * @param _comment Template description, with a length limit of 256 characters.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * Unique identifier of the rotation diagram template.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Rotating image template name. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Maximum value of animated gif width (or long side), value ranges from 0 to [32, 4096], unit: px.<li>When Width and Height are 0, Same Resolution Source;</li><li>When Width is 0 and Height is not 0, proportionally scale Width;</li><li>When Width is not 0 and Height is 0, proportionally scale Height;</li><li>When Width and Height are not 0, resolution specified by user.</li>Default value: 0.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The maximum value of animated gif height (or short side), value ranges from 0 to [32, 4096], unit: px. <li>When both Width and Height are 0, the resolution is Same Resolution Source;</li> <li>When Width is 0 and Height is not 0, Width is proportionally scaled;</li> <li>When Width is not 0 and Height is 0, Height is proportionally scaled;</li> <li>When both Width and Height are not 0, the resolution is specified by user.</li> Default value: 0.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Resolution adaptation, available values:
<li>open: start. At this point, Width represents the long side of the video, and Height indicates the short side of the video;</li>
<li>close: Close. At this point, Width represents the width of the video, and Height indicates the height of the video.</li>
Default value: open.
                     */
                    std::string m_resolutionAdaptive;
                    bool m_resolutionAdaptiveHasBeenSet;

                    /**
                     * Animated image file format, value is gif and webp.
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Frame rate. Value ranges from 1 to 30. Unit: Hz.
                     */
                    uint64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * Image quality. Valid range: 1 - 100. Default value: 75.
                     */
                    double m_quality;
                    bool m_qualityHasBeenSet;

                    /**
                     * Template description, with a length limit of 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYANIMATEDGRAPHICSTEMPLATEREQUEST_H_
