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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESTROYPROMETHEUSINSTANCEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESTROYPROMETHEUSINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DestroyPrometheusInstance request structure.
                */
                class DestroyPrometheusInstanceRequest : public AbstractModel
                {
                public:
                    DestroyPrometheusInstanceRequest();
                    ~DestroyPrometheusInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. The instance must be terminated first.
                     * @return InstanceId Instance ID. The instance must be terminated first.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. The instance must be terminated first.
                     * @param _instanceId Instance ID. The instance must be terminated first.
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
                     * Instance ID. The instance must be terminated first.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESTROYPROMETHEUSINSTANCEREQUEST_H_
