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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_POINT_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_POINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Monitoring data point
                */
                class Point : public AbstractModel
                {
                public:
                    Point();
                    ~Point() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time point when this monitoring data point is generated
                     * @return Timestamp Time point when this monitoring data point is generated
                     * 
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置Time point when this monitoring data point is generated
                     * @param _timestamp Time point when this monitoring data point is generated
                     * 
                     */
                    void SetTimestamp(const uint64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Monitoring data point value
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Value Monitoring data point value
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置Monitoring data point value
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _value Monitoring data point value
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * Time point when this monitoring data point is generated
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Monitoring data point value
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_POINT_H_
