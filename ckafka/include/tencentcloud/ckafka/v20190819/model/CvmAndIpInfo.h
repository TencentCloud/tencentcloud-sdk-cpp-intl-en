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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CVMANDIPINFO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CVMANDIPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * CVM and IP information.
                */
                class CvmAndIpInfo : public AbstractModel
                {
                public:
                    CvmAndIpInfo();
                    ~CvmAndIpInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ckafka cluster instance Id.
                     * @return CkafkaInstanceId The ckafka cluster instance Id.
                     * 
                     */
                    std::string GetCkafkaInstanceId() const;

                    /**
                     * 设置The ckafka cluster instance Id.
                     * @param _ckafkaInstanceId The ckafka cluster instance Id.
                     * 
                     */
                    void SetCkafkaInstanceId(const std::string& _ckafkaInstanceId);

                    /**
                     * 判断参数 CkafkaInstanceId 是否已赋值
                     * @return CkafkaInstanceId 是否已赋值
                     * 
                     */
                    bool CkafkaInstanceIdHasBeenSet() const;

                    /**
                     * 获取CVM instance ID (ins-test) or POD IP (10.0.0.30).
                     * @return InstanceId CVM instance ID (ins-test) or POD IP (10.0.0.30).
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置CVM instance ID (ins-test) or POD IP (10.0.0.30).
                     * @param _instanceId CVM instance ID (ins-test) or POD IP (10.0.0.30).
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取IP address.
                     * @return Ip IP address.
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP address.
                     * @param _ip IP address.
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
                     * The ckafka cluster instance Id.
                     */
                    std::string m_ckafkaInstanceId;
                    bool m_ckafkaInstanceIdHasBeenSet;

                    /**
                     * CVM instance ID (ins-test) or POD IP (10.0.0.30).
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * IP address.
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CVMANDIPINFO_H_
