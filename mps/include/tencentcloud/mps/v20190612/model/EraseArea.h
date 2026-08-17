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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ERASEAREA_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ERASEAREA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Smart erasing, coordinate configuration for the removal area.
The region is determined by the coordinates of the upper left corner and the bottom-right corner.
The coordinate origin is the top-left corner of the image. Coordinate points can be specified using pixel values or a percentage unit.
For the auto erase area:
When unit: %, coordinate range is [0,1].
When the unit is px, the X range is [0, video image width], and the Y range is [0, video image height].
For the designated erase area:
When unit: %, coordinate range is [0,1).
When the unit is px, the X value range is [0, video image width], and the Y value range is [0, video image height].
                */
                class EraseArea : public AbstractModel
                {
                public:
                    EraseArea();
                    ~EraseArea() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取X-axis coordinate of the upper left corner of the region.
For example, when Unit is set to 1, which means using the percentage unit, 0.05 indicates that the horizontal distance from the top-left corner of the region to the top-left corner of the entire frame is 5% of the frame width.
                     * @return LeftTopX X-axis coordinate of the upper left corner of the region.
For example, when Unit is set to 1, which means using the percentage unit, 0.05 indicates that the horizontal distance from the top-left corner of the region to the top-left corner of the entire frame is 5% of the frame width.
                     * 
                     */
                    double GetLeftTopX() const;

                    /**
                     * 设置X-axis coordinate of the upper left corner of the region.
For example, when Unit is set to 1, which means using the percentage unit, 0.05 indicates that the horizontal distance from the top-left corner of the region to the top-left corner of the entire frame is 5% of the frame width.
                     * @param _leftTopX X-axis coordinate of the upper left corner of the region.
For example, when Unit is set to 1, which means using the percentage unit, 0.05 indicates that the horizontal distance from the top-left corner of the region to the top-left corner of the entire frame is 5% of the frame width.
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
                     * 获取Y-axis coordinate of the upper left corner.
For example, when Unit is set to 1, which means using the percentage unit, 0.1 indicates that the vertical distance from the top-left corner of the region to the top-left corner of the entire frame is 10% of the frame height.
                     * @return LeftTopY Y-axis coordinate of the upper left corner.
For example, when Unit is set to 1, which means using the percentage unit, 0.1 indicates that the vertical distance from the top-left corner of the region to the top-left corner of the entire frame is 10% of the frame height.
                     * 
                     */
                    double GetLeftTopY() const;

                    /**
                     * 设置Y-axis coordinate of the upper left corner.
For example, when Unit is set to 1, which means using the percentage unit, 0.1 indicates that the vertical distance from the top-left corner of the region to the top-left corner of the entire frame is 10% of the frame height.
                     * @param _leftTopY Y-axis coordinate of the upper left corner.
For example, when Unit is set to 1, which means using the percentage unit, 0.1 indicates that the vertical distance from the top-left corner of the region to the top-left corner of the entire frame is 10% of the frame height.
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
                     * 获取X-axis coordinate of the bottom-right corner of the region.
For example, when Unit is set to 1, which means using the percentage unit, 0.75 indicates that the horizontal distance from the bottom-right corner of the region to the top-left corner of the entire frame is 75% of the frame width.
                     * @return RightBottomX X-axis coordinate of the bottom-right corner of the region.
For example, when Unit is set to 1, which means using the percentage unit, 0.75 indicates that the horizontal distance from the bottom-right corner of the region to the top-left corner of the entire frame is 75% of the frame width.
                     * 
                     */
                    double GetRightBottomX() const;

                    /**
                     * 设置X-axis coordinate of the bottom-right corner of the region.
For example, when Unit is set to 1, which means using the percentage unit, 0.75 indicates that the horizontal distance from the bottom-right corner of the region to the top-left corner of the entire frame is 75% of the frame width.
                     * @param _rightBottomX X-axis coordinate of the bottom-right corner of the region.
For example, when Unit is set to 1, which means using the percentage unit, 0.75 indicates that the horizontal distance from the bottom-right corner of the region to the top-left corner of the entire frame is 75% of the frame width.
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
                     * 获取Y-axis coordinate of the bottom-right corner of the region.
For example, when Unit is set to 1, which means using the percentage unit, 0.9 indicates that the vertical distance from the bottom-right corner of the region to the top-left corner of the entire frame is 90% of the frame height.
                     * @return RightBottomY Y-axis coordinate of the bottom-right corner of the region.
For example, when Unit is set to 1, which means using the percentage unit, 0.9 indicates that the vertical distance from the bottom-right corner of the region to the top-left corner of the entire frame is 90% of the frame height.
                     * 
                     */
                    double GetRightBottomY() const;

                    /**
                     * 设置Y-axis coordinate of the bottom-right corner of the region.
For example, when Unit is set to 1, which means using the percentage unit, 0.9 indicates that the vertical distance from the bottom-right corner of the region to the top-left corner of the entire frame is 90% of the frame height.
                     * @param _rightBottomY Y-axis coordinate of the bottom-right corner of the region.
For example, when Unit is set to 1, which means using the percentage unit, 0.9 indicates that the vertical distance from the bottom-right corner of the region to the top-left corner of the entire frame is 90% of the frame height.
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
                     * 获取Coordinate unit
-Percentage
- 2 pixel values
                     * @return Unit Coordinate unit
-Percentage
- 2 pixel values
                     * 
                     */
                    uint64_t GetUnit() const;

                    /**
                     * 设置Coordinate unit
-Percentage
- 2 pixel values
                     * @param _unit Coordinate unit
-Percentage
- 2 pixel values
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
                     * X-axis coordinate of the upper left corner of the region.
For example, when Unit is set to 1, which means using the percentage unit, 0.05 indicates that the horizontal distance from the top-left corner of the region to the top-left corner of the entire frame is 5% of the frame width.
                     */
                    double m_leftTopX;
                    bool m_leftTopXHasBeenSet;

                    /**
                     * Y-axis coordinate of the upper left corner.
For example, when Unit is set to 1, which means using the percentage unit, 0.1 indicates that the vertical distance from the top-left corner of the region to the top-left corner of the entire frame is 10% of the frame height.
                     */
                    double m_leftTopY;
                    bool m_leftTopYHasBeenSet;

                    /**
                     * X-axis coordinate of the bottom-right corner of the region.
For example, when Unit is set to 1, which means using the percentage unit, 0.75 indicates that the horizontal distance from the bottom-right corner of the region to the top-left corner of the entire frame is 75% of the frame width.
                     */
                    double m_rightBottomX;
                    bool m_rightBottomXHasBeenSet;

                    /**
                     * Y-axis coordinate of the bottom-right corner of the region.
For example, when Unit is set to 1, which means using the percentage unit, 0.9 indicates that the vertical distance from the bottom-right corner of the region to the top-left corner of the entire frame is 90% of the frame height.
                     */
                    double m_rightBottomY;
                    bool m_rightBottomYHasBeenSet;

                    /**
                     * Coordinate unit
-Percentage
- 2 pixel values
                     */
                    uint64_t m_unit;
                    bool m_unitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ERASEAREA_H_
