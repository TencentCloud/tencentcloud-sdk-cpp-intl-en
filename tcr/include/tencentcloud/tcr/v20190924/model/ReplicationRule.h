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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONRULE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/ReplicationFilter.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * Synchronization rule
                */
                class ReplicationRule : public AbstractModel
                {
                public:
                    ReplicationRule();
                    ~ReplicationRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of synchronization rule
                     * @return Name Name of synchronization rule
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of synchronization rule
                     * @param _name Name of synchronization rule
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
                     * 获取Destination namespace
                     * @return DestNamespace Destination namespace
                     * 
                     */
                    std::string GetDestNamespace() const;

                    /**
                     * 设置Destination namespace
                     * @param _destNamespace Destination namespace
                     * 
                     */
                    void SetDestNamespace(const std::string& _destNamespace);

                    /**
                     * 判断参数 DestNamespace 是否已赋值
                     * @return DestNamespace 是否已赋值
                     * 
                     */
                    bool DestNamespaceHasBeenSet() const;

                    /**
                     * 获取Whether to override
                     * @return Override Whether to override
                     * 
                     */
                    bool GetOverride() const;

                    /**
                     * 设置Whether to override
                     * @param _override Whether to override
                     * 
                     */
                    void SetOverride(const bool& _override);

                    /**
                     * 判断参数 Override 是否已赋值
                     * @return Override 是否已赋值
                     * 
                     */
                    bool OverrideHasBeenSet() const;

                    /**
                     * 获取Synchronization filters
                     * @return Filters Synchronization filters
                     * 
                     */
                    std::vector<ReplicationFilter> GetFilters() const;

                    /**
                     * 设置Synchronization filters
                     * @param _filters Synchronization filters
                     * 
                     */
                    void SetFilters(const std::vector<ReplicationFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Name of synchronization rule
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Destination namespace
                     */
                    std::string m_destNamespace;
                    bool m_destNamespaceHasBeenSet;

                    /**
                     * Whether to override
                     */
                    bool m_override;
                    bool m_overrideHasBeenSet;

                    /**
                     * Synchronization filters
                     */
                    std::vector<ReplicationFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONRULE_H_
