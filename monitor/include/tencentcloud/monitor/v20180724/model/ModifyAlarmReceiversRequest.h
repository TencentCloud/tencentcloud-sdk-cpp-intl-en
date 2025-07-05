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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMRECEIVERSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMRECEIVERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/ReceiverInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * ModifyAlarmReceivers request structure.
                */
                class ModifyAlarmReceiversRequest : public AbstractModel
                {
                public:
                    ModifyAlarmReceiversRequest();
                    ~ModifyAlarmReceiversRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of a policy group whose recipient needs to be modified.
                     * @return GroupId ID of a policy group whose recipient needs to be modified.
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置ID of a policy group whose recipient needs to be modified.
                     * @param _groupId ID of a policy group whose recipient needs to be modified.
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Required. The value is fixed to monitor.
                     * @return Module Required. The value is fixed to monitor.
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置Required. The value is fixed to monitor.
                     * @param _module Required. The value is fixed to monitor.
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取New recipient information. If this parameter is not configured, all recipients will be deleted.
                     * @return ReceiverInfos New recipient information. If this parameter is not configured, all recipients will be deleted.
                     * 
                     */
                    std::vector<ReceiverInfo> GetReceiverInfos() const;

                    /**
                     * 设置New recipient information. If this parameter is not configured, all recipients will be deleted.
                     * @param _receiverInfos New recipient information. If this parameter is not configured, all recipients will be deleted.
                     * 
                     */
                    void SetReceiverInfos(const std::vector<ReceiverInfo>& _receiverInfos);

                    /**
                     * 判断参数 ReceiverInfos 是否已赋值
                     * @return ReceiverInfos 是否已赋值
                     * 
                     */
                    bool ReceiverInfosHasBeenSet() const;

                private:

                    /**
                     * ID of a policy group whose recipient needs to be modified.
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Required. The value is fixed to monitor.
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * New recipient information. If this parameter is not configured, all recipients will be deleted.
                     */
                    std::vector<ReceiverInfo> m_receiverInfos;
                    bool m_receiverInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMRECEIVERSREQUEST_H_
