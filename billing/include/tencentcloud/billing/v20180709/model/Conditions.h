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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_CONDITIONS_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_CONDITIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Billing filter criteria object
                */
                class Conditions : public AbstractModel
                {
                public:
                    Conditions();
                    ~Conditions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Only supports two values: 6 and 12.
                     * @return TimeRange Only supports two values: 6 and 12.
                     * 
                     */
                    uint64_t GetTimeRange() const;

                    /**
                     * 设置Only supports two values: 6 and 12.
                     * @param _timeRange Only supports two values: 6 and 12.
                     * 
                     */
                    void SetTimeRange(const uint64_t& _timeRange);

                    /**
                     * 判断参数 TimeRange 是否已赋值
                     * @return TimeRange 是否已赋值
                     * 
                     */
                    bool TimeRangeHasBeenSet() const;

                    /**
                     * 获取Product name code
                     * @return BusinessCode Product name code
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置Product name code
                     * @param _businessCode Product name code
                     * 
                     */
                    void SetBusinessCode(const std::string& _businessCode);

                    /**
                     * 判断参数 BusinessCode 是否已赋值
                     * @return BusinessCode 是否已赋值
                     * 
                     */
                    bool BusinessCodeHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Region ID
                     * @return RegionId Region ID
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Region ID
                     * @param _regionId Region ID
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Payment mode. Options include prePay and postPay.
                     * @return PayMode Payment mode. Options include prePay and postPay.
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Payment mode. Options include prePay and postPay.
                     * @param _payMode Payment mode. Options include prePay and postPay.
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Resource keyword
                     * @return ResourceKeyword Resource keyword
                     * 
                     */
                    std::string GetResourceKeyword() const;

                    /**
                     * 设置Resource keyword
                     * @param _resourceKeyword Resource keyword
                     * 
                     */
                    void SetResourceKeyword(const std::string& _resourceKeyword);

                    /**
                     * 判断参数 ResourceKeyword 是否已赋值
                     * @return ResourceKeyword 是否已赋值
                     * 
                     */
                    bool ResourceKeywordHasBeenSet() const;

                    /**
                     * 获取Product name code
                     * @return BusinessCodes Product name code
                     * 
                     */
                    std::vector<std::string> GetBusinessCodes() const;

                    /**
                     * 设置Product name code
                     * @param _businessCodes Product name code
                     * 
                     */
                    void SetBusinessCodes(const std::vector<std::string>& _businessCodes);

                    /**
                     * 判断参数 BusinessCodes 是否已赋值
                     * @return BusinessCodes 是否已赋值
                     * 
                     */
                    bool BusinessCodesHasBeenSet() const;

                    /**
                     * 获取Subproduct name code
                     * @return ProductCodes Subproduct name code
                     * 
                     */
                    std::vector<std::string> GetProductCodes() const;

                    /**
                     * 设置Subproduct name code
                     * @param _productCodes Subproduct name code
                     * 
                     */
                    void SetProductCodes(const std::vector<std::string>& _productCodes);

                    /**
                     * 判断参数 ProductCodes 是否已赋值
                     * @return ProductCodes 是否已赋值
                     * 
                     */
                    bool ProductCodesHasBeenSet() const;

                    /**
                     * 获取Region ID
                     * @return RegionIds Region ID
                     * 
                     */
                    std::vector<int64_t> GetRegionIds() const;

                    /**
                     * 设置Region ID
                     * @param _regionIds Region ID
                     * 
                     */
                    void SetRegionIds(const std::vector<int64_t>& _regionIds);

                    /**
                     * 判断参数 RegionIds 是否已赋值
                     * @return RegionIds 是否已赋值
                     * 
                     */
                    bool RegionIdsHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectIds Project ID
                     * 
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置Project ID
                     * @param _projectIds Project ID
                     * 
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取Payment mode. Options include prePay and postPay.
                     * @return PayModes Payment mode. Options include prePay and postPay.
                     * 
                     */
                    std::vector<std::string> GetPayModes() const;

                    /**
                     * 设置Payment mode. Options include prePay and postPay.
                     * @param _payModes Payment mode. Options include prePay and postPay.
                     * 
                     */
                    void SetPayModes(const std::vector<std::string>& _payModes);

                    /**
                     * 判断参数 PayModes 是否已赋值
                     * @return PayModes 是否已赋值
                     * 
                     */
                    bool PayModesHasBeenSet() const;

                    /**
                     * 获取Transaction type
                     * @return ActionTypes Transaction type
                     * 
                     */
                    std::vector<std::string> GetActionTypes() const;

                    /**
                     * 设置Transaction type
                     * @param _actionTypes Transaction type
                     * 
                     */
                    void SetActionTypes(const std::vector<std::string>& _actionTypes);

                    /**
                     * 判断参数 ActionTypes 是否已赋值
                     * @return ActionTypes 是否已赋值
                     * 
                     */
                    bool ActionTypesHasBeenSet() const;

                    /**
                     * 获取Whether to hide zero-amount transactions
                     * @return HideFreeCost Whether to hide zero-amount transactions
                     * 
                     */
                    int64_t GetHideFreeCost() const;

                    /**
                     * 设置Whether to hide zero-amount transactions
                     * @param _hideFreeCost Whether to hide zero-amount transactions
                     * 
                     */
                    void SetHideFreeCost(const int64_t& _hideFreeCost);

                    /**
                     * 判断参数 HideFreeCost 是否已赋值
                     * @return HideFreeCost 是否已赋值
                     * 
                     */
                    bool HideFreeCostHasBeenSet() const;

                    /**
                     * 获取Sorting rule. Options include desc and asc.
                     * @return OrderByCost Sorting rule. Options include desc and asc.
                     * 
                     */
                    std::string GetOrderByCost() const;

                    /**
                     * 设置Sorting rule. Options include desc and asc.
                     * @param _orderByCost Sorting rule. Options include desc and asc.
                     * 
                     */
                    void SetOrderByCost(const std::string& _orderByCost);

                    /**
                     * 判断参数 OrderByCost 是否已赋值
                     * @return OrderByCost 是否已赋值
                     * 
                     */
                    bool OrderByCostHasBeenSet() const;

                    /**
                     * 获取Transaction ID
                     * @return BillIds Transaction ID
                     * 
                     */
                    std::vector<std::string> GetBillIds() const;

                    /**
                     * 设置Transaction ID
                     * @param _billIds Transaction ID
                     * 
                     */
                    void SetBillIds(const std::vector<std::string>& _billIds);

                    /**
                     * 判断参数 BillIds 是否已赋值
                     * @return BillIds 是否已赋值
                     * 
                     */
                    bool BillIdsHasBeenSet() const;

                    /**
                     * 获取Component code
                     * @return ComponentCodes Component code
                     * 
                     */
                    std::vector<std::string> GetComponentCodes() const;

                    /**
                     * 设置Component code
                     * @param _componentCodes Component code
                     * 
                     */
                    void SetComponentCodes(const std::vector<std::string>& _componentCodes);

                    /**
                     * 判断参数 ComponentCodes 是否已赋值
                     * @return ComponentCodes 是否已赋值
                     * 
                     */
                    bool ComponentCodesHasBeenSet() const;

                    /**
                     * 获取File ID
                     * @return FileIds File ID
                     * 
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置File ID
                     * @param _fileIds File ID
                     * 
                     */
                    void SetFileIds(const std::vector<std::string>& _fileIds);

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     * 
                     */
                    bool FileIdsHasBeenSet() const;

                    /**
                     * 获取File type
                     * @return FileTypes File type
                     * 
                     */
                    std::vector<std::string> GetFileTypes() const;

                    /**
                     * 设置File type
                     * @param _fileTypes File type
                     * 
                     */
                    void SetFileTypes(const std::vector<std::string>& _fileTypes);

                    /**
                     * 判断参数 FileTypes 是否已赋值
                     * @return FileTypes 是否已赋值
                     * 
                     */
                    bool FileTypesHasBeenSet() const;

                    /**
                     * 获取Status
                     * @return Status Status
                     * 
                     */
                    std::vector<uint64_t> GetStatus() const;

                    /**
                     * 设置Status
                     * @param _status Status
                     * 
                     */
                    void SetStatus(const std::vector<uint64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Only supports two values: 6 and 12.
                     */
                    uint64_t m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * Product name code
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Region ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Payment mode. Options include prePay and postPay.
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Resource keyword
                     */
                    std::string m_resourceKeyword;
                    bool m_resourceKeywordHasBeenSet;

                    /**
                     * Product name code
                     */
                    std::vector<std::string> m_businessCodes;
                    bool m_businessCodesHasBeenSet;

                    /**
                     * Subproduct name code
                     */
                    std::vector<std::string> m_productCodes;
                    bool m_productCodesHasBeenSet;

                    /**
                     * Region ID
                     */
                    std::vector<int64_t> m_regionIds;
                    bool m_regionIdsHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * Payment mode. Options include prePay and postPay.
                     */
                    std::vector<std::string> m_payModes;
                    bool m_payModesHasBeenSet;

                    /**
                     * Transaction type
                     */
                    std::vector<std::string> m_actionTypes;
                    bool m_actionTypesHasBeenSet;

                    /**
                     * Whether to hide zero-amount transactions
                     */
                    int64_t m_hideFreeCost;
                    bool m_hideFreeCostHasBeenSet;

                    /**
                     * Sorting rule. Options include desc and asc.
                     */
                    std::string m_orderByCost;
                    bool m_orderByCostHasBeenSet;

                    /**
                     * Transaction ID
                     */
                    std::vector<std::string> m_billIds;
                    bool m_billIdsHasBeenSet;

                    /**
                     * Component code
                     */
                    std::vector<std::string> m_componentCodes;
                    bool m_componentCodesHasBeenSet;

                    /**
                     * File ID
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * File type
                     */
                    std::vector<std::string> m_fileTypes;
                    bool m_fileTypesHasBeenSet;

                    /**
                     * Status
                     */
                    std::vector<uint64_t> m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_CONDITIONS_H_
