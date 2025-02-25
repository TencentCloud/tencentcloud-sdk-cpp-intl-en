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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_CREATEAPMINSTANCEREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_CREATEAPMINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * CreateApmInstance request structure.
                */
                class CreateApmInstanceRequest : public AbstractModel
                {
                public:
                    CreateApmInstanceRequest();
                    ~CreateApmInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Business system name.
                     * @return Name Business system name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Business system name.
                     * @param _name Business system name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Business system description information.
                     * @return Description Business system description information.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Business system description information.
                     * @param _description Business system description information.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Retention period of trace data (unit: days, the default storage duration is 3 days).
                     * @return TraceDuration Retention period of trace data (unit: days, the default storage duration is 3 days).
                     * 
                     */
                    int64_t GetTraceDuration() const;

                    /**
                     * 设置Retention period of trace data (unit: days, the default storage duration is 3 days).
                     * @param _traceDuration Retention period of trace data (unit: days, the default storage duration is 3 days).
                     * 
                     */
                    void SetTraceDuration(const int64_t& _traceDuration);

                    /**
                     * 判断参数 TraceDuration 是否已赋值
                     * @return TraceDuration 是否已赋值
                     * 
                     */
                    bool TraceDurationHasBeenSet() const;

                    /**
                     * 获取Business system tag list.
                     * @return Tags Business system tag list.
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置Business system tag list.
                     * @param _tags Business system tag list.
                     * 
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取The report quota value of the business system. the default value is 0, indicating no limit on the report quota. (obsolete).
                     * @return SpanDailyCounters The report quota value of the business system. the default value is 0, indicating no limit on the report quota. (obsolete).
                     * 
                     */
                    uint64_t GetSpanDailyCounters() const;

                    /**
                     * 设置The report quota value of the business system. the default value is 0, indicating no limit on the report quota. (obsolete).
                     * @param _spanDailyCounters The report quota value of the business system. the default value is 0, indicating no limit on the report quota. (obsolete).
                     * 
                     */
                    void SetSpanDailyCounters(const uint64_t& _spanDailyCounters);

                    /**
                     * 判断参数 SpanDailyCounters 是否已赋值
                     * @return SpanDailyCounters 是否已赋值
                     * 
                     */
                    bool SpanDailyCountersHasBeenSet() const;

                    /**
                     * 获取Billing model of the business system (0: pay-as-you-go, 1: prepaid).
                     * @return PayMode Billing model of the business system (0: pay-as-you-go, 1: prepaid).
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Billing model of the business system (0: pay-as-you-go, 1: prepaid).
                     * @param _payMode Billing model of the business system (0: pay-as-you-go, 1: prepaid).
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Whether it is a free edition business system (0 = paid edition; 1 = tsf restricted free edition; 2 = free edition).
                     * @return Free Whether it is a free edition business system (0 = paid edition; 1 = tsf restricted free edition; 2 = free edition).
                     * 
                     */
                    int64_t GetFree() const;

                    /**
                     * 设置Whether it is a free edition business system (0 = paid edition; 1 = tsf restricted free edition; 2 = free edition).
                     * @param _free Whether it is a free edition business system (0 = paid edition; 1 = tsf restricted free edition; 2 = free edition).
                     * 
                     */
                    void SetFree(const int64_t& _free);

                    /**
                     * 判断参数 Free 是否已赋值
                     * @return Free 是否已赋值
                     * 
                     */
                    bool FreeHasBeenSet() const;

                private:

                    /**
                     * Business system name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Business system description information.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Retention period of trace data (unit: days, the default storage duration is 3 days).
                     */
                    int64_t m_traceDuration;
                    bool m_traceDurationHasBeenSet;

                    /**
                     * Business system tag list.
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * The report quota value of the business system. the default value is 0, indicating no limit on the report quota. (obsolete).
                     */
                    uint64_t m_spanDailyCounters;
                    bool m_spanDailyCountersHasBeenSet;

                    /**
                     * Billing model of the business system (0: pay-as-you-go, 1: prepaid).
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Whether it is a free edition business system (0 = paid edition; 1 = tsf restricted free edition; 2 = free edition).
                     */
                    int64_t m_free;
                    bool m_freeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_CREATEAPMINSTANCEREQUEST_H_
