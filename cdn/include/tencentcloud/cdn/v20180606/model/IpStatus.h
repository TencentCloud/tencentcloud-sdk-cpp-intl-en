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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_IPSTATUS_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_IPSTATUS_H_

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
                * Node IP information
                */
                class IpStatus : public AbstractModel
                {
                public:
                    IpStatus();
                    ~IpStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node IP
                     * @return Ip Node IP
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Node IP
                     * @param Ip Node IP
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Region of the node
                     * @return District Region of the node
                     */
                    std::string GetDistrict() const;

                    /**
                     * 设置Region of the node
                     * @param District Region of the node
                     */
                    void SetDistrict(const std::string& _district);

                    /**
                     * 判断参数 District 是否已赋值
                     * @return District 是否已赋值
                     */
                    bool DistrictHasBeenSet() const;

                    /**
                     * 获取ISP of the node
                     * @return Isp ISP of the node
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置ISP of the node
                     * @param Isp ISP of the node
                     */
                    void SetIsp(const std::string& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取City of the node
                     * @return City City of the node
                     */
                    std::string GetCity() const;

                    /**
                     * 设置City of the node
                     * @param City City of the node
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取Status of the node
`online`: The node is active and scheduling normally.
`offline`: The node is inactive.
                     * @return Status Status of the node
`online`: The node is active and scheduling normally.
`offline`: The node is inactive.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status of the node
`online`: The node is active and scheduling normally.
`offline`: The node is inactive.
                     * @param Status Status of the node
`online`: The node is active and scheduling normally.
`offline`: The node is inactive.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Node IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Region of the node
                     */
                    std::string m_district;
                    bool m_districtHasBeenSet;

                    /**
                     * ISP of the node
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * City of the node
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Status of the node
`online`: The node is active and scheduling normally.
`offline`: The node is inactive.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_IPSTATUS_H_
