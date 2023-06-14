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
                     * 获取EMR cluster ID
                     * @return InstanceId EMR cluster ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置EMR cluster ID
                     * @param _instanceId EMR cluster ID
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
                     * 获取The original scheduler: `fair`
                     * @return OldValue The original scheduler: `fair`
                     * 
                     */
                    std::string GetOldValue() const;

                    /**
                     * 设置The original scheduler: `fair`
                     * @param _oldValue The original scheduler: `fair`
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
                     * 获取The new scheduler: `capacity`
                     * @return NewValue The new scheduler: `capacity`
                     * 
                     */
                    std::string GetNewValue() const;

                    /**
                     * 设置The new scheduler: `capacity`
                     * @param _newValue The new scheduler: `capacity`
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
                     * EMR cluster ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The original scheduler: `fair`
                     */
                    std::string m_oldValue;
                    bool m_oldValueHasBeenSet;

                    /**
                     * The new scheduler: `capacity`
                     */
                    std::string m_newValue;
                    bool m_newValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCESCHEDULERREQUEST_H_
