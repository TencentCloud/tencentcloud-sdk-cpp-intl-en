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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CDNIP_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CDNIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/CdnIpHistory.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * IP attribute information
                */
                class CdnIp : public AbstractModel
                {
                public:
                    CdnIp();
                    ~CdnIp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP to be queried
                     * @return Ip IP to be queried
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP to be queried
                     * @param _ip IP to be queried
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取IP ownership:
yes: Tencent Cloud CDN node
no: non-Tencent Cloud CDN node
                     * @return Platform IP ownership:
yes: Tencent Cloud CDN node
no: non-Tencent Cloud CDN node
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置IP ownership:
yes: Tencent Cloud CDN node
no: non-Tencent Cloud CDN node
                     * @param _platform IP ownership:
yes: Tencent Cloud CDN node
no: non-Tencent Cloud CDN node
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取Node district/country
unknown: unknown node location
                     * @return Location Node district/country
unknown: unknown node location
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Node district/country
unknown: unknown node location
                     * @param _location Node district/country
unknown: unknown node location
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取Activation and deactivation history of the node.
                     * @return History Activation and deactivation history of the node.
                     * 
                     */
                    std::vector<CdnIpHistory> GetHistory() const;

                    /**
                     * 设置Activation and deactivation history of the node.
                     * @param _history Activation and deactivation history of the node.
                     * 
                     */
                    void SetHistory(const std::vector<CdnIpHistory>& _history);

                    /**
                     * 判断参数 History 是否已赋值
                     * @return History 是否已赋值
                     * 
                     */
                    bool HistoryHasBeenSet() const;

                    /**
                     * 获取Node region
`mainland`: Acceleration nodes inside the Chinese mainland
`overseas`: Acceleration nodes outside the Chinese mainland
`unknown`: Service region unknown
                     * @return Area Node region
`mainland`: Acceleration nodes inside the Chinese mainland
`overseas`: Acceleration nodes outside the Chinese mainland
`unknown`: Service region unknown
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Node region
`mainland`: Acceleration nodes inside the Chinese mainland
`overseas`: Acceleration nodes outside the Chinese mainland
`unknown`: Service region unknown
                     * @param _area Node region
`mainland`: Acceleration nodes inside the Chinese mainland
`overseas`: Acceleration nodes outside the Chinese mainland
`unknown`: Service region unknown
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取City where the nodes reside
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return City City where the nodes reside
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置City where the nodes reside
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _city City where the nodes reside
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                private:

                    /**
                     * IP to be queried
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * IP ownership:
yes: Tencent Cloud CDN node
no: non-Tencent Cloud CDN node
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * Node district/country
unknown: unknown node location
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Activation and deactivation history of the node.
                     */
                    std::vector<CdnIpHistory> m_history;
                    bool m_historyHasBeenSet;

                    /**
                     * Node region
`mainland`: Acceleration nodes inside the Chinese mainland
`overseas`: Acceleration nodes outside the Chinese mainland
`unknown`: Service region unknown
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * City where the nodes reside
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CDNIP_H_
