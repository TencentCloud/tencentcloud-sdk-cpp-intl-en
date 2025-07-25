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

#ifndef TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FACERECT_H_
#define TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FACERECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20220927
        {
            namespace Model
            {
                /**
                * Face box information
                */
                class FaceRect : public AbstractModel
                {
                public:
                    FaceRect();
                    ~FaceRect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Top-left X-axis coordinate of the face box
                     * @return X Top-left X-axis coordinate of the face box
                     * 
                     */
                    int64_t GetX() const;

                    /**
                     * 设置Top-left X-axis coordinate of the face box
                     * @param _x Top-left X-axis coordinate of the face box
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
                     * 获取Top-left Y-axis coordinate of the face box
                     * @return Y Top-left Y-axis coordinate of the face box
                     * 
                     */
                    int64_t GetY() const;

                    /**
                     * 设置Top-left Y-axis coordinate of the face box
                     * @param _y Top-left Y-axis coordinate of the face box
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
                     * 获取Face box width
                     * @return Width Face box width
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Face box width
                     * @param _width Face box width
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
                     * 获取Face box height
                     * @return Height Face box height
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Face box height
                     * @param _height Face box height
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
                     * Top-left X-axis coordinate of the face box
                     */
                    int64_t m_x;
                    bool m_xHasBeenSet;

                    /**
                     * Top-left Y-axis coordinate of the face box
                     */
                    int64_t m_y;
                    bool m_yHasBeenSet;

                    /**
                     * Face box width
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Face box height
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FACERECT_H_
