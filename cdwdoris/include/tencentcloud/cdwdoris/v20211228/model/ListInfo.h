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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_LISTINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_LISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * List type partition information
                */
                class ListInfo : public AbstractModel
                {
                public:
                    ListInfo();
                    ~ListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Partition name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PartitionName Partition name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPartitionName() const;

                    /**
                     * 设置Partition name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _partitionName Partition name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPartitionName(const std::string& _partitionName);

                    /**
                     * 判断参数 PartitionName 是否已赋值
                     * @return PartitionName 是否已赋值
                     * 
                     */
                    bool PartitionNameHasBeenSet() const;

                    /**
                     * 获取Enumeration values of each partition column

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnumValues Enumeration values of each partition column

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetEnumValues() const;

                    /**
                     * 设置Enumeration values of each partition column

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enumValues Enumeration values of each partition column

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnumValues(const std::vector<std::string>& _enumValues);

                    /**
                     * 判断参数 EnumValues 是否已赋值
                     * @return EnumValues 是否已赋值
                     * 
                     */
                    bool EnumValuesHasBeenSet() const;

                private:

                    /**
                     * Partition name

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_partitionName;
                    bool m_partitionNameHasBeenSet;

                    /**
                     * Enumeration values of each partition column

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_enumValues;
                    bool m_enumValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_LISTINFO_H_
