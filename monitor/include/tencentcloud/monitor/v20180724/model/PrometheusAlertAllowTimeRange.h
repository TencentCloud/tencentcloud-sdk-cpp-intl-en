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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTALLOWTIMERANGE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTALLOWTIMERANGE_H_

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
                * Prometheus custom Alert notification period.
                */
                class PrometheusAlertAllowTimeRange : public AbstractModel
                {
                public:
                    PrometheusAlertAllowTimeRange();
                    ~PrometheusAlertAllowTimeRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Seconds from 00:00:00.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Start Seconds from 00:00:00.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStart() const;

                    /**
                     * 设置Seconds from 00:00:00.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _start Seconds from 00:00:00.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStart(const std::string& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取Seconds from 00:00:00.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return End Seconds from 00:00:00.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEnd() const;

                    /**
                     * 设置Seconds from 00:00:00.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _end Seconds from 00:00:00.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnd(const std::string& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                private:

                    /**
                     * Seconds from 00:00:00.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_start;
                    bool m_startHasBeenSet;

                    /**
                     * Seconds from 00:00:00.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_end;
                    bool m_endHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTALLOWTIMERANGE_H_
