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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Tags.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Authorization order list object
                */
                class LicenseDetail : public AbstractModel
                {
                public:
                    LicenseDetail();
                    ~LicenseDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Authorization ID
                     * @return LicenseId Authorization ID
                     * 
                     */
                    uint64_t GetLicenseId() const;

                    /**
                     * 设置Authorization ID
                     * @param _licenseId Authorization ID
                     * 
                     */
                    void SetLicenseId(const uint64_t& _licenseId);

                    /**
                     * 判断参数 LicenseId 是否已赋值
                     * @return LicenseId 是否已赋值
                     * 
                     */
                    bool LicenseIdHasBeenSet() const;

                    /**
                     * 获取Authorization type. 0: Pro Edition - pay-as-you-go; 1: Pro Edition - monthly subscription; 2: Ultimate Edition - monthly subscription.
                     * @return LicenseType Authorization type. 0: Pro Edition - pay-as-you-go; 1: Pro Edition - monthly subscription; 2: Ultimate Edition - monthly subscription.
                     * 
                     */
                    uint64_t GetLicenseType() const;

                    /**
                     * 设置Authorization type. 0: Pro Edition - pay-as-you-go; 1: Pro Edition - monthly subscription; 2: Ultimate Edition - monthly subscription.
                     * @param _licenseType Authorization type. 0: Pro Edition - pay-as-you-go; 1: Pro Edition - monthly subscription; 2: Ultimate Edition - monthly subscription.
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
                     * 获取Authorization status. 0: not in use; 1: partially in use; 2: used up; 3: unavailable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LicenseStatus Authorization status. 0: not in use; 1: partially in use; 2: used up; 3: unavailable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLicenseStatus() const;

                    /**
                     * 设置Authorization status. 0: not in use; 1: partially in use; 2: used up; 3: unavailable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _licenseStatus Authorization status. 0: not in use; 1: partially in use; 2: used up; 3: unavailable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLicenseStatus(const uint64_t& _licenseStatus);

                    /**
                     * 判断参数 LicenseStatus 是否已赋值
                     * @return LicenseStatus 是否已赋值
                     * 
                     */
                    bool LicenseStatusHasBeenSet() const;

                    /**
                     * 获取Total number of authorizations
                     * @return LicenseCnt Total number of authorizations
                     * 
                     */
                    uint64_t GetLicenseCnt() const;

                    /**
                     * 设置Total number of authorizations
                     * @param _licenseCnt Total number of authorizations
                     * 
                     */
                    void SetLicenseCnt(const uint64_t& _licenseCnt);

                    /**
                     * 判断参数 LicenseCnt 是否已赋值
                     * @return LicenseCnt 是否已赋值
                     * 
                     */
                    bool LicenseCntHasBeenSet() const;

                    /**
                     * 获取Number of used authorizations
                     * @return UsedLicenseCnt Number of used authorizations
                     * 
                     */
                    uint64_t GetUsedLicenseCnt() const;

                    /**
                     * 设置Number of used authorizations
                     * @param _usedLicenseCnt Number of used authorizations
                     * 
                     */
                    void SetUsedLicenseCnt(const uint64_t& _usedLicenseCnt);

                    /**
                     * 判断参数 UsedLicenseCnt 是否已赋值
                     * @return UsedLicenseCnt 是否已赋值
                     * 
                     */
                    bool UsedLicenseCntHasBeenSet() const;

                    /**
                     * 获取Order status. 1: normal; 2: isolated; 3: terminated.
                     * @return OrderStatus Order status. 1: normal; 2: isolated; 3: terminated.
                     * 
                     */
                    uint64_t GetOrderStatus() const;

                    /**
                     * 设置Order status. 1: normal; 2: isolated; 3: terminated.
                     * @param _orderStatus Order status. 1: normal; 2: isolated; 3: terminated.
                     * 
                     */
                    void SetOrderStatus(const uint64_t& _orderStatus);

                    /**
                     * 判断参数 OrderStatus 是否已赋值
                     * @return OrderStatus 是否已赋值
                     * 
                     */
                    bool OrderStatusHasBeenSet() const;

                    /**
                     * 获取Deadline
                     * @return Deadline Deadline
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置Deadline
                     * @param _deadline Deadline
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
                     * 获取Order resource ID
                     * @return ResourceId Order resource ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Order resource ID
                     * @param _resourceId Order resource ID
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
                     * 获取0: initialization; 1: automatic renewal; 2: no automatic renewal.
                     * @return AutoRenewFlag 0: initialization; 1: automatic renewal; 2: no automatic renewal.
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置0: initialization; 1: automatic renewal; 2: no automatic renewal.
                     * @param _autoRenewFlag 0: initialization; 1: automatic renewal; 2: no automatic renewal.
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
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Task ID. Default value: 0. It is used to query the binding progress.
                     * @return TaskId Task ID. Default value: 0. It is used to query the binding progress.
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置Task ID. Default value: 0. It is used to query the binding progress.
                     * @param _taskId Task ID. Default value: 0. It is used to query the binding progress.
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

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
                     * 获取Whether the order is a trial order
                     * @return SourceType Whether the order is a trial order
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置Whether the order is a trial order
                     * @param _sourceType Whether the order is a trial order
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
                     * 获取Resource alias
                     * @return Alias Resource alias
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Resource alias
                     * @param _alias Resource alias
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Platform Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Platform Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置Platform Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Platform Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Number of frozen authorizations. 0: no authorization is frozen; other values: actual number of frozen authorizations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FreezeNum Number of frozen authorizations. 0: no authorization is frozen; other values: actual number of frozen authorizations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFreezeNum() const;

                    /**
                     * 设置Number of frozen authorizations. 0: no authorization is frozen; other values: actual number of frozen authorizations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _freezeNum Number of frozen authorizations. 0: no authorization is frozen; other values: actual number of frozen authorizations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFreezeNum(const int64_t& _freezeNum);

                    /**
                     * 判断参数 FreezeNum 是否已赋值
                     * @return FreezeNum 是否已赋值
                     * 
                     */
                    bool FreezeNumHasBeenSet() const;

                private:

                    /**
                     * Authorization ID
                     */
                    uint64_t m_licenseId;
                    bool m_licenseIdHasBeenSet;

                    /**
                     * Authorization type. 0: Pro Edition - pay-as-you-go; 1: Pro Edition - monthly subscription; 2: Ultimate Edition - monthly subscription.
                     */
                    uint64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * Authorization status. 0: not in use; 1: partially in use; 2: used up; 3: unavailable.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_licenseStatus;
                    bool m_licenseStatusHasBeenSet;

                    /**
                     * Total number of authorizations
                     */
                    uint64_t m_licenseCnt;
                    bool m_licenseCntHasBeenSet;

                    /**
                     * Number of used authorizations
                     */
                    uint64_t m_usedLicenseCnt;
                    bool m_usedLicenseCntHasBeenSet;

                    /**
                     * Order status. 1: normal; 2: isolated; 3: terminated.
                     */
                    uint64_t m_orderStatus;
                    bool m_orderStatusHasBeenSet;

                    /**
                     * Deadline
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * Order resource ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 0: initialization; 1: automatic renewal; 2: no automatic renewal.
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Project ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Task ID. Default value: 0. It is used to query the binding progress.
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Time of purchase
                     */
                    std::string m_buyTime;
                    bool m_buyTimeHasBeenSet;

                    /**
                     * Whether the order is a trial order
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Resource alias
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Platform Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Number of frozen authorizations. 0: no authorization is frozen; other values: actual number of frozen authorizations.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_freezeNum;
                    bool m_freezeNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEDETAIL_H_
