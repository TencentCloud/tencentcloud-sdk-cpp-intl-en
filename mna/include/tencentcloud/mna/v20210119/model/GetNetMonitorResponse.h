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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETNETMONITORRESPONSE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETNETMONITORRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/MonitorData.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetNetMonitor response structure.
                */
                class GetNetMonitorResponse : public AbstractModel
                {
                public:
                    GetNetMonitorResponse();
                    ~GetNetMonitorResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Monitoring data.</p>
                     * @return MonitorData <p>Monitoring data.</p>
                     * 
                     */
                    std::vector<MonitorData> GetMonitorData() const;

                    /**
                     * 判断参数 MonitorData 是否已赋值
                     * @return MonitorData 是否已赋值
                     * 
                     */
                    bool MonitorDataHasBeenSet() const;

                    /**
                     * 获取<p>Access region. Value ranges from 'MC' to 'AM'<br>MC=Chinese mainland<br>AP=Asia Pacific<br>EU=Europe<br>AM=Americas</p>
                     * @return AccessRegion <p>Access region. Value ranges from 'MC' to 'AM'<br>MC=Chinese mainland<br>AP=Asia Pacific<br>EU=Europe<br>AM=Americas</p>
                     * 
                     */
                    std::string GetAccessRegion() const;

                    /**
                     * 判断参数 AccessRegion 是否已赋值
                     * @return AccessRegion 是否已赋值
                     * 
                     */
                    bool AccessRegionHasBeenSet() const;

                private:

                    /**
                     * <p>Monitoring data.</p>
                     */
                    std::vector<MonitorData> m_monitorData;
                    bool m_monitorDataHasBeenSet;

                    /**
                     * <p>Access region. Value ranges from 'MC' to 'AM'<br>MC=Chinese mainland<br>AP=Asia Pacific<br>EU=Europe<br>AM=Americas</p>
                     */
                    std::string m_accessRegion;
                    bool m_accessRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETNETMONITORRESPONSE_H_
