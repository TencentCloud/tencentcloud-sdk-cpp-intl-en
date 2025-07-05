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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSGLOBALCONFIGREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSGLOBALCONFIGREQUEST_H_

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
                * DescribePrometheusGlobalConfig request structure.
                */
                class DescribePrometheusGlobalConfigRequest : public AbstractModel
                {
                public:
                    DescribePrometheusGlobalConfigRequest();
                    ~DescribePrometheusGlobalConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance-level scrape configuration
                     * @return InstanceId Instance-level scrape configuration
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance-level scrape configuration
                     * @param _instanceId Instance-level scrape configuration
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
                     * 获取Whether to disable statistics
                     * @return DisableStatistics Whether to disable statistics
                     * 
                     */
                    bool GetDisableStatistics() const;

                    /**
                     * 设置Whether to disable statistics
                     * @param _disableStatistics Whether to disable statistics
                     * 
                     */
                    void SetDisableStatistics(const bool& _disableStatistics);

                    /**
                     * 判断参数 DisableStatistics 是否已赋值
                     * @return DisableStatistics 是否已赋值
                     * 
                     */
                    bool DisableStatisticsHasBeenSet() const;

                private:

                    /**
                     * Instance-level scrape configuration
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Whether to disable statistics
                     */
                    bool m_disableStatistics;
                    bool m_disableStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSGLOBALCONFIGREQUEST_H_
