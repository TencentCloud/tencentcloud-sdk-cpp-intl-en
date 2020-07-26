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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_REBOOTINSTANCESREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_REBOOTINSTANCESREQUEST_H_

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
                * RebootInstances request structure.
                */
                class RebootInstancesRequest : public AbstractModel
                {
                public:
                    RebootInstancesRequest();
                    ~RebootInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance IDs. To obtain the instance IDs, you can call [`DescribeInstances`](https://cloud.tencent.com/document/api/213/15728) and look for `InstanceId` in the response. You can operate up to 100 instances in each request.
                     * @return InstanceIds Instance IDs. To obtain the instance IDs, you can call [`DescribeInstances`](https://cloud.tencent.com/document/api/213/15728) and look for `InstanceId` in the response. You can operate up to 100 instances in each request.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance IDs. To obtain the instance IDs, you can call [`DescribeInstances`](https://cloud.tencent.com/document/api/213/15728) and look for `InstanceId` in the response. You can operate up to 100 instances in each request.
                     * @param InstanceIds Instance IDs. To obtain the instance IDs, you can call [`DescribeInstances`](https://cloud.tencent.com/document/api/213/15728) and look for `InstanceId` in the response. You can operate up to 100 instances in each request.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Whether to force restart an instance after a normal restart fails. Valid values: <br><li>TRUE: force restart an instance after a normal restart fails <br><li>FALSE: do not force restart an instance after a normal restart fails <br><br>Default value: FALSE.
                     * @return ForceReboot Whether to force restart an instance after a normal restart fails. Valid values: <br><li>TRUE: force restart an instance after a normal restart fails <br><li>FALSE: do not force restart an instance after a normal restart fails <br><br>Default value: FALSE.
                     */
                    bool GetForceReboot() const;

                    /**
                     * 设置Whether to force restart an instance after a normal restart fails. Valid values: <br><li>TRUE: force restart an instance after a normal restart fails <br><li>FALSE: do not force restart an instance after a normal restart fails <br><br>Default value: FALSE.
                     * @param ForceReboot Whether to force restart an instance after a normal restart fails. Valid values: <br><li>TRUE: force restart an instance after a normal restart fails <br><li>FALSE: do not force restart an instance after a normal restart fails <br><br>Default value: FALSE.
                     */
                    void SetForceReboot(const bool& _forceReboot);

                    /**
                     * 判断参数 ForceReboot 是否已赋值
                     * @return ForceReboot 是否已赋值
                     */
                    bool ForceRebootHasBeenSet() const;

                    /**
                     * 获取Shutdown type. Valid values: <br><li>SOFT: soft shutdown<br><li>HARD: hard shutdown<br><li>SOFT_FIRST: perform a soft shutdown first, and perform a hard shutdown if the soft shutdown fails<br><br>Default value: SOFT.
                     * @return StopType Shutdown type. Valid values: <br><li>SOFT: soft shutdown<br><li>HARD: hard shutdown<br><li>SOFT_FIRST: perform a soft shutdown first, and perform a hard shutdown if the soft shutdown fails<br><br>Default value: SOFT.
                     */
                    std::string GetStopType() const;

                    /**
                     * 设置Shutdown type. Valid values: <br><li>SOFT: soft shutdown<br><li>HARD: hard shutdown<br><li>SOFT_FIRST: perform a soft shutdown first, and perform a hard shutdown if the soft shutdown fails<br><br>Default value: SOFT.
                     * @param StopType Shutdown type. Valid values: <br><li>SOFT: soft shutdown<br><li>HARD: hard shutdown<br><li>SOFT_FIRST: perform a soft shutdown first, and perform a hard shutdown if the soft shutdown fails<br><br>Default value: SOFT.
                     */
                    void SetStopType(const std::string& _stopType);

                    /**
                     * 判断参数 StopType 是否已赋值
                     * @return StopType 是否已赋值
                     */
                    bool StopTypeHasBeenSet() const;

                private:

                    /**
                     * Instance IDs. To obtain the instance IDs, you can call [`DescribeInstances`](https://cloud.tencent.com/document/api/213/15728) and look for `InstanceId` in the response. You can operate up to 100 instances in each request.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Whether to force restart an instance after a normal restart fails. Valid values: <br><li>TRUE: force restart an instance after a normal restart fails <br><li>FALSE: do not force restart an instance after a normal restart fails <br><br>Default value: FALSE.
                     */
                    bool m_forceReboot;
                    bool m_forceRebootHasBeenSet;

                    /**
                     * Shutdown type. Valid values: <br><li>SOFT: soft shutdown<br><li>HARD: hard shutdown<br><li>SOFT_FIRST: perform a soft shutdown first, and perform a hard shutdown if the soft shutdown fails<br><br>Default value: SOFT.
                     */
                    std::string m_stopType;
                    bool m_stopTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_REBOOTINSTANCESREQUEST_H_
