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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_IPSTATUS_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_IPSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
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
                     * 获取Node region
                     * @return District Node region
                     */
                    std::string GetDistrict() const;

                    /**
                     * 设置Node region
                     * @param District Node region
                     */
                    void SetDistrict(const std::string& _district);

                    /**
                     * 判断参数 District 是否已赋值
                     * @return District 是否已赋值
                     */
                    bool DistrictHasBeenSet() const;

                    /**
                     * 获取Node ISP
                     * @return Isp Node ISP
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置Node ISP
                     * @param Isp Node ISP
                     */
                    void SetIsp(const std::string& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取Node city
                     * @return City Node city
                     */
                    std::string GetCity() const;

                    /**
                     * 设置Node city
                     * @param City Node city
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取Node status
online: the node is online and scheduling normally
offline: the node is offline
                     * @return Status Node status
online: the node is online and scheduling normally
offline: the node is offline
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Node status
online: the node is online and scheduling normally
offline: the node is offline
                     * @param Status Node status
online: the node is online and scheduling normally
offline: the node is offline
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Node IP creation time
                     * @return CreateTime Node IP creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Node IP creation time
                     * @param CreateTime Node IP creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Node IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Node region
                     */
                    std::string m_district;
                    bool m_districtHasBeenSet;

                    /**
                     * Node ISP
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * Node city
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Node status
online: the node is online and scheduling normally
offline: the node is offline
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Node IP creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_IPSTATUS_H_
