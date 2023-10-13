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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEIMAGEITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEIMAGEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ComposeSourceMedia.h>
#include <tencentcloud/mps/v20190612/model/ComposeTrackTime.h>
#include <tencentcloud/mps/v20190612/model/ComposeImageOperation.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The image element information of a video editing/compositing task.
                */
                class ComposeImageItem : public AbstractModel
                {
                public:
                    ComposeImageItem();
                    ~ComposeImageItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The media information of the element.
                     * @return SourceMedia The media information of the element.
                     * 
                     */
                    ComposeSourceMedia GetSourceMedia() const;

                    /**
                     * 设置The media information of the element.
                     * @param _sourceMedia The media information of the element.
                     * 
                     */
                    void SetSourceMedia(const ComposeSourceMedia& _sourceMedia);

                    /**
                     * 判断参数 SourceMedia 是否已赋值
                     * @return SourceMedia 是否已赋值
                     * 
                     */
                    bool SourceMediaHasBeenSet() const;

                    /**
                     * 获取The time of the element in the timeline. If this is not specified, the element will follow the previous element.
                     * @return TrackTime The time of the element in the timeline. If this is not specified, the element will follow the previous element.
                     * 
                     */
                    ComposeTrackTime GetTrackTime() const;

                    /**
                     * 设置The time of the element in the timeline. If this is not specified, the element will follow the previous element.
                     * @param _trackTime The time of the element in the timeline. If this is not specified, the element will follow the previous element.
                     * 
                     */
                    void SetTrackTime(const ComposeTrackTime& _trackTime);

                    /**
                     * 判断参数 TrackTime 是否已赋值
                     * @return TrackTime 是否已赋值
                     * 
                     */
                    bool TrackTimeHasBeenSet() const;

                    /**
                     * 获取The horizontal distance of the element's center from the canvas origin. Two formats are supported:
<li>If the value ends with %, it specifies the distance as a percentage of the canvas width. For example, `10%` means that the distance is 10% of the canvas width. </li>
u200c<li>If the value ends with px, it specifies the distance in pixels. For example, `100px` means that the distance is 100 pixels. </li>
Default value: `50%`.
                     * @return XPos The horizontal distance of the element's center from the canvas origin. Two formats are supported:
<li>If the value ends with %, it specifies the distance as a percentage of the canvas width. For example, `10%` means that the distance is 10% of the canvas width. </li>
u200c<li>If the value ends with px, it specifies the distance in pixels. For example, `100px` means that the distance is 100 pixels. </li>
Default value: `50%`.
                     * 
                     */
                    std::string GetXPos() const;

                    /**
                     * 设置The horizontal distance of the element's center from the canvas origin. Two formats are supported:
<li>If the value ends with %, it specifies the distance as a percentage of the canvas width. For example, `10%` means that the distance is 10% of the canvas width. </li>
u200c<li>If the value ends with px, it specifies the distance in pixels. For example, `100px` means that the distance is 100 pixels. </li>
Default value: `50%`.
                     * @param _xPos The horizontal distance of the element's center from the canvas origin. Two formats are supported:
<li>If the value ends with %, it specifies the distance as a percentage of the canvas width. For example, `10%` means that the distance is 10% of the canvas width. </li>
u200c<li>If the value ends with px, it specifies the distance in pixels. For example, `100px` means that the distance is 100 pixels. </li>
Default value: `50%`.
                     * 
                     */
                    void SetXPos(const std::string& _xPos);

                    /**
                     * 判断参数 XPos 是否已赋值
                     * @return XPos 是否已赋值
                     * 
                     */
                    bool XPosHasBeenSet() const;

                    /**
                     * 获取The vertical distance of the element's center from the canvas origin. Two formats are supported:
u200c<li>If the value ends with %, it specifies the distance as a percentage of the canvas height. For example, `10%` means that the distance is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the distance in pixels. For example, `100px` means that the distance is 100 pixels. </li>
Default value: `50%`.
                     * @return YPos The vertical distance of the element's center from the canvas origin. Two formats are supported:
u200c<li>If the value ends with %, it specifies the distance as a percentage of the canvas height. For example, `10%` means that the distance is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the distance in pixels. For example, `100px` means that the distance is 100 pixels. </li>
Default value: `50%`.
                     * 
                     */
                    std::string GetYPos() const;

                    /**
                     * 设置The vertical distance of the element's center from the canvas origin. Two formats are supported:
u200c<li>If the value ends with %, it specifies the distance as a percentage of the canvas height. For example, `10%` means that the distance is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the distance in pixels. For example, `100px` means that the distance is 100 pixels. </li>
Default value: `50%`.
                     * @param _yPos The vertical distance of the element's center from the canvas origin. Two formats are supported:
u200c<li>If the value ends with %, it specifies the distance as a percentage of the canvas height. For example, `10%` means that the distance is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the distance in pixels. For example, `100px` means that the distance is 100 pixels. </li>
Default value: `50%`.
                     * 
                     */
                    void SetYPos(const std::string& _yPos);

                    /**
                     * 判断参数 YPos 是否已赋值
                     * @return YPos 是否已赋值
                     * 
                     */
                    bool YPosHasBeenSet() const;

                    /**
                     * 获取The width of the video segment. Two formats are supported:
u200c<li>If the value ends with %, it specifies the width as a percentage of the canvas width. For example, `10%` means that the video width is 10% of the canvas width. </li>
u200c<li>If the value ends with px, it specifies the width in pixels. For example, `100px` means that the video width is 100 pixels. </li>
If one or both parameters are empty or set to `0`:
<li>If both `Width` and `Height` are empty, the original width and height of the element will be kept. </li>
<li>If `Width` is empty and `Height` is not, the width will be auto scaled. </li>
<li>If `Width` is not empty and `Height` is, the height will be auto scaled. </li>
                     * @return Width The width of the video segment. Two formats are supported:
u200c<li>If the value ends with %, it specifies the width as a percentage of the canvas width. For example, `10%` means that the video width is 10% of the canvas width. </li>
u200c<li>If the value ends with px, it specifies the width in pixels. For example, `100px` means that the video width is 100 pixels. </li>
If one or both parameters are empty or set to `0`:
<li>If both `Width` and `Height` are empty, the original width and height of the element will be kept. </li>
<li>If `Width` is empty and `Height` is not, the width will be auto scaled. </li>
<li>If `Width` is not empty and `Height` is, the height will be auto scaled. </li>
                     * 
                     */
                    std::string GetWidth() const;

                    /**
                     * 设置The width of the video segment. Two formats are supported:
u200c<li>If the value ends with %, it specifies the width as a percentage of the canvas width. For example, `10%` means that the video width is 10% of the canvas width. </li>
u200c<li>If the value ends with px, it specifies the width in pixels. For example, `100px` means that the video width is 100 pixels. </li>
If one or both parameters are empty or set to `0`:
<li>If both `Width` and `Height` are empty, the original width and height of the element will be kept. </li>
<li>If `Width` is empty and `Height` is not, the width will be auto scaled. </li>
<li>If `Width` is not empty and `Height` is, the height will be auto scaled. </li>
                     * @param _width The width of the video segment. Two formats are supported:
u200c<li>If the value ends with %, it specifies the width as a percentage of the canvas width. For example, `10%` means that the video width is 10% of the canvas width. </li>
u200c<li>If the value ends with px, it specifies the width in pixels. For example, `100px` means that the video width is 100 pixels. </li>
If one or both parameters are empty or set to `0`:
<li>If both `Width` and `Height` are empty, the original width and height of the element will be kept. </li>
<li>If `Width` is empty and `Height` is not, the width will be auto scaled. </li>
<li>If `Width` is not empty and `Height` is, the height will be auto scaled. </li>
                     * 
                     */
                    void SetWidth(const std::string& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取The height of the element. Two formats are supported:
u200c<li>If the value ends with %, it specifies the height as a percentage of the canvas height. For example, `10%` means that the height is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the height in pixels. For example, `100px` means that the height is 100 pixels. </li>
If one or both parameters are empty or set to `0`:
<li>If both `Width` and `Height` are empty, the original width and height of the video will be kept. </li>
<li>If `Width` is empty and `Height` is not, the width will be auto scaled. </li>
<li>If `Width` is not empty and `Height` is, the height will be auto scaled. </li>
                     * @return Height The height of the element. Two formats are supported:
u200c<li>If the value ends with %, it specifies the height as a percentage of the canvas height. For example, `10%` means that the height is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the height in pixels. For example, `100px` means that the height is 100 pixels. </li>
If one or both parameters are empty or set to `0`:
<li>If both `Width` and `Height` are empty, the original width and height of the video will be kept. </li>
<li>If `Width` is empty and `Height` is not, the width will be auto scaled. </li>
<li>If `Width` is not empty and `Height` is, the height will be auto scaled. </li>
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置The height of the element. Two formats are supported:
u200c<li>If the value ends with %, it specifies the height as a percentage of the canvas height. For example, `10%` means that the height is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the height in pixels. For example, `100px` means that the height is 100 pixels. </li>
If one or both parameters are empty or set to `0`:
<li>If both `Width` and `Height` are empty, the original width and height of the video will be kept. </li>
<li>If `Width` is empty and `Height` is not, the width will be auto scaled. </li>
<li>If `Width` is not empty and `Height` is, the height will be auto scaled. </li>
                     * @param _height The height of the element. Two formats are supported:
u200c<li>If the value ends with %, it specifies the height as a percentage of the canvas height. For example, `10%` means that the height is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the height in pixels. For example, `100px` means that the height is 100 pixels. </li>
If one or both parameters are empty or set to `0`:
<li>If both `Width` and `Height` are empty, the original width and height of the video will be kept. </li>
<li>If `Width` is empty and `Height` is not, the width will be auto scaled. </li>
<li>If `Width` is not empty and `Height` is, the height will be auto scaled. </li>
                     * 
                     */
                    void SetHeight(const std::string& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取The image operations, such as image rotation.
                     * @return ImageOperations The image operations, such as image rotation.
                     * 
                     */
                    std::vector<ComposeImageOperation> GetImageOperations() const;

                    /**
                     * 设置The image operations, such as image rotation.
                     * @param _imageOperations The image operations, such as image rotation.
                     * 
                     */
                    void SetImageOperations(const std::vector<ComposeImageOperation>& _imageOperations);

                    /**
                     * 判断参数 ImageOperations 是否已赋值
                     * @return ImageOperations 是否已赋值
                     * 
                     */
                    bool ImageOperationsHasBeenSet() const;

                private:

                    /**
                     * The media information of the element.
                     */
                    ComposeSourceMedia m_sourceMedia;
                    bool m_sourceMediaHasBeenSet;

                    /**
                     * The time of the element in the timeline. If this is not specified, the element will follow the previous element.
                     */
                    ComposeTrackTime m_trackTime;
                    bool m_trackTimeHasBeenSet;

                    /**
                     * The horizontal distance of the element's center from the canvas origin. Two formats are supported:
<li>If the value ends with %, it specifies the distance as a percentage of the canvas width. For example, `10%` means that the distance is 10% of the canvas width. </li>
u200c<li>If the value ends with px, it specifies the distance in pixels. For example, `100px` means that the distance is 100 pixels. </li>
Default value: `50%`.
                     */
                    std::string m_xPos;
                    bool m_xPosHasBeenSet;

                    /**
                     * The vertical distance of the element's center from the canvas origin. Two formats are supported:
u200c<li>If the value ends with %, it specifies the distance as a percentage of the canvas height. For example, `10%` means that the distance is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the distance in pixels. For example, `100px` means that the distance is 100 pixels. </li>
Default value: `50%`.
                     */
                    std::string m_yPos;
                    bool m_yPosHasBeenSet;

                    /**
                     * The width of the video segment. Two formats are supported:
u200c<li>If the value ends with %, it specifies the width as a percentage of the canvas width. For example, `10%` means that the video width is 10% of the canvas width. </li>
u200c<li>If the value ends with px, it specifies the width in pixels. For example, `100px` means that the video width is 100 pixels. </li>
If one or both parameters are empty or set to `0`:
<li>If both `Width` and `Height` are empty, the original width and height of the element will be kept. </li>
<li>If `Width` is empty and `Height` is not, the width will be auto scaled. </li>
<li>If `Width` is not empty and `Height` is, the height will be auto scaled. </li>
                     */
                    std::string m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The height of the element. Two formats are supported:
u200c<li>If the value ends with %, it specifies the height as a percentage of the canvas height. For example, `10%` means that the height is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the height in pixels. For example, `100px` means that the height is 100 pixels. </li>
If one or both parameters are empty or set to `0`:
<li>If both `Width` and `Height` are empty, the original width and height of the video will be kept. </li>
<li>If `Width` is empty and `Height` is not, the width will be auto scaled. </li>
<li>If `Width` is not empty and `Height` is, the height will be auto scaled. </li>
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * The image operations, such as image rotation.
                     */
                    std::vector<ComposeImageOperation> m_imageOperations;
                    bool m_imageOperationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEIMAGEITEM_H_
