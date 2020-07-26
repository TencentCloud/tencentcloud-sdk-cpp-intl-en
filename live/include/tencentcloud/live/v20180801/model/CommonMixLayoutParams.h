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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXLAYOUTPARAMS_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXLAYOUTPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * General stream mix layout parameter.
                */
                class CommonMixLayoutParams : public AbstractModel
                {
                public:
                    CommonMixLayoutParams();
                    ~CommonMixLayoutParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input layer. Value range: [1,16].
1) For `image_layer` of background stream (i.e., main host video image or canvas), enter 1.
2) For audio stream mix, this parameter is also required.
                     * @return ImageLayer Input layer. Value range: [1,16].
1) For `image_layer` of background stream (i.e., main host video image or canvas), enter 1.
2) For audio stream mix, this parameter is also required.
                     */
                    int64_t GetImageLayer() const;

                    /**
                     * 设置Input layer. Value range: [1,16].
1) For `image_layer` of background stream (i.e., main host video image or canvas), enter 1.
2) For audio stream mix, this parameter is also required.
                     * @param ImageLayer Input layer. Value range: [1,16].
1) For `image_layer` of background stream (i.e., main host video image or canvas), enter 1.
2) For audio stream mix, this parameter is also required.
                     */
                    void SetImageLayer(const int64_t& _imageLayer);

                    /**
                     * 判断参数 ImageLayer 是否已赋值
                     * @return ImageLayer 是否已赋值
                     */
                    bool ImageLayerHasBeenSet() const;

                    /**
                     * 获取Input type. Value range: [0,5].
If this parameter is left empty, 0 will be used by default.
0: the input stream is audio/video.
2: the input stream is image.
3: the input stream is canvas. 
4: the input stream is audio.
5: the input stream is pure video.
                     * @return InputType Input type. Value range: [0,5].
If this parameter is left empty, 0 will be used by default.
0: the input stream is audio/video.
2: the input stream is image.
3: the input stream is canvas. 
4: the input stream is audio.
5: the input stream is pure video.
                     */
                    int64_t GetInputType() const;

                    /**
                     * 设置Input type. Value range: [0,5].
If this parameter is left empty, 0 will be used by default.
0: the input stream is audio/video.
2: the input stream is image.
3: the input stream is canvas. 
4: the input stream is audio.
5: the input stream is pure video.
                     * @param InputType Input type. Value range: [0,5].
If this parameter is left empty, 0 will be used by default.
0: the input stream is audio/video.
2: the input stream is image.
3: the input stream is canvas. 
4: the input stream is audio.
5: the input stream is pure video.
                     */
                    void SetInputType(const int64_t& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取Output width of input video image. Value range:
Pixel: [0,2000]
Percentage: [0.01,0.99]
If this parameter is left empty, the input stream width will be used by default.
If percentage is used, the expected output is (percentage * background width).
                     * @return ImageWidth Output width of input video image. Value range:
Pixel: [0,2000]
Percentage: [0.01,0.99]
If this parameter is left empty, the input stream width will be used by default.
If percentage is used, the expected output is (percentage * background width).
                     */
                    double GetImageWidth() const;

                    /**
                     * 设置Output width of input video image. Value range:
Pixel: [0,2000]
Percentage: [0.01,0.99]
If this parameter is left empty, the input stream width will be used by default.
If percentage is used, the expected output is (percentage * background width).
                     * @param ImageWidth Output width of input video image. Value range:
Pixel: [0,2000]
Percentage: [0.01,0.99]
If this parameter is left empty, the input stream width will be used by default.
If percentage is used, the expected output is (percentage * background width).
                     */
                    void SetImageWidth(const double& _imageWidth);

                    /**
                     * 判断参数 ImageWidth 是否已赋值
                     * @return ImageWidth 是否已赋值
                     */
                    bool ImageWidthHasBeenSet() const;

                    /**
                     * 获取Output height of input video image. Value range:
Pixel: [0,2000]
Percentage: [0.01,0.99]
If this parameter is left empty, the input stream height will be used by default.
If percentage is used, the expected output is (percentage * background height).
                     * @return ImageHeight Output height of input video image. Value range:
Pixel: [0,2000]
Percentage: [0.01,0.99]
If this parameter is left empty, the input stream height will be used by default.
If percentage is used, the expected output is (percentage * background height).
                     */
                    double GetImageHeight() const;

                    /**
                     * 设置Output height of input video image. Value range:
Pixel: [0,2000]
Percentage: [0.01,0.99]
If this parameter is left empty, the input stream height will be used by default.
If percentage is used, the expected output is (percentage * background height).
                     * @param ImageHeight Output height of input video image. Value range:
Pixel: [0,2000]
Percentage: [0.01,0.99]
If this parameter is left empty, the input stream height will be used by default.
If percentage is used, the expected output is (percentage * background height).
                     */
                    void SetImageHeight(const double& _imageHeight);

                    /**
                     * 判断参数 ImageHeight 是否已赋值
                     * @return ImageHeight 是否已赋值
                     */
                    bool ImageHeightHasBeenSet() const;

                    /**
                     * 获取X-axis offset of input in output video image. Value range:
Pixel: [0,2000]
Percentage: [0.01,0.99]
If this parameter is left empty, 0 will be used by default.
Horizontal offset from the top-left corner of main host background video image. 
If percentage is used, the expected output is (percentage * background width).
                     * @return LocationX X-axis offset of input in output video image. Value range:
Pixel: [0,2000]
Percentage: [0.01,0.99]
If this parameter is left empty, 0 will be used by default.
Horizontal offset from the top-left corner of main host background video image. 
If percentage is used, the expected output is (percentage * background width).
                     */
                    double GetLocationX() const;

                    /**
                     * 设置X-axis offset of input in output video image. Value range:
Pixel: [0,2000]
Percentage: [0.01,0.99]
If this parameter is left empty, 0 will be used by default.
Horizontal offset from the top-left corner of main host background video image. 
If percentage is used, the expected output is (percentage * background width).
                     * @param LocationX X-axis offset of input in output video image. Value range:
Pixel: [0,2000]
Percentage: [0.01,0.99]
If this parameter is left empty, 0 will be used by default.
Horizontal offset from the top-left corner of main host background video image. 
If percentage is used, the expected output is (percentage * background width).
                     */
                    void SetLocationX(const double& _locationX);

                    /**
                     * 判断参数 LocationX 是否已赋值
                     * @return LocationX 是否已赋值
                     */
                    bool LocationXHasBeenSet() const;

                    /**
                     * 获取Y-axis offset of input in output video image. Value range:
Pixel: [0,2000]
Percentage: [0.01,0.99]
If this parameter is left empty, 0 will be used by default.
Vertical offset from the top-left corner of main host background video image. 
If percentage is used, the expected output is (percentage * background width)
                     * @return LocationY Y-axis offset of input in output video image. Value range:
Pixel: [0,2000]
Percentage: [0.01,0.99]
If this parameter is left empty, 0 will be used by default.
Vertical offset from the top-left corner of main host background video image. 
If percentage is used, the expected output is (percentage * background width)
                     */
                    double GetLocationY() const;

                    /**
                     * 设置Y-axis offset of input in output video image. Value range:
Pixel: [0,2000]
Percentage: [0.01,0.99]
If this parameter is left empty, 0 will be used by default.
Vertical offset from the top-left corner of main host background video image. 
If percentage is used, the expected output is (percentage * background width)
                     * @param LocationY Y-axis offset of input in output video image. Value range:
Pixel: [0,2000]
Percentage: [0.01,0.99]
If this parameter is left empty, 0 will be used by default.
Vertical offset from the top-left corner of main host background video image. 
If percentage is used, the expected output is (percentage * background width)
                     */
                    void SetLocationY(const double& _locationY);

                    /**
                     * 判断参数 LocationY 是否已赋值
                     * @return LocationY 是否已赋值
                     */
                    bool LocationYHasBeenSet() const;

                    /**
                     * 获取When `InputType` is 3 (canvas), this value indicates the canvas color.
Commonly used colors include:
Red: 0xcc0033.
Yellow: 0xcc9900.
Green: 0xcccc33.
Blue: 0x99CCFF.
Black: 0x000000.
White: 0xFFFFFF.
Gray: 0x999999
                     * @return Color When `InputType` is 3 (canvas), this value indicates the canvas color.
Commonly used colors include:
Red: 0xcc0033.
Yellow: 0xcc9900.
Green: 0xcccc33.
Blue: 0x99CCFF.
Black: 0x000000.
White: 0xFFFFFF.
Gray: 0x999999
                     */
                    std::string GetColor() const;

                    /**
                     * 设置When `InputType` is 3 (canvas), this value indicates the canvas color.
Commonly used colors include:
Red: 0xcc0033.
Yellow: 0xcc9900.
Green: 0xcccc33.
Blue: 0x99CCFF.
Black: 0x000000.
White: 0xFFFFFF.
Gray: 0x999999
                     * @param Color When `InputType` is 3 (canvas), this value indicates the canvas color.
Commonly used colors include:
Red: 0xcc0033.
Yellow: 0xcc9900.
Green: 0xcccc33.
Blue: 0x99CCFF.
Black: 0x000000.
White: 0xFFFFFF.
Gray: 0x999999
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     */
                    bool ColorHasBeenSet() const;

                    /**
                     * 获取When `InputType` is 2 (image), this value is the watermark ID.
                     * @return WatermarkId When `InputType` is 2 (image), this value is the watermark ID.
                     */
                    int64_t GetWatermarkId() const;

                    /**
                     * 设置When `InputType` is 2 (image), this value is the watermark ID.
                     * @param WatermarkId When `InputType` is 2 (image), this value is the watermark ID.
                     */
                    void SetWatermarkId(const int64_t& _watermarkId);

                    /**
                     * 判断参数 WatermarkId 是否已赋值
                     * @return WatermarkId 是否已赋值
                     */
                    bool WatermarkIdHasBeenSet() const;

                private:

                    /**
                     * Input layer. Value range: [1,16].
1) For `image_layer` of background stream (i.e., main host video image or canvas), enter 1.
2) For audio stream mix, this parameter is also required.
                     */
                    int64_t m_imageLayer;
                    bool m_imageLayerHasBeenSet;

                    /**
                     * Input type. Value range: [0,5].
If this parameter is left empty, 0 will be used by default.
0: the input stream is audio/video.
2: the input stream is image.
3: the input stream is canvas. 
4: the input stream is audio.
5: the input stream is pure video.
                     */
                    int64_t m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * Output width of input video image. Value range:
Pixel: [0,2000]
Percentage: [0.01,0.99]
If this parameter is left empty, the input stream width will be used by default.
If percentage is used, the expected output is (percentage * background width).
                     */
                    double m_imageWidth;
                    bool m_imageWidthHasBeenSet;

                    /**
                     * Output height of input video image. Value range:
Pixel: [0,2000]
Percentage: [0.01,0.99]
If this parameter is left empty, the input stream height will be used by default.
If percentage is used, the expected output is (percentage * background height).
                     */
                    double m_imageHeight;
                    bool m_imageHeightHasBeenSet;

                    /**
                     * X-axis offset of input in output video image. Value range:
Pixel: [0,2000]
Percentage: [0.01,0.99]
If this parameter is left empty, 0 will be used by default.
Horizontal offset from the top-left corner of main host background video image. 
If percentage is used, the expected output is (percentage * background width).
                     */
                    double m_locationX;
                    bool m_locationXHasBeenSet;

                    /**
                     * Y-axis offset of input in output video image. Value range:
Pixel: [0,2000]
Percentage: [0.01,0.99]
If this parameter is left empty, 0 will be used by default.
Vertical offset from the top-left corner of main host background video image. 
If percentage is used, the expected output is (percentage * background width)
                     */
                    double m_locationY;
                    bool m_locationYHasBeenSet;

                    /**
                     * When `InputType` is 3 (canvas), this value indicates the canvas color.
Commonly used colors include:
Red: 0xcc0033.
Yellow: 0xcc9900.
Green: 0xcccc33.
Blue: 0x99CCFF.
Black: 0x000000.
White: 0xFFFFFF.
Gray: 0x999999
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * When `InputType` is 2 (image), this value is the watermark ID.
                     */
                    int64_t m_watermarkId;
                    bool m_watermarkIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXLAYOUTPARAMS_H_
