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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ANIMATEDGRAPHICSTEMPLATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ANIMATEDGRAPHICSTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Details of an animated image generating template.
                */
                class AnimatedGraphicsTemplate : public AbstractModel
                {
                public:
                    AnimatedGraphicsTemplate();
                    ~AnimatedGraphicsTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Template type. Valid values:
<li>Preset: preset template;</li>
<li>Custom: custom template.</li>
                     * @return Type Template type. Valid values:
<li>Preset: preset template;</li>
<li>Custom: custom template.</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置Template type. Valid values:
<li>Preset: preset template;</li>
<li>Custom: custom template.</li>
                     * @param Type Template type. Valid values:
<li>Preset: preset template;</li>
<li>Custom: custom template.</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Name of an animated image generating template.
                     * @return Name Name of an animated image generating template.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of an animated image generating template.
                     * @param Name Name of an animated image generating template.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Description of an animated image generating template.
                     * @return Comment Description of an animated image generating template.
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Description of an animated image generating template.
                     * @param Comment Description of an animated image generating template.
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

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
                     * 获取Animated image format.
                     * @return Format Animated image format.
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Animated image format.
                     * @param Format Animated image format.
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取Frame rate.
                     * @return Fps Frame rate.
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置Frame rate.
                     * @param Fps Frame rate.
                     */
                    void SetFps(const uint64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取Image quality.
                     * @return Quality Image quality.
                     */
                    double GetQuality() const;

                    /**
                     * 设置Image quality.
                     * @param Quality Image quality.
                     */
                    void SetQuality(const double& _quality);

                    /**
                     * 判断参数 Quality 是否已赋值
                     * @return Quality 是否已赋值
                     */
                    bool QualityHasBeenSet() const;

                    /**
                     * 获取Creation time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return CreateTime Creation time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param CreateTime Creation time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modified time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return UpdateTime Last modified time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param UpdateTime Last modified time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Unique ID of an animated image generating template.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Template type. Valid values:
<li>Preset: preset template;</li>
<li>Custom: custom template.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Name of an animated image generating template.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description of an animated image generating template.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

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
                     * Animated image format.
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Frame rate.
                     */
                    uint64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * Image quality.
                     */
                    double m_quality;
                    bool m_qualityHasBeenSet;

                    /**
                     * Creation time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modified time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ANIMATEDGRAPHICSTEMPLATE_H_
