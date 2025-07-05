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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MAJOREVENTSPKG_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MAJOREVENTSPKG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Key protection resource information
                */
                class MajorEventsPkg : public AbstractModel
                {
                public:
                    MajorEventsPkg();
                    ~MajorEventsPkg() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceIds Resource ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceIds() const;

                    /**
                     * 设置Resource ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceIds Resource ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceIds(const std::string& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取Status

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Status

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Status

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Region

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region Region

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRegion() const;

                    /**
                     * 设置Region

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region Region

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegion(const int64_t& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Start time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BeginTime Start time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置Start time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _beginTime Start time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取End time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime End time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime End time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Application Quantity

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InquireNum Application Quantity

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetInquireNum() const;

                    /**
                     * 设置Application Quantity

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _inquireNum Application Quantity

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInquireNum(const int64_t& _inquireNum);

                    /**
                     * 判断参数 InquireNum 是否已赋值
                     * @return InquireNum 是否已赋值
                     * 
                     */
                    bool InquireNumHasBeenSet() const;

                    /**
                     * 获取Usage Quantity

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UsedNum Usage Quantity

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetUsedNum() const;

                    /**
                     * 设置Usage Quantity

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _usedNum Usage Quantity

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUsedNum(const int64_t& _usedNum);

                    /**
                     * 判断参数 UsedNum 是否已赋值
                     * @return UsedNum 是否已赋值
                     * 
                     */
                    bool UsedNumHasBeenSet() const;

                    /**
                     * 获取Renewal flag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RenewFlag Renewal flag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRenewFlag() const;

                    /**
                     * 设置Renewal flag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _renewFlag Renewal flag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRenewFlag(const uint64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Billing item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BillingItem Billing item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBillingItem() const;

                    /**
                     * 设置Billing item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _billingItem Billing item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBillingItem(const std::string& _billingItem);

                    /**
                     * 判断参数 BillingItem 是否已赋值
                     * @return BillingItem 是否已赋值
                     * 
                     */
                    bool BillingItemHasBeenSet() const;

                    /**
                     * 获取Protection Package Status

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HWState Protection Package Status

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetHWState() const;

                    /**
                     * 设置Protection Package Status

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hWState Protection Package Status

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHWState(const int64_t& _hWState);

                    /**
                     * 判断参数 HWState 是否已赋值
                     * @return HWState 是否已赋值
                     * 
                     */
                    bool HWStateHasBeenSet() const;

                private:

                    /**
                     * Resource ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * Status

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Region

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Start time

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * End time

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Application Quantity

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_inquireNum;
                    bool m_inquireNumHasBeenSet;

                    /**
                     * Usage Quantity

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_usedNum;
                    bool m_usedNumHasBeenSet;

                    /**
                     * Renewal flag.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Billing item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_billingItem;
                    bool m_billingItemHasBeenSet;

                    /**
                     * Protection Package Status

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_hWState;
                    bool m_hWStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MAJOREVENTSPKG_H_
