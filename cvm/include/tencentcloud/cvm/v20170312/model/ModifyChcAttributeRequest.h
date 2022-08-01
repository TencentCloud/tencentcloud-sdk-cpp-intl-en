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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYCHCATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYCHCATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyChcAttribute request structure.
                */
                class ModifyChcAttributeRequest : public AbstractModel
                {
                public:
                    ModifyChcAttributeRequest();
                    ~ModifyChcAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CHC host IDs
                     * @return ChcIds CHC host IDs
                     */
                    std::vector<std::string> GetChcIds() const;

                    /**
                     * 设置CHC host IDs
                     * @param ChcIds CHC host IDs
                     */
                    void SetChcIds(const std::vector<std::string>& _chcIds);

                    /**
                     * 判断参数 ChcIds 是否已赋值
                     * @return ChcIds 是否已赋值
                     */
                    bool ChcIdsHasBeenSet() const;

                    /**
                     * 获取CHC host name
                     * @return InstanceName CHC host name
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置CHC host name
                     * @param InstanceName CHC host name
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Server type
                     * @return DeviceType Server type
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置Server type
                     * @param DeviceType Server type
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取Valid characters: Letters, numbers, hyphens and underscores
                     * @return BmcUser Valid characters: Letters, numbers, hyphens and underscores
                     */
                    std::string GetBmcUser() const;

                    /**
                     * 设置Valid characters: Letters, numbers, hyphens and underscores
                     * @param BmcUser Valid characters: Letters, numbers, hyphens and underscores
                     */
                    void SetBmcUser(const std::string& _bmcUser);

                    /**
                     * 判断参数 BmcUser 是否已赋值
                     * @return BmcUser 是否已赋值
                     */
                    bool BmcUserHasBeenSet() const;

                    /**
                     * 获取The password can contain 8 to 16 characters, including letters, numbers and special symbols (()`~!@#$%^&*-+=_|{}).
                     * @return Password The password can contain 8 to 16 characters, including letters, numbers and special symbols (()`~!@#$%^&*-+=_|{}).
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置The password can contain 8 to 16 characters, including letters, numbers and special symbols (()`~!@#$%^&*-+=_|{}).
                     * @param Password The password can contain 8 to 16 characters, including letters, numbers and special symbols (()`~!@#$%^&*-+=_|{}).
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取BMC network security group list
                     * @return BmcSecurityGroupIds BMC network security group list
                     */
                    std::vector<std::string> GetBmcSecurityGroupIds() const;

                    /**
                     * 设置BMC network security group list
                     * @param BmcSecurityGroupIds BMC network security group list
                     */
                    void SetBmcSecurityGroupIds(const std::vector<std::string>& _bmcSecurityGroupIds);

                    /**
                     * 判断参数 BmcSecurityGroupIds 是否已赋值
                     * @return BmcSecurityGroupIds 是否已赋值
                     */
                    bool BmcSecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * CHC host IDs
                     */
                    std::vector<std::string> m_chcIds;
                    bool m_chcIdsHasBeenSet;

                    /**
                     * CHC host name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Server type
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * Valid characters: Letters, numbers, hyphens and underscores
                     */
                    std::string m_bmcUser;
                    bool m_bmcUserHasBeenSet;

                    /**
                     * The password can contain 8 to 16 characters, including letters, numbers and special symbols (()`~!@#$%^&*-+=_|{}).
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * BMC network security group list
                     */
                    std::vector<std::string> m_bmcSecurityGroupIds;
                    bool m_bmcSecurityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYCHCATTRIBUTEREQUEST_H_
