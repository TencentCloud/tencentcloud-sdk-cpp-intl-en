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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_SKIPPEDITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_SKIPPEDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Details of skipped tables
                */
                class SkippedItem : public AbstractModel
                {
                public:
                    SkippedItem();
                    ~SkippedItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Db Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _db Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDb(const std::string& _db);

                    /**
                     * 判断参数 Db 是否已赋值
                     * @return Db 是否已赋值
                     * 
                     */
                    bool DbHasBeenSet() const;

                    /**
                     * 获取Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Table Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _table Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取The cause why check is not initiated
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Reason The cause why check is not initiated
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置The cause why check is not initiated
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _reason The cause why check is not initiated
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * The cause why check is not initiated
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_SKIPPEDITEM_H_
