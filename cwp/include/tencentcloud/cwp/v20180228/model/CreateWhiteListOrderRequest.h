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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATEWHITELISTORDERREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATEWHITELISTORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateWhiteListOrder request structure.
                */
                class CreateWhiteListOrderRequest : public AbstractModel
                {
                public:
                    CreateWhiteListOrderRequest();
                    ~CreateWhiteListOrderRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Number of authorizations (The minimum value is 1, and the maximum value is 99999.)
                     * @return LicenseNum Number of authorizations (The minimum value is 1, and the maximum value is 99999.)
                     * 
                     */
                    uint64_t GetLicenseNum() const;

                    /**
                     * 设置Number of authorizations (The minimum value is 1, and the maximum value is 99999.)
                     * @param _licenseNum Number of authorizations (The minimum value is 1, and the maximum value is 99999.)
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
                     * 获取Expiration time (The minimum value is 1.)
                     * @return Deadline Expiration time (The minimum value is 1.)
                     * 
                     */
                    uint64_t GetDeadline() const;

                    /**
                     * 设置Expiration time (The minimum value is 1.)
                     * @param _deadline Expiration time (The minimum value is 1.)
                     * 
                     */
                    void SetDeadline(const uint64_t& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取Rule name, big asset center: asset_center
                     * @return RuleName Rule name, big asset center: asset_center
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name, big asset center: asset_center
                     * @param _ruleName Rule name, big asset center: asset_center
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Order type. 1: trial; 2: free; 3: experience; 4: free SSL certificate gift; 5: free CVM
                     * @return SourceType Order type. 1: trial; 2: free; 3: experience; 4: free SSL certificate gift; 5: free CVM
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置Order type. 1: trial; 2: free; 3: experience; 4: free SSL certificate gift; 5: free CVM
                     * @param _sourceType Order type. 1: trial; 2: free; 3: experience; 4: free SSL certificate gift; 5: free CVM
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
                     * 获取Region: 1 Guangzhou; 9 Singapore. The default is 1. Do not select 9 unless necessary.
                     * @return RegionId Region: 1 Guangzhou; 9 Singapore. The default is 1. Do not select 9 unless necessary.
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置Region: 1 Guangzhou; 9 Singapore. The default is 1. Do not select 9 unless necessary.
                     * @param _regionId Region: 1 Guangzhou; 9 Singapore. The default is 1. Do not select 9 unless necessary.
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
                     * 获取Additional parameters; JSON string, including ResourceId and LicenseType.
                     * @return ExtraParam Additional parameters; JSON string, including ResourceId and LicenseType.
                     * 
                     */
                    std::string GetExtraParam() const;

                    /**
                     * 设置Additional parameters; JSON string, including ResourceId and LicenseType.
                     * @param _extraParam Additional parameters; JSON string, including ResourceId and LicenseType.
                     * 
                     */
                    void SetExtraParam(const std::string& _extraParam);

                    /**
                     * 判断参数 ExtraParam 是否已赋值
                     * @return ExtraParam 是否已赋值
                     * 
                     */
                    bool ExtraParamHasBeenSet() const;

                private:

                    /**
                     * Authorization type
                     */
                    uint64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * Number of authorizations (The minimum value is 1, and the maximum value is 99999.)
                     */
                    uint64_t m_licenseNum;
                    bool m_licenseNumHasBeenSet;

                    /**
                     * Expiration time (The minimum value is 1.)
                     */
                    uint64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * Rule name, big asset center: asset_center
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Order type. 1: trial; 2: free; 3: experience; 4: free SSL certificate gift; 5: free CVM
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Region: 1 Guangzhou; 9 Singapore. The default is 1. Do not select 9 unless necessary.
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Additional parameters; JSON string, including ResourceId and LicenseType.
                     */
                    std::string m_extraParam;
                    bool m_extraParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATEWHITELISTORDERREQUEST_H_
