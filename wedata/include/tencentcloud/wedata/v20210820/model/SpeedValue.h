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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SPEEDVALUE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SPEEDVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Speed Value Object
                */
                class SpeedValue : public AbstractModel
                {
                public:
                    SpeedValue();
                    ~SpeedValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Timestamp with MillisecondsNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Time Timestamp with MillisecondsNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置Timestamp with MillisecondsNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _time Timestamp with MillisecondsNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取NoNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Speed NoNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetSpeed() const;

                    /**
                     * 设置NoNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _speed NoNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSpeed(const double& _speed);

                    /**
                     * 判断参数 Speed 是否已赋值
                     * @return Speed 是否已赋值
                     * 
                     */
                    bool SpeedHasBeenSet() const;

                private:

                    /**
                     * Timestamp with MillisecondsNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * NoNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_speed;
                    bool m_speedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SPEEDVALUE_H_
