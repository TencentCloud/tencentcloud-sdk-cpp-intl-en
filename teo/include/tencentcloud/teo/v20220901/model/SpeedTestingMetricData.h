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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGMETRICDATA_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGMETRICDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SpeedTestingInfo.h>
#include <tencentcloud/teo/v20220901/model/SpeedTestingStatus.h>
#include <tencentcloud/teo/v20220901/model/OptimizeAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The site test metrics.
                */
                class SpeedTestingMetricData : public AbstractModel
                {
                public:
                    SpeedTestingMetricData();
                    ~SpeedTestingMetricData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The site ID.
                     * @return ZoneId The site ID.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID.
                     * @param ZoneId The site ID.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The site name.
                     * @return ZoneName The site name.
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置The site name.
                     * @param ZoneName The site name.
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取The origin information.
                     * @return OriginSpeedTestingInfo The origin information.
                     */
                    std::vector<SpeedTestingInfo> GetOriginSpeedTestingInfo() const;

                    /**
                     * 设置The origin information.
                     * @param OriginSpeedTestingInfo The origin information.
                     */
                    void SetOriginSpeedTestingInfo(const std::vector<SpeedTestingInfo>& _originSpeedTestingInfo);

                    /**
                     * 判断参数 OriginSpeedTestingInfo 是否已赋值
                     * @return OriginSpeedTestingInfo 是否已赋值
                     */
                    bool OriginSpeedTestingInfoHasBeenSet() const;

                    /**
                     * 获取The EdgeOne information.
                     * @return ProxySpeedTestingInfo The EdgeOne information.
                     */
                    std::vector<SpeedTestingInfo> GetProxySpeedTestingInfo() const;

                    /**
                     * 设置The EdgeOne information.
                     * @param ProxySpeedTestingInfo The EdgeOne information.
                     */
                    void SetProxySpeedTestingInfo(const std::vector<SpeedTestingInfo>& _proxySpeedTestingInfo);

                    /**
                     * 判断参数 ProxySpeedTestingInfo 是否已赋值
                     * @return ProxySpeedTestingInfo 是否已赋值
                     */
                    bool ProxySpeedTestingInfoHasBeenSet() const;

                    /**
                     * 获取The site status.
                     * @return SpeedTestingStatus The site status.
                     */
                    SpeedTestingStatus GetSpeedTestingStatus() const;

                    /**
                     * 设置The site status.
                     * @param SpeedTestingStatus The site status.
                     */
                    void SetSpeedTestingStatus(const SpeedTestingStatus& _speedTestingStatus);

                    /**
                     * 判断参数 SpeedTestingStatus 是否已赋值
                     * @return SpeedTestingStatus 是否已赋值
                     */
                    bool SpeedTestingStatusHasBeenSet() const;

                    /**
                     * 获取The optimization suggestions.
                     * @return OptimizeAction The optimization suggestions.
                     */
                    std::vector<OptimizeAction> GetOptimizeAction() const;

                    /**
                     * 设置The optimization suggestions.
                     * @param OptimizeAction The optimization suggestions.
                     */
                    void SetOptimizeAction(const std::vector<OptimizeAction>& _optimizeAction);

                    /**
                     * 判断参数 OptimizeAction 是否已赋值
                     * @return OptimizeAction 是否已赋值
                     */
                    bool OptimizeActionHasBeenSet() const;

                    /**
                     * 获取The EdgeOne load time, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProxyLoadTime The EdgeOne load time, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetProxyLoadTime() const;

                    /**
                     * 设置The EdgeOne load time, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ProxyLoadTime The EdgeOne load time, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProxyLoadTime(const int64_t& _proxyLoadTime);

                    /**
                     * 判断参数 ProxyLoadTime 是否已赋值
                     * @return ProxyLoadTime 是否已赋值
                     */
                    bool ProxyLoadTimeHasBeenSet() const;

                    /**
                     * 获取The origin load time, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OriginLoadTime The origin load time, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetOriginLoadTime() const;

                    /**
                     * 设置The origin load time, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param OriginLoadTime The origin load time, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOriginLoadTime(const int64_t& _originLoadTime);

                    /**
                     * 判断参数 OriginLoadTime 是否已赋值
                     * @return OriginLoadTime 是否已赋值
                     */
                    bool OriginLoadTimeHasBeenSet() const;

                private:

                    /**
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The site name.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * The origin information.
                     */
                    std::vector<SpeedTestingInfo> m_originSpeedTestingInfo;
                    bool m_originSpeedTestingInfoHasBeenSet;

                    /**
                     * The EdgeOne information.
                     */
                    std::vector<SpeedTestingInfo> m_proxySpeedTestingInfo;
                    bool m_proxySpeedTestingInfoHasBeenSet;

                    /**
                     * The site status.
                     */
                    SpeedTestingStatus m_speedTestingStatus;
                    bool m_speedTestingStatusHasBeenSet;

                    /**
                     * The optimization suggestions.
                     */
                    std::vector<OptimizeAction> m_optimizeAction;
                    bool m_optimizeActionHasBeenSet;

                    /**
                     * The EdgeOne load time, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_proxyLoadTime;
                    bool m_proxyLoadTimeHasBeenSet;

                    /**
                     * The origin load time, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_originLoadTime;
                    bool m_originLoadTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGMETRICDATA_H_
