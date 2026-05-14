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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_FLOWDETAILS_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_FLOWDETAILS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/NetDetails.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * Device traffic information
                */
                class FlowDetails : public AbstractModel
                {
                public:
                    FlowDetails();
                    ~FlowDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Traffic data point
                     * @return NetDetails Traffic data point
                     * 
                     */
                    std::vector<NetDetails> GetNetDetails() const;

                    /**
                     * 设置Traffic data point
                     * @param _netDetails Traffic data point
                     * 
                     */
                    void SetNetDetails(const std::vector<NetDetails>& _netDetails);

                    /**
                     * 判断参数 NetDetails 是否已赋值
                     * @return NetDetails 是否已赋值
                     * 
                     */
                    bool NetDetailsHasBeenSet() const;

                    /**
                     * 获取device ID
                     * @return DeviceId device ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置device ID
                     * @param _deviceId device ID
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取Maximum value of traffic (measurement unit: bytes)
                     * @return MaxValue Maximum value of traffic (measurement unit: bytes)
                     * 
                     */
                    double GetMaxValue() const;

                    /**
                     * 设置Maximum value of traffic (measurement unit: bytes)
                     * @param _maxValue Maximum value of traffic (measurement unit: bytes)
                     * 
                     */
                    void SetMaxValue(const double& _maxValue);

                    /**
                     * 判断参数 MaxValue 是否已赋值
                     * @return MaxValue 是否已赋值
                     * 
                     */
                    bool MaxValueHasBeenSet() const;

                    /**
                     * 获取Average traffic (unit: bytes)
                     * @return AvgValue Average traffic (unit: bytes)
                     * 
                     */
                    double GetAvgValue() const;

                    /**
                     * 设置Average traffic (unit: bytes)
                     * @param _avgValue Average traffic (unit: bytes)
                     * 
                     */
                    void SetAvgValue(const double& _avgValue);

                    /**
                     * 判断参数 AvgValue 是否已赋值
                     * @return AvgValue 是否已赋值
                     * 
                     */
                    bool AvgValueHasBeenSet() const;

                    /**
                     * 获取Total traffic (unit: bytes)
                     * @return TotalValue Total traffic (unit: bytes)
                     * 
                     */
                    double GetTotalValue() const;

                    /**
                     * 设置Total traffic (unit: bytes)
                     * @param _totalValue Total traffic (unit: bytes)
                     * 
                     */
                    void SetTotalValue(const double& _totalValue);

                    /**
                     * 判断参数 TotalValue 是否已赋值
                     * @return TotalValue 是否已赋值
                     * 
                     */
                    bool TotalValueHasBeenSet() const;

                private:

                    /**
                     * Traffic data point
                     */
                    std::vector<NetDetails> m_netDetails;
                    bool m_netDetailsHasBeenSet;

                    /**
                     * device ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * Maximum value of traffic (measurement unit: bytes)
                     */
                    double m_maxValue;
                    bool m_maxValueHasBeenSet;

                    /**
                     * Average traffic (unit: bytes)
                     */
                    double m_avgValue;
                    bool m_avgValueHasBeenSet;

                    /**
                     * Total traffic (unit: bytes)
                     */
                    double m_totalValue;
                    bool m_totalValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_FLOWDETAILS_H_
