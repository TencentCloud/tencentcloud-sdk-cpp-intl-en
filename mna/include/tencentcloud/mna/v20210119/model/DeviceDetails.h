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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_DEVICEDETAILS_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_DEVICEDETAILS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/DeviceBaseInfo.h>
#include <tencentcloud/mna/v20210119/model/DeviceNetInfo.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * device details
                */
                class DeviceDetails : public AbstractModel
                {
                public:
                    DeviceDetails();
                    ~DeviceDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Device basic info
                     * @return DeviceBaseInfo Device basic info
                     * 
                     */
                    DeviceBaseInfo GetDeviceBaseInfo() const;

                    /**
                     * 设置Device basic info
                     * @param _deviceBaseInfo Device basic info
                     * 
                     */
                    void SetDeviceBaseInfo(const DeviceBaseInfo& _deviceBaseInfo);

                    /**
                     * 判断参数 DeviceBaseInfo 是否已赋值
                     * @return DeviceBaseInfo 是否已赋值
                     * 
                     */
                    bool DeviceBaseInfoHasBeenSet() const;

                    /**
                     * 获取Device network info
                     * @return DeviceNetInfo Device network info
                     * 
                     */
                    std::vector<DeviceNetInfo> GetDeviceNetInfo() const;

                    /**
                     * 设置Device network info
                     * @param _deviceNetInfo Device network info
                     * 
                     */
                    void SetDeviceNetInfo(const std::vector<DeviceNetInfo>& _deviceNetInfo);

                    /**
                     * 判断参数 DeviceNetInfo 是否已赋值
                     * @return DeviceNetInfo 是否已赋值
                     * 
                     */
                    bool DeviceNetInfoHasBeenSet() const;

                    /**
                     * 获取Aggregate server address
                     * @return GatewaySite Aggregate server address
                     * 
                     */
                    std::string GetGatewaySite() const;

                    /**
                     * 设置Aggregate server address
                     * @param _gatewaySite Aggregate server address
                     * 
                     */
                    void SetGatewaySite(const std::string& _gatewaySite);

                    /**
                     * 判断参数 GatewaySite 是否已赋值
                     * @return GatewaySite 是否已赋值
                     * 
                     */
                    bool GatewaySiteHasBeenSet() const;

                    /**
                     * 获取Downlink Rate
                     * @return BusinessDownRate Downlink Rate
                     * 
                     */
                    double GetBusinessDownRate() const;

                    /**
                     * 设置Downlink Rate
                     * @param _businessDownRate Downlink Rate
                     * 
                     */
                    void SetBusinessDownRate(const double& _businessDownRate);

                    /**
                     * 判断参数 BusinessDownRate 是否已赋值
                     * @return BusinessDownRate 是否已赋值
                     * 
                     */
                    bool BusinessDownRateHasBeenSet() const;

                    /**
                     * 获取Business-wise uplink rate
                     * @return BusinessUpRate Business-wise uplink rate
                     * 
                     */
                    double GetBusinessUpRate() const;

                    /**
                     * 设置Business-wise uplink rate
                     * @param _businessUpRate Business-wise uplink rate
                     * 
                     */
                    void SetBusinessUpRate(const double& _businessUpRate);

                    /**
                     * 判断参数 BusinessUpRate 是否已赋值
                     * @return BusinessUpRate 是否已赋值
                     * 
                     */
                    bool BusinessUpRateHasBeenSet() const;

                private:

                    /**
                     * Device basic info
                     */
                    DeviceBaseInfo m_deviceBaseInfo;
                    bool m_deviceBaseInfoHasBeenSet;

                    /**
                     * Device network info
                     */
                    std::vector<DeviceNetInfo> m_deviceNetInfo;
                    bool m_deviceNetInfoHasBeenSet;

                    /**
                     * Aggregate server address
                     */
                    std::string m_gatewaySite;
                    bool m_gatewaySiteHasBeenSet;

                    /**
                     * Downlink Rate
                     */
                    double m_businessDownRate;
                    bool m_businessDownRateHasBeenSet;

                    /**
                     * Business-wise uplink rate
                     */
                    double m_businessUpRate;
                    bool m_businessUpRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_DEVICEDETAILS_H_
