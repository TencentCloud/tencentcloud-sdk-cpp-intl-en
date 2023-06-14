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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_LAYOUTPARAMS_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_LAYOUTPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * Custom mixed stream layout parameter
                */
                class LayoutParams : public AbstractModel
                {
                public:
                    LayoutParams();
                    ~LayoutParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Stream image width. Value range: [2,3000]
                     * @return Width Stream image width. Value range: [2,3000]
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Stream image width. Value range: [2,3000]
                     * @param _width Stream image width. Value range: [2,3000]
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Stream image height. Value range: [2,3000]
                     * @return Height Stream image height. Value range: [2,3000]
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Stream image height. Value range: [2,3000]
                     * @param _height Stream image height. Value range: [2,3000]
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Offset of the top point in the upper-left corner of the current image to the X axis of the top point in the upper-left corner of the canvas. Default value: 0. Value range: [0,3000].
                     * @return X Offset of the top point in the upper-left corner of the current image to the X axis of the top point in the upper-left corner of the canvas. Default value: 0. Value range: [0,3000].
                     * 
                     */
                    int64_t GetX() const;

                    /**
                     * 设置Offset of the top point in the upper-left corner of the current image to the X axis of the top point in the upper-left corner of the canvas. Default value: 0. Value range: [0,3000].
                     * @param _x Offset of the top point in the upper-left corner of the current image to the X axis of the top point in the upper-left corner of the canvas. Default value: 0. Value range: [0,3000].
                     * 
                     */
                    void SetX(const int64_t& _x);

                    /**
                     * 判断参数 X 是否已赋值
                     * @return X 是否已赋值
                     * 
                     */
                    bool XHasBeenSet() const;

                    /**
                     * 获取Offset of the top point in the upper-left corner of the current image to the Y axis of the top point in the upper-left corner of the canvas. Default value: 0. Value range: [0,3000].
                     * @return Y Offset of the top point in the upper-left corner of the current image to the Y axis of the top point in the upper-left corner of the canvas. Default value: 0. Value range: [0,3000].
                     * 
                     */
                    int64_t GetY() const;

                    /**
                     * 设置Offset of the top point in the upper-left corner of the current image to the Y axis of the top point in the upper-left corner of the canvas. Default value: 0. Value range: [0,3000].
                     * @param _y Offset of the top point in the upper-left corner of the current image to the Y axis of the top point in the upper-left corner of the canvas. Default value: 0. Value range: [0,3000].
                     * 
                     */
                    void SetY(const int64_t& _y);

                    /**
                     * 判断参数 Y 是否已赋值
                     * @return Y 是否已赋值
                     * 
                     */
                    bool YHasBeenSet() const;

                    /**
                     * 获取Z-axis position of the image. The default value is 0.
The Z axis determines the overlap sequence of images. The image with the largest z-axis value is at the top layer.
                     * @return ZOrder Z-axis position of the image. The default value is 0.
The Z axis determines the overlap sequence of images. The image with the largest z-axis value is at the top layer.
                     * 
                     */
                    int64_t GetZOrder() const;

                    /**
                     * 设置Z-axis position of the image. The default value is 0.
The Z axis determines the overlap sequence of images. The image with the largest z-axis value is at the top layer.
                     * @param _zOrder Z-axis position of the image. The default value is 0.
The Z axis determines the overlap sequence of images. The image with the largest z-axis value is at the top layer.
                     * 
                     */
                    void SetZOrder(const int64_t& _zOrder);

                    /**
                     * 判断参数 ZOrder 是否已赋值
                     * @return ZOrder 是否已赋值
                     * 
                     */
                    bool ZOrderHasBeenSet() const;

                private:

                    /**
                     * Stream image width. Value range: [2,3000]
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Stream image height. Value range: [2,3000]
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Offset of the top point in the upper-left corner of the current image to the X axis of the top point in the upper-left corner of the canvas. Default value: 0. Value range: [0,3000].
                     */
                    int64_t m_x;
                    bool m_xHasBeenSet;

                    /**
                     * Offset of the top point in the upper-left corner of the current image to the Y axis of the top point in the upper-left corner of the canvas. Default value: 0. Value range: [0,3000].
                     */
                    int64_t m_y;
                    bool m_yHasBeenSet;

                    /**
                     * Z-axis position of the image. The default value is 0.
The Z axis determines the overlap sequence of images. The image with the largest z-axis value is at the top layer.
                     */
                    int64_t m_zOrder;
                    bool m_zOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_LAYOUTPARAMS_H_
