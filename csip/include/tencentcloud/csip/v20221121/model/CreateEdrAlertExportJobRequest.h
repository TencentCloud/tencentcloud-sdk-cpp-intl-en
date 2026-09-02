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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEEDRALERTEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEEDRALERTEXPORTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/EDRFilter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateEdrAlertExportJob request structure.
                */
                class CreateEdrAlertExportJobRequest : public AbstractModel
                {
                public:
                    CreateEdrAlertExportJobRequest();
                    ~CreateEdrAlertExportJobRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>PolicyType - int - required: no - policy typePolicyName - string - required: no - Policy NameDomain - string - required: no - Domain name (URL-encode the Domain name first, then base64-encode it)PolicyAction - int - required: no - policy actionIsEnabled - int - required: no - whether it takes effect</p>
                     * @return Filters <p>PolicyType - int - required: no - policy typePolicyName - string - required: no - Policy NameDomain - string - required: no - Domain name (URL-encode the Domain name first, then base64-encode it)PolicyAction - int - required: no - policy actionIsEnabled - int - required: no - whether it takes effect</p>
                     * 
                     */
                    std::vector<EDRFilter> GetFilters() const;

                    /**
                     * 设置<p>PolicyType - int - required: no - policy typePolicyName - string - required: no - Policy NameDomain - string - required: no - Domain name (URL-encode the Domain name first, then base64-encode it)PolicyAction - int - required: no - policy actionIsEnabled - int - required: no - whether it takes effect</p>
                     * @param _filters <p>PolicyType - int - required: no - policy typePolicyName - string - required: no - Policy NameDomain - string - required: no - Domain name (URL-encode the Domain name first, then base64-encode it)PolicyAction - int - required: no - policy actionIsEnabled - int - required: no - whether it takes effect</p>
                     * 
                     */
                    void SetFilters(const std::vector<EDRFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Limit entries. Default: 10. Maximum: 100</p>
                     * @return Limit <p>Limit entries. Default: 10. Maximum: 100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Limit entries. Default: 10. Maximum: 100</p>
                     * @param _limit <p>Limit entries. Default: 10. Maximum: 100</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>Offset. Default value: 0.</p>
                     * @return Offset <p>Offset. Default value: 0.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Offset. Default value: 0.</p>
                     * @param _offset <p>Offset. Default value: 0.</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Sorting method: [ASC: Ascending | DESC: Descending]</p>
                     * @return Order <p>Sorting method: [ASC: Ascending | DESC: Descending]</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>Sorting method: [ASC: Ascending | DESC: Descending]</p>
                     * @param _order <p>Sorting method: [ASC: Ascending | DESC: Descending]</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>Optional sorting column: [LatestDetectTime]</p>
                     * @return By <p>Optional sorting column: [LatestDetectTime]</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>Optional sorting column: [LatestDetectTime]</p>
                     * @param _by <p>Optional sorting column: [LatestDetectTime]</p>
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取<p>Custom task name, allowing duplicates. If empty, a default name alert_{appid}_{timestamp} will be automatically generated (for example, alert_1234567890_20260501114522). It supports only numbers, letters, underscores, hyphens, and Chinese, up to 100 characters (counted by character/rune, with each Chinese character counted as 1). If validation fails, InvalidParameter will be returned (copywriting: TextEdrExportJobNameInvalid).</p>
                     * @return JobName <p>Custom task name, allowing duplicates. If empty, a default name alert_{appid}_{timestamp} will be automatically generated (for example, alert_1234567890_20260501114522). It supports only numbers, letters, underscores, hyphens, and Chinese, up to 100 characters (counted by character/rune, with each Chinese character counted as 1). If validation fails, InvalidParameter will be returned (copywriting: TextEdrExportJobNameInvalid).</p>
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置<p>Custom task name, allowing duplicates. If empty, a default name alert_{appid}_{timestamp} will be automatically generated (for example, alert_1234567890_20260501114522). It supports only numbers, letters, underscores, hyphens, and Chinese, up to 100 characters (counted by character/rune, with each Chinese character counted as 1). If validation fails, InvalidParameter will be returned (copywriting: TextEdrExportJobNameInvalid).</p>
                     * @param _jobName <p>Custom task name, allowing duplicates. If empty, a default name alert_{appid}_{timestamp} will be automatically generated (for example, alert_1234567890_20260501114522). It supports only numbers, letters, underscores, hyphens, and Chinese, up to 100 characters (counted by character/rune, with each Chinese character counted as 1). If validation fails, InvalidParameter will be returned (copywriting: TextEdrExportJobNameInvalid).</p>
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>PolicyType - int - required: no - policy typePolicyName - string - required: no - Policy NameDomain - string - required: no - Domain name (URL-encode the Domain name first, then base64-encode it)PolicyAction - int - required: no - policy actionIsEnabled - int - required: no - whether it takes effect</p>
                     */
                    std::vector<EDRFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Limit entries. Default: 10. Maximum: 100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Offset. Default value: 0.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Sorting method: [ASC: Ascending | DESC: Descending]</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Optional sorting column: [LatestDetectTime]</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * <p>Custom task name, allowing duplicates. If empty, a default name alert_{appid}_{timestamp} will be automatically generated (for example, alert_1234567890_20260501114522). It supports only numbers, letters, underscores, hyphens, and Chinese, up to 100 characters (counted by character/rune, with each Chinese character counted as 1). If validation fails, InvalidParameter will be returned (copywriting: TextEdrExportJobNameInvalid).</p>
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEEDRALERTEXPORTJOBREQUEST_H_
