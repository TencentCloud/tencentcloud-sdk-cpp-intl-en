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
                     * 获取List of modified configurations. Key values have a one-to-one correspondence with the output parameters of the `DescribeGlobalConfig` API and are case-insensitive (if an error occurs indicating the key cannot be found, refer to the output parameters). The values are:
1. enableResourceSchedule: Enables or disables resource scheduling. When disabling, a synchronous operation option (sync) is available with values true or false.
2. scheduler type: scheduler.
2. enableLabel: Enables or disables tags, with values true or false.
2. tag directory: labelDir.
3. whether to overwrite the user-specified queue, with values true or false.
4. userMaxAppsDefault: program upper limit.
5. dynamic configuration item: Corresponds to the Name field in the DefaultSettings object returned by the DescribeGlobalConfig API.
The values are strings. For **whether to overwrite the user-specified queue** and **program upper limit**, null in the JSON specifications means clearing the value of this configuration. Individual configuration items can be modified. For **dynamic configurations**, a full transmission is required to perform overwriting.
                     * @return Items List of modified configurations. Key values have a one-to-one correspondence with the output parameters of the `DescribeGlobalConfig` API and are case-insensitive (if an error occurs indicating the key cannot be found, refer to the output parameters). The values are:
1. enableResourceSchedule: Enables or disables resource scheduling. When disabling, a synchronous operation option (sync) is available with values true or false.
2. scheduler type: scheduler.
2. enableLabel: Enables or disables tags, with values true or false.
2. tag directory: labelDir.
3. whether to overwrite the user-specified queue, with values true or false.
4. userMaxAppsDefault: program upper limit.
5. dynamic configuration item: Corresponds to the Name field in the DefaultSettings object returned by the DescribeGlobalConfig API.
The values are strings. For **whether to overwrite the user-specified queue** and **program upper limit**, null in the JSON specifications means clearing the value of this configuration. Individual configuration items can be modified. For **dynamic configurations**, a full transmission is required to perform overwriting.
                     * 
                     */
                    std::vector<Item> GetItems() const;

                    /**
                     * 设置List of modified configurations. Key values have a one-to-one correspondence with the output parameters of the `DescribeGlobalConfig` API and are case-insensitive (if an error occurs indicating the key cannot be found, refer to the output parameters). The values are:
1. enableResourceSchedule: Enables or disables resource scheduling. When disabling, a synchronous operation option (sync) is available with values true or false.
2. scheduler type: scheduler.
2. enableLabel: Enables or disables tags, with values true or false.
2. tag directory: labelDir.
3. whether to overwrite the user-specified queue, with values true or false.
4. userMaxAppsDefault: program upper limit.
5. dynamic configuration item: Corresponds to the Name field in the DefaultSettings object returned by the DescribeGlobalConfig API.
The values are strings. For **whether to overwrite the user-specified queue** and **program upper limit**, null in the JSON specifications means clearing the value of this configuration. Individual configuration items can be modified. For **dynamic configurations**, a full transmission is required to perform overwriting.
                     * @param _items List of modified configurations. Key values have a one-to-one correspondence with the output parameters of the `DescribeGlobalConfig` API and are case-insensitive (if an error occurs indicating the key cannot be found, refer to the output parameters). The values are:
1. enableResourceSchedule: Enables or disables resource scheduling. When disabling, a synchronous operation option (sync) is available with values true or false.
2. scheduler type: scheduler.
2. enableLabel: Enables or disables tags, with values true or false.
2. tag directory: labelDir.
3. whether to overwrite the user-specified queue, with values true or false.
4. userMaxAppsDefault: program upper limit.
5. dynamic configuration item: Corresponds to the Name field in the DefaultSettings object returned by the DescribeGlobalConfig API.
The values are strings. For **whether to overwrite the user-specified queue** and **program upper limit**, null in the JSON specifications means clearing the value of this configuration. Individual configuration items can be modified. For **dynamic configurations**, a full transmission is required to perform overwriting.
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
                     * List of modified configurations. Key values have a one-to-one correspondence with the output parameters of the `DescribeGlobalConfig` API and are case-insensitive (if an error occurs indicating the key cannot be found, refer to the output parameters). The values are:
1. enableResourceSchedule: Enables or disables resource scheduling. When disabling, a synchronous operation option (sync) is available with values true or false.
2. scheduler type: scheduler.
2. enableLabel: Enables or disables tags, with values true or false.
2. tag directory: labelDir.
3. whether to overwrite the user-specified queue, with values true or false.
4. userMaxAppsDefault: program upper limit.
5. dynamic configuration item: Corresponds to the Name field in the DefaultSettings object returned by the DescribeGlobalConfig API.
The values are strings. For **whether to overwrite the user-specified queue** and **program upper limit**, null in the JSON specifications means clearing the value of this configuration. Individual configuration items can be modified. For **dynamic configurations**, a full transmission is required to perform overwriting.
                     */
                    std::vector<Item> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYGLOBALCONFIGREQUEST_H_
