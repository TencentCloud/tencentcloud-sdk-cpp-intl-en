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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEWHITELISTITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEWHITELISTITEM_H_

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
                * Allowed item
                */
                class ComplianceWhitelistItem : public AbstractModel
                {
                public:
                    ComplianceWhitelistItem();
                    ~ComplianceWhitelistItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Allowed item ID
                     * @return WhitelistItemId Allowed item ID
                     */
                    uint64_t GetWhitelistItemId() const;

                    /**
                     * 设置Allowed item ID
                     * @param WhitelistItemId Allowed item ID
                     */
                    void SetWhitelistItemId(const uint64_t& _whitelistItemId);

                    /**
                     * 判断参数 WhitelistItemId 是否已赋值
                     * @return WhitelistItemId 是否已赋值
                     */
                    bool WhitelistItemIdHasBeenSet() const;

                    /**
                     * 获取ID of the customer check item
                     * @return CustomerPolicyItemId ID of the customer check item
                     */
                    uint64_t GetCustomerPolicyItemId() const;

                    /**
                     * 设置ID of the customer check item
                     * @param CustomerPolicyItemId ID of the customer check item
                     */
                    void SetCustomerPolicyItemId(const uint64_t& _customerPolicyItemId);

                    /**
                     * 判断参数 CustomerPolicyItemId 是否已赋值
                     * @return CustomerPolicyItemId 是否已赋值
                     */
                    bool CustomerPolicyItemIdHasBeenSet() const;

                    /**
                     * 获取Check item name
                     * @return Name Check item name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Check item name
                     * @param Name Check item name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Compliance standard name
                     * @return StandardName Compliance standard name
                     */
                    std::string GetStandardName() const;

                    /**
                     * 设置Compliance standard name
                     * @param StandardName Compliance standard name
                     */
                    void SetStandardName(const std::string& _standardName);

                    /**
                     * 判断参数 StandardName 是否已赋值
                     * @return StandardName 是否已赋值
                     */
                    bool StandardNameHasBeenSet() const;

                    /**
                     * 获取Compliance standard ID
                     * @return StandardId Compliance standard ID
                     */
                    uint64_t GetStandardId() const;

                    /**
                     * 设置Compliance standard ID
                     * @param StandardId Compliance standard ID
                     */
                    void SetStandardId(const uint64_t& _standardId);

                    /**
                     * 判断参数 StandardId 是否已赋值
                     * @return StandardId 是否已赋值
                     */
                    bool StandardIdHasBeenSet() const;

                    /**
                     * 获取Number of assets affected by the check item
                     * @return AffectedAssetCount Number of assets affected by the check item
                     */
                    uint64_t GetAffectedAssetCount() const;

                    /**
                     * 设置Number of assets affected by the check item
                     * @param AffectedAssetCount Number of assets affected by the check item
                     */
                    void SetAffectedAssetCount(const uint64_t& _affectedAssetCount);

                    /**
                     * 判断参数 AffectedAssetCount 是否已赋值
                     * @return AffectedAssetCount 是否已赋值
                     */
                    bool AffectedAssetCountHasBeenSet() const;

                    /**
                     * 获取Last update time
                     * @return LastUpdateTime Last update time
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置Last update time
                     * @param LastUpdateTime Last update time
                     */
                    void SetLastUpdateTime(const std::string& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取Allowed time
                     * @return InsertTime Allowed time
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置Allowed time
                     * @param InsertTime Allowed time
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     */
                    bool InsertTimeHasBeenSet() const;

                private:

                    /**
                     * Allowed item ID
                     */
                    uint64_t m_whitelistItemId;
                    bool m_whitelistItemIdHasBeenSet;

                    /**
                     * ID of the customer check item
                     */
                    uint64_t m_customerPolicyItemId;
                    bool m_customerPolicyItemIdHasBeenSet;

                    /**
                     * Check item name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Compliance standard name
                     */
                    std::string m_standardName;
                    bool m_standardNameHasBeenSet;

                    /**
                     * Compliance standard ID
                     */
                    uint64_t m_standardId;
                    bool m_standardIdHasBeenSet;

                    /**
                     * Number of assets affected by the check item
                     */
                    uint64_t m_affectedAssetCount;
                    bool m_affectedAssetCountHasBeenSet;

                    /**
                     * Last update time
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * Allowed time
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEWHITELISTITEM_H_
