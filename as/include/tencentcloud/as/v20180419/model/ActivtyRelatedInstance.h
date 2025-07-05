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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_ACTIVTYRELATEDINSTANCE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_ACTIVTYRELATEDINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Information of the instances related to the current scaling activity.
                */
                class ActivtyRelatedInstance : public AbstractModel
                {
                public:
                    ActivtyRelatedInstance();
                    ~ActivtyRelatedInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Status of the instance in the scaling activity. Valid values: <br><li>INIT: initializing;</li> <li>RUNNING: instance in operation;</li> <li>SUCCESSFUL: activity successful;</li> <li>FAILED: activity failed.
                     * @return InstanceStatus Status of the instance in the scaling activity. Valid values: <br><li>INIT: initializing;</li> <li>RUNNING: instance in operation;</li> <li>SUCCESSFUL: activity successful;</li> <li>FAILED: activity failed.
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置Status of the instance in the scaling activity. Valid values: <br><li>INIT: initializing;</li> <li>RUNNING: instance in operation;</li> <li>SUCCESSFUL: activity successful;</li> <li>FAILED: activity failed.
                     * @param _instanceStatus Status of the instance in the scaling activity. Valid values: <br><li>INIT: initializing;</li> <li>RUNNING: instance in operation;</li> <li>SUCCESSFUL: activity successful;</li> <li>FAILED: activity failed.
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Status of the instance in the scaling activity. Valid values: <br><li>INIT: initializing;</li> <li>RUNNING: instance in operation;</li> <li>SUCCESSFUL: activity successful;</li> <li>FAILED: activity failed.
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_ACTIVTYRELATEDINSTANCE_H_
