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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSAUDITMONITORACCOUNTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSAUDITMONITORACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosBucketId.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyCosAuditMonitorAccount request structure.
                */
                class ModifyCosAuditMonitorAccountRequest : public AbstractModel
                {
                public:
                    ModifyCosAuditMonitorAccountRequest();
                    ~ModifyCosAuditMonitorAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Resource ID
                     * @return ResourceId Resource ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID
                     * @param _resourceId Resource ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取appid information to monitor
                     * @return MonitorAppIdSet appid information to monitor
                     * 
                     */
                    std::vector<uint64_t> GetMonitorAppIdSet() const;

                    /**
                     * 设置appid information to monitor
                     * @param _monitorAppIdSet appid information to monitor
                     * 
                     */
                    void SetMonitorAppIdSet(const std::vector<uint64_t>& _monitorAppIdSet);

                    /**
                     * 判断参数 MonitorAppIdSet 是否已赋值
                     * @return MonitorAppIdSet 是否已赋值
                     * 
                     */
                    bool MonitorAppIdSetHasBeenSet() const;

                    /**
                     * 获取Select a bucket mapping relationship
                     * @return BindBucket Select a bucket mapping relationship
                     * 
                     */
                    std::vector<CosBucketId> GetBindBucket() const;

                    /**
                     * 设置Select a bucket mapping relationship
                     * @param _bindBucket Select a bucket mapping relationship
                     * 
                     */
                    void SetBindBucket(const std::vector<CosBucketId>& _bindBucket);

                    /**
                     * 判断参数 BindBucket 是否已赋值
                     * @return BindBucket 是否已赋值
                     * 
                     */
                    bool BindBucketHasBeenSet() const;

                private:

                    /**
                     * Resource ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * appid information to monitor
                     */
                    std::vector<uint64_t> m_monitorAppIdSet;
                    bool m_monitorAppIdSetHasBeenSet;

                    /**
                     * Select a bucket mapping relationship
                     */
                    std::vector<CosBucketId> m_bindBucket;
                    bool m_bindBucketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSAUDITMONITORACCOUNTREQUEST_H_
