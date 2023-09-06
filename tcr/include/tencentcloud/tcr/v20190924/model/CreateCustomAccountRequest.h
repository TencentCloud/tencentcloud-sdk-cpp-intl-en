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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATECUSTOMACCOUNTREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATECUSTOMACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/Permission.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateCustomAccount request structure.
                */
                class CreateCustomAccountRequest : public AbstractModel
                {
                public:
                    CreateCustomAccountRequest();
                    ~CreateCustomAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return RegistryId Instance ID
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置Instance ID
                     * @param _registryId Instance ID
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取Custom account name
                     * @return Name Custom account name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Custom account name
                     * @param _name Custom account name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Policy list
                     * @return Permissions Policy list
                     * 
                     */
                    std::vector<Permission> GetPermissions() const;

                    /**
                     * 设置Policy list
                     * @param _permissions Policy list
                     * 
                     */
                    void SetPermissions(const std::vector<Permission>& _permissions);

                    /**
                     * 判断参数 Permissions 是否已赋值
                     * @return Permissions 是否已赋值
                     * 
                     */
                    bool PermissionsHasBeenSet() const;

                    /**
                     * 获取Custom account description
                     * @return Description Custom account description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Custom account description
                     * @param _description Custom account description
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
                     * 获取Validity in days starting from the current day. It takes a higher priority than `ExpiresAt`.
                     * @return Duration Validity in days starting from the current day. It takes a higher priority than `ExpiresAt`.
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Validity in days starting from the current day. It takes a higher priority than `ExpiresAt`.
                     * @param _duration Validity in days starting from the current day. It takes a higher priority than `ExpiresAt`.
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Expiry time of the custom account (timestamp, in milliseconds)
                     * @return ExpiresAt Expiry time of the custom account (timestamp, in milliseconds)
                     * 
                     */
                    int64_t GetExpiresAt() const;

                    /**
                     * 设置Expiry time of the custom account (timestamp, in milliseconds)
                     * @param _expiresAt Expiry time of the custom account (timestamp, in milliseconds)
                     * 
                     */
                    void SetExpiresAt(const int64_t& _expiresAt);

                    /**
                     * 判断参数 ExpiresAt 是否已赋值
                     * @return ExpiresAt 是否已赋值
                     * 
                     */
                    bool ExpiresAtHasBeenSet() const;

                    /**
                     * 获取Whether to disable the custom account
                     * @return Disable Whether to disable the custom account
                     * 
                     */
                    bool GetDisable() const;

                    /**
                     * 设置Whether to disable the custom account
                     * @param _disable Whether to disable the custom account
                     * 
                     */
                    void SetDisable(const bool& _disable);

                    /**
                     * 判断参数 Disable 是否已赋值
                     * @return Disable 是否已赋值
                     * 
                     */
                    bool DisableHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Custom account name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Policy list
                     */
                    std::vector<Permission> m_permissions;
                    bool m_permissionsHasBeenSet;

                    /**
                     * Custom account description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Validity in days starting from the current day. It takes a higher priority than `ExpiresAt`.
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Expiry time of the custom account (timestamp, in milliseconds)
                     */
                    int64_t m_expiresAt;
                    bool m_expiresAtHasBeenSet;

                    /**
                     * Whether to disable the custom account
                     */
                    bool m_disable;
                    bool m_disableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATECUSTOMACCOUNTREQUEST_H_
