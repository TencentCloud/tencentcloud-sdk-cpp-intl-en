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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_NODERESOURCE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_NODERESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Resource.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Specifications management, which includes the specifications type description.
                */
                class NodeResource : public AbstractModel
                {
                public:
                    NodeResource();
                    ~NodeResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Configuration ID.</p>
                     * @return ResourceConfigId <p>Configuration ID.</p>
                     * 
                     */
                    uint64_t GetResourceConfigId() const;

                    /**
                     * 设置<p>Configuration ID.</p>
                     * @param _resourceConfigId <p>Configuration ID.</p>
                     * 
                     */
                    void SetResourceConfigId(const uint64_t& _resourceConfigId);

                    /**
                     * 判断参数 ResourceConfigId 是否已赋值
                     * @return ResourceConfigId 是否已赋值
                     * 
                     */
                    bool ResourceConfigIdHasBeenSet() const;

                    /**
                     * 获取<p>Resource</p>
                     * @return Resource <p>Resource</p>
                     * 
                     */
                    Resource GetResource() const;

                    /**
                     * 设置<p>Resource</p>
                     * @param _resource <p>Resource</p>
                     * 
                     */
                    void SetResource(const Resource& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Update time.</p>
                     * @return UpdateTime <p>Update time.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time.</p>
                     * @param _updateTime <p>Update time.</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Whether the default configuration applies. Valid values: DEFAULT and BACKUP.</p>
                     * @return IsDefault <p>Whether the default configuration applies. Valid values: DEFAULT and BACKUP.</p>
                     * 
                     */
                    std::string GetIsDefault() const;

                    /**
                     * 设置<p>Whether the default configuration applies. Valid values: DEFAULT and BACKUP.</p>
                     * @param _isDefault <p>Whether the default configuration applies. Valid values: DEFAULT and BACKUP.</p>
                     * 
                     */
                    void SetIsDefault(const std::string& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取<p>Remaining of this type.</p>
                     * @return MaxResourceNum <p>Remaining of this type.</p>
                     * 
                     */
                    uint64_t GetMaxResourceNum() const;

                    /**
                     * 设置<p>Remaining of this type.</p>
                     * @param _maxResourceNum <p>Remaining of this type.</p>
                     * 
                     */
                    void SetMaxResourceNum(const uint64_t& _maxResourceNum);

                    /**
                     * 判断参数 MaxResourceNum 是否已赋值
                     * @return MaxResourceNum 是否已赋值
                     * 
                     */
                    bool MaxResourceNumHasBeenSet() const;

                    /**
                     * 获取<p>Supported committed use duration.</p>
                     * @return PrepaidUnderwritePeriods <p>Supported committed use duration.</p>
                     * 
                     */
                    std::vector<int64_t> GetPrepaidUnderwritePeriods() const;

                    /**
                     * 设置<p>Supported committed use duration.</p>
                     * @param _prepaidUnderwritePeriods <p>Supported committed use duration.</p>
                     * 
                     */
                    void SetPrepaidUnderwritePeriods(const std::vector<int64_t>& _prepaidUnderwritePeriods);

                    /**
                     * 判断参数 PrepaidUnderwritePeriods 是否已赋值
                     * @return PrepaidUnderwritePeriods 是否已赋值
                     * 
                     */
                    bool PrepaidUnderwritePeriodsHasBeenSet() const;

                    /**
                     * 获取<p>Number of quotas.</p>
                     * @return QuotaNum <p>Number of quotas.</p>
                     * 
                     */
                    int64_t GetQuotaNum() const;

                    /**
                     * 设置<p>Number of quotas.</p>
                     * @param _quotaNum <p>Number of quotas.</p>
                     * 
                     */
                    void SetQuotaNum(const int64_t& _quotaNum);

                    /**
                     * 判断参数 QuotaNum 是否已赋值
                     * @return QuotaNum 是否已赋值
                     * 
                     */
                    bool QuotaNumHasBeenSet() const;

                    /**
                     * 获取<p>Quota unit.</p>
                     * @return QuotaUnit <p>Quota unit.</p>
                     * 
                     */
                    std::string GetQuotaUnit() const;

                    /**
                     * 设置<p>Quota unit.</p>
                     * @param _quotaUnit <p>Quota unit.</p>
                     * 
                     */
                    void SetQuotaUnit(const std::string& _quotaUnit);

                    /**
                     * 判断参数 QuotaUnit 是否已赋值
                     * @return QuotaUnit 是否已赋值
                     * 
                     */
                    bool QuotaUnitHasBeenSet() const;

                private:

                    /**
                     * <p>Configuration ID.</p>
                     */
                    uint64_t m_resourceConfigId;
                    bool m_resourceConfigIdHasBeenSet;

                    /**
                     * <p>Resource</p>
                     */
                    Resource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Whether the default configuration applies. Valid values: DEFAULT and BACKUP.</p>
                     */
                    std::string m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * <p>Remaining of this type.</p>
                     */
                    uint64_t m_maxResourceNum;
                    bool m_maxResourceNumHasBeenSet;

                    /**
                     * <p>Supported committed use duration.</p>
                     */
                    std::vector<int64_t> m_prepaidUnderwritePeriods;
                    bool m_prepaidUnderwritePeriodsHasBeenSet;

                    /**
                     * <p>Number of quotas.</p>
                     */
                    int64_t m_quotaNum;
                    bool m_quotaNumHasBeenSet;

                    /**
                     * <p>Quota unit.</p>
                     */
                    std::string m_quotaUnit;
                    bool m_quotaUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODERESOURCE_H_
