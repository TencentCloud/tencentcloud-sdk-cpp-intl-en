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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEBASELINEAGGREGATEDITEMEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEBASELINEAGGREGATEDITEMEXPORTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateBaselineAggregatedItemExportJob request structure.
                */
                class CreateBaselineAggregatedItemExportJobRequest : public AbstractModel
                {
                public:
                    CreateBaselineAggregatedItemExportJobRequest();
                    ~CreateBaselineAggregatedItemExportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Baseline policy ID list (you can pass multiple entries at the same time for federated statistics).</p>
                     * @return PolicyID <p>Baseline policy ID list (you can pass multiple entries at the same time for federated statistics).</p>
                     * 
                     */
                    std::vector<uint64_t> GetPolicyID() const;

                    /**
                     * 设置<p>Baseline policy ID list (you can pass multiple entries at the same time for federated statistics).</p>
                     * @param _policyID <p>Baseline policy ID list (you can pass multiple entries at the same time for federated statistics).</p>
                     * 
                     */
                    void SetPolicyID(const std::vector<uint64_t>& _policyID);

                    /**
                     * 判断参数 PolicyID 是否已赋值
                     * @return PolicyID 是否已赋值
                     * 
                     */
                    bool PolicyIDHasBeenSet() const;

                    /**
                     * 获取<p>Baseline system parent category ID.</p>
                     * @return ParentCategoryID <p>Baseline system parent category ID.</p>
                     * 
                     */
                    uint64_t GetParentCategoryID() const;

                    /**
                     * 设置<p>Baseline system parent category ID.</p>
                     * @param _parentCategoryID <p>Baseline system parent category ID.</p>
                     * 
                     */
                    void SetParentCategoryID(const uint64_t& _parentCategoryID);

                    /**
                     * 判断参数 ParentCategoryID 是否已赋值
                     * @return ParentCategoryID 是否已赋值
                     * 
                     */
                    bool ParentCategoryIDHasBeenSet() const;

                    /**
                     * 获取<p>Baseline subcategory ID.</p>
                     * @return CategoryID <p>Baseline subcategory ID.</p>
                     * 
                     */
                    uint64_t GetCategoryID() const;

                    /**
                     * 设置<p>Baseline subcategory ID.</p>
                     * @param _categoryID <p>Baseline subcategory ID.</p>
                     * 
                     */
                    void SetCategoryID(const uint64_t& _categoryID);

                    /**
                     * 判断参数 CategoryID 是否已赋值
                     * @return CategoryID 是否已赋值
                     * 
                     */
                    bool CategoryIDHasBeenSet() const;

                    /**
                     * 获取<p>Export task name. If not specified, it will be automatically generated.</p>
                     * @return Name <p>Export task name. If not specified, it will be automatically generated.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Export task name. If not specified, it will be automatically generated.</p>
                     * @param _name <p>Export task name. If not specified, it will be automatically generated.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Export type. Default value: RISK.<br>Enumeration values:<br>STATISTIC: export statistics<br>RISK: export risk details</p>
                     * @return ExportType <p>Export type. Default value: RISK.<br>Enumeration values:<br>STATISTIC: export statistics<br>RISK: export risk details</p>
                     * 
                     */
                    std::string GetExportType() const;

                    /**
                     * 设置<p>Export type. Default value: RISK.<br>Enumeration values:<br>STATISTIC: export statistics<br>RISK: export risk details</p>
                     * @param _exportType <p>Export type. Default value: RISK.<br>Enumeration values:<br>STATISTIC: export statistics<br>RISK: export risk details</p>
                     * 
                     */
                    void SetExportType(const std::string& _exportType);

                    /**
                     * 判断参数 ExportType 是否已赋值
                     * @return ExportType 是否已赋值
                     * 
                     */
                    bool ExportTypeHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Universal Filter Criteria. Supported Name: ResultStatus (pass status: PASS/NOT_PASS), Name (detection item name, fuzzy search), RiskLevel (risk level: CRITICAL/HIGH/MEDIUM/LOW), PolicyName (associated baseline/policy name, fuzzy search).</p>
                     * @return Filters <p>Universal Filter Criteria. Supported Name: ResultStatus (pass status: PASS/NOT_PASS), Name (detection item name, fuzzy search), RiskLevel (risk level: CRITICAL/HIGH/MEDIUM/LOW), PolicyName (associated baseline/policy name, fuzzy search).</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>Universal Filter Criteria. Supported Name: ResultStatus (pass status: PASS/NOT_PASS), Name (detection item name, fuzzy search), RiskLevel (risk level: CRITICAL/HIGH/MEDIUM/LOW), PolicyName (associated baseline/policy name, fuzzy search).</p>
                     * @param _filters <p>Universal Filter Criteria. Supported Name: ResultStatus (pass status: PASS/NOT_PASS), Name (detection item name, fuzzy search), RiskLevel (risk level: CRITICAL/HIGH/MEDIUM/LOW), PolicyName (associated baseline/policy name, fuzzy search).</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Deprecated.</p>
                     * @return CheckAssetType <p>Deprecated.</p>
                     * 
                     */
                    std::string GetCheckAssetType() const;

                    /**
                     * 设置<p>Deprecated.</p>
                     * @param _checkAssetType <p>Deprecated.</p>
                     * 
                     */
                    void SetCheckAssetType(const std::string& _checkAssetType);

                    /**
                     * 判断参数 CheckAssetType 是否已赋值
                     * @return CheckAssetType 是否已赋值
                     * 
                     */
                    bool CheckAssetTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Baseline policy ID list (you can pass multiple entries at the same time for federated statistics).</p>
                     */
                    std::vector<uint64_t> m_policyID;
                    bool m_policyIDHasBeenSet;

                    /**
                     * <p>Baseline system parent category ID.</p>
                     */
                    uint64_t m_parentCategoryID;
                    bool m_parentCategoryIDHasBeenSet;

                    /**
                     * <p>Baseline subcategory ID.</p>
                     */
                    uint64_t m_categoryID;
                    bool m_categoryIDHasBeenSet;

                    /**
                     * <p>Export task name. If not specified, it will be automatically generated.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Export type. Default value: RISK.<br>Enumeration values:<br>STATISTIC: export statistics<br>RISK: export risk details</p>
                     */
                    std::string m_exportType;
                    bool m_exportTypeHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Universal Filter Criteria. Supported Name: ResultStatus (pass status: PASS/NOT_PASS), Name (detection item name, fuzzy search), RiskLevel (risk level: CRITICAL/HIGH/MEDIUM/LOW), PolicyName (associated baseline/policy name, fuzzy search).</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Deprecated.</p>
                     */
                    std::string m_checkAssetType;
                    bool m_checkAssetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEBASELINEAGGREGATEDITEMEXPORTJOBREQUEST_H_
