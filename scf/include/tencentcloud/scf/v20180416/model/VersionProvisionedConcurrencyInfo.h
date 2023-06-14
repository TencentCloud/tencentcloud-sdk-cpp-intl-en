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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_VERSIONPROVISIONEDCONCURRENCYINFO_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_VERSIONPROVISIONEDCONCURRENCYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/TriggerAction.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Provisioned concurrency information of function version, including the set provisioned concurrency amount, available provisioned concurrency amount, and provisioned concurrency setting task status.
                */
                class VersionProvisionedConcurrencyInfo : public AbstractModel
                {
                public:
                    VersionProvisionedConcurrencyInfo();
                    ~VersionProvisionedConcurrencyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Set provisioned concurrency amount.
                     * @return AllocatedProvisionedConcurrencyNum Set provisioned concurrency amount.
                     * 
                     */
                    uint64_t GetAllocatedProvisionedConcurrencyNum() const;

                    /**
                     * 设置Set provisioned concurrency amount.
                     * @param _allocatedProvisionedConcurrencyNum Set provisioned concurrency amount.
                     * 
                     */
                    void SetAllocatedProvisionedConcurrencyNum(const uint64_t& _allocatedProvisionedConcurrencyNum);

                    /**
                     * 判断参数 AllocatedProvisionedConcurrencyNum 是否已赋值
                     * @return AllocatedProvisionedConcurrencyNum 是否已赋值
                     * 
                     */
                    bool AllocatedProvisionedConcurrencyNumHasBeenSet() const;

                    /**
                     * 获取Currently available provisioned concurrency amount.
                     * @return AvailableProvisionedConcurrencyNum Currently available provisioned concurrency amount.
                     * 
                     */
                    uint64_t GetAvailableProvisionedConcurrencyNum() const;

                    /**
                     * 设置Currently available provisioned concurrency amount.
                     * @param _availableProvisionedConcurrencyNum Currently available provisioned concurrency amount.
                     * 
                     */
                    void SetAvailableProvisionedConcurrencyNum(const uint64_t& _availableProvisionedConcurrencyNum);

                    /**
                     * 判断参数 AvailableProvisionedConcurrencyNum 是否已赋值
                     * @return AvailableProvisionedConcurrencyNum 是否已赋值
                     * 
                     */
                    bool AvailableProvisionedConcurrencyNumHasBeenSet() const;

                    /**
                     * 获取Provisioned concurrency setting task status. `Done`: completed; `InProgress`: in progress; `Failed`: partially or completely failed.
                     * @return Status Provisioned concurrency setting task status. `Done`: completed; `InProgress`: in progress; `Failed`: partially or completely failed.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Provisioned concurrency setting task status. `Done`: completed; `InProgress`: in progress; `Failed`: partially or completely failed.
                     * @param _status Provisioned concurrency setting task status. `Done`: completed; `InProgress`: in progress; `Failed`: partially or completely failed.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Status description of provisioned concurrency setting task.
                     * @return StatusReason Status description of provisioned concurrency setting task.
                     * 
                     */
                    std::string GetStatusReason() const;

                    /**
                     * 设置Status description of provisioned concurrency setting task.
                     * @param _statusReason Status description of provisioned concurrency setting task.
                     * 
                     */
                    void SetStatusReason(const std::string& _statusReason);

                    /**
                     * 判断参数 StatusReason 是否已赋值
                     * @return StatusReason 是否已赋值
                     * 
                     */
                    bool StatusReasonHasBeenSet() const;

                    /**
                     * 获取Function version number
                     * @return Qualifier Function version number
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置Function version number
                     * @param _qualifier Function version number
                     * 
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     * 
                     */
                    bool QualifierHasBeenSet() const;

                    /**
                     * 获取List of scheduled provisioned concurrency scaling actions
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TriggerActions List of scheduled provisioned concurrency scaling actions
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TriggerAction> GetTriggerActions() const;

                    /**
                     * 设置List of scheduled provisioned concurrency scaling actions
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _triggerActions List of scheduled provisioned concurrency scaling actions
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTriggerActions(const std::vector<TriggerAction>& _triggerActions);

                    /**
                     * 判断参数 TriggerActions 是否已赋值
                     * @return TriggerActions 是否已赋值
                     * 
                     */
                    bool TriggerActionsHasBeenSet() const;

                private:

                    /**
                     * Set provisioned concurrency amount.
                     */
                    uint64_t m_allocatedProvisionedConcurrencyNum;
                    bool m_allocatedProvisionedConcurrencyNumHasBeenSet;

                    /**
                     * Currently available provisioned concurrency amount.
                     */
                    uint64_t m_availableProvisionedConcurrencyNum;
                    bool m_availableProvisionedConcurrencyNumHasBeenSet;

                    /**
                     * Provisioned concurrency setting task status. `Done`: completed; `InProgress`: in progress; `Failed`: partially or completely failed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Status description of provisioned concurrency setting task.
                     */
                    std::string m_statusReason;
                    bool m_statusReasonHasBeenSet;

                    /**
                     * Function version number
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * List of scheduled provisioned concurrency scaling actions
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<TriggerAction> m_triggerActions;
                    bool m_triggerActionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_VERSIONPROVISIONEDCONCURRENCYINFO_H_
