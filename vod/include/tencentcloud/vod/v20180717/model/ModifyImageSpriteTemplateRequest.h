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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYIMAGESPRITETEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYIMAGESPRITETEMPLATEREQUEST_H_

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
                * ModifyImageSpriteTemplate request structure.
                */
                class ModifyImageSpriteTemplateRequest : public AbstractModel
                {
                public:
                    ModifyImageSpriteTemplateRequest();
                    ~ModifyImageSpriteTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique identifier of the sprite template.
                     * @return Definition Unique identifier of the sprite template.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Unique identifier of the sprite template.
                     * @param _definition Unique identifier of the sprite template.
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
                     * 获取Sprite image template name. Length limit: 64 characters.
                     * @return Name Sprite image template name. Length limit: 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Sprite image template name. Length limit: 64 characters.
                     * @param _name Sprite image template name. Length limit: 64 characters.
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
                     * 获取Width of small images in sprite image, in the range of [32, 4096], unit: px.
                     * @return Width Width of small images in sprite image, in the range of [32, 4096], unit: px.
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Width of small images in sprite image, in the range of [32, 4096], unit: px.
                     * @param _width Width of small images in sprite image, in the range of [32, 4096], unit: px.
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
                     * 获取Height of small images in sprite image, in the range of [32, 4096], unit: px.
                     * @return Height Height of small images in sprite image, in the range of [32, 4096], unit: px.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Height of small images in sprite image, in the range of [32, 4096], unit: px.
                     * @param _height Height of small images in sprite image, in the range of [32, 4096], unit: px.
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
                     * 获取Sampling type, Valid value:
<li>Percent: by percent.</li>
<li>Time: By time interval.</li>
                     * @return SampleType Sampling type, Valid value:
<li>Percent: by percent.</li>
<li>Time: By time interval.</li>
                     * 
                     */
                    std::string GetSampleType() const;

                    /**
                     * 设置Sampling type, Valid value:
<li>Percent: by percent.</li>
<li>Time: By time interval.</li>
                     * @param _sampleType Sampling type, Valid value:
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
                     * 获取Number of rows of small images in sprite image.
                     * @return RowCount Number of rows of small images in sprite image.
                     * 
                     */
                    uint64_t GetRowCount() const;

                    /**
                     * 设置Number of rows of small images in sprite image.
                     * @param _rowCount Number of rows of small images in sprite image.
                     * 
                     */
                    void SetRowCount(const uint64_t& _rowCount);

                    /**
                     * 判断参数 RowCount 是否已赋值
                     * @return RowCount 是否已赋值
                     * 
                     */
                    bool RowCountHasBeenSet() const;

                    /**
                     * 获取Number of columns of small images in sprite image.
                     * @return ColumnCount Number of columns of small images in sprite image.
                     * 
                     */
                    uint64_t GetColumnCount() const;

                    /**
                     * 设置Number of columns of small images in sprite image.
                     * @param _columnCount Number of columns of small images in sprite image.
                     * 
                     */
                    void SetColumnCount(const uint64_t& _columnCount);

                    /**
                     * 判断参数 ColumnCount 是否已赋值
                     * @return ColumnCount 是否已赋值
                     * 
                     */
                    bool ColumnCountHasBeenSet() const;

                    /**
                     * 获取Filling method. When video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "fill". Optional filling modes: <li>stretch: stretch each frame to fill the entire screen, possibly causing the transcoded video to be squashed or stretched;</li><li>black: maintain video aspect ratio, remaining edge part filled with black;</li><li>white: maintain video aspect ratio, remaining edge part filled with white;</li><li>gauss: maintain video aspect ratio, remaining edge part filled with Gaussian blur.</li>Default value: black.
                     * @return FillType Filling method. When video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "fill". Optional filling modes: <li>stretch: stretch each frame to fill the entire screen, possibly causing the transcoded video to be squashed or stretched;</li><li>black: maintain video aspect ratio, remaining edge part filled with black;</li><li>white: maintain video aspect ratio, remaining edge part filled with white;</li><li>gauss: maintain video aspect ratio, remaining edge part filled with Gaussian blur.</li>Default value: black.
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置Filling method. When video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "fill". Optional filling modes: <li>stretch: stretch each frame to fill the entire screen, possibly causing the transcoded video to be squashed or stretched;</li><li>black: maintain video aspect ratio, remaining edge part filled with black;</li><li>white: maintain video aspect ratio, remaining edge part filled with white;</li><li>gauss: maintain video aspect ratio, remaining edge part filled with Gaussian blur.</li>Default value: black.
                     * @param _fillType Filling method. When video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "fill". Optional filling modes: <li>stretch: stretch each frame to fill the entire screen, possibly causing the transcoded video to be squashed or stretched;</li><li>black: maintain video aspect ratio, remaining edge part filled with black;</li><li>white: maintain video aspect ratio, remaining edge part filled with white;</li><li>gauss: maintain video aspect ratio, remaining edge part filled with Gaussian blur.</li>Default value: black.
                     * 
                     */
                    void SetFillType(const std::string& _fillType);

                    /**
                     * 判断参数 FillType 是否已赋值
                     * @return FillType 是否已赋值
                     * 
                     */
                    bool FillTypeHasBeenSet() const;

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
                     * 获取Image format. Value:
<li> jpg: jpg format;</li>
<li>png: png format.</li>
<li>WEBP: webp format.</li>
                     * @return Format Image format. Value:
<li> jpg: jpg format;</li>
<li>png: png format.</li>
<li>WEBP: webp format.</li>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Image format. Value:
<li> jpg: jpg format;</li>
<li>png: png format.</li>
<li>WEBP: webp format.</li>
                     * @param _format Image format. Value:
<li> jpg: jpg format;</li>
<li>png: png format.</li>
<li>WEBP: webp format.</li>
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                private:

                    /**
                     * Unique identifier of the sprite template.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Sprite image template name. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Width of small images in sprite image, in the range of [32, 4096], unit: px.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Height of small images in sprite image, in the range of [32, 4096], unit: px.
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
                     * Sampling type, Valid value:
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
                     * Number of rows of small images in sprite image.
                     */
                    uint64_t m_rowCount;
                    bool m_rowCountHasBeenSet;

                    /**
                     * Number of columns of small images in sprite image.
                     */
                    uint64_t m_columnCount;
                    bool m_columnCountHasBeenSet;

                    /**
                     * Filling method. When video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "fill". Optional filling modes: <li>stretch: stretch each frame to fill the entire screen, possibly causing the transcoded video to be squashed or stretched;</li><li>black: maintain video aspect ratio, remaining edge part filled with black;</li><li>white: maintain video aspect ratio, remaining edge part filled with white;</li><li>gauss: maintain video aspect ratio, remaining edge part filled with Gaussian blur.</li>Default value: black.
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                    /**
                     * Template description, with a length limit of 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Image format. Value:
<li> jpg: jpg format;</li>
<li>png: png format.</li>
<li>WEBP: webp format.</li>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYIMAGESPRITETEMPLATEREQUEST_H_
