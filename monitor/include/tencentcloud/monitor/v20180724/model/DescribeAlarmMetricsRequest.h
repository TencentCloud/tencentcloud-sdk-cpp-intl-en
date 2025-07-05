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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMMETRICSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMMETRICSREQUEST_H_

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
                * DescribeAlarmMetrics request structure.
                */
                class DescribeAlarmMetricsRequest : public AbstractModel
                {
                public:
                    DescribeAlarmMetricsRequest();
                    ~DescribeAlarmMetricsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Value fixed at "monitor"
                     * @return Module Value fixed at "monitor"
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置Value fixed at "monitor"
                     * @param _module Value fixed at "monitor"
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取Monitor type filter. Valid values: MT_QCE (Tencent Cloud service monitoring)
                     * @return MonitorType Monitor type filter. Valid values: MT_QCE (Tencent Cloud service monitoring)
                     * 
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 设置Monitor type filter. Valid values: MT_QCE (Tencent Cloud service monitoring)
                     * @param _monitorType Monitor type filter. Valid values: MT_QCE (Tencent Cloud service monitoring)
                     * 
                     */
                    void SetMonitorType(const std::string& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取Alarm policy type such as cvm_device, which is obtained through the `DescribeAllNamespaces` API
                     * @return Namespace Alarm policy type such as cvm_device, which is obtained through the `DescribeAllNamespaces` API
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Alarm policy type such as cvm_device, which is obtained through the `DescribeAllNamespaces` API
                     * @param _namespace Alarm policy type such as cvm_device, which is obtained through the `DescribeAllNamespaces` API
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                private:

                    /**
                     * Value fixed at "monitor"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Monitor type filter. Valid values: MT_QCE (Tencent Cloud service monitoring)
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * Alarm policy type such as cvm_device, which is obtained through the `DescribeAllNamespaces` API
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMMETRICSREQUEST_H_
