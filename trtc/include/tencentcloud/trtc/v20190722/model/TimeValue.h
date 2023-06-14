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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TIMEVALUE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TIMEVALUE_H_

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
                * The quality data, which consists of the `time` and `value` parameters.
                */
                class TimeValue : public AbstractModel
                {
                public:
                    TimeValue();
                    ~TimeValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The UNIX timestamp (seconds), such as `1590065877`.
                     * @return Time The UNIX timestamp (seconds), such as `1590065877`.
                     * 
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置The UNIX timestamp (seconds), such as `1590065877`.
                     * @param _time The UNIX timestamp (seconds), such as `1590065877`.
                     * 
                     */
                    void SetTime(const uint64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取The metric value. For example, if the video capturing frame rate (`bigvCapFps`) at the time `1590065877` is `0`, the value of this parameter will be `0`.
                     * @return Value The metric value. For example, if the video capturing frame rate (`bigvCapFps`) at the time `1590065877` is `0`, the value of this parameter will be `0`.
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置The metric value. For example, if the video capturing frame rate (`bigvCapFps`) at the time `1590065877` is `0`, the value of this parameter will be `0`.
                     * @param _value The metric value. For example, if the video capturing frame rate (`bigvCapFps`) at the time `1590065877` is `0`, the value of this parameter will be `0`.
                     * 
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * The UNIX timestamp (seconds), such as `1590065877`.
                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * The metric value. For example, if the video capturing frame rate (`bigvCapFps`) at the time `1590065877` is `0`, the value of this parameter will be `0`.
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TIMEVALUE_H_
