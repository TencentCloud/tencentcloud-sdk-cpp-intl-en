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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGECOMPOSELAYER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGECOMPOSELAYER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Layer fusion functionality of image processing layer data structure
                */
                class ImageComposeLayer : public AbstractModel
                {
                public:
                    ImageComposeLayer();
                    ~ImageComposeLayer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Layer stacking sequence, required. It cannot be repeated in the same request. The larger the value, the higher the layer (it is recommended to start consecutive numbering from 0).</p>
                     * @return ZIndex <p>Layer stacking sequence, required. It cannot be repeated in the same request. The larger the value, the higher the layer (it is recommended to start consecutive numbering from 0).</p>
                     * 
                     */
                    int64_t GetZIndex() const;

                    /**
                     * 设置<p>Layer stacking sequence, required. It cannot be repeated in the same request. The larger the value, the higher the layer (it is recommended to start consecutive numbering from 0).</p>
                     * @param _zIndex <p>Layer stacking sequence, required. It cannot be repeated in the same request. The larger the value, the higher the layer (it is recommended to start consecutive numbering from 0).</p>
                     * 
                     */
                    void SetZIndex(const int64_t& _zIndex);

                    /**
                     * 判断参数 ZIndex 是否已赋值
                     * @return ZIndex 是否已赋值
                     * 
                     */
                    bool ZIndexHasBeenSet() const;

                    /**
                     * 获取<p>Layer source, required. Supports URL / COS / AWS-S3 / VOD.</p>
                     * @return InputInfo <p>Layer source, required. Supports URL / COS / AWS-S3 / VOD.</p>
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置<p>Layer source, required. Supports URL / COS / AWS-S3 / VOD.</p>
                     * @param _inputInfo <p>Layer source, required. Supports URL / COS / AWS-S3 / VOD.</p>
                     * 
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取<p>The position and size of the layer in the canvas. Required. An array of length 4 [X1, Y1, X2, Y2]: coordinates of the top-left and bottom-right corners. X2 > X1 and Y2 > Y1 are required.</p><p>Two semantics (aligned with the BoundingBox of the image removal capability):</p><ul><li>Pixel: coordinate values in the range of [-10240, 10240]. Negative values or values beyond the canvas are allowed (the excess part is cropped).</li><li>Ratio: each value ∈ [-1, 1], converted based on the canvas width and height (x multiplied by canvas width, y multiplied by canvas height).</li></ul><p>The layer is scaled to fill this rectangle. Any part beyond the canvas is cropped, and the output size is always equal to the canvas size.</p>
                     * @return BoundingBox <p>The position and size of the layer in the canvas. Required. An array of length 4 [X1, Y1, X2, Y2]: coordinates of the top-left and bottom-right corners. X2 > X1 and Y2 > Y1 are required.</p><p>Two semantics (aligned with the BoundingBox of the image removal capability):</p><ul><li>Pixel: coordinate values in the range of [-10240, 10240]. Negative values or values beyond the canvas are allowed (the excess part is cropped).</li><li>Ratio: each value ∈ [-1, 1], converted based on the canvas width and height (x multiplied by canvas width, y multiplied by canvas height).</li></ul><p>The layer is scaled to fill this rectangle. Any part beyond the canvas is cropped, and the output size is always equal to the canvas size.</p>
                     * 
                     */
                    std::vector<double> GetBoundingBox() const;

                    /**
                     * 设置<p>The position and size of the layer in the canvas. Required. An array of length 4 [X1, Y1, X2, Y2]: coordinates of the top-left and bottom-right corners. X2 > X1 and Y2 > Y1 are required.</p><p>Two semantics (aligned with the BoundingBox of the image removal capability):</p><ul><li>Pixel: coordinate values in the range of [-10240, 10240]. Negative values or values beyond the canvas are allowed (the excess part is cropped).</li><li>Ratio: each value ∈ [-1, 1], converted based on the canvas width and height (x multiplied by canvas width, y multiplied by canvas height).</li></ul><p>The layer is scaled to fill this rectangle. Any part beyond the canvas is cropped, and the output size is always equal to the canvas size.</p>
                     * @param _boundingBox <p>The position and size of the layer in the canvas. Required. An array of length 4 [X1, Y1, X2, Y2]: coordinates of the top-left and bottom-right corners. X2 > X1 and Y2 > Y1 are required.</p><p>Two semantics (aligned with the BoundingBox of the image removal capability):</p><ul><li>Pixel: coordinate values in the range of [-10240, 10240]. Negative values or values beyond the canvas are allowed (the excess part is cropped).</li><li>Ratio: each value ∈ [-1, 1], converted based on the canvas width and height (x multiplied by canvas width, y multiplied by canvas height).</li></ul><p>The layer is scaled to fill this rectangle. Any part beyond the canvas is cropped, and the output size is always equal to the canvas size.</p>
                     * 
                     */
                    void SetBoundingBox(const std::vector<double>& _boundingBox);

                    /**
                     * 判断参数 BoundingBox 是否已赋值
                     * @return BoundingBox 是否已赋值
                     * 
                     */
                    bool BoundingBoxHasBeenSet() const;

                    /**
                     * 获取<p>Coordinate unit, aligned with the image removal capacity. Values:</p><ul><li>0: automatic judgment (default value if not passed);</li><li>1: ratio;</li><li>2: pixel.</li></ul><p>Automatic judgment rules: if all four values are greater than 1, they are interpreted as pixels; if all are not greater than 1, they are interpreted as ratios. Mixed values will return InvalidParameter. It is recommended to always explicitly specify.</p>
                     * @return BoundingBoxUnitType <p>Coordinate unit, aligned with the image removal capacity. Values:</p><ul><li>0: automatic judgment (default value if not passed);</li><li>1: ratio;</li><li>2: pixel.</li></ul><p>Automatic judgment rules: if all four values are greater than 1, they are interpreted as pixels; if all are not greater than 1, they are interpreted as ratios. Mixed values will return InvalidParameter. It is recommended to always explicitly specify.</p>
                     * 
                     */
                    uint64_t GetBoundingBoxUnitType() const;

                    /**
                     * 设置<p>Coordinate unit, aligned with the image removal capacity. Values:</p><ul><li>0: automatic judgment (default value if not passed);</li><li>1: ratio;</li><li>2: pixel.</li></ul><p>Automatic judgment rules: if all four values are greater than 1, they are interpreted as pixels; if all are not greater than 1, they are interpreted as ratios. Mixed values will return InvalidParameter. It is recommended to always explicitly specify.</p>
                     * @param _boundingBoxUnitType <p>Coordinate unit, aligned with the image removal capacity. Values:</p><ul><li>0: automatic judgment (default value if not passed);</li><li>1: ratio;</li><li>2: pixel.</li></ul><p>Automatic judgment rules: if all four values are greater than 1, they are interpreted as pixels; if all are not greater than 1, they are interpreted as ratios. Mixed values will return InvalidParameter. It is recommended to always explicitly specify.</p>
                     * 
                     */
                    void SetBoundingBoxUnitType(const uint64_t& _boundingBoxUnitType);

                    /**
                     * 判断参数 BoundingBoxUnitType 是否已赋值
                     * @return BoundingBoxUnitType 是否已赋值
                     * 
                     */
                    bool BoundingBoxUnitTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Layer stacking sequence, required. It cannot be repeated in the same request. The larger the value, the higher the layer (it is recommended to start consecutive numbering from 0).</p>
                     */
                    int64_t m_zIndex;
                    bool m_zIndexHasBeenSet;

                    /**
                     * <p>Layer source, required. Supports URL / COS / AWS-S3 / VOD.</p>
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * <p>The position and size of the layer in the canvas. Required. An array of length 4 [X1, Y1, X2, Y2]: coordinates of the top-left and bottom-right corners. X2 > X1 and Y2 > Y1 are required.</p><p>Two semantics (aligned with the BoundingBox of the image removal capability):</p><ul><li>Pixel: coordinate values in the range of [-10240, 10240]. Negative values or values beyond the canvas are allowed (the excess part is cropped).</li><li>Ratio: each value ∈ [-1, 1], converted based on the canvas width and height (x multiplied by canvas width, y multiplied by canvas height).</li></ul><p>The layer is scaled to fill this rectangle. Any part beyond the canvas is cropped, and the output size is always equal to the canvas size.</p>
                     */
                    std::vector<double> m_boundingBox;
                    bool m_boundingBoxHasBeenSet;

                    /**
                     * <p>Coordinate unit, aligned with the image removal capacity. Values:</p><ul><li>0: automatic judgment (default value if not passed);</li><li>1: ratio;</li><li>2: pixel.</li></ul><p>Automatic judgment rules: if all four values are greater than 1, they are interpreted as pixels; if all are not greater than 1, they are interpreted as ratios. Mixed values will return InvalidParameter. It is recommended to always explicitly specify.</p>
                     */
                    uint64_t m_boundingBoxUnitType;
                    bool m_boundingBoxUnitTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGECOMPOSELAYER_H_
