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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DMSSOURCEDATABASEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DMSSOURCEDATABASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Source database description
                */
                class DMSSourceDatabaseInfo : public AbstractModel
                {
                public:
                    DMSSourceDatabaseInfo();
                    ~DMSSourceDatabaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourceDatabaseName Source database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSourceDatabaseName() const;

                    /**
                     * 设置Source database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourceDatabaseName Source database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceDatabaseName(const std::string& _sourceDatabaseName);

                    /**
                     * 判断参数 SourceDatabaseName 是否已赋值
                     * @return SourceDatabaseName 是否已赋值
                     * 
                     */
                    bool SourceDatabaseNameHasBeenSet() const;

                    /**
                     * 获取Array of table names in the source database
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourceTableNameList Array of table names in the source database
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSourceTableNameList() const;

                    /**
                     * 设置Array of table names in the source database
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourceTableNameList Array of table names in the source database
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceTableNameList(const std::vector<std::string>& _sourceTableNameList);

                    /**
                     * 判断参数 SourceTableNameList 是否已赋值
                     * @return SourceTableNameList 是否已赋值
                     * 
                     */
                    bool SourceTableNameListHasBeenSet() const;

                private:

                    /**
                     * Source database name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sourceDatabaseName;
                    bool m_sourceDatabaseNameHasBeenSet;

                    /**
                     * Array of table names in the source database
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_sourceTableNameList;
                    bool m_sourceTableNameListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DMSSOURCEDATABASEINFO_H_
