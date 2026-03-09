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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_REGISTERCODEINFO_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_REGISTERCODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Register code info.
                */
                class RegisterCodeInfo : public AbstractModel
                {
                public:
                    RegisterCodeInfo();
                    ~RegisterCodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Registration code ID.
                     * @return RegisterCodeId Registration code ID.
                     * 
                     */
                    std::string GetRegisterCodeId() const;

                    /**
                     * 设置Registration code ID.
                     * @param _registerCodeId Registration code ID.
                     * 
                     */
                    void SetRegisterCodeId(const std::string& _registerCodeId);

                    /**
                     * 判断参数 RegisterCodeId 是否已赋值
                     * @return RegisterCodeId 是否已赋值
                     * 
                     */
                    bool RegisterCodeIdHasBeenSet() const;

                    /**
                     * 获取Describes the registration code.
                     * @return Description Describes the registration code.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Describes the registration code.
                     * @param _description Describes the registration code.
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
                     * 获取Prefix of the registered instance name.
                     * @return InstanceNamePrefix Prefix of the registered instance name.
                     * 
                     */
                    std::string GetInstanceNamePrefix() const;

                    /**
                     * 设置Prefix of the registered instance name.
                     * @param _instanceNamePrefix Prefix of the registered instance name.
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
                     * 获取The number of instances the registration code allows.
                     * @return RegisterLimit The number of instances the registration code allows.
                     * 
                     */
                    int64_t GetRegisterLimit() const;

                    /**
                     * 设置The number of instances the registration code allows.
                     * @param _registerLimit The number of instances the registration code allows.
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
                     * 获取The expiry date of the registration code is in ISO8601 standard representation and uses UTC time. 
The format is YYYY-MM-DDThh:MM:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpiredTime The expiry date of the registration code is in ISO8601 standard representation and uses UTC time. 
The format is YYYY-MM-DDThh:MM:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置The expiry date of the registration code is in ISO8601 standard representation and uses UTC time. 
The format is YYYY-MM-DDThh:MM:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expiredTime The expiry date of the registration code is in ISO8601 standard representation and uses UTC time. 
The format is YYYY-MM-DDThh:MM:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取The registration code limits tat_agent to register only from the public outbound ip described by IpAddressRange.
                     * @return IpAddressRange The registration code limits tat_agent to register only from the public outbound ip described by IpAddressRange.
                     * 
                     */
                    std::string GetIpAddressRange() const;

                    /**
                     * 设置The registration code limits tat_agent to register only from the public outbound ip described by IpAddressRange.
                     * @param _ipAddressRange The registration code limits tat_agent to register only from the public outbound ip described by IpAddressRange.
                     * 
                     */
                    void SetIpAddressRange(const std::string& _ipAddressRange);

                    /**
                     * 判断参数 IpAddressRange 是否已赋值
                     * @return IpAddressRange 是否已赋值
                     * 
                     */
                    bool IpAddressRangeHasBeenSet() const;

                    /**
                     * 获取Is the registration code available.
                     * @return Enabled Is the registration code available.
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Is the registration code available.
                     * @param _enabled Is the registration code available.
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取The number of registered registration codes.
                     * @return RegisteredCount The number of registered registration codes.
                     * 
                     */
                    int64_t GetRegisteredCount() const;

                    /**
                     * 设置The number of registered registration codes.
                     * @param _registeredCount The number of registered registration codes.
                     * 
                     */
                    void SetRegisteredCount(const int64_t& _registeredCount);

                    /**
                     * 判断参数 RegisteredCount 是否已赋值
                     * @return RegisteredCount 是否已赋值
                     * 
                     */
                    bool RegisteredCountHasBeenSet() const;

                    /**
                     * 获取Registration code creation time, represented as ISO8601 standard and using UTC time. 
The format is YYYY-MM-DDThh:MM:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreatedTime Registration code creation time, represented as ISO8601 standard and using UTC time. 
The format is YYYY-MM-DDThh:MM:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Registration code creation time, represented as ISO8601 standard and using UTC time. 
The format is YYYY-MM-DDThh:MM:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createdTime Registration code creation time, represented as ISO8601 standard and using UTC time. 
The format is YYYY-MM-DDThh:MM:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Last update time of the registration code, as ISO8601 standard representation and using UTC time. 
The format is YYYY-MM-DDThh:MM:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdatedTime Last update time of the registration code, as ISO8601 standard representation and using UTC time. 
The format is YYYY-MM-DDThh:MM:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置Last update time of the registration code, as ISO8601 standard representation and using UTC time. 
The format is YYYY-MM-DDThh:MM:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updatedTime Last update time of the registration code, as ISO8601 standard representation and using UTC time. 
The format is YYYY-MM-DDThh:MM:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                private:

                    /**
                     * Registration code ID.
                     */
                    std::string m_registerCodeId;
                    bool m_registerCodeIdHasBeenSet;

                    /**
                     * Describes the registration code.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Prefix of the registered instance name.
                     */
                    std::string m_instanceNamePrefix;
                    bool m_instanceNamePrefixHasBeenSet;

                    /**
                     * The number of instances the registration code allows.
                     */
                    int64_t m_registerLimit;
                    bool m_registerLimitHasBeenSet;

                    /**
                     * The expiry date of the registration code is in ISO8601 standard representation and uses UTC time. 
The format is YYYY-MM-DDThh:MM:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * The registration code limits tat_agent to register only from the public outbound ip described by IpAddressRange.
                     */
                    std::string m_ipAddressRange;
                    bool m_ipAddressRangeHasBeenSet;

                    /**
                     * Is the registration code available.
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * The number of registered registration codes.
                     */
                    int64_t m_registeredCount;
                    bool m_registeredCountHasBeenSet;

                    /**
                     * Registration code creation time, represented as ISO8601 standard and using UTC time. 
The format is YYYY-MM-DDThh:MM:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Last update time of the registration code, as ISO8601 standard representation and using UTC time. 
The format is YYYY-MM-DDThh:MM:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_REGISTERCODEINFO_H_
