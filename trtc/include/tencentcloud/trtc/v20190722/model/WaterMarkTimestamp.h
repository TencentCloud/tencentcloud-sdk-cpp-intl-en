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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKTIMESTAMP_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKTIMESTAMP_H_

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
                class WaterMarkTimestamp : public AbstractModel
                {
                public:
                    WaterMarkTimestamp();
                    ~WaterMarkTimestamp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The position of the timestamp watermark. Valid values: `0` (top left), `1` (top right), `2` (bottom left), `3` (bottom right), `4` (top center), `5` (bottom center), `6` (center).
                     * @return Pos The position of the timestamp watermark. Valid values: `0` (top left), `1` (top right), `2` (bottom left), `3` (bottom right), `4` (top center), `5` (bottom center), `6` (center).
                     * 
                     */
                    uint64_t GetPos() const;

                    /**
                     * 设置The position of the timestamp watermark. Valid values: `0` (top left), `1` (top right), `2` (bottom left), `3` (bottom right), `4` (top center), `5` (bottom center), `6` (center).
                     * @param _pos The position of the timestamp watermark. Valid values: `0` (top left), `1` (top right), `2` (bottom left), `3` (bottom right), `4` (top center), `5` (bottom center), `6` (center).
                     * 
                     */
                    void SetPos(const uint64_t& _pos);

                    /**
                     * 判断参数 Pos 是否已赋值
                     * @return Pos 是否已赋值
                     * 
                     */
                    bool PosHasBeenSet() const;

                    /**
                     * 获取The time zone. The default is UTC+8.
                     * @return TimeZone The time zone. The default is UTC+8.
                     * 
                     */
                    uint64_t GetTimeZone() const;

                    /**
                     * 设置The time zone. The default is UTC+8.
                     * @param _timeZone The time zone. The default is UTC+8.
                     * 
                     */
                    void SetTimeZone(const uint64_t& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * The position of the timestamp watermark. Valid values: `0` (top left), `1` (top right), `2` (bottom left), `3` (bottom right), `4` (top center), `5` (bottom center), `6` (center).
                     */
                    uint64_t m_pos;
                    bool m_posHasBeenSet;

                    /**
                     * The time zone. The default is UTC+8.
                     */
                    uint64_t m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKTIMESTAMP_H_
