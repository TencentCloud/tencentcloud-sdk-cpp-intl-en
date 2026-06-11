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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYHOSTMETRICCONFIGREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYHOSTMETRICCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/HostMetricItem.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyHostMetricConfig request structure.
                */
                class ModifyHostMetricConfigRequest : public AbstractModel
                {
                public:
                    ModifyHostMetricConfigRequest();
                    ~ModifyHostMetricConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Metric Topic id
- Get the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1). Note: BizType 0: log topic (default value), 1: metric topic.
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1). Note that BizType 0: log topic (default value), 1: metric topic.
                     * @return TopicId Metric Topic id
- Get the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1). Note: BizType 0: log topic (default value), 1: metric topic.
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1). Note that BizType 0: log topic (default value), 1: metric topic.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Metric Topic id
- Get the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1). Note: BizType 0: log topic (default value), 1: metric topic.
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1). Note that BizType 0: log topic (default value), 1: metric topic.
                     * @param _topicId Metric Topic id
- Get the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1). Note: BizType 0: log topic (default value), 1: metric topic.
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1). Note that BizType 0: log topic (default value), 1: metric topic.
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Collection configuration ID.
                     * @return ConfigId Collection configuration ID.
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置Collection configuration ID.
                     * @param _configId Collection configuration ID.
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取Name

-Length not exceeding 64 characters.
                     * @return Name Name

-Length not exceeding 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name

-Length not exceeding 64 characters.
                     * @param _name Name

-Length not exceeding 64 characters.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Machine group id list. Supports up to 100 machine groups.
                     * @return MachineGroupIds Machine group id list. Supports up to 100 machine groups.
                     * 
                     */
                    std::vector<std::string> GetMachineGroupIds() const;

                    /**
                     * 设置Machine group id list. Supports up to 100 machine groups.
                     * @param _machineGroupIds Machine group id list. Supports up to 100 machine groups.
                     * 
                     */
                    void SetMachineGroupIds(const std::vector<std::string>& _machineGroupIds);

                    /**
                     * 判断参数 MachineGroupIds 是否已赋值
                     * @return MachineGroupIds 是否已赋值
                     * 
                     */
                    bool MachineGroupIdsHasBeenSet() const;

                    /**
                     * 获取Collection frequency. Unit: ms. Minimum support 5000 ms.
                     * @return Interval Collection frequency. Unit: ms. Minimum support 5000 ms.
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置Collection frequency. Unit: ms. Minimum support 5000 ms.
                     * @param _interval Collection frequency. Unit: ms. Minimum support 5000 ms.
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Collection items. Support "cpu", "mem", "net", "disk", "system". **Currently only support: ALL collection items require configuration**.
- cpu:CPU
-mem: memory
-net: Network
-disk
-system

                     * @return HostMetricItems Collection items. Support "cpu", "mem", "net", "disk", "system". **Currently only support: ALL collection items require configuration**.
- cpu:CPU
-mem: memory
-net: Network
-disk
-system

                     * 
                     */
                    std::vector<HostMetricItem> GetHostMetricItems() const;

                    /**
                     * 设置Collection items. Support "cpu", "mem", "net", "disk", "system". **Currently only support: ALL collection items require configuration**.
- cpu:CPU
-mem: memory
-net: Network
-disk
-system

                     * @param _hostMetricItems Collection items. Support "cpu", "mem", "net", "disk", "system". **Currently only support: ALL collection items require configuration**.
- cpu:CPU
-mem: memory
-net: Network
-disk
-system

                     * 
                     */
                    void SetHostMetricItems(const std::vector<HostMetricItem>& _hostMetricItems);

                    /**
                     * 判断参数 HostMetricItems 是否已赋值
                     * @return HostMetricItems 是否已赋值
                     * 
                     */
                    bool HostMetricItemsHasBeenSet() const;

                private:

                    /**
                     * Metric Topic id
- Get the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1). Note: BizType 0: log topic (default value), 1: metric topic.
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1). Note that BizType 0: log topic (default value), 1: metric topic.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Collection configuration ID.
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * Name

-Length not exceeding 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Machine group id list. Supports up to 100 machine groups.
                     */
                    std::vector<std::string> m_machineGroupIds;
                    bool m_machineGroupIdsHasBeenSet;

                    /**
                     * Collection frequency. Unit: ms. Minimum support 5000 ms.
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Collection items. Support "cpu", "mem", "net", "disk", "system". **Currently only support: ALL collection items require configuration**.
- cpu:CPU
-mem: memory
-net: Network
-disk
-system

                     */
                    std::vector<HostMetricItem> m_hostMetricItems;
                    bool m_hostMetricItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYHOSTMETRICCONFIGREQUEST_H_
