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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_GETUPGRADEINSTANCEPROGRESSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_GETUPGRADEINSTANCEPROGRESSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/InstanceUpgradeProgressItem.h>
#include <tencentcloud/tke/v20180525/model/InstanceUpgradeClusterStatus.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * GetUpgradeInstanceProgress response structure.
                */
                class GetUpgradeInstanceProgressResponse : public AbstractModel
                {
                public:
                    GetUpgradeInstanceProgressResponse();
                    ~GetUpgradeInstanceProgressResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total nodes to upgrade
                     * @return Total Total nodes to upgrade
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Total upgraded nodes
                     * @return Done Total upgraded nodes
                     * 
                     */
                    int64_t GetDone() const;

                    /**
                     * 判断参数 Done 是否已赋值
                     * @return Done 是否已赋值
                     * 
                     */
                    bool DoneHasBeenSet() const;

                    /**
                     * 获取The lifecycle of the upgrade task
process: running
paused: stopped
pausing: stopping
done: completed
timeout: timed out
aborted: canceled
                     * @return LifeState The lifecycle of the upgrade task
process: running
paused: stopped
pausing: stopping
done: completed
timeout: timed out
aborted: canceled
                     * 
                     */
                    std::string GetLifeState() const;

                    /**
                     * 判断参数 LifeState 是否已赋值
                     * @return LifeState 是否已赋值
                     * 
                     */
                    bool LifeStateHasBeenSet() const;

                    /**
                     * 获取Details of upgrade progress of each node
                     * @return Instances Details of upgrade progress of each node
                     * 
                     */
                    std::vector<InstanceUpgradeProgressItem> GetInstances() const;

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                    /**
                     * 获取Current cluster status
                     * @return ClusterStatus Current cluster status
                     * 
                     */
                    InstanceUpgradeClusterStatus GetClusterStatus() const;

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                private:

                    /**
                     * Total nodes to upgrade
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Total upgraded nodes
                     */
                    int64_t m_done;
                    bool m_doneHasBeenSet;

                    /**
                     * The lifecycle of the upgrade task
process: running
paused: stopped
pausing: stopping
done: completed
timeout: timed out
aborted: canceled
                     */
                    std::string m_lifeState;
                    bool m_lifeStateHasBeenSet;

                    /**
                     * Details of upgrade progress of each node
                     */
                    std::vector<InstanceUpgradeProgressItem> m_instances;
                    bool m_instancesHasBeenSet;

                    /**
                     * Current cluster status
                     */
                    InstanceUpgradeClusterStatus m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_GETUPGRADEINSTANCEPROGRESSRESPONSE_H_
