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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEINSTANCEPRODUCTVERSIONREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEINSTANCEPRODUCTVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * UpgradeInstanceProductVersion request structure.
                */
                class UpgradeInstanceProductVersionRequest : public AbstractModel
                {
                public:
                    UpgradeInstanceProductVersionRequest();
                    ~UpgradeInstanceProductVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Target product type for the update.</p><p>Enumeration values:</p><ul><li>localv2: General Type II</li></ul>
                     * @return TargetProductVersion <p>Target product type for the update.</p><p>Enumeration values:</p><ul><li>localv2: General Type II</li></ul>
                     * 
                     */
                    std::string GetTargetProductVersion() const;

                    /**
                     * 设置<p>Target product type for the update.</p><p>Enumeration values:</p><ul><li>localv2: General Type II</li></ul>
                     * @param _targetProductVersion <p>Target product type for the update.</p><p>Enumeration values:</p><ul><li>localv2: General Type II</li></ul>
                     * 
                     */
                    void SetTargetProductVersion(const std::string& _targetProductVersion);

                    /**
                     * 判断参数 TargetProductVersion 是否已赋值
                     * @return TargetProductVersion 是否已赋值
                     * 
                     */
                    bool TargetProductVersionHasBeenSet() const;

                    /**
                     * 获取<p>Switch time.</p><ul><li>1: Switch during maintenance window.</li><li>2: Switch immediately.</li></ul>
                     * @return SwitchOption <p>Switch time.</p><ul><li>1: Switch during maintenance window.</li><li>2: Switch immediately.</li></ul>
                     * 
                     */
                    int64_t GetSwitchOption() const;

                    /**
                     * 设置<p>Switch time.</p><ul><li>1: Switch during maintenance window.</li><li>2: Switch immediately.</li></ul>
                     * @param _switchOption <p>Switch time.</p><ul><li>1: Switch during maintenance window.</li><li>2: Switch immediately.</li></ul>
                     * 
                     */
                    void SetSwitchOption(const int64_t& _switchOption);

                    /**
                     * 判断参数 SwitchOption 是否已赋值
                     * @return SwitchOption 是否已赋值
                     * 
                     */
                    bool SwitchOptionHasBeenSet() const;

                    /**
                     * 获取<p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis#/">Redis console</a> and copy the instance ID from the instance list.</p>
                     * @return InstanceId <p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis#/">Redis console</a> and copy the instance ID from the instance list.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis#/">Redis console</a> and copy the instance ID from the instance list.</p>
                     * @param _instanceId <p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis#/">Redis console</a> and copy the instance ID from the instance list.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * <p>Target product type for the update.</p><p>Enumeration values:</p><ul><li>localv2: General Type II</li></ul>
                     */
                    std::string m_targetProductVersion;
                    bool m_targetProductVersionHasBeenSet;

                    /**
                     * <p>Switch time.</p><ul><li>1: Switch during maintenance window.</li><li>2: Switch immediately.</li></ul>
                     */
                    int64_t m_switchOption;
                    bool m_switchOptionHasBeenSet;

                    /**
                     * <p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis#/">Redis console</a> and copy the instance ID from the instance list.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEINSTANCEPRODUCTVERSIONREQUEST_H_
