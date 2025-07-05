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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DDLOPTION_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DDLOPTION_H_

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
                * DDL statement sync processing during data sync
                */
                class DdlOption : public AbstractModel
                {
                public:
                    DdlOption();
                    ~DdlOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DDL type, such as database, table, view, and index.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DdlObject DDL type, such as database, table, view, and index.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDdlObject() const;

                    /**
                     * 设置DDL type, such as database, table, view, and index.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ddlObject DDL type, such as database, table, view, and index.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDdlObject(const std::string& _ddlObject);

                    /**
                     * 判断参数 DdlObject 是否已赋值
                     * @return DdlObject 是否已赋值
                     * 
                     */
                    bool DdlObjectHasBeenSet() const;

                    /**
                     * 获取DDL value. Valid values: [Create,Drop,Alter] for database <br>[Create,Drop,Alter,Truncate,Rename] for table <br/>[Create,Drop] for view <br/>[Create,Drop] for index
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DdlValue DDL value. Valid values: [Create,Drop,Alter] for database <br>[Create,Drop,Alter,Truncate,Rename] for table <br/>[Create,Drop] for view <br/>[Create,Drop] for index
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDdlValue() const;

                    /**
                     * 设置DDL value. Valid values: [Create,Drop,Alter] for database <br>[Create,Drop,Alter,Truncate,Rename] for table <br/>[Create,Drop] for view <br/>[Create,Drop] for index
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ddlValue DDL value. Valid values: [Create,Drop,Alter] for database <br>[Create,Drop,Alter,Truncate,Rename] for table <br/>[Create,Drop] for view <br/>[Create,Drop] for index
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDdlValue(const std::vector<std::string>& _ddlValue);

                    /**
                     * 判断参数 DdlValue 是否已赋值
                     * @return DdlValue 是否已赋值
                     * 
                     */
                    bool DdlValueHasBeenSet() const;

                private:

                    /**
                     * DDL type, such as database, table, view, and index.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ddlObject;
                    bool m_ddlObjectHasBeenSet;

                    /**
                     * DDL value. Valid values: [Create,Drop,Alter] for database <br>[Create,Drop,Alter,Truncate,Rename] for table <br/>[Create,Drop] for view <br/>[Create,Drop] for index
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_ddlValue;
                    bool m_ddlValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DDLOPTION_H_
