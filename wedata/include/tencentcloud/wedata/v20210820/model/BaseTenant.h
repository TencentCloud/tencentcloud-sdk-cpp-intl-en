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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BASETENANT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BASETENANT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Tenant basic information
                */
                class BaseTenant : public AbstractModel
                {
                public:
                    BaseTenant();
                    ~BaseTenant() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tenant IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TenantId Tenant IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置Tenant IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _tenantId Tenant IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取Tenant ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TenantName Tenant ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTenantName() const;

                    /**
                     * 设置Tenant ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tenantName Tenant ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTenantName(const std::string& _tenantName);

                    /**
                     * 判断参数 TenantName 是否已赋值
                     * @return TenantName 是否已赋值
                     * 
                     */
                    bool TenantNameHasBeenSet() const;

                    /**
                     * 获取Tenant display name, usually the Chinese name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DisplayName Tenant display name, usually the Chinese name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Tenant display name, usually the Chinese name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _displayName Tenant display name, usually the Chinese name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取RemarksNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Description RemarksNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置RemarksNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _description RemarksNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Tenant Main Account
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OwnerUserId Tenant Main Account
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwnerUserId() const;

                    /**
                     * 设置Tenant Main Account
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ownerUserId Tenant Main Account
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOwnerUserId(const std::string& _ownerUserId);

                    /**
                     * 判断参数 OwnerUserId 是否已赋值
                     * @return OwnerUserId 是否已赋值
                     * 
                     */
                    bool OwnerUserIdHasBeenSet() const;

                    /**
                     * 获取Tenant's additional configuration parameters, in JSON format string
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Params Tenant's additional configuration parameters, in JSON format string
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置Tenant's additional configuration parameters, in JSON format string
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _params Tenant's additional configuration parameters, in JSON format string
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * Tenant IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * Tenant ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tenantName;
                    bool m_tenantNameHasBeenSet;

                    /**
                     * Tenant display name, usually the Chinese name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * RemarksNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Tenant Main Account
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ownerUserId;
                    bool m_ownerUserIdHasBeenSet;

                    /**
                     * Tenant's additional configuration parameters, in JSON format string
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BASETENANT_H_
