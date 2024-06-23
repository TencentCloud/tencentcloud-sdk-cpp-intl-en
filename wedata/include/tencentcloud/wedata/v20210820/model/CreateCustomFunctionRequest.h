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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATECUSTOMFUNCTIONREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATECUSTOMFUNCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateCustomFunction request structure.
                */
                class CreateCustomFunctionRequest : public AbstractModel
                {
                public:
                    CreateCustomFunctionRequest();
                    ~CreateCustomFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Enumerated values: HIVE, SPARK, DLC
                     * @return Type Enumerated values: HIVE, SPARK, DLC
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Enumerated values: HIVE, SPARK, DLC
                     * @param _type Enumerated values: HIVE, SPARK, DLC
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Enumerated values: ANALYSIS (function), ENCRYPTION (encryption function), AGGREGATE (aggregate function), LOGIC (logic function), DATE_AND_TIME (date and time function), MATH (math function), CONVERSION (conversion function), STRING (string function), IP_AND_DOMAIN (IP and domain function), WINDOW (window function), OTHER (other function)
                     * @return Kind Enumerated values: ANALYSIS (function), ENCRYPTION (encryption function), AGGREGATE (aggregate function), LOGIC (logic function), DATE_AND_TIME (date and time function), MATH (math function), CONVERSION (conversion function), STRING (string function), IP_AND_DOMAIN (IP and domain function), WINDOW (window function), OTHER (other function)
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置Enumerated values: ANALYSIS (function), ENCRYPTION (encryption function), AGGREGATE (aggregate function), LOGIC (logic function), DATE_AND_TIME (date and time function), MATH (math function), CONVERSION (conversion function), STRING (string function), IP_AND_DOMAIN (IP and domain function), WINDOW (window function), OTHER (other function)
                     * @param _kind Enumerated values: ANALYSIS (function), ENCRYPTION (encryption function), AGGREGATE (aggregate function), LOGIC (logic function), DATE_AND_TIME (date and time function), MATH (math function), CONVERSION (conversion function), STRING (string function), IP_AND_DOMAIN (IP and domain function), WINDOW (window function), OTHER (other function)
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取Function Name
                     * @return Name Function Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Function Name
                     * @param _name Function Name
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
                     * 获取Cluster Instance Engine ID
                     * @return ClusterIdentifier Cluster Instance Engine ID
                     * 
                     */
                    std::string GetClusterIdentifier() const;

                    /**
                     * 设置Cluster Instance Engine ID
                     * @param _clusterIdentifier Cluster Instance Engine ID
                     * 
                     */
                    void SetClusterIdentifier(const std::string& _clusterIdentifier);

                    /**
                     * 判断参数 ClusterIdentifier 是否已赋值
                     * @return ClusterIdentifier 是否已赋值
                     * 
                     */
                    bool ClusterIdentifierHasBeenSet() const;

                    /**
                     * 获取Database name
                     * @return DbName Database name
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Database name
                     * @param _dbName Database name
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
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * Enumerated values: HIVE, SPARK, DLC
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Enumerated values: ANALYSIS (function), ENCRYPTION (encryption function), AGGREGATE (aggregate function), LOGIC (logic function), DATE_AND_TIME (date and time function), MATH (math function), CONVERSION (conversion function), STRING (string function), IP_AND_DOMAIN (IP and domain function), WINDOW (window function), OTHER (other function)
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * Function Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Cluster Instance Engine ID
                     */
                    std::string m_clusterIdentifier;
                    bool m_clusterIdentifierHasBeenSet;

                    /**
                     * Database name
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATECUSTOMFUNCTIONREQUEST_H_
