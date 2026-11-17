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
                     * 获取DDL type. For example: database, table, view, and index.
                     * @return DdlObject DDL type. For example: database, table, view, and index.
                     * 
                     */
                    std::string GetDdlObject() const;

                    /**
                     * 设置DDL type. For example: database, table, view, and index.
                     * @param _ddlObject DDL type. For example: database, table, view, and index.
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
                     * 获取Specific values of DDL. For Database, it can be [Create, Drop, Alter];<br>for Table, it can be [Create, Drop, Alter, Truncate, Rename];<br>for View, it can be [Create, Drop];<br>for Index, it can be [Create, Drop].
                     * @return DdlValue Specific values of DDL. For Database, it can be [Create, Drop, Alter];<br>for Table, it can be [Create, Drop, Alter, Truncate, Rename];<br>for View, it can be [Create, Drop];<br>for Index, it can be [Create, Drop].
                     * 
                     */
                    std::vector<std::string> GetDdlValue() const;

                    /**
                     * 设置Specific values of DDL. For Database, it can be [Create, Drop, Alter];<br>for Table, it can be [Create, Drop, Alter, Truncate, Rename];<br>for View, it can be [Create, Drop];<br>for Index, it can be [Create, Drop].
                     * @param _ddlValue Specific values of DDL. For Database, it can be [Create, Drop, Alter];<br>for Table, it can be [Create, Drop, Alter, Truncate, Rename];<br>for View, it can be [Create, Drop];<br>for Index, it can be [Create, Drop].
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
                     * DDL type. For example: database, table, view, and index.
                     */
                    std::string m_ddlObject;
                    bool m_ddlObjectHasBeenSet;

                    /**
                     * Specific values of DDL. For Database, it can be [Create, Drop, Alter];<br>for Table, it can be [Create, Drop, Alter, Truncate, Rename];<br>for View, it can be [Create, Drop];<br>for Index, it can be [Create, Drop].
                     */
                    std::vector<std::string> m_ddlValue;
                    bool m_ddlValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DDLOPTION_H_
