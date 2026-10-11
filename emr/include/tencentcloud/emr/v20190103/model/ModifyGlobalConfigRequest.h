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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYGLOBALCONFIGREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYGLOBALCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Item.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyGlobalConfig request structure.
                */
                class ModifyGlobalConfigRequest : public AbstractModel
                {
                public:
                    ModifyGlobalConfigRequest();
                    ~ModifyGlobalConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取English ID of the EMR cluster.
                     * @return InstanceId English ID of the EMR cluster.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置English ID of the EMR cluster.
                     * @param _instanceId English ID of the EMR cluster.
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
                     * 获取List of modified configurations. Key values have a one-to-one correspondence with the response parameters of the `DescribeGlobalConfig` API and are case-insensitive (If an error occurs indicating that the key cannot be found, refer to the response parameters). Valid values:
1. enableResourceSchedule: Whether to enable or disable resource scheduling. When it is disabled, a synchronization option with Key set to sync is available. Valid values: true and false.
2. scheduler: Scheduler type.
2. enableLabel: Whether to enable or disable the tag. Valid values: true and false.
2. labelDir: Tag directory.
3. queueMappingOverride: Whether to overwrite user-specified queue. Valid values: true and false.
4. userMaxAppsDefault: Program upper limit.
5. Dynamic configuration item: Name field in DefaultSettings returned by the `DescribeGlobalConfig` API.
The values are strings. For **whether to overwrite the user-specified queue** and **program upper limit**, null in the JSON specifications means clearing the value of this configuration. Individual configuration items can be modified. For **dynamic configurations**, pass all values to overwrite the existing ones.
                     * @return Items List of modified configurations. Key values have a one-to-one correspondence with the response parameters of the `DescribeGlobalConfig` API and are case-insensitive (If an error occurs indicating that the key cannot be found, refer to the response parameters). Valid values:
1. enableResourceSchedule: Whether to enable or disable resource scheduling. When it is disabled, a synchronization option with Key set to sync is available. Valid values: true and false.
2. scheduler: Scheduler type.
2. enableLabel: Whether to enable or disable the tag. Valid values: true and false.
2. labelDir: Tag directory.
3. queueMappingOverride: Whether to overwrite user-specified queue. Valid values: true and false.
4. userMaxAppsDefault: Program upper limit.
5. Dynamic configuration item: Name field in DefaultSettings returned by the `DescribeGlobalConfig` API.
The values are strings. For **whether to overwrite the user-specified queue** and **program upper limit**, null in the JSON specifications means clearing the value of this configuration. Individual configuration items can be modified. For **dynamic configurations**, pass all values to overwrite the existing ones.
                     * 
                     */
                    std::vector<Item> GetItems() const;

                    /**
                     * 设置List of modified configurations. Key values have a one-to-one correspondence with the response parameters of the `DescribeGlobalConfig` API and are case-insensitive (If an error occurs indicating that the key cannot be found, refer to the response parameters). Valid values:
1. enableResourceSchedule: Whether to enable or disable resource scheduling. When it is disabled, a synchronization option with Key set to sync is available. Valid values: true and false.
2. scheduler: Scheduler type.
2. enableLabel: Whether to enable or disable the tag. Valid values: true and false.
2. labelDir: Tag directory.
3. queueMappingOverride: Whether to overwrite user-specified queue. Valid values: true and false.
4. userMaxAppsDefault: Program upper limit.
5. Dynamic configuration item: Name field in DefaultSettings returned by the `DescribeGlobalConfig` API.
The values are strings. For **whether to overwrite the user-specified queue** and **program upper limit**, null in the JSON specifications means clearing the value of this configuration. Individual configuration items can be modified. For **dynamic configurations**, pass all values to overwrite the existing ones.
                     * @param _items List of modified configurations. Key values have a one-to-one correspondence with the response parameters of the `DescribeGlobalConfig` API and are case-insensitive (If an error occurs indicating that the key cannot be found, refer to the response parameters). Valid values:
1. enableResourceSchedule: Whether to enable or disable resource scheduling. When it is disabled, a synchronization option with Key set to sync is available. Valid values: true and false.
2. scheduler: Scheduler type.
2. enableLabel: Whether to enable or disable the tag. Valid values: true and false.
2. labelDir: Tag directory.
3. queueMappingOverride: Whether to overwrite user-specified queue. Valid values: true and false.
4. userMaxAppsDefault: Program upper limit.
5. Dynamic configuration item: Name field in DefaultSettings returned by the `DescribeGlobalConfig` API.
The values are strings. For **whether to overwrite the user-specified queue** and **program upper limit**, null in the JSON specifications means clearing the value of this configuration. Individual configuration items can be modified. For **dynamic configurations**, pass all values to overwrite the existing ones.
                     * 
                     */
                    void SetItems(const std::vector<Item>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * English ID of the EMR cluster.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * List of modified configurations. Key values have a one-to-one correspondence with the response parameters of the `DescribeGlobalConfig` API and are case-insensitive (If an error occurs indicating that the key cannot be found, refer to the response parameters). Valid values:
1. enableResourceSchedule: Whether to enable or disable resource scheduling. When it is disabled, a synchronization option with Key set to sync is available. Valid values: true and false.
2. scheduler: Scheduler type.
2. enableLabel: Whether to enable or disable the tag. Valid values: true and false.
2. labelDir: Tag directory.
3. queueMappingOverride: Whether to overwrite user-specified queue. Valid values: true and false.
4. userMaxAppsDefault: Program upper limit.
5. Dynamic configuration item: Name field in DefaultSettings returned by the `DescribeGlobalConfig` API.
The values are strings. For **whether to overwrite the user-specified queue** and **program upper limit**, null in the JSON specifications means clearing the value of this configuration. Individual configuration items can be modified. For **dynamic configurations**, pass all values to overwrite the existing ones.
                     */
                    std::vector<Item> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYGLOBALCONFIGREQUEST_H_
