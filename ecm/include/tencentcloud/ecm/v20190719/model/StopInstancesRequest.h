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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_STOPINSTANCESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_STOPINSTANCESREQUEST_H_

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
                * StopInstances request structure.
                */
                class StopInstancesRequest : public AbstractModel
                {
                public:
                    StopInstancesRequest();
                    ~StopInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of IDs of the instances to be shut down. You can request up to 100 instances in a region at a time.
                     * @return InstanceIdSet List of IDs of the instances to be shut down. You can request up to 100 instances in a region at a time.
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置List of IDs of the instances to be shut down. You can request up to 100 instances in a region at a time.
                     * @param _instanceIdSet List of IDs of the instances to be shut down. You can request up to 100 instances in a region at a time.
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
                     * 获取Whether to force shut down the instance after it failed to be shut down normally. Default value: false: no.
                     * @return ForceStop Whether to force shut down the instance after it failed to be shut down normally. Default value: false: no.
                     * 
                     */
                    bool GetForceStop() const;

                    /**
                     * 设置Whether to force shut down the instance after it failed to be shut down normally. Default value: false: no.
                     * @param _forceStop Whether to force shut down the instance after it failed to be shut down normally. Default value: false: no.
                     * 
                     */
                    void SetForceStop(const bool& _forceStop);

                    /**
                     * 判断参数 ForceStop 是否已赋值
                     * @return ForceStop 是否已赋值
                     * 
                     */
                    bool ForceStopHasBeenSet() const;

                    /**
                     * 获取Instance shutdown mode. Valid values:
SOFT_FIRST: perform a forced shutdown in case of a failure of the normal shutdown;
HARD: forced shutdown;
SOFT: Soft shutdown;
Default value: SOFT.
                     * @return StopType Instance shutdown mode. Valid values:
SOFT_FIRST: perform a forced shutdown in case of a failure of the normal shutdown;
HARD: forced shutdown;
SOFT: Soft shutdown;
Default value: SOFT.
                     * 
                     */
                    std::string GetStopType() const;

                    /**
                     * 设置Instance shutdown mode. Valid values:
SOFT_FIRST: perform a forced shutdown in case of a failure of the normal shutdown;
HARD: forced shutdown;
SOFT: Soft shutdown;
Default value: SOFT.
                     * @param _stopType Instance shutdown mode. Valid values:
SOFT_FIRST: perform a forced shutdown in case of a failure of the normal shutdown;
HARD: forced shutdown;
SOFT: Soft shutdown;
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
                     * List of IDs of the instances to be shut down. You can request up to 100 instances in a region at a time.
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * Whether to force shut down the instance after it failed to be shut down normally. Default value: false: no.
                     */
                    bool m_forceStop;
                    bool m_forceStopHasBeenSet;

                    /**
                     * Instance shutdown mode. Valid values:
SOFT_FIRST: perform a forced shutdown in case of a failure of the normal shutdown;
HARD: forced shutdown;
SOFT: Soft shutdown;
Default value: SOFT.
                     */
                    std::string m_stopType;
                    bool m_stopTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_STOPINSTANCESREQUEST_H_
