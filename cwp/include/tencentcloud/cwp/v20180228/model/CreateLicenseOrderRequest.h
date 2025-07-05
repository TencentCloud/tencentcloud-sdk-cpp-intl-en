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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATELICENSEORDERREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATELICENSEORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Tags.h>
#include <tencentcloud/cwp/v20180228/model/OrderModifyObject.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CreateLicenseOrder request structure.
                */
                class CreateLicenseOrderRequest : public AbstractModel
                {
                public:
                    CreateLicenseOrderRequest();
                    ~CreateLicenseOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Tag array. Leaving it blank indicates no tags need to be bound.
                     * @return Tags Tag array. Leaving it blank indicates no tags need to be bound.
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置Tag array. Leaving it blank indicates no tags need to be bound.
                     * @param _tags Tag array. Leaving it blank indicates no tags need to be bound.
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
                     * 获取Authorization type. 0: Pro Edition-pay-as-you-go; 1: Pro Edition-monthly subscription; 2 - Ultimate Edition-monthly subscriptionThe default is 0.
                     * @return LicenseType Authorization type. 0: Pro Edition-pay-as-you-go; 1: Pro Edition-monthly subscription; 2 - Ultimate Edition-monthly subscriptionThe default is 0.
                     * 
                     */
                    uint64_t GetLicenseType() const;

                    /**
                     * 设置Authorization type. 0: Pro Edition-pay-as-you-go; 1: Pro Edition-monthly subscription; 2 - Ultimate Edition-monthly subscriptionThe default is 0.
                     * @param _licenseType Authorization type. 0: Pro Edition-pay-as-you-go; 1: Pro Edition-monthly subscription; 2 - Ultimate Edition-monthly subscriptionThe default is 0.
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
                     * 获取Authorization quantity: the number of units that need to be purchased
The default is 1.
                     * @return LicenseNum Authorization quantity: the number of units that need to be purchased
The default is 1.
                     * 
                     */
                    uint64_t GetLicenseNum() const;

                    /**
                     * 设置Authorization quantity: the number of units that need to be purchased
The default is 1.
                     * @param _licenseNum Authorization quantity: the number of units that need to be purchased
The default is 1.
                     * 
                     */
                    void SetLicenseNum(const uint64_t& _licenseNum);

                    /**
                     * 判断参数 LicenseNum 是否已赋值
                     * @return LicenseNum 是否已赋值
                     * 
                     */
                    bool LicenseNumHasBeenSet() const;

                    /**
                     * 获取Region of purchase order. In this case, only 1 - Guangzhou and 9 - Singapore are supported. Guangzhou is recommended. Singapore region is reserved for allowlisted users.
The default is 1.
                     * @return RegionId Region of purchase order. In this case, only 1 - Guangzhou and 9 - Singapore are supported. Guangzhou is recommended. Singapore region is reserved for allowlisted users.
The default is 1.
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置Region of purchase order. In this case, only 1 - Guangzhou and 9 - Singapore are supported. Guangzhou is recommended. Singapore region is reserved for allowlisted users.
The default is 1.
                     * @param _regionId Region of purchase order. In this case, only 1 - Guangzhou and 9 - Singapore are supported. Guangzhou is recommended. Singapore region is reserved for allowlisted users.
The default is 1.
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Project ID
The default is 0.
                     * @return ProjectId Project ID
The default is 0.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID
The default is 0.
                     * @param _projectId Project ID
The default is 0.
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
                     * 获取Purchase duration, with a default value of 1. The optional values are 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36
This parameter is only valid for monthly subscription.
                     * @return TimeSpan Purchase duration, with a default value of 1. The optional values are 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36
This parameter is only valid for monthly subscription.
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置Purchase duration, with a default value of 1. The optional values are 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36
This parameter is only valid for monthly subscription.
                     * @param _timeSpan Purchase duration, with a default value of 1. The optional values are 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36
This parameter is only valid for monthly subscription.
                     * 
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Whether to auto-renew. The default is not to auto-renew.
This parameter is only valid for monthly subscription.
                     * @return AutoRenewFlag Whether to auto-renew. The default is not to auto-renew.
This parameter is only valid for monthly subscription.
                     * 
                     */
                    bool GetAutoRenewFlag() const;

                    /**
                     * 设置Whether to auto-renew. The default is not to auto-renew.
This parameter is only valid for monthly subscription.
                     * @param _autoRenewFlag Whether to auto-renew. The default is not to auto-renew.
This parameter is only valid for monthly subscription.
                     * 
                     */
                    void SetAutoRenewFlag(const bool& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取This field is deprecated.
                     * @return AutoProtectOpenConfig This field is deprecated.
                     * 
                     */
                    std::string GetAutoProtectOpenConfig() const;

                    /**
                     * 设置This field is deprecated.
                     * @param _autoProtectOpenConfig This field is deprecated.
                     * 
                     */
                    void SetAutoProtectOpenConfig(const std::string& _autoProtectOpenConfig);

                    /**
                     * 判断参数 AutoProtectOpenConfig 是否已赋值
                     * @return AutoProtectOpenConfig 是否已赋值
                     * 
                     */
                    bool AutoProtectOpenConfigHasBeenSet() const;

                    /**
                     * 获取Reconfiguration Parameters
                     * @return ModifyConfig Reconfiguration Parameters
                     * 
                     */
                    OrderModifyObject GetModifyConfig() const;

                    /**
                     * 设置Reconfiguration Parameters
                     * @param _modifyConfig Reconfiguration Parameters
                     * 
                     */
                    void SetModifyConfig(const OrderModifyObject& _modifyConfig);

                    /**
                     * 判断参数 ModifyConfig 是否已赋值
                     * @return ModifyConfig 是否已赋值
                     * 
                     */
                    bool ModifyConfigHasBeenSet() const;

                private:

                    /**
                     * Tag array. Leaving it blank indicates no tags need to be bound.
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Authorization type. 0: Pro Edition-pay-as-you-go; 1: Pro Edition-monthly subscription; 2 - Ultimate Edition-monthly subscriptionThe default is 0.
                     */
                    uint64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * Authorization quantity: the number of units that need to be purchased
The default is 1.
                     */
                    uint64_t m_licenseNum;
                    bool m_licenseNumHasBeenSet;

                    /**
                     * Region of purchase order. In this case, only 1 - Guangzhou and 9 - Singapore are supported. Guangzhou is recommended. Singapore region is reserved for allowlisted users.
The default is 1.
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Project ID
The default is 0.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Purchase duration, with a default value of 1. The optional values are 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36
This parameter is only valid for monthly subscription.
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Whether to auto-renew. The default is not to auto-renew.
This parameter is only valid for monthly subscription.
                     */
                    bool m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * This field is deprecated.
                     */
                    std::string m_autoProtectOpenConfig;
                    bool m_autoProtectOpenConfigHasBeenSet;

                    /**
                     * Reconfiguration Parameters
                     */
                    OrderModifyObject m_modifyConfig;
                    bool m_modifyConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATELICENSEORDERREQUEST_H_
