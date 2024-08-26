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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DBINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/Property.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Database information
                */
                class DbInfo : public AbstractModel
                {
                public:
                    DbInfo();
                    ~DbInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DbName Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dbName Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取Database attribute
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Properties Database attribute
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 设置Database attribute
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _properties Database attribute
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProperties(const std::vector<Property>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取Metadata address (Available when the data source is Hive or DLC.)

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Location Metadata address (Available when the data source is Hive or DLC.)

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Metadata address (Available when the data source is Hive or DLC.)

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _location Metadata address (Available when the data source is Hive or DLC.)

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                private:

                    /**
                     * Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Database attribute
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * Metadata address (Available when the data source is Hive or DLC.)

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DBINFO_H_
