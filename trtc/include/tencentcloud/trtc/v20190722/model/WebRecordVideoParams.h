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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_WEBRECORDVIDEOPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_WEBRECORDVIDEOPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 
                */
                class WebRecordVideoParams : public AbstractModel
                {
                public:
                    WebRecordVideoParams();
                    ~WebRecordVideoParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * @return Format 
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置
                     * @param _format 
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取
                     * @return MaxMediaFileDuration 
                     * 
                     */
                    int64_t GetMaxMediaFileDuration() const;

                    /**
                     * 设置
                     * @param _maxMediaFileDuration 
                     * 
                     */
                    void SetMaxMediaFileDuration(const int64_t& _maxMediaFileDuration);

                    /**
                     * 判断参数 MaxMediaFileDuration 是否已赋值
                     * @return MaxMediaFileDuration 是否已赋值
                     * 
                     */
                    bool MaxMediaFileDurationHasBeenSet() const;

                private:

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
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_maxMediaFileDuration;
                    bool m_maxMediaFileDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_WEBRECORDVIDEOPARAMS_H_
