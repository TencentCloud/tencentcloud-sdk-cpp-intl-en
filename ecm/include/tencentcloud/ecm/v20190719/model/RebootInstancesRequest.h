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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_REBOOTINSTANCESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_REBOOTINSTANCESREQUEST_H_

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
                * RebootInstances request structure.
                */
                class RebootInstancesRequest : public AbstractModel
                {
                public:
                    RebootInstancesRequest();
                    ~RebootInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of IDs of the instances to be restarted. You can request up to 100 instances in a region at a time.
                     * @return InstanceIdSet List of IDs of the instances to be restarted. You can request up to 100 instances in a region at a time.
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置List of IDs of the instances to be restarted. You can request up to 100 instances in a region at a time.
                     * @param _instanceIdSet List of IDs of the instances to be restarted. You can request up to 100 instances in a region at a time.
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
                     * 获取Whether to force restart the instance after it failed to be restarted normally. Valid values:
TRUE: yes;
FALSE: no;
Default value: FALSE.
                     * @return ForceReboot Whether to force restart the instance after it failed to be restarted normally. Valid values:
TRUE: yes;
FALSE: no;
Default value: FALSE.
                     * 
                     */
                    bool GetForceReboot() const;

                    /**
                     * 设置Whether to force restart the instance after it failed to be restarted normally. Valid values:
TRUE: yes;
FALSE: no;
Default value: FALSE.
                     * @param _forceReboot Whether to force restart the instance after it failed to be restarted normally. Valid values:
TRUE: yes;
FALSE: no;
Default value: FALSE.
                     * 
                     */
                    void SetForceReboot(const bool& _forceReboot);

                    /**
                     * 判断参数 ForceReboot 是否已赋值
                     * @return ForceReboot 是否已赋值
                     * 
                     */
                    bool ForceRebootHasBeenSet() const;

                    /**
                     * 获取Shutdown type. Valid values:
SOFT: soft shutdown
HARD: hard shutdown
SOFT_FIRST: perform a soft shutdown first; if it fails, perform a hard shutdown

Default value: SOFT.
                     * @return StopType Shutdown type. Valid values:
SOFT: soft shutdown
HARD: hard shutdown
SOFT_FIRST: perform a soft shutdown first; if it fails, perform a hard shutdown

Default value: SOFT.
                     * 
                     */
                    std::string GetStopType() const;

                    /**
                     * 设置Shutdown type. Valid values:
SOFT: soft shutdown
HARD: hard shutdown
SOFT_FIRST: perform a soft shutdown first; if it fails, perform a hard shutdown

Default value: SOFT.
                     * @param _stopType Shutdown type. Valid values:
SOFT: soft shutdown
HARD: hard shutdown
SOFT_FIRST: perform a soft shutdown first; if it fails, perform a hard shutdown

Default value: SOFT.
                     * 
                     */
                    void SetStopType(const std::string& _stopType);

                    /**
                     * 判断参数 StopType 是否已赋值
                     * @return StopType 是否已赋值
                     * 
                     */
                    bool StopTypeHasBeenSet() const;

                private:

                    /**
                     * List of IDs of the instances to be restarted. You can request up to 100 instances in a region at a time.
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * Whether to force restart the instance after it failed to be restarted normally. Valid values:
TRUE: yes;
FALSE: no;
Default value: FALSE.
                     */
                    bool m_forceReboot;
                    bool m_forceRebootHasBeenSet;

                    /**
                     * Shutdown type. Valid values:
SOFT: soft shutdown
HARD: hard shutdown
SOFT_FIRST: perform a soft shutdown first; if it fails, perform a hard shutdown

Default value: SOFT.
                     */
                    std::string m_stopType;
                    bool m_stopTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_REBOOTINSTANCESREQUEST_H_
