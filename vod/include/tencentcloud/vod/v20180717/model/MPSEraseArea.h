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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSERASEAREA_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSERASEAREA_H_

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
                * Intelligent removal, coordinate configuration of the removal area.
The region is determined by the coordinates of the top-left and bottom-right corners.
The coordinate origin is the top-left corner of the frame. Coordinate points can be specified in pixel values or percentages.
For the auto erase area:
When the unit is %, the coordinate range is [0,1];
When the unit is px, the X value range is [0, video image width] and the Y value range is [0, video image height].
For the specified removal area:
When the unit is %, the coordinate range is [0,1);
When the unit is px, the X value range is [0, video image width] and the Y value range is [0, video image height].
                */
                class MPSEraseArea : public AbstractModel
                {
                public:
                    MPSEraseArea();
                    ~MPSEraseArea() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Top-left X-axis coordinate of the region. For example, when Unit is 1, that is, using percentage as the measurement unit, 0.05 means the horizontal distance from the top-left corner of the region to the top-left corner of the entire frame is 5% of the frame width.</p>
                     * @return LeftTopX <p>Top-left X-axis coordinate of the region. For example, when Unit is 1, that is, using percentage as the measurement unit, 0.05 means the horizontal distance from the top-left corner of the region to the top-left corner of the entire frame is 5% of the frame width.</p>
                     * 
                     */
                    double GetLeftTopX() const;

                    /**
                     * 设置<p>Top-left X-axis coordinate of the region. For example, when Unit is 1, that is, using percentage as the measurement unit, 0.05 means the horizontal distance from the top-left corner of the region to the top-left corner of the entire frame is 5% of the frame width.</p>
                     * @param _leftTopX <p>Top-left X-axis coordinate of the region. For example, when Unit is 1, that is, using percentage as the measurement unit, 0.05 means the horizontal distance from the top-left corner of the region to the top-left corner of the entire frame is 5% of the frame width.</p>
                     * 
                     */
                    void SetLeftTopX(const double& _leftTopX);

                    /**
                     * 判断参数 LeftTopX 是否已赋值
                     * @return LeftTopX 是否已赋值
                     * 
                     */
                    bool LeftTopXHasBeenSet() const;

                    /**
                     * 获取<p>Y-axis coordinate of the region's top-left corner. For example, when Unit is 1, meaning usage percentage, 0.1 indicates the vertical distance between the region's top-left corner and the frame's top-left corner is 10% of the screen height.</p>
                     * @return LeftTopY <p>Y-axis coordinate of the region's top-left corner. For example, when Unit is 1, meaning usage percentage, 0.1 indicates the vertical distance between the region's top-left corner and the frame's top-left corner is 10% of the screen height.</p>
                     * 
                     */
                    double GetLeftTopY() const;

                    /**
                     * 设置<p>Y-axis coordinate of the region's top-left corner. For example, when Unit is 1, meaning usage percentage, 0.1 indicates the vertical distance between the region's top-left corner and the frame's top-left corner is 10% of the screen height.</p>
                     * @param _leftTopY <p>Y-axis coordinate of the region's top-left corner. For example, when Unit is 1, meaning usage percentage, 0.1 indicates the vertical distance between the region's top-left corner and the frame's top-left corner is 10% of the screen height.</p>
                     * 
                     */
                    void SetLeftTopY(const double& _leftTopY);

                    /**
                     * 判断参数 LeftTopY 是否已赋值
                     * @return LeftTopY 是否已赋值
                     * 
                     */
                    bool LeftTopYHasBeenSet() const;

                    /**
                     * 获取<p>X coordinate of the region's bottom-right corner. For example, when Unit is 1, using percentage as the unit, 0.75 means the horizontal distance from the bottom-right corner of the region to the upper left of the entire frame is 75% of the frame width.</p>
                     * @return RightBottomX <p>X coordinate of the region's bottom-right corner. For example, when Unit is 1, using percentage as the unit, 0.75 means the horizontal distance from the bottom-right corner of the region to the upper left of the entire frame is 75% of the frame width.</p>
                     * 
                     */
                    double GetRightBottomX() const;

                    /**
                     * 设置<p>X coordinate of the region's bottom-right corner. For example, when Unit is 1, using percentage as the unit, 0.75 means the horizontal distance from the bottom-right corner of the region to the upper left of the entire frame is 75% of the frame width.</p>
                     * @param _rightBottomX <p>X coordinate of the region's bottom-right corner. For example, when Unit is 1, using percentage as the unit, 0.75 means the horizontal distance from the bottom-right corner of the region to the upper left of the entire frame is 75% of the frame width.</p>
                     * 
                     */
                    void SetRightBottomX(const double& _rightBottomX);

                    /**
                     * 判断参数 RightBottomX 是否已赋值
                     * @return RightBottomX 是否已赋值
                     * 
                     */
                    bool RightBottomXHasBeenSet() const;

                    /**
                     * 获取<p>Y-coordinate of the region's bottom-right corner. For example, when Unit is 1, meaning percentage is used, 0.9 indicates the vertical distance from the bottom-right corner of the region to the upper left corner of the entire frame is 90% of the screen height.</p>
                     * @return RightBottomY <p>Y-coordinate of the region's bottom-right corner. For example, when Unit is 1, meaning percentage is used, 0.9 indicates the vertical distance from the bottom-right corner of the region to the upper left corner of the entire frame is 90% of the screen height.</p>
                     * 
                     */
                    double GetRightBottomY() const;

                    /**
                     * 设置<p>Y-coordinate of the region's bottom-right corner. For example, when Unit is 1, meaning percentage is used, 0.9 indicates the vertical distance from the bottom-right corner of the region to the upper left corner of the entire frame is 90% of the screen height.</p>
                     * @param _rightBottomY <p>Y-coordinate of the region's bottom-right corner. For example, when Unit is 1, meaning percentage is used, 0.9 indicates the vertical distance from the bottom-right corner of the region to the upper left corner of the entire frame is 90% of the screen height.</p>
                     * 
                     */
                    void SetRightBottomY(const double& _rightBottomY);

                    /**
                     * 判断参数 RightBottomY 是否已赋值
                     * @return RightBottomY 是否已赋值
                     * 
                     */
                    bool RightBottomYHasBeenSet() const;

                    /**
                     * 获取<p>Coordinate unit - 1 Percentage - 2 Pixel values</p>
                     * @return Unit <p>Coordinate unit - 1 Percentage - 2 Pixel values</p>
                     * 
                     */
                    uint64_t GetUnit() const;

                    /**
                     * 设置<p>Coordinate unit - 1 Percentage - 2 Pixel values</p>
                     * @param _unit <p>Coordinate unit - 1 Percentage - 2 Pixel values</p>
                     * 
                     */
                    void SetUnit(const uint64_t& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                private:

                    /**
                     * <p>Top-left X-axis coordinate of the region. For example, when Unit is 1, that is, using percentage as the measurement unit, 0.05 means the horizontal distance from the top-left corner of the region to the top-left corner of the entire frame is 5% of the frame width.</p>
                     */
                    double m_leftTopX;
                    bool m_leftTopXHasBeenSet;

                    /**
                     * <p>Y-axis coordinate of the region's top-left corner. For example, when Unit is 1, meaning usage percentage, 0.1 indicates the vertical distance between the region's top-left corner and the frame's top-left corner is 10% of the screen height.</p>
                     */
                    double m_leftTopY;
                    bool m_leftTopYHasBeenSet;

                    /**
                     * <p>X coordinate of the region's bottom-right corner. For example, when Unit is 1, using percentage as the unit, 0.75 means the horizontal distance from the bottom-right corner of the region to the upper left of the entire frame is 75% of the frame width.</p>
                     */
                    double m_rightBottomX;
                    bool m_rightBottomXHasBeenSet;

                    /**
                     * <p>Y-coordinate of the region's bottom-right corner. For example, when Unit is 1, meaning percentage is used, 0.9 indicates the vertical distance from the bottom-right corner of the region to the upper left corner of the entire frame is 90% of the screen height.</p>
                     */
                    double m_rightBottomY;
                    bool m_rightBottomYHasBeenSet;

                    /**
                     * <p>Coordinate unit - 1 Percentage - 2 Pixel values</p>
                     */
                    uint64_t m_unit;
                    bool m_unitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSERASEAREA_H_
