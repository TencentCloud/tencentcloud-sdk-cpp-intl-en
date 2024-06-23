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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SAVECUSTOMFUNCTIONREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SAVECUSTOMFUNCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/FunctionResource.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * SaveCustomFunction request structure.
                */
                class SaveCustomFunctionRequest : public AbstractModel
                {
                public:
                    SaveCustomFunctionRequest();
                    ~SaveCustomFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Function Unique Identifier
                     * @return FunctionId Function Unique Identifier
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置Function Unique Identifier
                     * @param _functionId Function Unique Identifier
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取Classification: Window functions, Aggregation functions, Date functions...
                     * @return Kind Classification: Window functions, Aggregation functions, Date functions...
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置Classification: Window functions, Aggregation functions, Date functions...
                     * @param _kind Classification: Window functions, Aggregation functions, Date functions...
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
                     * 获取Cluster Engine Instance
                     * @return ClusterIdentifier Cluster Engine Instance
                     * 
                     */
                    std::string GetClusterIdentifier() const;

                    /**
                     * 设置Cluster Engine Instance
                     * @param _clusterIdentifier Cluster Engine Instance
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
                     * 获取Class
                     * @return ClassName Class
                     * 
                     */
                    std::string GetClassName() const;

                    /**
                     * 设置Class
                     * @param _className Class
                     * 
                     */
                    void SetClassName(const std::string& _className);

                    /**
                     * 判断参数 ClassName 是否已赋值
                     * @return ClassName 是否已赋值
                     * 
                     */
                    bool ClassNameHasBeenSet() const;

                    /**
                     * 获取Resource list
                     * @return ResourceList Resource list
                     * 
                     */
                    std::vector<FunctionResource> GetResourceList() const;

                    /**
                     * 设置Resource list
                     * @param _resourceList Resource list
                     * 
                     */
                    void SetResourceList(const std::vector<FunctionResource>& _resourceList);

                    /**
                     * 判断参数 ResourceList 是否已赋值
                     * @return ResourceList 是否已赋值
                     * 
                     */
                    bool ResourceListHasBeenSet() const;

                    /**
                     * 获取Function Description
                     * @return Description Function Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Function Description
                     * @param _description Function Description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Usage
                     * @return Usage Usage
                     * 
                     */
                    std::string GetUsage() const;

                    /**
                     * 设置Usage
                     * @param _usage Usage
                     * 
                     */
                    void SetUsage(const std::string& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取Parameter description
                     * @return ParamDesc Parameter description
                     * 
                     */
                    std::string GetParamDesc() const;

                    /**
                     * 设置Parameter description
                     * @param _paramDesc Parameter description
                     * 
                     */
                    void SetParamDesc(const std::string& _paramDesc);

                    /**
                     * 判断参数 ParamDesc 是否已赋值
                     * @return ParamDesc 是否已赋值
                     * 
                     */
                    bool ParamDescHasBeenSet() const;

                    /**
                     * 获取Return value description
                     * @return ReturnDesc Return value description
                     * 
                     */
                    std::string GetReturnDesc() const;

                    /**
                     * 设置Return value description
                     * @param _returnDesc Return value description
                     * 
                     */
                    void SetReturnDesc(const std::string& _returnDesc);

                    /**
                     * 判断参数 ReturnDesc 是否已赋值
                     * @return ReturnDesc 是否已赋值
                     * 
                     */
                    bool ReturnDescHasBeenSet() const;

                    /**
                     * 获取Sample code
                     * @return Example Sample code
                     * 
                     */
                    std::string GetExample() const;

                    /**
                     * 设置Sample code
                     * @param _example Sample code
                     * 
                     */
                    void SetExample(const std::string& _example);

                    /**
                     * 判断参数 Example 是否已赋值
                     * @return Example 是否已赋值
                     * 
                     */
                    bool ExampleHasBeenSet() const;

                    /**
                     * 获取Project ID, cannot be modified, used by DLC when saving the function
                     * @return ProjectId Project ID, cannot be modified, used by DLC when saving the function
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID, cannot be modified, used by DLC when saving the function
                     * @param _projectId Project ID, cannot be modified, used by DLC when saving the function
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Database Name, cannot be modified, used by DLC when saving the function
                     * @return DbName Database Name, cannot be modified, used by DLC when saving the function
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Database Name, cannot be modified, used by DLC when saving the function
                     * @param _dbName Database Name, cannot be modified, used by DLC when saving the function
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
                     * 获取Function Name, cannot be modified, used by DLC when saving the function
                     * @return Name Function Name, cannot be modified, used by DLC when saving the function
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Function Name, cannot be modified, used by DLC when saving the function
                     * @param _name Function Name, cannot be modified, used by DLC when saving the function
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Function Unique Identifier
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * Classification: Window functions, Aggregation functions, Date functions...
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * Cluster Engine Instance
                     */
                    std::string m_clusterIdentifier;
                    bool m_clusterIdentifierHasBeenSet;

                    /**
                     * Class
                     */
                    std::string m_className;
                    bool m_classNameHasBeenSet;

                    /**
                     * Resource list
                     */
                    std::vector<FunctionResource> m_resourceList;
                    bool m_resourceListHasBeenSet;

                    /**
                     * Function Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Usage
                     */
                    std::string m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * Parameter description
                     */
                    std::string m_paramDesc;
                    bool m_paramDescHasBeenSet;

                    /**
                     * Return value description
                     */
                    std::string m_returnDesc;
                    bool m_returnDescHasBeenSet;

                    /**
                     * Sample code
                     */
                    std::string m_example;
                    bool m_exampleHasBeenSet;

                    /**
                     * Project ID, cannot be modified, used by DLC when saving the function
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Database Name, cannot be modified, used by DLC when saving the function
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Function Name, cannot be modified, used by DLC when saving the function
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SAVECUSTOMFUNCTIONREQUEST_H_
