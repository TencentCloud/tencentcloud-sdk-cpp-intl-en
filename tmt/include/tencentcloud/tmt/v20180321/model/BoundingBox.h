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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_BOUNDINGBOX_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_BOUNDINGBOX_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * Paragraph text box location: x, y represent the top-left corner, width and height represent width and height.
                */
                class BoundingBox : public AbstractModel
                {
                public:
                    BoundingBox();
                    ~BoundingBox() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>x-coordinate of the top-left corner</p>
                     * @return X <p>x-coordinate of the top-left corner</p>
                     * 
                     */
                    int64_t GetX() const;

                    /**
                     * 设置<p>x-coordinate of the top-left corner</p>
                     * @param _x <p>x-coordinate of the top-left corner</p>
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
                     * 获取<p>y-coordinate of the top-left corner</p>
                     * @return Y <p>y-coordinate of the top-left corner</p>
                     * 
                     */
                    int64_t GetY() const;

                    /**
                     * 设置<p>y-coordinate of the top-left corner</p>
                     * @param _y <p>y-coordinate of the top-left corner</p>
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
                     * 获取<p>Width.</p><p>Unit: px.</p>
                     * @return Width <p>Width.</p><p>Unit: px.</p>
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置<p>Width.</p><p>Unit: px.</p>
                     * @param _width <p>Width.</p><p>Unit: px.</p>
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
                     * 获取<p>High.</p><p>Unit: px.</p>
                     * @return Height <p>High.</p><p>Unit: px.</p>
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置<p>High.</p><p>Unit: px.</p>
                     * @param _height <p>High.</p><p>Unit: px.</p>
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                private:

                    /**
                     * <p>x-coordinate of the top-left corner</p>
                     */
                    int64_t m_x;
                    bool m_xHasBeenSet;

                    /**
                     * <p>y-coordinate of the top-left corner</p>
                     */
                    int64_t m_y;
                    bool m_yHasBeenSet;

                    /**
                     * <p>Width.</p><p>Unit: px.</p>
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>High.</p><p>Unit: px.</p>
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_BOUNDINGBOX_H_
