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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_DSTINFO_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_DSTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * Target instance information, which is correlated with the migration task type
                */
                class DstInfo : public AbstractModel
                {
                public:
                    DstInfo();
                    ~DstInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Target instance ID, such as cdb-jd92ijd8
                     * @return InstanceId Target instance ID, such as cdb-jd92ijd8
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Target instance ID, such as cdb-jd92ijd8
                     * @param InstanceId Target instance ID, such as cdb-jd92ijd8
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Target instance region, such as ap-guangzhou
                     * @return Region Target instance region, such as ap-guangzhou
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Target instance region, such as ap-guangzhou
                     * @param Region Target instance region, such as ap-guangzhou
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Target instance VIP, which has been disused and does not need to be entered
                     * @return Ip Target instance VIP, which has been disused and does not need to be entered
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Target instance VIP, which has been disused and does not need to be entered
                     * @param Ip Target instance VIP, which has been disused and does not need to be entered
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Target instance Vport, which has been disused and does not need to be entered
                     * @return Port Target instance Vport, which has been disused and does not need to be entered
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Target instance Vport, which has been disused and does not need to be entered
                     * @param Port Target instance Vport, which has been disused and does not need to be entered
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Only valid for MySQL currently. For instance-level migration, the value range is: 1 (read-only), 0 (read/write)
                     * @return ReadOnly Only valid for MySQL currently. For instance-level migration, the value range is: 1 (read-only), 0 (read/write)
                     */
                    int64_t GetReadOnly() const;

                    /**
                     * 设置Only valid for MySQL currently. For instance-level migration, the value range is: 1 (read-only), 0 (read/write)
                     * @param ReadOnly Only valid for MySQL currently. For instance-level migration, the value range is: 1 (read-only), 0 (read/write)
                     */
                    void SetReadOnly(const int64_t& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     */
                    bool ReadOnlyHasBeenSet() const;

                    /**
                     * 获取Target database account
                     * @return User Target database account
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Target database account
                     * @param User Target database account
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Target database password
                     * @return Password Target database password
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Target database password
                     * @param Password Target database password
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * Target instance ID, such as cdb-jd92ijd8
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Target instance region, such as ap-guangzhou
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Target instance VIP, which has been disused and does not need to be entered
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Target instance Vport, which has been disused and does not need to be entered
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Only valid for MySQL currently. For instance-level migration, the value range is: 1 (read-only), 0 (read/write)
                     */
                    int64_t m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * Target database account
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Target database password
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_DSTINFO_H_
