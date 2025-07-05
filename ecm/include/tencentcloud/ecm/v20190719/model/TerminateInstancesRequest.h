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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_TERMINATEINSTANCESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_TERMINATEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * TerminateInstances request structure.
                */
                class TerminateInstancesRequest : public AbstractModel
                {
                public:
                    TerminateInstancesRequest();
                    ~TerminateInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of IDs of the instances to be terminated.
                     * @return InstanceIdSet List of IDs of the instances to be terminated.
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置List of IDs of the instances to be terminated.
                     * @param _instanceIdSet List of IDs of the instances to be terminated.
                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取Whether to enable scheduled termination. Default value: no.
                     * @return TerminateDelay Whether to enable scheduled termination. Default value: no.
                     * 
                     */
                    bool GetTerminateDelay() const;

                    /**
                     * 设置Whether to enable scheduled termination. Default value: no.
                     * @param _terminateDelay Whether to enable scheduled termination. Default value: no.
                     * 
                     */
                    void SetTerminateDelay(const bool& _terminateDelay);

                    /**
                     * 判断参数 TerminateDelay 是否已赋值
                     * @return TerminateDelay 是否已赋值
                     * 
                     */
                    bool TerminateDelayHasBeenSet() const;

                    /**
                     * 获取Scheduled termination time, such as `2019-08-05 12:01:30`. If you don't enable scheduled termination, you can ignore this parameter.
                     * @return TerminateTime Scheduled termination time, such as `2019-08-05 12:01:30`. If you don't enable scheduled termination, you can ignore this parameter.
                     * 
                     */
                    std::string GetTerminateTime() const;

                    /**
                     * 设置Scheduled termination time, such as `2019-08-05 12:01:30`. If you don't enable scheduled termination, you can ignore this parameter.
                     * @param _terminateTime Scheduled termination time, such as `2019-08-05 12:01:30`. If you don't enable scheduled termination, you can ignore this parameter.
                     * 
                     */
                    void SetTerminateTime(const std::string& _terminateTime);

                    /**
                     * 判断参数 TerminateTime 是否已赋值
                     * @return TerminateTime 是否已赋值
                     * 
                     */
                    bool TerminateTimeHasBeenSet() const;

                    /**
                     * 获取Whether to delete the bound ENI and EIP. Default value: true.
true: the ENI and EIP will also be deleted;
false: only the server will be terminated, while the ENI and EIP will be retained.
                     * @return AssociatedResourceDestroy Whether to delete the bound ENI and EIP. Default value: true.
true: the ENI and EIP will also be deleted;
false: only the server will be terminated, while the ENI and EIP will be retained.
                     * 
                     */
                    bool GetAssociatedResourceDestroy() const;

                    /**
                     * 设置Whether to delete the bound ENI and EIP. Default value: true.
true: the ENI and EIP will also be deleted;
false: only the server will be terminated, while the ENI and EIP will be retained.
                     * @param _associatedResourceDestroy Whether to delete the bound ENI and EIP. Default value: true.
true: the ENI and EIP will also be deleted;
false: only the server will be terminated, while the ENI and EIP will be retained.
                     * 
                     */
                    void SetAssociatedResourceDestroy(const bool& _associatedResourceDestroy);

                    /**
                     * 判断参数 AssociatedResourceDestroy 是否已赋值
                     * @return AssociatedResourceDestroy 是否已赋值
                     * 
                     */
                    bool AssociatedResourceDestroyHasBeenSet() const;

                private:

                    /**
                     * List of IDs of the instances to be terminated.
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * Whether to enable scheduled termination. Default value: no.
                     */
                    bool m_terminateDelay;
                    bool m_terminateDelayHasBeenSet;

                    /**
                     * Scheduled termination time, such as `2019-08-05 12:01:30`. If you don't enable scheduled termination, you can ignore this parameter.
                     */
                    std::string m_terminateTime;
                    bool m_terminateTimeHasBeenSet;

                    /**
                     * Whether to delete the bound ENI and EIP. Default value: true.
true: the ENI and EIP will also be deleted;
false: only the server will be terminated, while the ENI and EIP will be retained.
                     */
                    bool m_associatedResourceDestroy;
                    bool m_associatedResourceDestroyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_TERMINATEINSTANCESREQUEST_H_
