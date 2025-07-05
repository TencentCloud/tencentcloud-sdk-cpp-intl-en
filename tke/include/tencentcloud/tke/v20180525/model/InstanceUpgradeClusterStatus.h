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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADECLUSTERSTATUS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADECLUSTERSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Current status of the cluster during node upgrade
                */
                class InstanceUpgradeClusterStatus : public AbstractModel
                {
                public:
                    InstanceUpgradeClusterStatus();
                    ~InstanceUpgradeClusterStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total Pods
                     * @return PodTotal Total Pods
                     * 
                     */
                    int64_t GetPodTotal() const;

                    /**
                     * 设置Total Pods
                     * @param _podTotal Total Pods
                     * 
                     */
                    void SetPodTotal(const int64_t& _podTotal);

                    /**
                     * 判断参数 PodTotal 是否已赋值
                     * @return PodTotal 是否已赋值
                     * 
                     */
                    bool PodTotalHasBeenSet() const;

                    /**
                     * 获取Total number of NotReady Pods
                     * @return NotReadyPod Total number of NotReady Pods
                     * 
                     */
                    int64_t GetNotReadyPod() const;

                    /**
                     * 设置Total number of NotReady Pods
                     * @param _notReadyPod Total number of NotReady Pods
                     * 
                     */
                    void SetNotReadyPod(const int64_t& _notReadyPod);

                    /**
                     * 判断参数 NotReadyPod 是否已赋值
                     * @return NotReadyPod 是否已赋值
                     * 
                     */
                    bool NotReadyPodHasBeenSet() const;

                private:

                    /**
                     * Total Pods
                     */
                    int64_t m_podTotal;
                    bool m_podTotalHasBeenSet;

                    /**
                     * Total number of NotReady Pods
                     */
                    int64_t m_notReadyPod;
                    bool m_notReadyPodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADECLUSTERSTATUS_H_
