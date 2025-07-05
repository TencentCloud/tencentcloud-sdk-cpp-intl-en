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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARD_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARD_H_

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
                * Real-time recording whiteboard parameter, such as the whiteboard width and height
                */
                class Whiteboard : public AbstractModel
                {
                public:
                    Whiteboard();
                    ~Whiteboard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whiteboard video width in the real-time recording result. The value must be equal to or greater than 2. Default value: 1280.
                     * @return Width Whiteboard video width in the real-time recording result. The value must be equal to or greater than 2. Default value: 1280.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Whiteboard video width in the real-time recording result. The value must be equal to or greater than 2. Default value: 1280.
                     * @param _width Whiteboard video width in the real-time recording result. The value must be equal to or greater than 2. Default value: 1280.
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
                     * 获取Whiteboard video height in the real-time recording result. The value must be equal to or greater than 2. Default value: 960.
                     * @return Height Whiteboard video height in the real-time recording result. The value must be equal to or greater than 2. Default value: 960.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Whiteboard video height in the real-time recording result. The value must be equal to or greater than 2. Default value: 960.
                     * @param _height Whiteboard video height in the real-time recording result. The value must be equal to or greater than 2. Default value: 960.
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
                     * 获取Whiteboard initialization parameter, which is passed through to the whiteboard SDK
                     * @return InitParam Whiteboard initialization parameter, which is passed through to the whiteboard SDK
                     * 
                     */
                    std::string GetInitParam() const;

                    /**
                     * 设置Whiteboard initialization parameter, which is passed through to the whiteboard SDK
                     * @param _initParam Whiteboard initialization parameter, which is passed through to the whiteboard SDK
                     * 
                     */
                    void SetInitParam(const std::string& _initParam);

                    /**
                     * 判断参数 InitParam 是否已赋值
                     * @return InitParam 是否已赋值
                     * 
                     */
                    bool InitParamHasBeenSet() const;

                private:

                    /**
                     * Whiteboard video width in the real-time recording result. The value must be equal to or greater than 2. Default value: 1280.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Whiteboard video height in the real-time recording result. The value must be equal to or greater than 2. Default value: 960.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Whiteboard initialization parameter, which is passed through to the whiteboard SDK
                     */
                    std::string m_initParam;
                    bool m_initParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARD_H_
