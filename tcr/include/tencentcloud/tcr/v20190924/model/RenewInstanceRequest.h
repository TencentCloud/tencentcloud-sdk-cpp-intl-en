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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_RENEWINSTANCEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_RENEWINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * RenewInstance request structure.
                */
                class RenewInstanceRequest : public AbstractModel
                {
                public:
                    RenewInstanceRequest();
                    ~RenewInstanceRequest() = default;
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
                     * 获取Auto-renewal flag and purchase duration in months for prepayment. Valid values: 0: Manual renewal; 1: Auto-renewal; 2: No renewal and no notification.
                     * @return RegistryChargePrepaid Auto-renewal flag and purchase duration in months for prepayment. Valid values: 0: Manual renewal; 1: Auto-renewal; 2: No renewal and no notification.
                     * 
                     */
                    RegistryChargePrepaid GetRegistryChargePrepaid() const;

                    /**
                     * 设置Auto-renewal flag and purchase duration in months for prepayment. Valid values: 0: Manual renewal; 1: Auto-renewal; 2: No renewal and no notification.
                     * @param _registryChargePrepaid Auto-renewal flag and purchase duration in months for prepayment. Valid values: 0: Manual renewal; 1: Auto-renewal; 2: No renewal and no notification.
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
                     * 获取Valid values: 0: renewal; 1: change from pay-as-you-go to monthly subscription billing
                     * @return Flag Valid values: 0: renewal; 1: change from pay-as-you-go to monthly subscription billing
                     * 
                     */
                    int64_t GetFlag() const;

                    /**
                     * 设置Valid values: 0: renewal; 1: change from pay-as-you-go to monthly subscription billing
                     * @param _flag Valid values: 0: renewal; 1: change from pay-as-you-go to monthly subscription billing
                     * 
                     */
                    void SetFlag(const int64_t& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     * 
                     */
                    bool FlagHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Auto-renewal flag and purchase duration in months for prepayment. Valid values: 0: Manual renewal; 1: Auto-renewal; 2: No renewal and no notification.
                     */
                    RegistryChargePrepaid m_registryChargePrepaid;
                    bool m_registryChargePrepaidHasBeenSet;

                    /**
                     * Valid values: 0: renewal; 1: change from pay-as-you-go to monthly subscription billing
                     */
                    int64_t m_flag;
                    bool m_flagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_RENEWINSTANCEREQUEST_H_
