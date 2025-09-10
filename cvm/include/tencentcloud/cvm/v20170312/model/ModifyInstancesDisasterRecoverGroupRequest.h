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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYINSTANCESDISASTERRECOVERGROUPREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYINSTANCESDISASTERRECOVERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyInstancesDisasterRecoverGroup request structure.
                */
                class ModifyInstancesDisasterRecoverGroupRequest : public AbstractModel
                {
                public:
                    ModifyInstancesDisasterRecoverGroupRequest();
                    ~ModifyInstancesDisasterRecoverGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取One or more instance ids to be operated. you can obtain the instance ID through the `InstanceId` in the return value from the api [DescribeInstances](https://www.tencentcloud.com/zh/document/api/213/33258). the maximum number of instances per request is 100.
                     * @return InstanceIds One or more instance ids to be operated. you can obtain the instance ID through the `InstanceId` in the return value from the api [DescribeInstances](https://www.tencentcloud.com/zh/document/api/213/33258). the maximum number of instances per request is 100.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置One or more instance ids to be operated. you can obtain the instance ID through the `InstanceId` in the return value from the api [DescribeInstances](https://www.tencentcloud.com/zh/document/api/213/33258). the maximum number of instances per request is 100.
                     * @param _instanceIds One or more instance ids to be operated. you can obtain the instance ID through the `InstanceId` in the return value from the api [DescribeInstances](https://www.tencentcloud.com/zh/document/api/213/33258). the maximum number of instances per request is 100.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Spread placement group ID. obtain through the api [DescribeDisasterRecoverGroups](https://www.tencentcloud.com/zh/document/api/213/33261).
                     * @return DisasterRecoverGroupId Spread placement group ID. obtain through the api [DescribeDisasterRecoverGroups](https://www.tencentcloud.com/zh/document/api/213/33261).
                     * 
                     */
                    std::string GetDisasterRecoverGroupId() const;

                    /**
                     * 设置Spread placement group ID. obtain through the api [DescribeDisasterRecoverGroups](https://www.tencentcloud.com/zh/document/api/213/33261).
                     * @param _disasterRecoverGroupId Spread placement group ID. obtain through the api [DescribeDisasterRecoverGroups](https://www.tencentcloud.com/zh/document/api/213/33261).
                     * 
                     */
                    void SetDisasterRecoverGroupId(const std::string& _disasterRecoverGroupId);

                    /**
                     * 判断参数 DisasterRecoverGroupId 是否已赋值
                     * @return DisasterRecoverGroupId 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdHasBeenSet() const;

                    /**
                     * 获取Whether to forcibly change instance hosts. value range:<br><li>true: indicates that the instance is allowed to change hosts, allowing the instance to reboot. local disk machine does not support specifying this parameter.</li><br><li>false: does not allow the instance to change hosts. instances can only be added to the placement group on the current host. this may result in a failure to change the placement group.</li><br><br>default value: false.
                     * @return Force Whether to forcibly change instance hosts. value range:<br><li>true: indicates that the instance is allowed to change hosts, allowing the instance to reboot. local disk machine does not support specifying this parameter.</li><br><li>false: does not allow the instance to change hosts. instances can only be added to the placement group on the current host. this may result in a failure to change the placement group.</li><br><br>default value: false.
                     * 
                     */
                    bool GetForce() const;

                    /**
                     * 设置Whether to forcibly change instance hosts. value range:<br><li>true: indicates that the instance is allowed to change hosts, allowing the instance to reboot. local disk machine does not support specifying this parameter.</li><br><li>false: does not allow the instance to change hosts. instances can only be added to the placement group on the current host. this may result in a failure to change the placement group.</li><br><br>default value: false.
                     * @param _force Whether to forcibly change instance hosts. value range:<br><li>true: indicates that the instance is allowed to change hosts, allowing the instance to reboot. local disk machine does not support specifying this parameter.</li><br><li>false: does not allow the instance to change hosts. instances can only be added to the placement group on the current host. this may result in a failure to change the placement group.</li><br><br>default value: false.
                     * 
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * One or more instance ids to be operated. you can obtain the instance ID through the `InstanceId` in the return value from the api [DescribeInstances](https://www.tencentcloud.com/zh/document/api/213/33258). the maximum number of instances per request is 100.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Spread placement group ID. obtain through the api [DescribeDisasterRecoverGroups](https://www.tencentcloud.com/zh/document/api/213/33261).
                     */
                    std::string m_disasterRecoverGroupId;
                    bool m_disasterRecoverGroupIdHasBeenSet;

                    /**
                     * Whether to forcibly change instance hosts. value range:<br><li>true: indicates that the instance is allowed to change hosts, allowing the instance to reboot. local disk machine does not support specifying this parameter.</li><br><li>false: does not allow the instance to change hosts. instances can only be added to the placement group on the current host. this may result in a failure to change the placement group.</li><br><br>default value: false.
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYINSTANCESDISASTERRECOVERGROUPREQUEST_H_
