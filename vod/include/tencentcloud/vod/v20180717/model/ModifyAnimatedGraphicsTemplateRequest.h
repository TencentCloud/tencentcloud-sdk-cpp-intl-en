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
                     * 获取Unique ID of an animated image generating template.
                     * @return Definition Unique ID of an animated image generating template.
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Unique ID of an animated image generating template.
                     * @param Definition Unique ID of an animated image generating template.
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Name of an animated image generating template. Length limit: 64 characters.
                     * @return Name Name of an animated image generating template. Length limit: 64 characters.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of an animated image generating template. Length limit: 64 characters.
                     * @param Name Name of an animated image generating template. Length limit: 64 characters.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Maximum value of the width (or long side) of an animated image in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
Default value: 0.
                     * @return Width Maximum value of the width (or long side) of an animated image in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
Default value: 0.
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Maximum value of the width (or long side) of an animated image in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
Default value: 0.
                     * @param Width Maximum value of the width (or long side) of an animated image in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
Default value: 0.
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Maximum value of the height (or short side) of an animated image in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
Default value: 0.
                     * @return Height Maximum value of the height (or short side) of an animated image in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
Default value: 0.
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Maximum value of the height (or short side) of an animated image in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
Default value: 0.
                     * @param Height Maximum value of the height (or short side) of an animated image in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
Default value: 0.
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Resolution adaption. Valid values:
<li>open: enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
Default value: open.
                     * @return ResolutionAdaptive Resolution adaption. Valid values:
<li>open: enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
Default value: open.
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置Resolution adaption. Valid values:
<li>open: enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
Default value: open.
                     * @param ResolutionAdaptive Resolution adaption. Valid values:
<li>open: enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
Default value: open.
                     */
                    void SetResolutionAdaptive(const std::string& _resolutionAdaptive);

                    /**
                     * 判断参数 ResolutionAdaptive 是否已赋值
                     * @return ResolutionAdaptive 是否已赋值
                     */
                    bool ResolutionAdaptiveHasBeenSet() const;

                    /**
                     * 获取Animated image format. Valid values: gif, webp.
                     * @return Format Animated image format. Valid values: gif, webp.
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Animated image format. Valid values: gif, webp.
                     * @param Format Animated image format. Valid values: gif, webp.
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取Video frame rate in Hz. Value range: [1, 30].
                     * @return Fps Video frame rate in Hz. Value range: [1, 30].
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置Video frame rate in Hz. Value range: [1, 30].
                     * @param Fps Video frame rate in Hz. Value range: [1, 30].
                     */
                    void SetFps(const uint64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取Image quality. Value range: [1, 100]. Default value: 75.
                     * @return Quality Image quality. Value range: [1, 100]. Default value: 75.
                     */
                    double GetQuality() const;

                    /**
                     * 设置Image quality. Value range: [1, 100]. Default value: 75.
                     * @param Quality Image quality. Value range: [1, 100]. Default value: 75.
                     */
                    void SetQuality(const double& _quality);

                    /**
                     * 判断参数 Quality 是否已赋值
                     * @return Quality 是否已赋值
                     */
                    bool QualityHasBeenSet() const;

                    /**
                     * 获取Template description. Length limit: 256 characters.
                     * @return Comment Template description. Length limit: 256 characters.
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description. Length limit: 256 characters.
                     * @param Comment Template description. Length limit: 256 characters.
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取ID of a [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @return SubAppId ID of a [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置ID of a [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @param SubAppId ID of a [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * Unique ID of an animated image generating template.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Name of an animated image generating template. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Maximum value of the width (or long side) of an animated image in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
Default value: 0.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Maximum value of the height (or short side) of an animated image in px. Value range: 0 and [128, 4,096].
<li>If both `Width` and `Height` are 0, the resolution will be the same as that of the source video;</li>
<li>If `Width` is 0, but `Height` is not 0, `Width` will be proportionally scaled;</li>
<li>If `Width` is not 0, but `Height` is 0, `Height` will be proportionally scaled;</li>
<li>If both `Width` and `Height` are not 0, the custom resolution will be used.</li>
Default value: 0.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Resolution adaption. Valid values:
<li>open: enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
Default value: open.
                     */
                    std::string m_resolutionAdaptive;
                    bool m_resolutionAdaptiveHasBeenSet;

                    /**
                     * Animated image format. Valid values: gif, webp.
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Video frame rate in Hz. Value range: [1, 30].
                     */
                    uint64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * Image quality. Value range: [1, 100]. Default value: 75.
                     */
                    double m_quality;
                    bool m_qualityHasBeenSet;

                    /**
                     * Template description. Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * ID of a [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYANIMATEDGRAPHICSTEMPLATEREQUEST_H_
