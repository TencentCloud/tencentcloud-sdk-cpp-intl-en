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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_AUDITINSTANCEFILTERS_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_AUDITINSTANCEFILTERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Filter conditions for querying audit instances.
                */
                class AuditInstanceFilters : public AbstractModel
                {
                public:
                    AuditInstanceFilters();
                    ~AuditInstanceFilters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filter condition name. Valid values: InstanceId - Instance ID, InstanceName - Instance name, ProjectId - Project ID, TagKey - Tag key, Tag - Tag (using a vertical bar as separator, for example: TagKey|Tagvalue).
                     * @return Name Filter condition name. Valid values: InstanceId - Instance ID, InstanceName - Instance name, ProjectId - Project ID, TagKey - Tag key, Tag - Tag (using a vertical bar as separator, for example: TagKey|Tagvalue).
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Filter condition name. Valid values: InstanceId - Instance ID, InstanceName - Instance name, ProjectId - Project ID, TagKey - Tag key, Tag - Tag (using a vertical bar as separator, for example: TagKey|Tagvalue).
                     * @param _name Filter condition name. Valid values: InstanceId - Instance ID, InstanceName - Instance name, ProjectId - Project ID, TagKey - Tag key, Tag - Tag (using a vertical bar as separator, for example: TagKey|Tagvalue).
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
                     * 获取true indicates exact matching; false indicates fuzzy matching.
                     * @return ExactMatch true indicates exact matching; false indicates fuzzy matching.
                     * 
                     */
                    bool GetExactMatch() const;

                    /**
                     * 设置true indicates exact matching; false indicates fuzzy matching.
                     * @param _exactMatch true indicates exact matching; false indicates fuzzy matching.
                     * 
                     */
                    void SetExactMatch(const bool& _exactMatch);

                    /**
                     * 判断参数 ExactMatch 是否已赋值
                     * @return ExactMatch 是否已赋值
                     * 
                     */
                    bool ExactMatchHasBeenSet() const;

                    /**
                     * 获取Filter value.
                     * @return Values Filter value.
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Filter value.
                     * @param _values Filter value.
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * Filter condition name. Valid values: InstanceId - Instance ID, InstanceName - Instance name, ProjectId - Project ID, TagKey - Tag key, Tag - Tag (using a vertical bar as separator, for example: TagKey|Tagvalue).
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * true indicates exact matching; false indicates fuzzy matching.
                     */
                    bool m_exactMatch;
                    bool m_exactMatchHasBeenSet;

                    /**
                     * Filter value.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_AUDITINSTANCEFILTERS_H_
