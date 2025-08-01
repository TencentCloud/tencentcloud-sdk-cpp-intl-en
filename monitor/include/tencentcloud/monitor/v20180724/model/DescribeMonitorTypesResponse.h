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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEMONITORTYPESRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEMONITORTYPESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/MonitorTypeInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeMonitorTypes response structure.
                */
                class DescribeMonitorTypesResponse : public AbstractModel
                {
                public:
                    DescribeMonitorTypesResponse();
                    ~DescribeMonitorTypesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Monitor type. Valid values: MT_QCE (Tencent Cloud service monitoring)
                     * @return MonitorTypes Monitor type. Valid values: MT_QCE (Tencent Cloud service monitoring)
                     * 
                     */
                    std::vector<std::string> GetMonitorTypes() const;

                    /**
                     * 判断参数 MonitorTypes 是否已赋值
                     * @return MonitorTypes 是否已赋值
                     * 
                     */
                    bool MonitorTypesHasBeenSet() const;

                    /**
                     * 获取Monitoring type details
                     * @return MonitorTypeInfos Monitoring type details
                     * 
                     */
                    std::vector<MonitorTypeInfo> GetMonitorTypeInfos() const;

                    /**
                     * 判断参数 MonitorTypeInfos 是否已赋值
                     * @return MonitorTypeInfos 是否已赋值
                     * 
                     */
                    bool MonitorTypeInfosHasBeenSet() const;

                private:

                    /**
                     * Monitor type. Valid values: MT_QCE (Tencent Cloud service monitoring)
                     */
                    std::vector<std::string> m_monitorTypes;
                    bool m_monitorTypesHasBeenSet;

                    /**
                     * Monitoring type details
                     */
                    std::vector<MonitorTypeInfo> m_monitorTypeInfos;
                    bool m_monitorTypeInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEMONITORTYPESRESPONSE_H_
