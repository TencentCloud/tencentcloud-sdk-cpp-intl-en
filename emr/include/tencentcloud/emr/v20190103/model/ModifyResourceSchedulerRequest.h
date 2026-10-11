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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCESCHEDULERREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCESCHEDULERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyResourceScheduler request structure.
                */
                class ModifyResourceSchedulerRequest : public AbstractModel
                {
                public:
                    ModifyResourceSchedulerRequest();
                    ~ModifyResourceSchedulerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取English ID of the EMR cluster.
                     * @return InstanceId English ID of the EMR cluster.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置English ID of the EMR cluster.
                     * @param _instanceId English ID of the EMR cluster.
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
                     * 获取Old scheduler: fair.
                     * @return OldValue Old scheduler: fair.
                     * 
                     */
                    std::string GetOldValue() const;

                    /**
                     * 设置Old scheduler: fair.
                     * @param _oldValue Old scheduler: fair.
                     * 
                     */
                    void SetOldValue(const std::string& _oldValue);

                    /**
                     * 判断参数 OldValue 是否已赋值
                     * @return OldValue 是否已赋值
                     * 
                     */
                    bool OldValueHasBeenSet() const;

                    /**
                     * 获取New scheduler: capacity.
                     * @return NewValue New scheduler: capacity.
                     * 
                     */
                    std::string GetNewValue() const;

                    /**
                     * 设置New scheduler: capacity.
                     * @param _newValue New scheduler: capacity.
                     * 
                     */
                    void SetNewValue(const std::string& _newValue);

                    /**
                     * 判断参数 NewValue 是否已赋值
                     * @return NewValue 是否已赋值
                     * 
                     */
                    bool NewValueHasBeenSet() const;

                private:

                    /**
                     * English ID of the EMR cluster.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Old scheduler: fair.
                     */
                    std::string m_oldValue;
                    bool m_oldValueHasBeenSet;

                    /**
                     * New scheduler: capacity.
                     */
                    std::string m_newValue;
                    bool m_newValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCESCHEDULERREQUEST_H_
