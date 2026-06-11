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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGESCANINQUIREINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGESCANINQUIREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Image scanning billing information.
                */
                class ImageScanInquireInfo : public AbstractModel
                {
                public:
                    ImageScanInquireInfo();
                    ~ImageScanInquireInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Billing item
                     * @return InquireKey Billing item
                     * 
                     */
                    std::string GetInquireKey() const;

                    /**
                     * 设置Billing item
                     * @param _inquireKey Billing item
                     * 
                     */
                    void SetInquireKey(const std::string& _inquireKey);

                    /**
                     * 判断参数 InquireKey 是否已赋值
                     * @return InquireKey 是否已赋值
                     * 
                     */
                    bool InquireKeyHasBeenSet() const;

                    /**
                     * 获取Total Capacity
                     * @return Capcity Total Capacity
                     * 
                     */
                    uint64_t GetCapcity() const;

                    /**
                     * 设置Total Capacity
                     * @param _capcity Total Capacity
                     * 
                     */
                    void SetCapcity(const uint64_t& _capcity);

                    /**
                     * 判断参数 Capcity 是否已赋值
                     * @return Capcity 是否已赋值
                     * 
                     */
                    bool CapcityHasBeenSet() const;

                    /**
                     * 获取Used amount
                     * @return Useage Used amount
                     * 
                     */
                    uint64_t GetUseage() const;

                    /**
                     * 设置Used amount
                     * @param _useage Used amount
                     * 
                     */
                    void SetUseage(const uint64_t& _useage);

                    /**
                     * 判断参数 Useage 是否已赋值
                     * @return Useage 是否已赋值
                     * 
                     */
                    bool UseageHasBeenSet() const;

                    /**
                     * 获取Start time.
                     * @return StartTime Start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time.
                     * @param _startTime Start time.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return EndTime End time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
                     * @param _endTime End time
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
                     * 获取Billing status
Pending purchase
Normal: Normal.
Isolate
                     * @return PurchaseStatus Billing status
Pending purchase
Normal: Normal.
Isolate
                     * 
                     */
                    std::string GetPurchaseStatus() const;

                    /**
                     * 设置Billing status
Pending purchase
Normal: Normal.
Isolate
                     * @param _purchaseStatus Billing status
Pending purchase
Normal: Normal.
Isolate
                     * 
                     */
                    void SetPurchaseStatus(const std::string& _purchaseStatus);

                    /**
                     * 判断参数 PurchaseStatus 是否已赋值
                     * @return PurchaseStatus 是否已赋值
                     * 
                     */
                    bool PurchaseStatusHasBeenSet() const;

                    /**
                     * 获取Resource ID
                     * @return ResourceID Resource ID
                     * 
                     */
                    std::string GetResourceID() const;

                    /**
                     * 设置Resource ID
                     * @param _resourceID Resource ID
                     * 
                     */
                    void SetResourceID(const std::string& _resourceID);

                    /**
                     * 判断参数 ResourceID 是否已赋值
                     * @return ResourceID 是否已赋值
                     * 
                     */
                    bool ResourceIDHasBeenSet() const;

                    /**
                     * 获取Number of purchased scans.
                     * @return PayNum Number of purchased scans.
                     * 
                     */
                    uint64_t GetPayNum() const;

                    /**
                     * 设置Number of purchased scans.
                     * @param _payNum Number of purchased scans.
                     * 
                     */
                    void SetPayNum(const uint64_t& _payNum);

                    /**
                     * 判断参数 PayNum 是否已赋值
                     * @return PayNum 是否已赋值
                     * 
                     */
                    bool PayNumHasBeenSet() const;

                    /**
                     * 获取Number of trial scans.
                     * @return TrialNum Number of trial scans.
                     * 
                     */
                    uint64_t GetTrialNum() const;

                    /**
                     * 设置Number of trial scans.
                     * @param _trialNum Number of trial scans.
                     * 
                     */
                    void SetTrialNum(const uint64_t& _trialNum);

                    /**
                     * 判断参数 TrialNum 是否已赋值
                     * @return TrialNum 是否已赋值
                     * 
                     */
                    bool TrialNumHasBeenSet() const;

                    /**
                     * 获取Number of purchased scanning operations that have been used.
                     * @return PayUsage Number of purchased scanning operations that have been used.
                     * 
                     */
                    uint64_t GetPayUsage() const;

                    /**
                     * 设置Number of purchased scanning operations that have been used.
                     * @param _payUsage Number of purchased scanning operations that have been used.
                     * 
                     */
                    void SetPayUsage(const uint64_t& _payUsage);

                    /**
                     * 判断参数 PayUsage 是否已赋值
                     * @return PayUsage 是否已赋值
                     * 
                     */
                    bool PayUsageHasBeenSet() const;

                private:

                    /**
                     * Billing item
                     */
                    std::string m_inquireKey;
                    bool m_inquireKeyHasBeenSet;

                    /**
                     * Total Capacity
                     */
                    uint64_t m_capcity;
                    bool m_capcityHasBeenSet;

                    /**
                     * Used amount
                     */
                    uint64_t m_useage;
                    bool m_useageHasBeenSet;

                    /**
                     * Start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Billing status
Pending purchase
Normal: Normal.
Isolate
                     */
                    std::string m_purchaseStatus;
                    bool m_purchaseStatusHasBeenSet;

                    /**
                     * Resource ID
                     */
                    std::string m_resourceID;
                    bool m_resourceIDHasBeenSet;

                    /**
                     * Number of purchased scans.
                     */
                    uint64_t m_payNum;
                    bool m_payNumHasBeenSet;

                    /**
                     * Number of trial scans.
                     */
                    uint64_t m_trialNum;
                    bool m_trialNumHasBeenSet;

                    /**
                     * Number of purchased scanning operations that have been used.
                     */
                    uint64_t m_payUsage;
                    bool m_payUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGESCANINQUIREINFO_H_
