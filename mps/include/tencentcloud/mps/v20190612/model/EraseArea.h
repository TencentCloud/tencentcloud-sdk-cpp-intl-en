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
                * Smart erasure. coordinate configuration of the removal area.
The region is defined by the coordinates of the upper left corner and the bottom-right corner.
The coordinate origin is the top-left corner of the frame and the coordinate points can be specified using pixel values or percentage units.
**For the Automatic Erasing Area:**
When the unit is %, the coordinate range is [0,1].
When unit is px, X value range is [0, video image width]. Y value range is [0, video image height].
**For the Specified area erasing:**
Specifies the coordinate range as [0,1) when the unit is %.
When unit: px, X value range [0, video image width], Y value range [0, video image height].
                */
                class EraseArea : public AbstractModel
                {
                public:
                    EraseArea();
                    ~EraseArea() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取X-Axis coordinate of the upper left corner.
When Unit is set to 1 (percentage Unit), 0.05 indicates the horizontal distance from the upper left corner of the region to the top-left corner of the entire frame is 5% of the frame width.
                     * @return LeftTopX X-Axis coordinate of the upper left corner.
When Unit is set to 1 (percentage Unit), 0.05 indicates the horizontal distance from the upper left corner of the region to the top-left corner of the entire frame is 5% of the frame width.
                     * 
                     */
                    double GetLeftTopX() const;

                    /**
                     * 设置X-Axis coordinate of the upper left corner.
When Unit is set to 1 (percentage Unit), 0.05 indicates the horizontal distance from the upper left corner of the region to the top-left corner of the entire frame is 5% of the frame width.
                     * @param _leftTopX X-Axis coordinate of the upper left corner.
When Unit is set to 1 (percentage Unit), 0.05 indicates the horizontal distance from the upper left corner of the region to the top-left corner of the entire frame is 5% of the frame width.
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
                     * 获取Y-Axis coordinate of the upper left corner.
When Unit is set to 1 (using percentage Unit), 0.1 indicates the vertical distance from the top-left corner of the area to the top-left corner of the entire frame is 10% of the screen height.
                     * @return LeftTopY Y-Axis coordinate of the upper left corner.
When Unit is set to 1 (using percentage Unit), 0.1 indicates the vertical distance from the top-left corner of the area to the top-left corner of the entire frame is 10% of the screen height.
                     * 
                     */
                    double GetLeftTopY() const;

                    /**
                     * 设置Y-Axis coordinate of the upper left corner.
When Unit is set to 1 (using percentage Unit), 0.1 indicates the vertical distance from the top-left corner of the area to the top-left corner of the entire frame is 10% of the screen height.
                     * @param _leftTopY Y-Axis coordinate of the upper left corner.
When Unit is set to 1 (using percentage Unit), 0.1 indicates the vertical distance from the top-left corner of the area to the top-left corner of the entire frame is 10% of the screen height.
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
                     * 获取X-Axis coordinate of the bottom-right corner.
When Unit is set to 1 (percentage Unit), 0.75 indicates the horizontal distance from the bottom-right corner of the region to the top-left corner of the entire frame is 75% of the frame width.
                     * @return RightBottomX X-Axis coordinate of the bottom-right corner.
When Unit is set to 1 (percentage Unit), 0.75 indicates the horizontal distance from the bottom-right corner of the region to the top-left corner of the entire frame is 75% of the frame width.
                     * 
                     */
                    double GetRightBottomX() const;

                    /**
                     * 设置X-Axis coordinate of the bottom-right corner.
When Unit is set to 1 (percentage Unit), 0.75 indicates the horizontal distance from the bottom-right corner of the region to the top-left corner of the entire frame is 75% of the frame width.
                     * @param _rightBottomX X-Axis coordinate of the bottom-right corner.
When Unit is set to 1 (percentage Unit), 0.75 indicates the horizontal distance from the bottom-right corner of the region to the top-left corner of the entire frame is 75% of the frame width.
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
                     * 获取Y-Axis coordinate of the bottom-right corner.
When Unit is set to 1 (using percentage Unit), 0.9 indicates the vertical distance from the bottom-right corner of the area to the top-left corner of the entire frame is 90% of the screen height.
                     * @return RightBottomY Y-Axis coordinate of the bottom-right corner.
When Unit is set to 1 (using percentage Unit), 0.9 indicates the vertical distance from the bottom-right corner of the area to the top-left corner of the entire frame is 90% of the screen height.
                     * 
                     */
                    double GetRightBottomY() const;

                    /**
                     * 设置Y-Axis coordinate of the bottom-right corner.
When Unit is set to 1 (using percentage Unit), 0.9 indicates the vertical distance from the bottom-right corner of the area to the top-left corner of the entire frame is 90% of the screen height.
                     * @param _rightBottomY Y-Axis coordinate of the bottom-right corner.
When Unit is set to 1 (using percentage Unit), 0.9 indicates the vertical distance from the bottom-right corner of the area to the top-left corner of the entire frame is 90% of the screen height.
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
                     * 获取Specifies the coordinate unit.
-Percentage.
-2 pixel values.
                     * @return Unit Specifies the coordinate unit.
-Percentage.
-2 pixel values.
                     * 
                     */
                    uint64_t GetUnit() const;

                    /**
                     * 设置Specifies the coordinate unit.
-Percentage.
-2 pixel values.
                     * @param _unit Specifies the coordinate unit.
-Percentage.
-2 pixel values.
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
                     * X-Axis coordinate of the upper left corner.
When Unit is set to 1 (percentage Unit), 0.05 indicates the horizontal distance from the upper left corner of the region to the top-left corner of the entire frame is 5% of the frame width.
                     */
                    double m_leftTopX;
                    bool m_leftTopXHasBeenSet;

                    /**
                     * Y-Axis coordinate of the upper left corner.
When Unit is set to 1 (using percentage Unit), 0.1 indicates the vertical distance from the top-left corner of the area to the top-left corner of the entire frame is 10% of the screen height.
                     */
                    double m_leftTopY;
                    bool m_leftTopYHasBeenSet;

                    /**
                     * X-Axis coordinate of the bottom-right corner.
When Unit is set to 1 (percentage Unit), 0.75 indicates the horizontal distance from the bottom-right corner of the region to the top-left corner of the entire frame is 75% of the frame width.
                     */
                    double m_rightBottomX;
                    bool m_rightBottomXHasBeenSet;

                    /**
                     * Y-Axis coordinate of the bottom-right corner.
When Unit is set to 1 (using percentage Unit), 0.9 indicates the vertical distance from the bottom-right corner of the area to the top-left corner of the entire frame is 90% of the screen height.
                     */
                    double m_rightBottomY;
                    bool m_rightBottomYHasBeenSet;

                    /**
                     * Specifies the coordinate unit.
-Percentage.
-2 pixel values.
                     */
                    uint64_t m_unit;
                    bool m_unitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ERASEAREA_H_
