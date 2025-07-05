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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEPROMETHEUSALERTPOLICYREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEPROMETHEUSALERTPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DeletePrometheusAlertPolicy request structure.
                */
                class DeletePrometheusAlertPolicyRequest : public AbstractModel
                {
                public:
                    DeletePrometheusAlertPolicyRequest();
                    ~DeletePrometheusAlertPolicyRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取List of alerting rule IDs
                     * @return AlertIds List of alerting rule IDs
                     * 
                     */
                    std::vector<std::string> GetAlertIds() const;

                    /**
                     * 设置List of alerting rule IDs
                     * @param _alertIds List of alerting rule IDs
                     * 
                     */
                    void SetAlertIds(const std::vector<std::string>& _alertIds);

                    /**
                     * 判断参数 AlertIds 是否已赋值
                     * @return AlertIds 是否已赋值
                     * 
                     */
                    bool AlertIdsHasBeenSet() const;

                    /**
                     * 获取Alerting rule name
                     * @return Names Alerting rule name
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置Alerting rule name
                     * @param _names Alerting rule name
                     * 
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     * 
                     */
                    bool NamesHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * List of alerting rule IDs
                     */
                    std::vector<std::string> m_alertIds;
                    bool m_alertIdsHasBeenSet;

                    /**
                     * Alerting rule name
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEPROMETHEUSALERTPOLICYREQUEST_H_
