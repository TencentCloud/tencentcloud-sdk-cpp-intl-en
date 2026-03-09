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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_CREATEREGISTERCODEREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_CREATEREGISTERCODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * CreateRegisterCode request structure.
                */
                class CreateRegisterCodeRequest : public AbstractModel
                {
                public:
                    CreateRegisterCodeRequest();
                    ~CreateRegisterCodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Describes the registration code. maximum length is 128 characters.
                     * @return Description Describes the registration code. maximum length is 128 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Describes the registration code. maximum length is 128 characters.
                     * @param _description Describes the registration code. maximum length is 128 characters.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Prefix of the registered instance name. maximum length is 32 characters.
                     * @return InstanceNamePrefix Prefix of the registered instance name. maximum length is 32 characters.
                     * 
                     */
                    std::string GetInstanceNamePrefix() const;

                    /**
                     * 设置Prefix of the registered instance name. maximum length is 32 characters.
                     * @param _instanceNamePrefix Prefix of the registered instance name. maximum length is 32 characters.
                     * 
                     */
                    void SetInstanceNamePrefix(const std::string& _instanceNamePrefix);

                    /**
                     * 判断参数 InstanceNamePrefix 是否已赋值
                     * @return InstanceNamePrefix 是否已赋值
                     * 
                     */
                    bool InstanceNamePrefixHasBeenSet() const;

                    /**
                     * 获取Number of instances allowed by the registration code. default value is 10, minimum value is 1, maximum value is 10000.
                     * @return RegisterLimit Number of instances allowed by the registration code. default value is 10, minimum value is 1, maximum value is 10000.
                     * 
                     */
                    int64_t GetRegisterLimit() const;

                    /**
                     * 设置Number of instances allowed by the registration code. default value is 10, minimum value is 1, maximum value is 10000.
                     * @param _registerLimit Number of instances allowed by the registration code. default value is 10, minimum value is 1, maximum value is 10000.
                     * 
                     */
                    void SetRegisterLimit(const int64_t& _registerLimit);

                    /**
                     * 判断参数 RegisterLimit 是否已赋值
                     * @return RegisterLimit 是否已赋值
                     * 
                     */
                    bool RegisterLimitHasBeenSet() const;

                    /**
                     * 获取The validity time of the registration code is measured in hours. default value is 4.

-If the input value is less than or equal to 99999, the time is deemed valid in hours.
-If the input value is more than 99999, it is set to permanently valid.
                     * @return EffectiveTime The validity time of the registration code is measured in hours. default value is 4.

-If the input value is less than or equal to 99999, the time is deemed valid in hours.
-If the input value is more than 99999, it is set to permanently valid.
                     * 
                     */
                    int64_t GetEffectiveTime() const;

                    /**
                     * 设置The validity time of the registration code is measured in hours. default value is 4.

-If the input value is less than or equal to 99999, the time is deemed valid in hours.
-If the input value is more than 99999, it is set to permanently valid.
                     * @param _effectiveTime The validity time of the registration code is measured in hours. default value is 4.

-If the input value is less than or equal to 99999, the time is deemed valid in hours.
-If the input value is more than 99999, it is set to permanently valid.
                     * 
                     */
                    void SetEffectiveTime(const int64_t& _effectiveTime);

                    /**
                     * 判断参数 EffectiveTime 是否已赋值
                     * @return EffectiveTime 是否已赋值
                     * 
                     */
                    bool EffectiveTimeHasBeenSet() const;

                    /**
                     * 获取Restrict the registration code to register only from the public outbound ip described by IpAddressRange.

Empty by default, meaning no restrictions.

The value should be in standard IPv4 or CIDRv4 format, such as 192.168.1.1 or 192.168.0.0/16.
                     * @return IpAddressRange Restrict the registration code to register only from the public outbound ip described by IpAddressRange.

Empty by default, meaning no restrictions.

The value should be in standard IPv4 or CIDRv4 format, such as 192.168.1.1 or 192.168.0.0/16.
                     * 
                     */
                    std::string GetIpAddressRange() const;

                    /**
                     * 设置Restrict the registration code to register only from the public outbound ip described by IpAddressRange.

Empty by default, meaning no restrictions.

The value should be in standard IPv4 or CIDRv4 format, such as 192.168.1.1 or 192.168.0.0/16.
                     * @param _ipAddressRange Restrict the registration code to register only from the public outbound ip described by IpAddressRange.

Empty by default, meaning no restrictions.

The value should be in standard IPv4 or CIDRv4 format, such as 192.168.1.1 or 192.168.0.0/16.
                     * 
                     */
                    void SetIpAddressRange(const std::string& _ipAddressRange);

                    /**
                     * 判断参数 IpAddressRange 是否已赋值
                     * @return IpAddressRange 是否已赋值
                     * 
                     */
                    bool IpAddressRangeHasBeenSet() const;

                private:

                    /**
                     * Describes the registration code. maximum length is 128 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Prefix of the registered instance name. maximum length is 32 characters.
                     */
                    std::string m_instanceNamePrefix;
                    bool m_instanceNamePrefixHasBeenSet;

                    /**
                     * Number of instances allowed by the registration code. default value is 10, minimum value is 1, maximum value is 10000.
                     */
                    int64_t m_registerLimit;
                    bool m_registerLimitHasBeenSet;

                    /**
                     * The validity time of the registration code is measured in hours. default value is 4.

-If the input value is less than or equal to 99999, the time is deemed valid in hours.
-If the input value is more than 99999, it is set to permanently valid.
                     */
                    int64_t m_effectiveTime;
                    bool m_effectiveTimeHasBeenSet;

                    /**
                     * Restrict the registration code to register only from the public outbound ip described by IpAddressRange.

Empty by default, meaning no restrictions.

The value should be in standard IPv4 or CIDRv4 format, such as 192.168.1.1 or 192.168.0.0/16.
                     */
                    std::string m_ipAddressRange;
                    bool m_ipAddressRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_CREATEREGISTERCODEREQUEST_H_
