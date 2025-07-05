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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYINSTANCEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * ModifyInstance request structure.
                */
                class ModifyInstanceRequest : public AbstractModel
                {
                public:
                    ModifyInstanceRequest();
                    ~ModifyInstanceRequest() = default;
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
                     * 获取Instance edition
Basic: `basic`
Standard: `standard`
Premium: `premium`
                     * @return RegistryType Instance edition
Basic: `basic`
Standard: `standard`
Premium: `premium`
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置Instance edition
Basic: `basic`
Standard: `standard`
Premium: `premium`
                     * @param _registryType Instance edition
Basic: `basic`
Standard: `standard`
Premium: `premium`
                     * 
                     */
                    void SetRegistryType(const std::string& _registryType);

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     * 
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取Whether to enable deletion protection. It defaults to `false`. 
                     * @return DeletionProtection Whether to enable deletion protection. It defaults to `false`. 
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置Whether to enable deletion protection. It defaults to `false`. 
                     * @param _deletionProtection Whether to enable deletion protection. It defaults to `false`. 
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Instance edition
Basic: `basic`
Standard: `standard`
Premium: `premium`
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * Whether to enable deletion protection. It defaults to `false`. 
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYINSTANCEREQUEST_H_
