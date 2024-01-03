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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEIMAGESPRITETEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEIMAGESPRITETEMPLATEREQUEST_H_

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
                * CreateImageSpriteTemplate request structure.
                */
                class CreateImageSpriteTemplateRequest : public AbstractModel
                {
                public:
                    CreateImageSpriteTemplateRequest();
                    ~CreateImageSpriteTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sampling type. Valid values:
<li>Percent: by percent.</li>
<li>Time: by time interval.</li>
                     * @return SampleType Sampling type. Valid values:
<li>Percent: by percent.</li>
<li>Time: by time interval.</li>
                     * 
                     */
                    std::string GetSampleType() const;

                    /**
                     * 设置Sampling type. Valid values:
<li>Percent: by percent.</li>
<li>Time: by time interval.</li>
                     * @param _sampleType Sampling type. Valid values:
<li>Percent: by percent.</li>
<li>Time: by time interval.</li>
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
<li>If `SampleType` is `Percent`, sampling will be performed at an interval of the specified percentage.</li>
<li>If `SampleType` is `Time`, sampling will be performed at the specified time interval in seconds.</li>
                     * @return SampleInterval Sampling interval.
<li>If `SampleType` is `Percent`, sampling will be performed at an interval of the specified percentage.</li>
<li>If `SampleType` is `Time`, sampling will be performed at the specified time interval in seconds.</li>
                     * 
                     */
                    uint64_t GetSampleInterval() const;

                    /**
                     * 设置Sampling interval.
<li>If `SampleType` is `Percent`, sampling will be performed at an interval of the specified percentage.</li>
<li>If `SampleType` is `Time`, sampling will be performed at the specified time interval in seconds.</li>
                     * @param _sampleInterval Sampling interval.
<li>If `SampleType` is `Percent`, sampling will be performed at an interval of the specified percentage.</li>
<li>If `SampleType` is `Time`, sampling will be performed at the specified time interval in seconds.</li>
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
                     * 获取The number of rows of small images in the sprite image. 
Note: The number of rows of the small image will affect the height of the final large image. The maximum height of the large image is 15,000 pixels. The height of the large image is the product of the number of rows of the small image and the height of the small image.
                     * @return RowCount The number of rows of small images in the sprite image. 
Note: The number of rows of the small image will affect the height of the final large image. The maximum height of the large image is 15,000 pixels. The height of the large image is the product of the number of rows of the small image and the height of the small image.
                     * 
                     */
                    uint64_t GetRowCount() const;

                    /**
                     * 设置The number of rows of small images in the sprite image. 
Note: The number of rows of the small image will affect the height of the final large image. The maximum height of the large image is 15,000 pixels. The height of the large image is the product of the number of rows of the small image and the height of the small image.
                     * @param _rowCount The number of rows of small images in the sprite image. 
Note: The number of rows of the small image will affect the height of the final large image. The maximum height of the large image is 15,000 pixels. The height of the large image is the product of the number of rows of the small image and the height of the small image.
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
                     * 获取The number of columns of small images in the sprite image. 
Note: The number of columns of the small image will affect the width of the final large image. The maximum width of the large image is 15,000 pixels. The width of the large image is the product of the number of columns of the small image and the width of the small image.
                     * @return ColumnCount The number of columns of small images in the sprite image. 
Note: The number of columns of the small image will affect the width of the final large image. The maximum width of the large image is 15,000 pixels. The width of the large image is the product of the number of columns of the small image and the width of the small image.
                     * 
                     */
                    uint64_t GetColumnCount() const;

                    /**
                     * 设置The number of columns of small images in the sprite image. 
Note: The number of columns of the small image will affect the width of the final large image. The maximum width of the large image is 15,000 pixels. The width of the large image is the product of the number of columns of the small image and the width of the small image.
                     * @param _columnCount The number of columns of small images in the sprite image. 
Note: The number of columns of the small image will affect the width of the final large image. The maximum width of the large image is 15,000 pixels. The width of the large image is the product of the number of columns of the small image and the width of the small image.
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
                     * 获取Name of an image sprite generating template. Length limit: 64 characters.
                     * @return Name Name of an image sprite generating template. Length limit: 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of an image sprite generating template. Length limit: 64 characters.
                     * @param _name Name of an image sprite generating template. Length limit: 64 characters.
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
                     * 获取Template description. Length limit: 256 characters.
                     * @return Comment Template description. Length limit: 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description. Length limit: 256 characters.
                     * @param _comment Template description. Length limit: 256 characters.
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
                     * 获取Fill type. "Fill" refers to the way of processing a screenshot when its aspect ratio is different from that of the source video. The following fill types are supported:
<li> stretch: stretch. The screenshot will be stretched frame by frame to match the aspect ratio of the source video, which may make the screenshot "shorter" or "longer";</li>
<li>black: fill with black. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with black color blocks.</li>
Default value: black.
                     * @return FillType Fill type. "Fill" refers to the way of processing a screenshot when its aspect ratio is different from that of the source video. The following fill types are supported:
<li> stretch: stretch. The screenshot will be stretched frame by frame to match the aspect ratio of the source video, which may make the screenshot "shorter" or "longer";</li>
<li>black: fill with black. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with black color blocks.</li>
Default value: black.
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置Fill type. "Fill" refers to the way of processing a screenshot when its aspect ratio is different from that of the source video. The following fill types are supported:
<li> stretch: stretch. The screenshot will be stretched frame by frame to match the aspect ratio of the source video, which may make the screenshot "shorter" or "longer";</li>
<li>black: fill with black. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with black color blocks.</li>
Default value: black.
                     * @param _fillType Fill type. "Fill" refers to the way of processing a screenshot when its aspect ratio is different from that of the source video. The following fill types are supported:
<li> stretch: stretch. The screenshot will be stretched frame by frame to match the aspect ratio of the source video, which may make the screenshot "shorter" or "longer";</li>
<li>black: fill with black. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with black color blocks.</li>
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

                    /**
                     * 获取The maximum value of the width (or long side) of the small image in the sprite image, value range: 0 and [128, 4096], unit: px. 
<li>When Width and Height are both 0, the resolution is from the same source;</li>
<li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li>
< li>When Width is non-0 and Height is 0, the Height is scaled proportionally; </li>
<li>When both Width and Height are non-0, the resolution is specified by the user. </li>
Default value: 0. 
Note: The width of the small image will affect the width of the final large image. The maximum width of the large image is 15,000 pixels. The width of the large image is the product of the number of columns of the small image and the width of the small image.
                     * @return Width The maximum value of the width (or long side) of the small image in the sprite image, value range: 0 and [128, 4096], unit: px. 
<li>When Width and Height are both 0, the resolution is from the same source;</li>
<li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li>
< li>When Width is non-0 and Height is 0, the Height is scaled proportionally; </li>
<li>When both Width and Height are non-0, the resolution is specified by the user. </li>
Default value: 0. 
Note: The width of the small image will affect the width of the final large image. The maximum width of the large image is 15,000 pixels. The width of the large image is the product of the number of columns of the small image and the width of the small image.
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置The maximum value of the width (or long side) of the small image in the sprite image, value range: 0 and [128, 4096], unit: px. 
<li>When Width and Height are both 0, the resolution is from the same source;</li>
<li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li>
< li>When Width is non-0 and Height is 0, the Height is scaled proportionally; </li>
<li>When both Width and Height are non-0, the resolution is specified by the user. </li>
Default value: 0. 
Note: The width of the small image will affect the width of the final large image. The maximum width of the large image is 15,000 pixels. The width of the large image is the product of the number of columns of the small image and the width of the small image.
                     * @param _width The maximum value of the width (or long side) of the small image in the sprite image, value range: 0 and [128, 4096], unit: px. 
<li>When Width and Height are both 0, the resolution is from the same source;</li>
<li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li>
< li>When Width is non-0 and Height is 0, the Height is scaled proportionally; </li>
<li>When both Width and Height are non-0, the resolution is specified by the user. </li>
Default value: 0. 
Note: The width of the small image will affect the width of the final large image. The maximum width of the large image is 15,000 pixels. The width of the large image is the product of the number of columns of the small image and the width of the small image.
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
                     * 获取The maximum value of the height (or short side) of the small image in the sprite image, value range: 0 and [128, 4096], unit: px. 
<li>When Width and Height are both 0, the resolution is from the same source;</li>
<li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li>
< li>When Width is non-0 and Height is 0, the Height is scaled proportionally; </li>
<li>When both Width and Height are non-0, the resolution is specified by the user. </li>
Default value: 0. 
Note: The height of the small image will affect the height of the final large image. The maximum height of the large image is 15,000 pixels. The height of the large image is the product of the number of rows of the small image and the height of the small image.
                     * @return Height The maximum value of the height (or short side) of the small image in the sprite image, value range: 0 and [128, 4096], unit: px. 
<li>When Width and Height are both 0, the resolution is from the same source;</li>
<li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li>
< li>When Width is non-0 and Height is 0, the Height is scaled proportionally; </li>
<li>When both Width and Height are non-0, the resolution is specified by the user. </li>
Default value: 0. 
Note: The height of the small image will affect the height of the final large image. The maximum height of the large image is 15,000 pixels. The height of the large image is the product of the number of rows of the small image and the height of the small image.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置The maximum value of the height (or short side) of the small image in the sprite image, value range: 0 and [128, 4096], unit: px. 
<li>When Width and Height are both 0, the resolution is from the same source;</li>
<li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li>
< li>When Width is non-0 and Height is 0, the Height is scaled proportionally; </li>
<li>When both Width and Height are non-0, the resolution is specified by the user. </li>
Default value: 0. 
Note: The height of the small image will affect the height of the final large image. The maximum height of the large image is 15,000 pixels. The height of the large image is the product of the number of rows of the small image and the height of the small image.
                     * @param _height The maximum value of the height (or short side) of the small image in the sprite image, value range: 0 and [128, 4096], unit: px. 
<li>When Width and Height are both 0, the resolution is from the same source;</li>
<li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li>
< li>When Width is non-0 and Height is 0, the Height is scaled proportionally; </li>
<li>When both Width and Height are non-0, the resolution is specified by the user. </li>
Default value: 0. 
Note: The height of the small image will affect the height of the final large image. The maximum height of the large image is 15,000 pixels. The height of the large image is the product of the number of rows of the small image and the height of the small image.
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
                     * 获取Resolution adaption. Valid values:
<li>open: enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
Default value: open.
                     * @return ResolutionAdaptive Resolution adaption. Valid values:
<li>open: enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
Default value: open.
                     * 
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置Resolution adaption. Valid values:
<li>open: enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
Default value: open.
                     * @param _resolutionAdaptive Resolution adaption. Valid values:
<li>open: enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
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
                     * 获取The image format. Valid values:
<li> jpg</li>
<li> png</li>
<li> webp</li>
Default: jpg
                     * @return Format The image format. Valid values:
<li> jpg</li>
<li> png</li>
<li> webp</li>
Default: jpg
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置The image format. Valid values:
<li> jpg</li>
<li> png</li>
<li> webp</li>
Default: jpg
                     * @param _format The image format. Valid values:
<li> jpg</li>
<li> png</li>
<li> webp</li>
Default: jpg
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
                     * Sampling type. Valid values:
<li>Percent: by percent.</li>
<li>Time: by time interval.</li>
                     */
                    std::string m_sampleType;
                    bool m_sampleTypeHasBeenSet;

                    /**
                     * Sampling interval.
<li>If `SampleType` is `Percent`, sampling will be performed at an interval of the specified percentage.</li>
<li>If `SampleType` is `Time`, sampling will be performed at the specified time interval in seconds.</li>
                     */
                    uint64_t m_sampleInterval;
                    bool m_sampleIntervalHasBeenSet;

                    /**
                     * The number of rows of small images in the sprite image. 
Note: The number of rows of the small image will affect the height of the final large image. The maximum height of the large image is 15,000 pixels. The height of the large image is the product of the number of rows of the small image and the height of the small image.
                     */
                    uint64_t m_rowCount;
                    bool m_rowCountHasBeenSet;

                    /**
                     * The number of columns of small images in the sprite image. 
Note: The number of columns of the small image will affect the width of the final large image. The maximum width of the large image is 15,000 pixels. The width of the large image is the product of the number of columns of the small image and the width of the small image.
                     */
                    uint64_t m_columnCount;
                    bool m_columnCountHasBeenSet;

                    /**
                     * <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Name of an image sprite generating template. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Template description. Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Fill type. "Fill" refers to the way of processing a screenshot when its aspect ratio is different from that of the source video. The following fill types are supported:
<li> stretch: stretch. The screenshot will be stretched frame by frame to match the aspect ratio of the source video, which may make the screenshot "shorter" or "longer";</li>
<li>black: fill with black. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with black color blocks.</li>
Default value: black.
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                    /**
                     * The maximum value of the width (or long side) of the small image in the sprite image, value range: 0 and [128, 4096], unit: px. 
<li>When Width and Height are both 0, the resolution is from the same source;</li>
<li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li>
< li>When Width is non-0 and Height is 0, the Height is scaled proportionally; </li>
<li>When both Width and Height are non-0, the resolution is specified by the user. </li>
Default value: 0. 
Note: The width of the small image will affect the width of the final large image. The maximum width of the large image is 15,000 pixels. The width of the large image is the product of the number of columns of the small image and the width of the small image.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The maximum value of the height (or short side) of the small image in the sprite image, value range: 0 and [128, 4096], unit: px. 
<li>When Width and Height are both 0, the resolution is from the same source;</li>
<li>When Width is 0 and Height is non-0, Width is scaled proportionally;</li>
< li>When Width is non-0 and Height is 0, the Height is scaled proportionally; </li>
<li>When both Width and Height are non-0, the resolution is specified by the user. </li>
Default value: 0. 
Note: The height of the small image will affect the height of the final large image. The maximum height of the large image is 15,000 pixels. The height of the large image is the product of the number of rows of the small image and the height of the small image.
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
                     * The image format. Valid values:
<li> jpg</li>
<li> png</li>
<li> webp</li>
Default: jpg
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEIMAGESPRITETEMPLATEREQUEST_H_
