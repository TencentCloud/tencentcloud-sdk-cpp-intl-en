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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYSAMPLESNAPSHOTTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYSAMPLESNAPSHOTTEMPLATEREQUEST_H_

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
                * ModifySampleSnapshotTemplate request structure.
                */
                class ModifySampleSnapshotTemplateRequest : public AbstractModel
                {
                public:
                    ModifySampleSnapshotTemplateRequest();
                    ~ModifySampleSnapshotTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique identifier of the sampling screenshot template.
                     * @return Definition Unique identifier of the sampling screenshot template.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Unique identifier of the sampling screenshot template.
                     * @param _definition Unique identifier of the sampling screenshot template.
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
                     * 获取<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @return SubAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @param _subAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
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
                     * 获取Sample screenshot template name. The length cannot exceed 64 characters.
                     * @return Name Sample screenshot template name. The length cannot exceed 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Sample screenshot template name. The length cannot exceed 64 characters.
                     * @param _name Sample screenshot template name. The length cannot exceed 64 characters.
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
                     * 获取The maximum value of screenshot width (or long side), value ranges from 0 to [32, 4096], measurement unit: px.<li>When both Width and Height are 0, the resolution is the same as the source.</li><li>When Width is 0 and Height is not 0, Width is scaled proportionally.</li><li>When Width is not 0 and Height is 0, Height is scaled proportionally.</li><li>When both Width and Height are not 0, the resolution is specified by user.</li>Default value: 0.
                     * @return Width The maximum value of screenshot width (or long side), value ranges from 0 to [32, 4096], measurement unit: px.<li>When both Width and Height are 0, the resolution is the same as the source.</li><li>When Width is 0 and Height is not 0, Width is scaled proportionally.</li><li>When Width is not 0 and Height is 0, Height is scaled proportionally.</li><li>When both Width and Height are not 0, the resolution is specified by user.</li>Default value: 0.
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置The maximum value of screenshot width (or long side), value ranges from 0 to [32, 4096], measurement unit: px.<li>When both Width and Height are 0, the resolution is the same as the source.</li><li>When Width is 0 and Height is not 0, Width is scaled proportionally.</li><li>When Width is not 0 and Height is 0, Height is scaled proportionally.</li><li>When both Width and Height are not 0, the resolution is specified by user.</li>Default value: 0.
                     * @param _width The maximum value of screenshot width (or long side), value ranges from 0 to [32, 4096], measurement unit: px.<li>When both Width and Height are 0, the resolution is the same as the source.</li><li>When Width is 0 and Height is not 0, Width is scaled proportionally.</li><li>When Width is not 0 and Height is 0, Height is scaled proportionally.</li><li>When both Width and Height are not 0, the resolution is specified by user.</li>Default value: 0.
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
                     * 获取The maximum value of screenshot height (or short edge), value ranges from 0 to [32, 4096], unit: px.<li>When both Width and Height are 0, the resolution is the same as the source;</li><li>When Width is 0 and Height is not 0, Width is proportionally scaled;</li><li>When Width is not 0 and Height is 0, Height is proportionally scaled;</li><li>When both Width and Height are not 0, the resolution is specified by user.</li>Default value: 0.
                     * @return Height The maximum value of screenshot height (or short edge), value ranges from 0 to [32, 4096], unit: px.<li>When both Width and Height are 0, the resolution is the same as the source;</li><li>When Width is 0 and Height is not 0, Width is proportionally scaled;</li><li>When Width is not 0 and Height is 0, Height is proportionally scaled;</li><li>When both Width and Height are not 0, the resolution is specified by user.</li>Default value: 0.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置The maximum value of screenshot height (or short edge), value ranges from 0 to [32, 4096], unit: px.<li>When both Width and Height are 0, the resolution is the same as the source;</li><li>When Width is 0 and Height is not 0, Width is proportionally scaled;</li><li>When Width is not 0 and Height is 0, Height is proportionally scaled;</li><li>When both Width and Height are not 0, the resolution is specified by user.</li>Default value: 0.
                     * @param _height The maximum value of screenshot height (or short edge), value ranges from 0 to [32, 4096], unit: px.<li>When both Width and Height are 0, the resolution is the same as the source;</li><li>When Width is 0 and Height is not 0, Width is proportionally scaled;</li><li>When Width is not 0 and Height is 0, Height is proportionally scaled;</li><li>When both Width and Height are not 0, the resolution is specified by user.</li>Default value: 0.
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
<li>open: enable. At this point, Width represents the long side of the video, and Height indicates the short side.</li>
<li>close: Closed. At this point, Width represents the Width of the video, and Height indicates the Height of the video.</li>
Default value: open.
                     * @return ResolutionAdaptive Resolution adaptation, available values:
<li>open: enable. At this point, Width represents the long side of the video, and Height indicates the short side.</li>
<li>close: Closed. At this point, Width represents the Width of the video, and Height indicates the Height of the video.</li>
Default value: open.
                     * 
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置Resolution adaptation, available values:
<li>open: enable. At this point, Width represents the long side of the video, and Height indicates the short side.</li>
<li>close: Closed. At this point, Width represents the Width of the video, and Height indicates the Height of the video.</li>
Default value: open.
                     * @param _resolutionAdaptive Resolution adaptation, available values:
<li>open: enable. At this point, Width represents the long side of the video, and Height indicates the short side.</li>
<li>close: Closed. At this point, Width represents the Width of the video, and Height indicates the Height of the video.</li>
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
                     * 获取Sampling screenshot type, Valid value:
<li>Percent: by percent.</li>
<li>Time: By time interval.</li>
                     * @return SampleType Sampling screenshot type, Valid value:
<li>Percent: by percent.</li>
<li>Time: By time interval.</li>
                     * 
                     */
                    std::string GetSampleType() const;

                    /**
                     * 设置Sampling screenshot type, Valid value:
<li>Percent: by percent.</li>
<li>Time: By time interval.</li>
                     * @param _sampleType Sampling screenshot type, Valid value:
<li>Percent: by percent.</li>
<li>Time: By time interval.</li>
                     * 
                     */
                    void SetSampleType(const std::string& _sampleType);

                    /**
                     * 判断参数 SampleType 是否已赋值
                     * @return SampleType 是否已赋值
                     * 
                     */
                    bool SampleTypeHasBeenSet() const;

                    /**
                     * 获取Sampling interval.
<li>When SampleType is Percent, specify the percentage of the sampling interval.</li>
<li>When SampleType is Time, specify the sampling interval in seconds.</li>
                     * @return SampleInterval Sampling interval.
<li>When SampleType is Percent, specify the percentage of the sampling interval.</li>
<li>When SampleType is Time, specify the sampling interval in seconds.</li>
                     * 
                     */
                    uint64_t GetSampleInterval() const;

                    /**
                     * 设置Sampling interval.
<li>When SampleType is Percent, specify the percentage of the sampling interval.</li>
<li>When SampleType is Time, specify the sampling interval in seconds.</li>
                     * @param _sampleInterval Sampling interval.
<li>When SampleType is Percent, specify the percentage of the sampling interval.</li>
<li>When SampleType is Time, specify the sampling interval in seconds.</li>
                     * 
                     */
                    void SetSampleInterval(const uint64_t& _sampleInterval);

                    /**
                     * 判断参数 SampleInterval 是否已赋值
                     * @return SampleInterval 是否已赋值
                     * 
                     */
                    bool SampleIntervalHasBeenSet() const;

                    /**
                     * 获取Image format. Valid values: jpg and png.
                     * @return Format Image format. Valid values: jpg and png.
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Image format. Valid values: jpg and png.
                     * @param _format Image format. Valid values: jpg and png.
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

                    /**
                     * 获取Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling mode:
<li> stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be squashed or stretched.</li>
<li>black: Keep black, maintain video aspect ratio, edges filled with black.</li>
<li>white: Leave blank, maintain video aspect ratio, edge remainder filled with white.</li>
<li>gauss: Gaussian blur, maintain video aspect ratio, use Gaussian blur for the remaining edge part.</li>
Default value: black.
                     * @return FillType Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling mode:
<li> stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be squashed or stretched.</li>
<li>black: Keep black, maintain video aspect ratio, edges filled with black.</li>
<li>white: Leave blank, maintain video aspect ratio, edge remainder filled with white.</li>
<li>gauss: Gaussian blur, maintain video aspect ratio, use Gaussian blur for the remaining edge part.</li>
Default value: black.
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling mode:
<li> stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be squashed or stretched.</li>
<li>black: Keep black, maintain video aspect ratio, edges filled with black.</li>
<li>white: Leave blank, maintain video aspect ratio, edge remainder filled with white.</li>
<li>gauss: Gaussian blur, maintain video aspect ratio, use Gaussian blur for the remaining edge part.</li>
Default value: black.
                     * @param _fillType Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling mode:
<li> stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be squashed or stretched.</li>
<li>black: Keep black, maintain video aspect ratio, edges filled with black.</li>
<li>white: Leave blank, maintain video aspect ratio, edge remainder filled with white.</li>
<li>gauss: Gaussian blur, maintain video aspect ratio, use Gaussian blur for the remaining edge part.</li>
Default value: black.
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
                     * Unique identifier of the sampling screenshot template.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Sample screenshot template name. The length cannot exceed 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The maximum value of screenshot width (or long side), value ranges from 0 to [32, 4096], measurement unit: px.<li>When both Width and Height are 0, the resolution is the same as the source.</li><li>When Width is 0 and Height is not 0, Width is scaled proportionally.</li><li>When Width is not 0 and Height is 0, Height is scaled proportionally.</li><li>When both Width and Height are not 0, the resolution is specified by user.</li>Default value: 0.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The maximum value of screenshot height (or short edge), value ranges from 0 to [32, 4096], unit: px.<li>When both Width and Height are 0, the resolution is the same as the source;</li><li>When Width is 0 and Height is not 0, Width is proportionally scaled;</li><li>When Width is not 0 and Height is 0, Height is proportionally scaled;</li><li>When both Width and Height are not 0, the resolution is specified by user.</li>Default value: 0.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Resolution adaptation, available values:
<li>open: enable. At this point, Width represents the long side of the video, and Height indicates the short side.</li>
<li>close: Closed. At this point, Width represents the Width of the video, and Height indicates the Height of the video.</li>
Default value: open.
                     */
                    std::string m_resolutionAdaptive;
                    bool m_resolutionAdaptiveHasBeenSet;

                    /**
                     * Sampling screenshot type, Valid value:
<li>Percent: by percent.</li>
<li>Time: By time interval.</li>
                     */
                    std::string m_sampleType;
                    bool m_sampleTypeHasBeenSet;

                    /**
                     * Sampling interval.
<li>When SampleType is Percent, specify the percentage of the sampling interval.</li>
<li>When SampleType is Time, specify the sampling interval in seconds.</li>
                     */
                    uint64_t m_sampleInterval;
                    bool m_sampleIntervalHasBeenSet;

                    /**
                     * Image format. Valid values: jpg and png.
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Template description, with a length limit of 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Filling method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "padding". Optional filling mode:
<li> stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be squashed or stretched.</li>
<li>black: Keep black, maintain video aspect ratio, edges filled with black.</li>
<li>white: Leave blank, maintain video aspect ratio, edge remainder filled with white.</li>
<li>gauss: Gaussian blur, maintain video aspect ratio, use Gaussian blur for the remaining edge part.</li>
Default value: black.
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYSAMPLESNAPSHOTTEMPLATEREQUEST_H_
