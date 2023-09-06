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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/TagSpecification.h>
#include <tencentcloud/tcr/v20190924/model/RegistryChargePrepaid.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateInstance request structure.
                */
                class CreateInstanceRequest : public AbstractModel
                {
                public:
                    CreateInstanceRequest();
                    ~CreateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Enterprise Edition instance name
                     * @return RegistryName Enterprise Edition instance name
                     * 
                     */
                    std::string GetRegistryName() const;

                    /**
                     * 设置Enterprise Edition instance name
                     * @param _registryName Enterprise Edition instance name
                     * 
                     */
                    void SetRegistryName(const std::string& _registryName);

                    /**
                     * 判断参数 RegistryName 是否已赋值
                     * @return RegistryName 是否已赋值
                     * 
                     */
                    bool RegistryNameHasBeenSet() const;

                    /**
                     * 获取Enterprise Edition instance type. Valid values: basic: Basic; standard: Standard; premium: Premium.
                     * @return RegistryType Enterprise Edition instance type. Valid values: basic: Basic; standard: Standard; premium: Premium.
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置Enterprise Edition instance type. Valid values: basic: Basic; standard: Standard; premium: Premium.
                     * @param _registryType Enterprise Edition instance type. Valid values: basic: Basic; standard: Standard; premium: Premium.
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
                     * 获取Cloud tag description
                     * @return TagSpecification Cloud tag description
                     * 
                     */
                    TagSpecification GetTagSpecification() const;

                    /**
                     * 设置Cloud tag description
                     * @param _tagSpecification Cloud tag description
                     * 
                     */
                    void SetTagSpecification(const TagSpecification& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取Instance billing mode. Valid values: 0: Pay-as-you-go billing; 1: Prepaid. Default value: 0.
                     * @return RegistryChargeType Instance billing mode. Valid values: 0: Pay-as-you-go billing; 1: Prepaid. Default value: 0.
                     * 
                     */
                    int64_t GetRegistryChargeType() const;

                    /**
                     * 设置Instance billing mode. Valid values: 0: Pay-as-you-go billing; 1: Prepaid. Default value: 0.
                     * @param _registryChargeType Instance billing mode. Valid values: 0: Pay-as-you-go billing; 1: Prepaid. Default value: 0.
                     * 
                     */
                    void SetRegistryChargeType(const int64_t& _registryChargeType);

                    /**
                     * 判断参数 RegistryChargeType 是否已赋值
                     * @return RegistryChargeType 是否已赋值
                     * 
                     */
                    bool RegistryChargeTypeHasBeenSet() const;

                    /**
                     * 获取Auto-renewal setting and purchase period
                     * @return RegistryChargePrepaid Auto-renewal setting and purchase period
                     * 
                     */
                    RegistryChargePrepaid GetRegistryChargePrepaid() const;

                    /**
                     * 设置Auto-renewal setting and purchase period
                     * @param _registryChargePrepaid Auto-renewal setting and purchase period
                     * 
                     */
                    void SetRegistryChargePrepaid(const RegistryChargePrepaid& _registryChargePrepaid);

                    /**
                     * 判断参数 RegistryChargePrepaid 是否已赋值
                     * @return RegistryChargePrepaid 是否已赋值
                     * 
                     */
                    bool RegistryChargePrepaidHasBeenSet() const;

                    /**
                     * 获取Whether to sync TCR cloud tags to the COS bucket
                     * @return SyncTag Whether to sync TCR cloud tags to the COS bucket
                     * 
                     */
                    bool GetSyncTag() const;

                    /**
                     * 设置Whether to sync TCR cloud tags to the COS bucket
                     * @param _syncTag Whether to sync TCR cloud tags to the COS bucket
                     * 
                     */
                    void SetSyncTag(const bool& _syncTag);

                    /**
                     * 判断参数 SyncTag 是否已赋值
                     * @return SyncTag 是否已赋值
                     * 
                     */
                    bool SyncTagHasBeenSet() const;

                    /**
                     * 获取Whether to enable the COS Multi-AZ feature
                     * @return EnableCosMAZ Whether to enable the COS Multi-AZ feature
                     * 
                     */
                    bool GetEnableCosMAZ() const;

                    /**
                     * 设置Whether to enable the COS Multi-AZ feature
                     * @param _enableCosMAZ Whether to enable the COS Multi-AZ feature
                     * 
                     */
                    void SetEnableCosMAZ(const bool& _enableCosMAZ);

                    /**
                     * 判断参数 EnableCosMAZ 是否已赋值
                     * @return EnableCosMAZ 是否已赋值
                     * 
                     */
                    bool EnableCosMAZHasBeenSet() const;

                    /**
                     * 获取Whether to enable deletion protection
                     * @return DeletionProtection Whether to enable deletion protection
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置Whether to enable deletion protection
                     * @param _deletionProtection Whether to enable deletion protection
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
                     * Enterprise Edition instance name
                     */
                    std::string m_registryName;
                    bool m_registryNameHasBeenSet;

                    /**
                     * Enterprise Edition instance type. Valid values: basic: Basic; standard: Standard; premium: Premium.
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * Cloud tag description
                     */
                    TagSpecification m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * Instance billing mode. Valid values: 0: Pay-as-you-go billing; 1: Prepaid. Default value: 0.
                     */
                    int64_t m_registryChargeType;
                    bool m_registryChargeTypeHasBeenSet;

                    /**
                     * Auto-renewal setting and purchase period
                     */
                    RegistryChargePrepaid m_registryChargePrepaid;
                    bool m_registryChargePrepaidHasBeenSet;

                    /**
                     * Whether to sync TCR cloud tags to the COS bucket
                     */
                    bool m_syncTag;
                    bool m_syncTagHasBeenSet;

                    /**
                     * Whether to enable the COS Multi-AZ feature
                     */
                    bool m_enableCosMAZ;
                    bool m_enableCosMAZHasBeenSet;

                    /**
                     * Whether to enable deletion protection
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATEINSTANCEREQUEST_H_
