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
                * Specifications management, which includes specifications type descriptions.
                */
                class NodeResource : public AbstractModel
                {
                public:
                    NodeResource();
                    ~NodeResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration ID.
                     * @return ResourceConfigId Configuration ID.
                     * 
                     */
                    uint64_t GetResourceConfigId() const;

                    /**
                     * 设置Configuration ID.
                     * @param _resourceConfigId Configuration ID.
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
                     * 获取Resource
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Resource Resource
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Resource GetResource() const;

                    /**
                     * 设置Resource
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resource Resource
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
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
                     * 获取Update time.
                     * @return UpdateTime Update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.
                     * @param _updateTime Update time.
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
                     * 获取Whether default configuration applies, DEFAULT or BACKUP.
                     * @return IsDefault Whether default configuration applies, DEFAULT or BACKUP.
                     * 
                     */
                    std::string GetIsDefault() const;

                    /**
                     * 设置Whether default configuration applies, DEFAULT or BACKUP.
                     * @param _isDefault Whether default configuration applies, DEFAULT or BACKUP.
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
                     * 获取Remaining of this type.
                     * @return MaxResourceNum Remaining of this type.
                     * 
                     */
                    uint64_t GetMaxResourceNum() const;

                    /**
                     * 设置Remaining of this type.
                     * @param _maxResourceNum Remaining of this type.
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
                     * 获取Supported committed use duration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PrepaidUnderwritePeriods Supported committed use duration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetPrepaidUnderwritePeriods() const;

                    /**
                     * 设置Supported committed use duration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _prepaidUnderwritePeriods Supported committed use duration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPrepaidUnderwritePeriods(const std::vector<int64_t>& _prepaidUnderwritePeriods);

                    /**
                     * 判断参数 PrepaidUnderwritePeriods 是否已赋值
                     * @return PrepaidUnderwritePeriods 是否已赋值
                     * 
                     */
                    bool PrepaidUnderwritePeriodsHasBeenSet() const;

                private:

                    /**
                     * Configuration ID.
                     */
                    uint64_t m_resourceConfigId;
                    bool m_resourceConfigIdHasBeenSet;

                    /**
                     * Resource
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Resource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Whether default configuration applies, DEFAULT or BACKUP.
                     */
                    std::string m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Remaining of this type.
                     */
                    uint64_t m_maxResourceNum;
                    bool m_maxResourceNumHasBeenSet;

                    /**
                     * Supported committed use duration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_prepaidUnderwritePeriods;
                    bool m_prepaidUnderwritePeriodsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODERESOURCE_H_
