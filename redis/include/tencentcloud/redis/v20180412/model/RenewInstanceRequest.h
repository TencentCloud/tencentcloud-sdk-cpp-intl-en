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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_RENEWINSTANCEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_RENEWINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
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
                     * 获取Validity period in months
                     * @return Period Validity period in months
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Validity period in months
                     * @param _period Validity period in months
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取The parameter used to determine whether to modify the billing mode. <ul><li>If you want to change the billing mode from pay-as-you-go to monthly subscription, specify this parameter as <b>prepaid</b>. </li><li>If the current instance is monthly subscribed, this parameter is not required. </li></ul>
                     * @return ModifyPayMode The parameter used to determine whether to modify the billing mode. <ul><li>If you want to change the billing mode from pay-as-you-go to monthly subscription, specify this parameter as <b>prepaid</b>. </li><li>If the current instance is monthly subscribed, this parameter is not required. </li></ul>
                     * 
                     */
                    std::string GetModifyPayMode() const;

                    /**
                     * 设置The parameter used to determine whether to modify the billing mode. <ul><li>If you want to change the billing mode from pay-as-you-go to monthly subscription, specify this parameter as <b>prepaid</b>. </li><li>If the current instance is monthly subscribed, this parameter is not required. </li></ul>
                     * @param _modifyPayMode The parameter used to determine whether to modify the billing mode. <ul><li>If you want to change the billing mode from pay-as-you-go to monthly subscription, specify this parameter as <b>prepaid</b>. </li><li>If the current instance is monthly subscribed, this parameter is not required. </li></ul>
                     * 
                     */
                    void SetModifyPayMode(const std::string& _modifyPayMode);

                    /**
                     * 判断参数 ModifyPayMode 是否已赋值
                     * @return ModifyPayMode 是否已赋值
                     * 
                     */
                    bool ModifyPayModeHasBeenSet() const;

                private:

                    /**
                     * Validity period in months
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The parameter used to determine whether to modify the billing mode. <ul><li>If you want to change the billing mode from pay-as-you-go to monthly subscription, specify this parameter as <b>prepaid</b>. </li><li>If the current instance is monthly subscribed, this parameter is not required. </li></ul>
                     */
                    std::string m_modifyPayMode;
                    bool m_modifyPayModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_RENEWINSTANCEREQUEST_H_
