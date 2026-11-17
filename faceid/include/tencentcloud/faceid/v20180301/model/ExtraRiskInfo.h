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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_EXTRARISKINFO_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_EXTRARISKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * ExtraRiskInfo
                */
                class ExtraRiskInfo : public AbstractModel
                {
                public:
                    ExtraRiskInfo();
                    ~ExtraRiskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>A stable and unique person identifier within the customer's business domain, used to correlate multiple location reports from the same person to determine whether abnormal displacement exists.</p><p>Input restrictions: Length ≤ 128 characters; Must not contain control characters (ASCII &lt; 0x20 or 0x7F); It is recommended to pass a desensitized identifier instead of a plaintext ID number or mobile number.</p>
                     * @return PersonId <p>A stable and unique person identifier within the customer's business domain, used to correlate multiple location reports from the same person to determine whether abnormal displacement exists.</p><p>Input restrictions: Length ≤ 128 characters; Must not contain control characters (ASCII &lt; 0x20 or 0x7F); It is recommended to pass a desensitized identifier instead of a plaintext ID number or mobile number.</p>
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置<p>A stable and unique person identifier within the customer's business domain, used to correlate multiple location reports from the same person to determine whether abnormal displacement exists.</p><p>Input restrictions: Length ≤ 128 characters; Must not contain control characters (ASCII &lt; 0x20 or 0x7F); It is recommended to pass a desensitized identifier instead of a plaintext ID number or mobile number.</p>
                     * @param _personId <p>A stable and unique person identifier within the customer's business domain, used to correlate multiple location reports from the same person to determine whether abnormal displacement exists.</p><p>Input restrictions: Length ≤ 128 characters; Must not contain control characters (ASCII &lt; 0x20 or 0x7F); It is recommended to pass a desensitized identifier instead of a plaintext ID number or mobile number.</p>
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取<p>Latitude at the time of device collection, in WGS84 decimal degrees    </p><p>Input restrictions: Must be paired with Longitude; Valid range: [-90, 90]; Must be a valid number, NaN/Inf not accepted; Pass as a string in JSON (e.g., &quot;22.5431&quot;)</p>
                     * @return Latitude <p>Latitude at the time of device collection, in WGS84 decimal degrees    </p><p>Input restrictions: Must be paired with Longitude; Valid range: [-90, 90]; Must be a valid number, NaN/Inf not accepted; Pass as a string in JSON (e.g., &quot;22.5431&quot;)</p>
                     * 
                     */
                    std::string GetLatitude() const;

                    /**
                     * 设置<p>Latitude at the time of device collection, in WGS84 decimal degrees    </p><p>Input restrictions: Must be paired with Longitude; Valid range: [-90, 90]; Must be a valid number, NaN/Inf not accepted; Pass as a string in JSON (e.g., &quot;22.5431&quot;)</p>
                     * @param _latitude <p>Latitude at the time of device collection, in WGS84 decimal degrees    </p><p>Input restrictions: Must be paired with Longitude; Valid range: [-90, 90]; Must be a valid number, NaN/Inf not accepted; Pass as a string in JSON (e.g., &quot;22.5431&quot;)</p>
                     * 
                     */
                    void SetLatitude(const std::string& _latitude);

                    /**
                     * 判断参数 Latitude 是否已赋值
                     * @return Latitude 是否已赋值
                     * 
                     */
                    bool LatitudeHasBeenSet() const;

                    /**
                     * 获取<p>Longitude at the time of device collection, in WGS84 decimal degrees    </p><p>Input restrictions: Must be paired with Latitude; Valid range: [-180, 180]; Other restrictions are the same as above</p>
                     * @return Longitude <p>Longitude at the time of device collection, in WGS84 decimal degrees    </p><p>Input restrictions: Must be paired with Latitude; Valid range: [-180, 180]; Other restrictions are the same as above</p>
                     * 
                     */
                    std::string GetLongitude() const;

                    /**
                     * 设置<p>Longitude at the time of device collection, in WGS84 decimal degrees    </p><p>Input restrictions: Must be paired with Latitude; Valid range: [-180, 180]; Other restrictions are the same as above</p>
                     * @param _longitude <p>Longitude at the time of device collection, in WGS84 decimal degrees    </p><p>Input restrictions: Must be paired with Latitude; Valid range: [-180, 180]; Other restrictions are the same as above</p>
                     * 
                     */
                    void SetLongitude(const std::string& _longitude);

                    /**
                     * 判断参数 Longitude 是否已赋值
                     * @return Longitude 是否已赋值
                     * 
                     */
                    bool LongitudeHasBeenSet() const;

                    /**
                     * 获取<p>Public egress IP of the device at the time of collection    </p><p>Input restrictions: Length ≤ 64; Must be a resolvable IPv4/IPv6 address; Private, loopback, link-local, and multicast addresses are considered non-locatable</p>
                     * @return Ip <p>Public egress IP of the device at the time of collection    </p><p>Input restrictions: Length ≤ 64; Must be a resolvable IPv4/IPv6 address; Private, loopback, link-local, and multicast addresses are considered non-locatable</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>Public egress IP of the device at the time of collection    </p><p>Input restrictions: Length ≤ 64; Must be a resolvable IPv4/IPv6 address; Private, loopback, link-local, and multicast addresses are considered non-locatable</p>
                     * @param _ip <p>Public egress IP of the device at the time of collection    </p><p>Input restrictions: Length ≤ 64; Must be a resolvable IPv4/IPv6 address; Private, loopback, link-local, and multicast addresses are considered non-locatable</p>
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                private:

                    /**
                     * <p>A stable and unique person identifier within the customer's business domain, used to correlate multiple location reports from the same person to determine whether abnormal displacement exists.</p><p>Input restrictions: Length ≤ 128 characters; Must not contain control characters (ASCII &lt; 0x20 or 0x7F); It is recommended to pass a desensitized identifier instead of a plaintext ID number or mobile number.</p>
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * <p>Latitude at the time of device collection, in WGS84 decimal degrees    </p><p>Input restrictions: Must be paired with Longitude; Valid range: [-90, 90]; Must be a valid number, NaN/Inf not accepted; Pass as a string in JSON (e.g., &quot;22.5431&quot;)</p>
                     */
                    std::string m_latitude;
                    bool m_latitudeHasBeenSet;

                    /**
                     * <p>Longitude at the time of device collection, in WGS84 decimal degrees    </p><p>Input restrictions: Must be paired with Latitude; Valid range: [-180, 180]; Other restrictions are the same as above</p>
                     */
                    std::string m_longitude;
                    bool m_longitudeHasBeenSet;

                    /**
                     * <p>Public egress IP of the device at the time of collection    </p><p>Input restrictions: Length ≤ 64; Must be a resolvable IPv4/IPv6 address; Private, loopback, link-local, and multicast addresses are considered non-locatable</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_EXTRARISKINFO_H_
