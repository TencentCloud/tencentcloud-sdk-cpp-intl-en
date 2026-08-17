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
                     * 获取Purchase duration.
-Unit: month.
- Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36.
                     * @return Period Purchase duration.
-Unit: month.
- Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36.
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Purchase duration.
-Unit: month.
- Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36.
                     * @param _period Purchase duration.
-Unit: month.
- Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36.
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
                     * 获取Instance ID. Log in to the [Redis console](https://console.cloud.tencent.com/redis/instance/list) and copy it from the instance list.
                     * @return InstanceId Instance ID. Log in to the [Redis console](https://console.cloud.tencent.com/redis/instance/list) and copy it from the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. Log in to the [Redis console](https://console.cloud.tencent.com/redis/instance/list) and copy it from the instance list.
                     * @param _instanceId Instance ID. Log in to the [Redis console](https://console.cloud.tencent.com/redis/instance/list) and copy it from the instance list.
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
                     * 获取Flag whether to change billing mode.
-The billing mode of the current instance is pay-as-you-go. To convert to yearly/monthly subscription and renew, specify this parameter as <b>prepaid</b>.
-The current instance billing mode is yearly/monthly subscription, so this parameter can be left unset.
                     * @return ModifyPayMode Flag whether to change billing mode.
-The billing mode of the current instance is pay-as-you-go. To convert to yearly/monthly subscription and renew, specify this parameter as <b>prepaid</b>.
-The current instance billing mode is yearly/monthly subscription, so this parameter can be left unset.
                     * 
                     */
                    std::string GetModifyPayMode() const;

                    /**
                     * 设置Flag whether to change billing mode.
-The billing mode of the current instance is pay-as-you-go. To convert to yearly/monthly subscription and renew, specify this parameter as <b>prepaid</b>.
-The current instance billing mode is yearly/monthly subscription, so this parameter can be left unset.
                     * @param _modifyPayMode Flag whether to change billing mode.
-The billing mode of the current instance is pay-as-you-go. To convert to yearly/monthly subscription and renew, specify this parameter as <b>prepaid</b>.
-The current instance billing mode is yearly/monthly subscription, so this parameter can be left unset.
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
                     * Purchase duration.
-Unit: month.
- Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36.
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Instance ID. Log in to the [Redis console](https://console.cloud.tencent.com/redis/instance/list) and copy it from the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Flag whether to change billing mode.
-The billing mode of the current instance is pay-as-you-go. To convert to yearly/monthly subscription and renew, specify this parameter as <b>prepaid</b>.
-The current instance billing mode is yearly/monthly subscription, so this parameter can be left unset.
                     */
                    std::string m_modifyPayMode;
                    bool m_modifyPayModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_RENEWINSTANCEREQUEST_H_
