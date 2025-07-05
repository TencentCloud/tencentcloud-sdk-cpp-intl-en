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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYNETRETURNSWITCHREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYNETRETURNSWITCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * ModifyNetReturnSwitch request structure.
                */
                class ModifyNetReturnSwitchRequest : public AbstractModel
                {
                public:
                    ModifyNetReturnSwitchRequest();
                    ~ModifyNetReturnSwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type (`net`: Anti-DDoS Ultimate)
                     * @return Business Anti-DDoS service type (`net`: Anti-DDoS Ultimate)
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type (`net`: Anti-DDoS Ultimate)
                     * @param _business Anti-DDoS service type (`net`: Anti-DDoS Ultimate)
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS instance ID
                     * @return Id Anti-DDoS instance ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Anti-DDoS instance ID
                     * @param _id Anti-DDoS instance ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Switch status. 0: disabled, 1: enabled
                     * @return Status Switch status. 0: disabled, 1: enabled
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Switch status. 0: disabled, 1: enabled
                     * @param _status Switch status. 0: disabled, 1: enabled
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Switch duration in hours. Valid values: [0,1,2,3,4,5,6;]. If `status` is 1, this field is required and must be greater than 0
                     * @return Hour Switch duration in hours. Valid values: [0,1,2,3,4,5,6;]. If `status` is 1, this field is required and must be greater than 0
                     * 
                     */
                    uint64_t GetHour() const;

                    /**
                     * 设置Switch duration in hours. Valid values: [0,1,2,3,4,5,6;]. If `status` is 1, this field is required and must be greater than 0
                     * @param _hour Switch duration in hours. Valid values: [0,1,2,3,4,5,6;]. If `status` is 1, this field is required and must be greater than 0
                     * 
                     */
                    void SetHour(const uint64_t& _hour);

                    /**
                     * 判断参数 Hour 是否已赋值
                     * @return Hour 是否已赋值
                     * 
                     */
                    bool HourHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type (`net`: Anti-DDoS Ultimate)
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Anti-DDoS instance ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Switch status. 0: disabled, 1: enabled
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Switch duration in hours. Valid values: [0,1,2,3,4,5,6;]. If `status` is 1, this field is required and must be greater than 0
                     */
                    uint64_t m_hour;
                    bool m_hourHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYNETRETURNSWITCHREQUEST_H_
