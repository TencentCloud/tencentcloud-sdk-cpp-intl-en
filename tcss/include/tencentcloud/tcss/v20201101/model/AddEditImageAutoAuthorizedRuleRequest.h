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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ADDEDITIMAGEAUTOAUTHORIZEDRULEREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ADDEDITIMAGEAUTOAUTHORIZEDRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AssetFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * AddEditImageAutoAuthorizedRule request structure.
                */
                class AddEditImageAutoAuthorizedRuleRequest : public AbstractModel
                {
                public:
                    AddEditImageAutoAuthorizedRuleRequest();
                    ~AddEditImageAutoAuthorizedRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Scope. Valid values: `MANUAL` (specified servers); `ALL` (all images).
                     * @return RangeType Scope. Valid values: `MANUAL` (specified servers); `ALL` (all images).
                     * 
                     */
                    std::string GetRangeType() const;

                    /**
                     * 设置Scope. Valid values: `MANUAL` (specified servers); `ALL` (all images).
                     * @param _rangeType Scope. Valid values: `MANUAL` (specified servers); `ALL` (all images).
                     * 
                     */
                    void SetRangeType(const std::string& _rangeType);

                    /**
                     * 判断参数 RangeType 是否已赋值
                     * @return RangeType 是否已赋值
                     * 
                     */
                    bool RangeTypeHasBeenSet() const;

                    /**
                     * 获取Maximum number of image licenses per day. `0`: Unlimited.
                     * @return MaxDailyCount Maximum number of image licenses per day. `0`: Unlimited.
                     * 
                     */
                    int64_t GetMaxDailyCount() const;

                    /**
                     * 设置Maximum number of image licenses per day. `0`: Unlimited.
                     * @param _maxDailyCount Maximum number of image licenses per day. `0`: Unlimited.
                     * 
                     */
                    void SetMaxDailyCount(const int64_t& _maxDailyCount);

                    /**
                     * 判断参数 MaxDailyCount 是否已赋值
                     * @return MaxDailyCount 是否已赋值
                     * 
                     */
                    bool MaxDailyCountHasBeenSet() const;

                    /**
                     * 获取Whether the rule takes effect. Valid values: `0` (no); `1` (yes).
                     * @return IsEnabled Whether the rule takes effect. Valid values: `0` (no); `1` (yes).
                     * 
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 设置Whether the rule takes effect. Valid values: `0` (no); `1` (yes).
                     * @param _isEnabled Whether the rule takes effect. Valid values: `0` (no); `1` (yes).
                     * 
                     */
                    void SetIsEnabled(const int64_t& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取IDs of specified servers. This parameter is required when the scope is `MANUAL` and `HostIdFilters` is empty.
                     * @return HostIdSet IDs of specified servers. This parameter is required when the scope is `MANUAL` and `HostIdFilters` is empty.
                     * 
                     */
                    std::vector<std::string> GetHostIdSet() const;

                    /**
                     * 设置IDs of specified servers. This parameter is required when the scope is `MANUAL` and `HostIdFilters` is empty.
                     * @param _hostIdSet IDs of specified servers. This parameter is required when the scope is `MANUAL` and `HostIdFilters` is empty.
                     * 
                     */
                    void SetHostIdSet(const std::vector<std::string>& _hostIdSet);

                    /**
                     * 判断参数 HostIdSet 是否已赋值
                     * @return HostIdSet 是否已赋值
                     * 
                     */
                    bool HostIdSetHasBeenSet() const;

                    /**
                     * 获取Rule ID, which is required during editing.
                     * @return RuleId Rule ID, which is required during editing.
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置Rule ID, which is required during editing.
                     * @param _ruleId Rule ID, which is required during editing.
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Filter. This parameter is required when the scope is `MANUAL` and `HostIdSet` is empty.
                     * @return HostIdFilters Filter. This parameter is required when the scope is `MANUAL` and `HostIdSet` is empty.
                     * 
                     */
                    std::vector<AssetFilters> GetHostIdFilters() const;

                    /**
                     * 设置Filter. This parameter is required when the scope is `MANUAL` and `HostIdSet` is empty.
                     * @param _hostIdFilters Filter. This parameter is required when the scope is `MANUAL` and `HostIdSet` is empty.
                     * 
                     */
                    void SetHostIdFilters(const std::vector<AssetFilters>& _hostIdFilters);

                    /**
                     * 判断参数 HostIdFilters 是否已赋值
                     * @return HostIdFilters 是否已赋值
                     * 
                     */
                    bool HostIdFiltersHasBeenSet() const;

                    /**
                     * 获取Specified server IDs to be excluded
                     * @return ExcludeHostIdSet Specified server IDs to be excluded
                     * 
                     */
                    std::vector<std::string> GetExcludeHostIdSet() const;

                    /**
                     * 设置Specified server IDs to be excluded
                     * @param _excludeHostIdSet Specified server IDs to be excluded
                     * 
                     */
                    void SetExcludeHostIdSet(const std::vector<std::string>& _excludeHostIdSet);

                    /**
                     * 判断参数 ExcludeHostIdSet 是否已赋值
                     * @return ExcludeHostIdSet 是否已赋值
                     * 
                     */
                    bool ExcludeHostIdSetHasBeenSet() const;

                private:

                    /**
                     * Scope. Valid values: `MANUAL` (specified servers); `ALL` (all images).
                     */
                    std::string m_rangeType;
                    bool m_rangeTypeHasBeenSet;

                    /**
                     * Maximum number of image licenses per day. `0`: Unlimited.
                     */
                    int64_t m_maxDailyCount;
                    bool m_maxDailyCountHasBeenSet;

                    /**
                     * Whether the rule takes effect. Valid values: `0` (no); `1` (yes).
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * IDs of specified servers. This parameter is required when the scope is `MANUAL` and `HostIdFilters` is empty.
                     */
                    std::vector<std::string> m_hostIdSet;
                    bool m_hostIdSetHasBeenSet;

                    /**
                     * Rule ID, which is required during editing.
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Filter. This parameter is required when the scope is `MANUAL` and `HostIdSet` is empty.
                     */
                    std::vector<AssetFilters> m_hostIdFilters;
                    bool m_hostIdFiltersHasBeenSet;

                    /**
                     * Specified server IDs to be excluded
                     */
                    std::vector<std::string> m_excludeHostIdSet;
                    bool m_excludeHostIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ADDEDITIMAGEAUTOAUTHORIZEDRULEREQUEST_H_
