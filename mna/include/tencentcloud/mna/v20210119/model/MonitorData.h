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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_MONITORDATA_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_MONITORDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/SlotNetInfo.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * Traffic monitoring metrics
                */
                class MonitorData : public AbstractModel
                {
                public:
                    MonitorData();
                    ~MonitorData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time point: s
                     * @return Time Time point: s
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Time point: s
                     * @param _time Time point: s
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
                     * 获取Business Metric (bps/ms/%)
                     * @return BusinessMetrics Business Metric (bps/ms/%)
                     * 
                     */
                    double GetBusinessMetrics() const;

                    /**
                     * 设置Business Metric (bps/ms/%)
                     * @param _businessMetrics Business Metric (bps/ms/%)
                     * 
                     */
                    void SetBusinessMetrics(const double& _businessMetrics);

                    /**
                     * 判断参数 BusinessMetrics 是否已赋值
                     * @return BusinessMetrics 是否已赋值
                     * 
                     */
                    bool BusinessMetricsHasBeenSet() const;

                    /**
                     * 获取Network interface status info
                     * @return SlotNetInfo Network interface status info
                     * 
                     */
                    std::vector<SlotNetInfo> GetSlotNetInfo() const;

                    /**
                     * 设置Network interface status info
                     * @param _slotNetInfo Network interface status info
                     * 
                     */
                    void SetSlotNetInfo(const std::vector<SlotNetInfo>& _slotNetInfo);

                    /**
                     * 判断参数 SlotNetInfo 是否已赋值
                     * @return SlotNetInfo 是否已赋值
                     * 
                     */
                    bool SlotNetInfoHasBeenSet() const;

                private:

                    /**
                     * Time point: s
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Business Metric (bps/ms/%)
                     */
                    double m_businessMetrics;
                    bool m_businessMetricsHasBeenSet;

                    /**
                     * Network interface status info
                     */
                    std::vector<SlotNetInfo> m_slotNetInfo;
                    bool m_slotNetInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_MONITORDATA_H_
