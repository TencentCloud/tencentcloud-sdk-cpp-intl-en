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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_APPLYPUBLICIPSREQUEST_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_APPLYPUBLICIPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * ApplyPublicIps request structure.
                */
                class ApplyPublicIpsRequest : public AbstractModel
                {
                public:
                    ApplyPublicIpsRequest();
                    ~ApplyPublicIpsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Public network instance ID (route publishing mode must be STATIC)
                     * @return NetworkInstanceId Public network instance ID (route publishing mode must be STATIC)
                     * 
                     */
                    std::string GetNetworkInstanceId() const;

                    /**
                     * 设置Public network instance ID (route publishing mode must be STATIC)
                     * @param _networkInstanceId Public network instance ID (route publishing mode must be STATIC)
                     * 
                     */
                    void SetNetworkInstanceId(const std::string& _networkInstanceId);

                    /**
                     * 判断参数 NetworkInstanceId 是否已赋值
                     * @return NetworkInstanceId 是否已赋值
                     * 
                     */
                    bool NetworkInstanceIdHasBeenSet() const;

                    /**
                     * 获取Apply for an Ip quantity, minimum is 1
                     * @return Count Apply for an Ip quantity, minimum is 1
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Apply for an Ip quantity, minimum is 1
                     * @param _count Apply for an Ip quantity, minimum is 1
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Applied Ip type, enumeration value: ipv4, ipv6
                     * @return Type Applied Ip type, enumeration value: ipv4, ipv6
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Applied Ip type, enumeration value: ipv4, ipv6
                     * @param _type Applied Ip type, enumeration value: ipv4, ipv6
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Public network instance ID (route publishing mode must be STATIC)
                     */
                    std::string m_networkInstanceId;
                    bool m_networkInstanceIdHasBeenSet;

                    /**
                     * Apply for an Ip quantity, minimum is 1
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Applied Ip type, enumeration value: ipv4, ipv6
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_APPLYPUBLICIPSREQUEST_H_
