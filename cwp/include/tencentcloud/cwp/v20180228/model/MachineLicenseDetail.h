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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MACHINELICENSEDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MACHINELICENSEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Information on the authorization bound to the machine
                */
                class MachineLicenseDetail : public AbstractModel
                {
                public:
                    MachineLicenseDetail();
                    ~MachineLicenseDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host QUUID
                     * @return Quuid Host QUUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Host QUUID
                     * @param _quuid Host QUUID
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Billing mode. 0: pay-as-you-go; 1: prepaid.
                     * @return PayMode Billing mode. 0: pay-as-you-go; 1: prepaid.
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置Billing mode. 0: pay-as-you-go; 1: prepaid.
                     * @param _payMode Billing mode. 0: pay-as-you-go; 1: prepaid.
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Resource ID
                     * @return ResourceId Resource ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID
                     * @param _resourceId Resource ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Authorization type
                     * @return LicenseType Authorization type
                     * 
                     */
                    uint64_t GetLicenseType() const;

                    /**
                     * 设置Authorization type
                     * @param _licenseType Authorization type
                     * 
                     */
                    void SetLicenseType(const uint64_t& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取Order type. 0: default billing order; 1: trial order; 2: gift; 3: experience.
                     * @return SourceType Order type. 0: default billing order; 1: trial order; 2: gift; 3: experience.
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置Order type. 0: default billing order; 1: trial order; 2: gift; 3: experience.
                     * @param _sourceType Order type. 0: default billing order; 1: trial order; 2: gift; 3: experience.
                     * 
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取This field has been deprecated.
                     * @return InquireKey This field has been deprecated.
                     * 
                     */
                    std::string GetInquireKey() const;

                    /**
                     * 设置This field has been deprecated.
                     * @param _inquireKey This field has been deprecated.
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
                     * 获取Auto-renewal flag. 0: default (no automatic payment); 1: automatic payment; 2: set manually (non-renewal).
                     * @return AutoRenewFlag Auto-renewal flag. 0: default (no automatic payment); 1: automatic payment; 2: set manually (non-renewal).
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag. 0: default (no automatic payment); 1: automatic payment; 2: set manually (non-renewal).
                     * @param _autoRenewFlag Auto-renewal flag. 0: default (no automatic payment); 1: automatic payment; 2: set manually (non-renewal).
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Expiry time. This value is empty for pay-as-you-go.
                     * @return Deadline Expiry time. This value is empty for pay-as-you-go.
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置Expiry time. This value is empty for pay-as-you-go.
                     * @param _deadline Expiry time. This value is empty for pay-as-you-go.
                     * 
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取Time of purchase
                     * @return BuyTime Time of purchase
                     * 
                     */
                    std::string GetBuyTime() const;

                    /**
                     * 设置Time of purchase
                     * @param _buyTime Time of purchase
                     * 
                     */
                    void SetBuyTime(const std::string& _buyTime);

                    /**
                     * 判断参数 BuyTime 是否已赋值
                     * @return BuyTime 是否已赋值
                     * 
                     */
                    bool BuyTimeHasBeenSet() const;

                    /**
                     * 获取Number of authorizations
                     * @return LicenseCnt Number of authorizations
                     * 
                     */
                    uint64_t GetLicenseCnt() const;

                    /**
                     * 设置Number of authorizations
                     * @param _licenseCnt Number of authorizations
                     * 
                     */
                    void SetLicenseCnt(const uint64_t& _licenseCnt);

                    /**
                     * 判断参数 LicenseCnt 是否已赋值
                     * @return LicenseCnt 是否已赋值
                     * 
                     */
                    bool LicenseCntHasBeenSet() const;

                private:

                    /**
                     * Host QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Billing mode. 0: pay-as-you-go; 1: prepaid.
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Resource ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Authorization type
                     */
                    uint64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * Order type. 0: default billing order; 1: trial order; 2: gift; 3: experience.
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * This field has been deprecated.
                     */
                    std::string m_inquireKey;
                    bool m_inquireKeyHasBeenSet;

                    /**
                     * Auto-renewal flag. 0: default (no automatic payment); 1: automatic payment; 2: set manually (non-renewal).
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Expiry time. This value is empty for pay-as-you-go.
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * Time of purchase
                     */
                    std::string m_buyTime;
                    bool m_buyTimeHasBeenSet;

                    /**
                     * Number of authorizations
                     */
                    uint64_t m_licenseCnt;
                    bool m_licenseCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MACHINELICENSEDETAIL_H_
