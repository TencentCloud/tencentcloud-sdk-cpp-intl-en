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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_TIMESTAMPDATA_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_TIMESTAMPDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Timestamp and its corresponding value
                */
                class TimestampData : public AbstractModel
                {
                public:
                    TimestampData();
                    ~TimestampData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The start point of the sampling period. 
For example, if the time is set to 13:35:00, and `interval` is `5min`, the data returned is collected between 13:35:00 and 13:39:59
                     * @return Time The start point of the sampling period. 
For example, if the time is set to 13:35:00, and `interval` is `5min`, the data returned is collected between 13:35:00 and 13:39:59
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置The start point of the sampling period. 
For example, if the time is set to 13:35:00, and `interval` is `5min`, the data returned is collected between 13:35:00 and 13:39:59
                     * @param _time The start point of the sampling period. 
For example, if the time is set to 13:35:00, and `interval` is `5min`, the data returned is collected between 13:35:00 and 13:39:59
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Data value
                     * @return Value Data value
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置Data value
                     * @param _value Data value
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
                     * The start point of the sampling period. 
For example, if the time is set to 13:35:00, and `interval` is `5min`, the data returned is collected between 13:35:00 and 13:39:59
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Data value
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_TIMESTAMPDATA_H_
