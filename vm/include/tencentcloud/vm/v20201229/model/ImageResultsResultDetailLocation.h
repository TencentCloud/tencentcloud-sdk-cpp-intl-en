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

#ifndef TENCENTCLOUD_VM_V20201229_MODEL_IMAGERESULTSRESULTDETAILLOCATION_H_
#define TENCENTCLOUD_VM_V20201229_MODEL_IMAGERESULTSRESULTDETAILLOCATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Position information of image details
                */
                class ImageResultsResultDetailLocation : public AbstractModel
                {
                public:
                    ImageResultsResultDetailLocation();
                    ~ImageResultsResultDetailLocation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This parameter is used to indicate the pixel position of the **abscissa (X)** of the top-left corner of the OCR detection frame. It can be combined with other parameters to uniquely determine the size and position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return X This parameter is used to indicate the pixel position of the **abscissa (X)** of the top-left corner of the OCR detection frame. It can be combined with other parameters to uniquely determine the size and position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetX() const;

                    /**
                     * 设置This parameter is used to indicate the pixel position of the **abscissa (X)** of the top-left corner of the OCR detection frame. It can be combined with other parameters to uniquely determine the size and position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _x This parameter is used to indicate the pixel position of the **abscissa (X)** of the top-left corner of the OCR detection frame. It can be combined with other parameters to uniquely determine the size and position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetX(const double& _x);

                    /**
                     * 判断参数 X 是否已赋值
                     * @return X 是否已赋值
                     * 
                     */
                    bool XHasBeenSet() const;

                    /**
                     * 获取This parameter is used to indicate the pixel position of the **ordinate (Y)** of the top-left corner of the OCR detection frame. It can be combined with other parameters to uniquely determine the size and position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Y This parameter is used to indicate the pixel position of the **ordinate (Y)** of the top-left corner of the OCR detection frame. It can be combined with other parameters to uniquely determine the size and position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetY() const;

                    /**
                     * 设置This parameter is used to indicate the pixel position of the **ordinate (Y)** of the top-left corner of the OCR detection frame. It can be combined with other parameters to uniquely determine the size and position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _y This parameter is used to indicate the pixel position of the **ordinate (Y)** of the top-left corner of the OCR detection frame. It can be combined with other parameters to uniquely determine the size and position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetY(const double& _y);

                    /**
                     * 判断参数 Y 是否已赋值
                     * @return Y 是否已赋值
                     * 
                     */
                    bool YHasBeenSet() const;

                    /**
                     * 获取This parameter is used to indicate the **width of the OCR detection frame** (the length starting from the top-left corner and extending to the right on the X axis). It can be combined with other parameters to uniquely determine the size and position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Width This parameter is used to indicate the **width of the OCR detection frame** (the length starting from the top-left corner and extending to the right on the X axis). It can be combined with other parameters to uniquely determine the size and position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置This parameter is used to indicate the **width of the OCR detection frame** (the length starting from the top-left corner and extending to the right on the X axis). It can be combined with other parameters to uniquely determine the size and position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _width This parameter is used to indicate the **width of the OCR detection frame** (the length starting from the top-left corner and extending to the right on the X axis). It can be combined with other parameters to uniquely determine the size and position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取This parameter is used to indicate the **height of the OCR detection frame** (the length starting from the top-left corner and extending down the Y axis). It can be combined with other parameters to uniquely determine the size and position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Height This parameter is used to indicate the **height of the OCR detection frame** (the length starting from the top-left corner and extending down the Y axis). It can be combined with other parameters to uniquely determine the size and position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置This parameter is used to indicate the **height of the OCR detection frame** (the length starting from the top-left corner and extending down the Y axis). It can be combined with other parameters to uniquely determine the size and position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _height This parameter is used to indicate the **height of the OCR detection frame** (the length starting from the top-left corner and extending down the Y axis). It can be combined with other parameters to uniquely determine the size and position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取This parameter is used to indicate the **rotation angle of the OCR detection frame**. Valid values: **0–360** (**degrees**), and the direction is **counterclockwise rotation**. This parameter can be combined with the `X` and `Y` coordinate parameters to uniquely determine the specific position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Rotate This parameter is used to indicate the **rotation angle of the OCR detection frame**. Valid values: **0–360** (**degrees**), and the direction is **counterclockwise rotation**. This parameter can be combined with the `X` and `Y` coordinate parameters to uniquely determine the specific position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetRotate() const;

                    /**
                     * 设置This parameter is used to indicate the **rotation angle of the OCR detection frame**. Valid values: **0–360** (**degrees**), and the direction is **counterclockwise rotation**. This parameter can be combined with the `X` and `Y` coordinate parameters to uniquely determine the specific position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _rotate This parameter is used to indicate the **rotation angle of the OCR detection frame**. Valid values: **0–360** (**degrees**), and the direction is **counterclockwise rotation**. This parameter can be combined with the `X` and `Y` coordinate parameters to uniquely determine the specific position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRotate(const double& _rotate);

                    /**
                     * 判断参数 Rotate 是否已赋值
                     * @return Rotate 是否已赋值
                     * 
                     */
                    bool RotateHasBeenSet() const;

                private:

                    /**
                     * This parameter is used to indicate the pixel position of the **abscissa (X)** of the top-left corner of the OCR detection frame. It can be combined with other parameters to uniquely determine the size and position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double m_x;
                    bool m_xHasBeenSet;

                    /**
                     * This parameter is used to indicate the pixel position of the **ordinate (Y)** of the top-left corner of the OCR detection frame. It can be combined with other parameters to uniquely determine the size and position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double m_y;
                    bool m_yHasBeenSet;

                    /**
                     * This parameter is used to indicate the **width of the OCR detection frame** (the length starting from the top-left corner and extending to the right on the X axis). It can be combined with other parameters to uniquely determine the size and position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * This parameter is used to indicate the **height of the OCR detection frame** (the length starting from the top-left corner and extending down the Y axis). It can be combined with other parameters to uniquely determine the size and position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * This parameter is used to indicate the **rotation angle of the OCR detection frame**. Valid values: **0–360** (**degrees**), and the direction is **counterclockwise rotation**. This parameter can be combined with the `X` and `Y` coordinate parameters to uniquely determine the specific position of the detection frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double m_rotate;
                    bool m_rotateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20201229_MODEL_IMAGERESULTSRESULTDETAILLOCATION_H_
