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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBECONFIGRECORDERRESPONSE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBECONFIGRECORDERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/UserConfigResource.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * DescribeConfigRecorder response structure.
                */
                class DescribeConfigRecorderResponse : public AbstractModel
                {
                public:
                    DescribeConfigRecorderResponse();
                    ~DescribeConfigRecorderResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of user monitoring resources.
                     * @return Items List of user monitoring resources.
                     * 
                     */
                    std::vector<UserConfigResource> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取Valid values: 0 (disabled) and 1 (enabled).
                     * @return Status Valid values: 0 (disabled) and 1 (enabled).
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Number of snapshots on the current day.
                     * @return TriggerCount Number of snapshots on the current day.
                     * 
                     */
                    uint64_t GetTriggerCount() const;

                    /**
                     * 判断参数 TriggerCount 是否已赋值
                     * @return TriggerCount 是否已赋值
                     * 
                     */
                    bool TriggerCountHasBeenSet() const;

                    /**
                     * 获取Number of times monitoring is enabled on the current day.
                     * @return OpenCount Number of times monitoring is enabled on the current day.
                     * 
                     */
                    uint64_t GetOpenCount() const;

                    /**
                     * 判断参数 OpenCount 是否已赋值
                     * @return OpenCount 是否已赋值
                     * 
                     */
                    bool OpenCountHasBeenSet() const;

                    /**
                     * 获取Number of times the monitoring scope is modified on the current day
                     * @return UpdateCount Number of times the monitoring scope is modified on the current day
                     * 
                     */
                    uint64_t GetUpdateCount() const;

                    /**
                     * 判断参数 UpdateCount 是否已赋值
                     * @return UpdateCount 是否已赋值
                     * 
                     */
                    bool UpdateCountHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * List of user monitoring resources.
                     */
                    std::vector<UserConfigResource> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * Valid values: 0 (disabled) and 1 (enabled).
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Number of snapshots on the current day.
                     */
                    uint64_t m_triggerCount;
                    bool m_triggerCountHasBeenSet;

                    /**
                     * Number of times monitoring is enabled on the current day.
                     */
                    uint64_t m_openCount;
                    bool m_openCountHasBeenSet;

                    /**
                     * Number of times the monitoring scope is modified on the current day
                     */
                    uint64_t m_updateCount;
                    bool m_updateCountHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBECONFIGRECORDERRESPONSE_H_
