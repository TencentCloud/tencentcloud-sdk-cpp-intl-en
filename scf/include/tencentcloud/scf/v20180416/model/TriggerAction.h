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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGERACTION_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGERACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Details of a scheduled provisioned concurrency scaling action
                */
                class TriggerAction : public AbstractModel
                {
                public:
                    TriggerAction();
                    ~TriggerAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scheduled action name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TriggerName Scheduled action name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置Scheduled action name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param TriggerName Scheduled action name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTriggerName(const std::string& _triggerName);

                    /**
                     * 判断参数 TriggerName 是否已赋值
                     * @return TriggerName 是否已赋值
                     */
                    bool TriggerNameHasBeenSet() const;

                    /**
                     * 获取Target provisioned concurrency of the scheduled scaling action 
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TriggerProvisionedConcurrencyNum Target provisioned concurrency of the scheduled scaling action 
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetTriggerProvisionedConcurrencyNum() const;

                    /**
                     * 设置Target provisioned concurrency of the scheduled scaling action 
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param TriggerProvisionedConcurrencyNum Target provisioned concurrency of the scheduled scaling action 
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTriggerProvisionedConcurrencyNum(const uint64_t& _triggerProvisionedConcurrencyNum);

                    /**
                     * 判断参数 TriggerProvisionedConcurrencyNum 是否已赋值
                     * @return TriggerProvisionedConcurrencyNum 是否已赋值
                     */
                    bool TriggerProvisionedConcurrencyNumHasBeenSet() const;

                    /**
                     * 获取Trigger time of the scheduled action in Cron expression. Seven fields are required and should be separated with a space.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TriggerCronConfig Trigger time of the scheduled action in Cron expression. Seven fields are required and should be separated with a space.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetTriggerCronConfig() const;

                    /**
                     * 设置Trigger time of the scheduled action in Cron expression. Seven fields are required and should be separated with a space.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param TriggerCronConfig Trigger time of the scheduled action in Cron expression. Seven fields are required and should be separated with a space.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTriggerCronConfig(const std::string& _triggerCronConfig);

                    /**
                     * 判断参数 TriggerCronConfig 是否已赋值
                     * @return TriggerCronConfig 是否已赋值
                     */
                    bool TriggerCronConfigHasBeenSet() const;

                    /**
                     * 获取The provision type. Value: `Default`
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return ProvisionedType The provision type. Value: `Default`
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::string GetProvisionedType() const;

                    /**
                     * 设置The provision type. Value: `Default`
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param ProvisionedType The provision type. Value: `Default`
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    void SetProvisionedType(const std::string& _provisionedType);

                    /**
                     * 判断参数 ProvisionedType 是否已赋值
                     * @return ProvisionedType 是否已赋值
                     */
                    bool ProvisionedTypeHasBeenSet() const;

                private:

                    /**
                     * Scheduled action name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * Target provisioned concurrency of the scheduled scaling action 
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_triggerProvisionedConcurrencyNum;
                    bool m_triggerProvisionedConcurrencyNumHasBeenSet;

                    /**
                     * Trigger time of the scheduled action in Cron expression. Seven fields are required and should be separated with a space.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_triggerCronConfig;
                    bool m_triggerCronConfigHasBeenSet;

                    /**
                     * The provision type. Value: `Default`
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_provisionedType;
                    bool m_provisionedTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGERACTION_H_
