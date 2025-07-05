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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEFIELDCONFIG_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEFIELDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/FieldConfig.h>
#include <tencentcloud/wedata/v20210820/model/TableConfig.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Rule Variable Replacement
                */
                class RuleFieldConfig : public AbstractModel
                {
                public:
                    RuleFieldConfig();
                    ~RuleFieldConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Where Variable
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WhereConfig Where Variable
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<FieldConfig> GetWhereConfig() const;

                    /**
                     * 设置Where Variable
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _whereConfig Where Variable
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWhereConfig(const std::vector<FieldConfig>& _whereConfig);

                    /**
                     * 判断参数 WhereConfig 是否已赋值
                     * @return WhereConfig 是否已赋值
                     * 
                     */
                    bool WhereConfigHasBeenSet() const;

                    /**
                     * 获取Database Table Variable
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableConfig Database Table Variable
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<TableConfig> GetTableConfig() const;

                    /**
                     * 设置Database Table Variable
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableConfig Database Table Variable
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTableConfig(const std::vector<TableConfig>& _tableConfig);

                    /**
                     * 判断参数 TableConfig 是否已赋值
                     * @return TableConfig 是否已赋值
                     * 
                     */
                    bool TableConfigHasBeenSet() const;

                private:

                    /**
                     * Where Variable
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<FieldConfig> m_whereConfig;
                    bool m_whereConfigHasBeenSet;

                    /**
                     * Database Table Variable
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<TableConfig> m_tableConfig;
                    bool m_tableConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEFIELDCONFIG_H_
