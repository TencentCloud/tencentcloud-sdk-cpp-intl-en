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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETEPROMETHEUSALERTRULEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETEPROMETHEUSALERTRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DeletePrometheusAlertRule request structure.
                */
                class DeletePrometheusAlertRuleRequest : public AbstractModel
                {
                public:
                    DeletePrometheusAlertRuleRequest();
                    ~DeletePrometheusAlertRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取The ID list of alarm rules
                     * @return AlertIds The ID list of alarm rules
                     */
                    std::vector<std::string> GetAlertIds() const;

                    /**
                     * 设置The ID list of alarm rules
                     * @param AlertIds The ID list of alarm rules
                     */
                    void SetAlertIds(const std::vector<std::string>& _alertIds);

                    /**
                     * 判断参数 AlertIds 是否已赋值
                     * @return AlertIds 是否已赋值
                     */
                    bool AlertIdsHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The ID list of alarm rules
                     */
                    std::vector<std::string> m_alertIds;
                    bool m_alertIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETEPROMETHEUSALERTRULEREQUEST_H_
