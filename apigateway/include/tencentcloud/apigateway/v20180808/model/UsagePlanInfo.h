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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/UsagePlanBindEnvironment.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Usage plan details.
                */
                class UsagePlanInfo : public AbstractModel
                {
                public:
                    UsagePlanInfo();
                    ~UsagePlanInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique usage plan ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UsagePlanId Unique usage plan ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUsagePlanId() const;

                    /**
                     * 设置Unique usage plan ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _usagePlanId Unique usage plan ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUsagePlanId(const std::string& _usagePlanId);

                    /**
                     * 判断参数 UsagePlanId 是否已赋值
                     * @return UsagePlanId 是否已赋值
                     * 
                     */
                    bool UsagePlanIdHasBeenSet() const;

                    /**
                     * 获取Usage plan name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UsagePlanName Usage plan name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUsagePlanName() const;

                    /**
                     * 设置Usage plan name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _usagePlanName Usage plan name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUsagePlanName(const std::string& _usagePlanName);

                    /**
                     * 判断参数 UsagePlanName 是否已赋值
                     * @return UsagePlanName 是否已赋值
                     * 
                     */
                    bool UsagePlanNameHasBeenSet() const;

                    /**
                     * 获取Usage plan description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UsagePlanDesc Usage plan description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUsagePlanDesc() const;

                    /**
                     * 设置Usage plan description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _usagePlanDesc Usage plan description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUsagePlanDesc(const std::string& _usagePlanDesc);

                    /**
                     * 判断参数 UsagePlanDesc 是否已赋值
                     * @return UsagePlanDesc 是否已赋值
                     * 
                     */
                    bool UsagePlanDescHasBeenSet() const;

                    /**
                     * 获取Number of initialization calls.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InitQuota Number of initialization calls.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetInitQuota() const;

                    /**
                     * 设置Number of initialization calls.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _initQuota Number of initialization calls.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInitQuota(const int64_t& _initQuota);

                    /**
                     * 判断参数 InitQuota 是否已赋值
                     * @return InitQuota 是否已赋值
                     * 
                     */
                    bool InitQuotaHasBeenSet() const;

                    /**
                     * 获取Limit of requests per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxRequestNumPreSec Limit of requests per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxRequestNumPreSec() const;

                    /**
                     * 设置Limit of requests per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _maxRequestNumPreSec Limit of requests per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxRequestNumPreSec(const int64_t& _maxRequestNumPreSec);

                    /**
                     * 判断参数 MaxRequestNumPreSec 是否已赋值
                     * @return MaxRequestNumPreSec 是否已赋值
                     * 
                     */
                    bool MaxRequestNumPreSecHasBeenSet() const;

                    /**
                     * 获取Maximum number of calls.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxRequestNum Maximum number of calls.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxRequestNum() const;

                    /**
                     * 设置Maximum number of calls.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _maxRequestNum Maximum number of calls.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxRequestNum(const int64_t& _maxRequestNum);

                    /**
                     * 判断参数 MaxRequestNum 是否已赋值
                     * @return MaxRequestNum 是否已赋值
                     * 
                     */
                    bool MaxRequestNumHasBeenSet() const;

                    /**
                     * 获取Whether to hide.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsHide Whether to hide.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsHide() const;

                    /**
                     * 设置Whether to hide.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _isHide Whether to hide.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsHide(const int64_t& _isHide);

                    /**
                     * 判断参数 IsHide 是否已赋值
                     * @return IsHide 是否已赋值
                     * 
                     */
                    bool IsHideHasBeenSet() const;

                    /**
                     * 获取Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreatedTime Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _createdTime Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ModifiedTime Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _modifiedTime Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取Number of bound keys.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BindSecretIdTotalCount Number of bound keys.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBindSecretIdTotalCount() const;

                    /**
                     * 设置Number of bound keys.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _bindSecretIdTotalCount Number of bound keys.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBindSecretIdTotalCount(const int64_t& _bindSecretIdTotalCount);

                    /**
                     * 判断参数 BindSecretIdTotalCount 是否已赋值
                     * @return BindSecretIdTotalCount 是否已赋值
                     * 
                     */
                    bool BindSecretIdTotalCountHasBeenSet() const;

                    /**
                     * 获取Details of bound keys.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BindSecretIds Details of bound keys.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetBindSecretIds() const;

                    /**
                     * 设置Details of bound keys.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _bindSecretIds Details of bound keys.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBindSecretIds(const std::vector<std::string>& _bindSecretIds);

                    /**
                     * 判断参数 BindSecretIds 是否已赋值
                     * @return BindSecretIds 是否已赋值
                     * 
                     */
                    bool BindSecretIdsHasBeenSet() const;

                    /**
                     * 获取Number of bound environments.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BindEnvironmentTotalCount Number of bound environments.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBindEnvironmentTotalCount() const;

                    /**
                     * 设置Number of bound environments.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _bindEnvironmentTotalCount Number of bound environments.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBindEnvironmentTotalCount(const int64_t& _bindEnvironmentTotalCount);

                    /**
                     * 判断参数 BindEnvironmentTotalCount 是否已赋值
                     * @return BindEnvironmentTotalCount 是否已赋值
                     * 
                     */
                    bool BindEnvironmentTotalCountHasBeenSet() const;

                    /**
                     * 获取Details of bound environments.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BindEnvironments Details of bound environments.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<UsagePlanBindEnvironment> GetBindEnvironments() const;

                    /**
                     * 设置Details of bound environments.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _bindEnvironments Details of bound environments.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBindEnvironments(const std::vector<UsagePlanBindEnvironment>& _bindEnvironments);

                    /**
                     * 判断参数 BindEnvironments 是否已赋值
                     * @return BindEnvironments 是否已赋值
                     * 
                     */
                    bool BindEnvironmentsHasBeenSet() const;

                private:

                    /**
                     * Unique usage plan ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_usagePlanId;
                    bool m_usagePlanIdHasBeenSet;

                    /**
                     * Usage plan name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_usagePlanName;
                    bool m_usagePlanNameHasBeenSet;

                    /**
                     * Usage plan description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_usagePlanDesc;
                    bool m_usagePlanDescHasBeenSet;

                    /**
                     * Number of initialization calls.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_initQuota;
                    bool m_initQuotaHasBeenSet;

                    /**
                     * Limit of requests per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxRequestNumPreSec;
                    bool m_maxRequestNumPreSecHasBeenSet;

                    /**
                     * Maximum number of calls.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxRequestNum;
                    bool m_maxRequestNumHasBeenSet;

                    /**
                     * Whether to hide.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isHide;
                    bool m_isHideHasBeenSet;

                    /**
                     * Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * Number of bound keys.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_bindSecretIdTotalCount;
                    bool m_bindSecretIdTotalCountHasBeenSet;

                    /**
                     * Details of bound keys.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_bindSecretIds;
                    bool m_bindSecretIdsHasBeenSet;

                    /**
                     * Number of bound environments.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_bindEnvironmentTotalCount;
                    bool m_bindEnvironmentTotalCountHasBeenSet;

                    /**
                     * Details of bound environments.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UsagePlanBindEnvironment> m_bindEnvironments;
                    bool m_bindEnvironmentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANINFO_H_
