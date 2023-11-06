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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAVIDEOSTREAM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAVIDEOSTREAM_H_

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
                * 
                */
                class EditMediaVideoStream : public AbstractModel
                {
                public:
                    EditMediaVideoStream();
                    ~EditMediaVideoStream() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return ResolutionAdaptive 
                     * 
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置
                     * @param _resolutionAdaptive 
                     * 
                     */
                    void SetResolutionAdaptive(const std::string& _resolutionAdaptive);

                    /**
                     * 判断参数 ResolutionAdaptive 是否已赋值
                     * @return ResolutionAdaptive 是否已赋值
                     * 
                     */
                    bool ResolutionAdaptiveHasBeenSet() const;

                    /**
                     * 获取
                     * @return Width 
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置
                     * @param _width 
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取
                     * @return Height 
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置
                     * @param _height 
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取
                     * @return Fps 
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置
                     * @param _fps 
                     * 
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_resolutionAdaptive;
                    bool m_resolutionAdaptiveHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAVIDEOSTREAM_H_
