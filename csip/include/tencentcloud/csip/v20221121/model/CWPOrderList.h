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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CWPORDERLIST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CWPORDERLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Tags.h>
#include <tencentcloud/csip/v20221121/model/CWPOrderExtraParam.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Order list object members.
                */
                class CWPOrderList : public AbstractModel
                {
                public:
                    CWPOrderList();
                    ~CWPOrderList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Associated product p_</p>
                     * @return ProductCode <p>Associated product p_</p>
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置<p>Associated product p_</p>
                     * @param _productCode <p>Associated product p_</p>
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取<p>Subproduct sp_</p>
                     * @return SubProductCode <p>Subproduct sp_</p>
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置<p>Subproduct sp_</p>
                     * @param _subProductCode <p>Subproduct sp_</p>
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取<p>Billing item Layer-4 sv_</p>
                     * @return InquireKey <p>Billing item Layer-4 sv_</p>
                     * 
                     */
                    std::string GetInquireKey() const;

                    /**
                     * 设置<p>Billing item Layer-4 sv_</p>
                     * @param _inquireKey <p>Billing item Layer-4 sv_</p>
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
                     * 获取<p>Resource purchase quantity</p>
                     * @return InquireNum <p>Resource purchase quantity</p>
                     * 
                     */
                    uint64_t GetInquireNum() const;

                    /**
                     * 设置<p>Resource purchase quantity</p>
                     * @param _inquireNum <p>Resource purchase quantity</p>
                     * 
                     */
                    void SetInquireNum(const uint64_t& _inquireNum);

                    /**
                     * 判断参数 InquireNum 是否已赋值
                     * @return InquireNum 是否已赋值
                     * 
                     */
                    bool InquireNumHasBeenSet() const;

                    /**
                     * 获取<p>Resource usage</p>
                     * @return UsedNum <p>Resource usage</p>
                     * 
                     */
                    uint64_t GetUsedNum() const;

                    /**
                     * 设置<p>Resource usage</p>
                     * @param _usedNum <p>Resource usage</p>
                     * 
                     */
                    void SetUsedNum(const uint64_t& _usedNum);

                    /**
                     * 判断参数 UsedNum 是否已赋值
                     * @return UsedNum 是否已赋值
                     * 
                     */
                    bool UsedNumHasBeenSet() const;

                    /**
                     * 获取<p>Cloud tag</p>
                     * @return TagList <p>Cloud tag</p>
                     * 
                     */
                    std::vector<Tags> GetTagList() const;

                    /**
                     * 设置<p>Cloud tag</p>
                     * @param _tagList <p>Cloud tag</p>
                     * 
                     */
                    void SetTagList(const std::vector<Tags>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取<p>Order status: 1 normal, 2 isolated, 3 terminated</p>
                     * @return Status <p>Order status: 1 normal, 2 isolated, 3 terminated</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>Order status: 1 normal, 2 isolated, 3 terminated</p>
                     * @param _status <p>Order status: 1 normal, 2 isolated, 3 terminated</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Order start time</p>
                     * @return BeginTime <p>Order start time</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置<p>Order start time</p>
                     * @param _beginTime <p>Order start time</p>
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
                     * 获取<p>Order end time</p>
                     * @return EndTime <p>Order end time</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>Order end time</p>
                     * @param _endTime <p>Order end time</p>
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
                     * 获取<p>Project ID.</p>
                     * @return ProjectID <p>Project ID.</p>
                     * 
                     */
                    uint64_t GetProjectID() const;

                    /**
                     * 设置<p>Project ID.</p>
                     * @param _projectID <p>Project ID.</p>
                     * 
                     */
                    void SetProjectID(const uint64_t& _projectID);

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     * 
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取<p>Resource alias</p>
                     * @return Alias <p>Resource alias</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>Resource alias</p>
                     * @param _alias <p>Resource alias</p>
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
                     * 获取<p>Resource ID</p>
                     * @return ResourceId <p>Resource ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>Resource ID</p>
                     * @param _resourceId <p>Resource ID</p>
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
                     * 获取<p>Auto-renewal label 0: no automatic renewal by default (key accounts renew automatically). 1: auto-renewal. 2: manually set not to automatically renew (key accounts do not renew automatically).</p>
                     * @return AutoRenewFlag <p>Auto-renewal label 0: no automatic renewal by default (key accounts renew automatically). 1: auto-renewal. 2: manually set not to automatically renew (key accounts do not renew automatically).</p>
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>Auto-renewal label 0: no automatic renewal by default (key accounts renew automatically). 1: auto-renewal. 2: manually set not to automatically renew (key accounts do not renew automatically).</p>
                     * @param _autoRenewFlag <p>Auto-renewal label 0: no automatic renewal by default (key accounts renew automatically). 1: auto-renewal. 2: manually set not to automatically renew (key accounts do not renew automatically).</p>
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
                     * 获取<p>Resource type.</p>
                     * @return SourceType <p>Resource type.</p>
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置<p>Resource type.</p>
                     * @param _sourceType <p>Resource type.</p>
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
                     * 获取<p>Billing mode. 0: postpaid. 1: prepaid (annual/monthly subscription)</p>
                     * @return PayMode <p>Billing mode. 0: postpaid. 1: prepaid (annual/monthly subscription)</p>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置<p>Billing mode. 0: postpaid. 1: prepaid (annual/monthly subscription)</p>
                     * @param _payMode <p>Billing mode. 0: postpaid. 1: prepaid (annual/monthly subscription)</p>
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
                     * 获取<p>Region ID.</p>
                     * @return RegionID <p>Region ID.</p>
                     * 
                     */
                    uint64_t GetRegionID() const;

                    /**
                     * 设置<p>Region ID.</p>
                     * @param _regionID <p>Region ID.</p>
                     * 
                     */
                    void SetRegionID(const uint64_t& _regionID);

                    /**
                     * 判断参数 RegionID 是否已赋值
                     * @return RegionID 是否已赋值
                     * 
                     */
                    bool RegionIDHasBeenSet() const;

                    /**
                     * 获取<p>AZ ID.</p>
                     * @return ZoneID <p>AZ ID.</p>
                     * 
                     */
                    uint64_t GetZoneID() const;

                    /**
                     * 设置<p>AZ ID.</p>
                     * @param _zoneID <p>AZ ID.</p>
                     * 
                     */
                    void SetZoneID(const uint64_t& _zoneID);

                    /**
                     * 判断参数 ZoneID 是否已赋值
                     * @return ZoneID 是否已赋值
                     * 
                     */
                    bool ZoneIDHasBeenSet() const;

                    /**
                     * 获取<p>Current sub-order number</p>
                     * @return DealName <p>Current sub-order number</p>
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置<p>Current sub-order number</p>
                     * @param _dealName <p>Current sub-order number</p>
                     * 
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取<p>Additional parameters for orders</p>
                     * @return ExtraParam <p>Additional parameters for orders</p>
                     * 
                     */
                    CWPOrderExtraParam GetExtraParam() const;

                    /**
                     * 设置<p>Additional parameters for orders</p>
                     * @param _extraParam <p>Additional parameters for orders</p>
                     * 
                     */
                    void SetExtraParam(const CWPOrderExtraParam& _extraParam);

                    /**
                     * 判断参数 ExtraParam 是否已赋值
                     * @return ExtraParam 是否已赋值
                     * 
                     */
                    bool ExtraParamHasBeenSet() const;

                private:

                    /**
                     * <p>Associated product p_</p>
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * <p>Subproduct sp_</p>
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * <p>Billing item Layer-4 sv_</p>
                     */
                    std::string m_inquireKey;
                    bool m_inquireKeyHasBeenSet;

                    /**
                     * <p>Resource purchase quantity</p>
                     */
                    uint64_t m_inquireNum;
                    bool m_inquireNumHasBeenSet;

                    /**
                     * <p>Resource usage</p>
                     */
                    uint64_t m_usedNum;
                    bool m_usedNumHasBeenSet;

                    /**
                     * <p>Cloud tag</p>
                     */
                    std::vector<Tags> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>Order status: 1 normal, 2 isolated, 3 terminated</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Order start time</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>Order end time</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Project ID.</p>
                     */
                    uint64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * <p>Resource alias</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>Resource ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>Auto-renewal label 0: no automatic renewal by default (key accounts renew automatically). 1: auto-renewal. 2: manually set not to automatically renew (key accounts do not renew automatically).</p>
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>Resource type.</p>
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>Billing mode. 0: postpaid. 1: prepaid (annual/monthly subscription)</p>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Region ID.</p>
                     */
                    uint64_t m_regionID;
                    bool m_regionIDHasBeenSet;

                    /**
                     * <p>AZ ID.</p>
                     */
                    uint64_t m_zoneID;
                    bool m_zoneIDHasBeenSet;

                    /**
                     * <p>Current sub-order number</p>
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * <p>Additional parameters for orders</p>
                     */
                    CWPOrderExtraParam m_extraParam;
                    bool m_extraParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CWPORDERLIST_H_
