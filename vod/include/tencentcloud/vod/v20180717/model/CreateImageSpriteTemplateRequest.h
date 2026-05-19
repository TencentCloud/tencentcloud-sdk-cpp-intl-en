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
Note: The number of rows of subimages impacts the final height of the main image. The maximum height of the main image is 15000 pixels. The height of the main image is the product of the number of rows and the height of subimages.
                     * @return RowCount Number of rows of small images in sprite image.
Note: The number of rows of subimages impacts the final height of the main image. The maximum height of the main image is 15000 pixels. The height of the main image is the product of the number of rows and the height of subimages.
                     * 
                     */
                    uint64_t GetRowCount() const;

                    /**
                     * 设置Number of rows of small images in sprite image.
Note: The number of rows of subimages impacts the final height of the main image. The maximum height of the main image is 15000 pixels. The height of the main image is the product of the number of rows and the height of subimages.
                     * @param _rowCount Number of rows of small images in sprite image.
Note: The number of rows of subimages impacts the final height of the main image. The maximum height of the main image is 15000 pixels. The height of the main image is the product of the number of rows and the height of subimages.
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
Note: The columns of small images impact the final width of the large image. The maximum width of the large image is 15000 pixels. The width of the large image is the product of the columns and width of small images.
                     * @return ColumnCount Number of columns of small images in sprite image.
Note: The columns of small images impact the final width of the large image. The maximum width of the large image is 15000 pixels. The width of the large image is the product of the columns and width of small images.
                     * 
                     */
                    uint64_t GetColumnCount() const;

                    /**
                     * 设置Number of columns of small images in sprite image.
Note: The columns of small images impact the final width of the large image. The maximum width of the large image is 15000 pixels. The width of the large image is the product of the columns and width of small images.
                     * @param _columnCount Number of columns of small images in sprite image.
Note: The columns of small images impact the final width of the large image. The maximum width of the large image is 15000 pixels. The width of the large image is the product of the columns and width of small images.
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
                     * 获取Sprite image template name. The length cannot exceed 64 characters.
                     * @return Name Sprite image template name. The length cannot exceed 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Sprite image template name. The length cannot exceed 64 characters.
                     * @param _name Sprite image template name. The length cannot exceed 64 characters.
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
                     * 获取Filling method. When video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "filling". Optional filling mode:<li>stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li><li>black: Maintain video aspect ratio with edges filled with black.</li>Default value: black.
                     * @return FillType Filling method. When video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "filling". Optional filling mode:<li>stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li><li>black: Maintain video aspect ratio with edges filled with black.</li>Default value: black.
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置Filling method. When video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "filling". Optional filling mode:<li>stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li><li>black: Maintain video aspect ratio with edges filled with black.</li>Default value: black.
                     * @param _fillType Filling method. When video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "filling". Optional filling mode:<li>stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li><li>black: Maintain video aspect ratio with edges filled with black.</li>Default value: black.
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
                     * 获取Maximum value of the width (or long edge) of small images in sprite image. Value ranges from 0 to [128, 4096]. Measurement unit: px.<li>When both Width and Height are 0, resolution is same as source.</li><li>When Width is 0 and Height is not 0, Width is proportionally scaled.</li><li>When Width is not 0 and Height is 0, Height is proportionally scaled.</li><li>When both Width and Height are not 0, resolution is specified by user.</li>Default value: 0. Note: The width of small images will impact the final width of the large image. The maximum width of the large image is 15000 pixels, where the width of the large image is the product of the number of columns and the width of small images.
                     * @return Width Maximum value of the width (or long edge) of small images in sprite image. Value ranges from 0 to [128, 4096]. Measurement unit: px.<li>When both Width and Height are 0, resolution is same as source.</li><li>When Width is 0 and Height is not 0, Width is proportionally scaled.</li><li>When Width is not 0 and Height is 0, Height is proportionally scaled.</li><li>When both Width and Height are not 0, resolution is specified by user.</li>Default value: 0. Note: The width of small images will impact the final width of the large image. The maximum width of the large image is 15000 pixels, where the width of the large image is the product of the number of columns and the width of small images.
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Maximum value of the width (or long edge) of small images in sprite image. Value ranges from 0 to [128, 4096]. Measurement unit: px.<li>When both Width and Height are 0, resolution is same as source.</li><li>When Width is 0 and Height is not 0, Width is proportionally scaled.</li><li>When Width is not 0 and Height is 0, Height is proportionally scaled.</li><li>When both Width and Height are not 0, resolution is specified by user.</li>Default value: 0. Note: The width of small images will impact the final width of the large image. The maximum width of the large image is 15000 pixels, where the width of the large image is the product of the number of columns and the width of small images.
                     * @param _width Maximum value of the width (or long edge) of small images in sprite image. Value ranges from 0 to [128, 4096]. Measurement unit: px.<li>When both Width and Height are 0, resolution is same as source.</li><li>When Width is 0 and Height is not 0, Width is proportionally scaled.</li><li>When Width is not 0 and Height is 0, Height is proportionally scaled.</li><li>When both Width and Height are not 0, resolution is specified by user.</li>Default value: 0. Note: The width of small images will impact the final width of the large image. The maximum width of the large image is 15000 pixels, where the width of the large image is the product of the number of columns and the width of small images.
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
                     * 获取Maximum height (or short side) of small images in sprite image. Value ranges from 0 to [128, 4096]. Measurement unit: px.<li>When both Width and Height are 0, resolution is same as source.</li><li>When Width is 0 and Height is not 0, Width is proportionally scaled.</li><li>When Width is not 0 and Height is 0, Height is proportionally scaled.</li><li>When both Width and Height are not 0, resolution is specified by user.</li>Default value: 0. Note: The height of small images impacts the final height of the large image. The maximum height of the large image is 15000 pixels, where the height of the large image is the product of subimage rows and the height of small images.
                     * @return Height Maximum height (or short side) of small images in sprite image. Value ranges from 0 to [128, 4096]. Measurement unit: px.<li>When both Width and Height are 0, resolution is same as source.</li><li>When Width is 0 and Height is not 0, Width is proportionally scaled.</li><li>When Width is not 0 and Height is 0, Height is proportionally scaled.</li><li>When both Width and Height are not 0, resolution is specified by user.</li>Default value: 0. Note: The height of small images impacts the final height of the large image. The maximum height of the large image is 15000 pixels, where the height of the large image is the product of subimage rows and the height of small images.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Maximum height (or short side) of small images in sprite image. Value ranges from 0 to [128, 4096]. Measurement unit: px.<li>When both Width and Height are 0, resolution is same as source.</li><li>When Width is 0 and Height is not 0, Width is proportionally scaled.</li><li>When Width is not 0 and Height is 0, Height is proportionally scaled.</li><li>When both Width and Height are not 0, resolution is specified by user.</li>Default value: 0. Note: The height of small images impacts the final height of the large image. The maximum height of the large image is 15000 pixels, where the height of the large image is the product of subimage rows and the height of small images.
                     * @param _height Maximum height (or short side) of small images in sprite image. Value ranges from 0 to [128, 4096]. Measurement unit: px.<li>When both Width and Height are 0, resolution is same as source.</li><li>When Width is 0 and Height is not 0, Width is proportionally scaled.</li><li>When Width is not 0 and Height is 0, Height is proportionally scaled.</li><li>When both Width and Height are not 0, resolution is specified by user.</li>Default value: 0. Note: The height of small images impacts the final height of the large image. The maximum height of the large image is 15000 pixels, where the height of the large image is the product of subimage rows and the height of small images.
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
                     * 获取Image format. Valid values:
<li> jpg: JPG format;</li>
<li>png: png format.</li>
<li>WEBP: webp format.</li>
Default value: jpg.
                     * @return Format Image format. Valid values:
<li> jpg: JPG format;</li>
<li>png: png format.</li>
<li>WEBP: webp format.</li>
Default value: jpg.
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Image format. Valid values:
<li> jpg: JPG format;</li>
<li>png: png format.</li>
<li>WEBP: webp format.</li>
Default value: jpg.
                     * @param _format Image format. Valid values:
<li> jpg: JPG format;</li>
<li>png: png format.</li>
<li>WEBP: webp format.</li>
Default value: jpg.
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
Note: The number of rows of subimages impacts the final height of the main image. The maximum height of the main image is 15000 pixels. The height of the main image is the product of the number of rows and the height of subimages.
                     */
                    uint64_t m_rowCount;
                    bool m_rowCountHasBeenSet;

                    /**
                     * Number of columns of small images in sprite image.
Note: The columns of small images impact the final width of the large image. The maximum width of the large image is 15000 pixels. The width of the large image is the product of the columns and width of small images.
                     */
                    uint64_t m_columnCount;
                    bool m_columnCountHasBeenSet;

                    /**
                     * <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Sprite image template name. The length cannot exceed 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Template description, with a length limit of 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Filling method. When video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the processing method for transcoding is "filling". Optional filling mode:<li>stretch: Stretch each frame to fill the entire screen, possibly causing the transcoded video to be "squashed" or "stretched";</li><li>black: Maintain video aspect ratio with edges filled with black.</li>Default value: black.
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                    /**
                     * Maximum value of the width (or long edge) of small images in sprite image. Value ranges from 0 to [128, 4096]. Measurement unit: px.<li>When both Width and Height are 0, resolution is same as source.</li><li>When Width is 0 and Height is not 0, Width is proportionally scaled.</li><li>When Width is not 0 and Height is 0, Height is proportionally scaled.</li><li>When both Width and Height are not 0, resolution is specified by user.</li>Default value: 0. Note: The width of small images will impact the final width of the large image. The maximum width of the large image is 15000 pixels, where the width of the large image is the product of the number of columns and the width of small images.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Maximum height (or short side) of small images in sprite image. Value ranges from 0 to [128, 4096]. Measurement unit: px.<li>When both Width and Height are 0, resolution is same as source.</li><li>When Width is 0 and Height is not 0, Width is proportionally scaled.</li><li>When Width is not 0 and Height is 0, Height is proportionally scaled.</li><li>When both Width and Height are not 0, resolution is specified by user.</li>Default value: 0. Note: The height of small images impacts the final height of the large image. The maximum height of the large image is 15000 pixels, where the height of the large image is the product of subimage rows and the height of small images.
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
                     * Image format. Valid values:
<li> jpg: JPG format;</li>
<li>png: png format.</li>
<li>WEBP: webp format.</li>
Default value: jpg.
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEIMAGESPRITETEMPLATEREQUEST_H_
