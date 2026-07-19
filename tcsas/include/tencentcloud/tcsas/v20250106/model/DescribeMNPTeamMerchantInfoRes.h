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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPTEAMMERCHANTINFORES_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPTEAMMERCHANTINFORES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Response parameters structure for querying bound merchant accounts of a mini program team.
                */
                class DescribeMNPTeamMerchantInfoRes : public AbstractModel
                {
                public:
                    DescribeMNPTeamMerchantInfoRes();
                    ~DescribeMNPTeamMerchantInfoRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Merchant ID.</p>
                     * @return MerchantID <p>Merchant ID.</p>
                     * 
                     */
                    std::string GetMerchantID() const;

                    /**
                     * 设置<p>Merchant ID.</p>
                     * @param _merchantID <p>Merchant ID.</p>
                     * 
                     */
                    void SetMerchantID(const std::string& _merchantID);

                    /**
                     * 判断参数 MerchantID 是否已赋值
                     * @return MerchantID 是否已赋值
                     * 
                     */
                    bool MerchantIDHasBeenSet() const;

                    /**
                     * 获取<p>Approval status. Valid values: 0: In progress; 10: Approved; 20: Rejected.</p>
                     * @return ApprovalStatus <p>Approval status. Valid values: 0: In progress; 10: Approved; 20: Rejected.</p>
                     * 
                     */
                    int64_t GetApprovalStatus() const;

                    /**
                     * 设置<p>Approval status. Valid values: 0: In progress; 10: Approved; 20: Rejected.</p>
                     * @param _approvalStatus <p>Approval status. Valid values: 0: In progress; 10: Approved; 20: Rejected.</p>
                     * 
                     */
                    void SetApprovalStatus(const int64_t& _approvalStatus);

                    /**
                     * 判断参数 ApprovalStatus 是否已赋值
                     * @return ApprovalStatus 是否已赋值
                     * 
                     */
                    bool ApprovalStatusHasBeenSet() const;

                    /**
                     * 获取<p>Merchant binding ID of the mini program team, used to unbind the merchant.</p>
                     * @return ID <p>Merchant binding ID of the mini program team, used to unbind the merchant.</p>
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置<p>Merchant binding ID of the mini program team, used to unbind the merchant.</p>
                     * @param _iD <p>Merchant binding ID of the mini program team, used to unbind the merchant.</p>
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>Merchant name.</p>
                     * @return MerchantName <p>Merchant name.</p>
                     * 
                     */
                    std::string GetMerchantName() const;

                    /**
                     * 设置<p>Merchant name.</p>
                     * @param _merchantName <p>Merchant name.</p>
                     * 
                     */
                    void SetMerchantName(const std::string& _merchantName);

                    /**
                     * 判断参数 MerchantName 是否已赋值
                     * @return MerchantName 是否已赋值
                     * 
                     */
                    bool MerchantNameHasBeenSet() const;

                private:

                    /**
                     * <p>Merchant ID.</p>
                     */
                    std::string m_merchantID;
                    bool m_merchantIDHasBeenSet;

                    /**
                     * <p>Approval status. Valid values: 0: In progress; 10: Approved; 20: Rejected.</p>
                     */
                    int64_t m_approvalStatus;
                    bool m_approvalStatusHasBeenSet;

                    /**
                     * <p>Merchant binding ID of the mini program team, used to unbind the merchant.</p>
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Merchant name.</p>
                     */
                    std::string m_merchantName;
                    bool m_merchantNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPTEAMMERCHANTINFORES_H_
