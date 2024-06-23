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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ORGANIZATIONALFUNCTION_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ORGANIZATIONALFUNCTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/FunctionVersion.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Function containing hierarchical information
                */
                class OrganizationalFunction : public AbstractModel
                {
                public:
                    OrganizationalFunction();
                    ~OrganizationalFunction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param _name Name
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
                     * 获取Display Name
                     * @return DisplayName Display Name
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Display Name
                     * @param _displayName Display Name
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取Hierarchical Path
                     * @return LayerPath Hierarchical Path
                     * 
                     */
                    std::string GetLayerPath() const;

                    /**
                     * 设置Hierarchical Path
                     * @param _layerPath Hierarchical Path
                     * 
                     */
                    void SetLayerPath(const std::string& _layerPath);

                    /**
                     * 判断参数 LayerPath 是否已赋值
                     * @return LayerPath 是否已赋值
                     * 
                     */
                    bool LayerPathHasBeenSet() const;

                    /**
                     * 获取Parent Hierarchical Path
                     * @return ParentLayerPath Parent Hierarchical Path
                     * 
                     */
                    std::string GetParentLayerPath() const;

                    /**
                     * 设置Parent Hierarchical Path
                     * @param _parentLayerPath Parent Hierarchical Path
                     * 
                     */
                    void SetParentLayerPath(const std::string& _parentLayerPath);

                    /**
                     * 判断参数 ParentLayerPath 是否已赋值
                     * @return ParentLayerPath 是否已赋值
                     * 
                     */
                    bool ParentLayerPathHasBeenSet() const;

                    /**
                     * 获取Function Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Type Function Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Function Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _type Function Type
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Function Classification: Window functions, Aggregation functions, Date functions...
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Kind Function Classification: Window functions, Aggregation functions, Date functions...
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置Function Classification: Window functions, Aggregation functions, Date functions...
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _kind Function Classification: Window functions, Aggregation functions, Date functions...
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Function Category: System functions, Custom Definition functions
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Category Function Category: System functions, Custom Definition functions
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Function Category: System functions, Custom Definition functions
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _category Function Category: System functions, Custom Definition functions
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取Function Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Status Function Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Function Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _status Function Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Function DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Description Function DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Function DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _description Function DescriptionNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Function Usage
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Usage Function Usage
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUsage() const;

                    /**
                     * 设置Function Usage
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _usage Function Usage
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Function Parameter Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ParamDesc Function Parameter Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetParamDesc() const;

                    /**
                     * 设置Function Parameter Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _paramDesc Function Parameter Description
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Function Return Value Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ReturnDesc Function Return Value Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetReturnDesc() const;

                    /**
                     * 设置Function Return Value Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _returnDesc Function Return Value Description
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Function Example
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Example Function Example
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExample() const;

                    /**
                     * 设置Function Example
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _example Function Example
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Cluster Instance Engine IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ClusterIdentifier Cluster Instance Engine IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetClusterIdentifier() const;

                    /**
                     * 设置Cluster Instance Engine IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _clusterIdentifier Cluster Instance Engine IDNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Function IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return FuncId Function IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFuncId() const;

                    /**
                     * 设置Function IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _funcId Function IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFuncId(const std::string& _funcId);

                    /**
                     * 判断参数 FuncId 是否已赋值
                     * @return FuncId 是否已赋值
                     * 
                     */
                    bool FuncIdHasBeenSet() const;

                    /**
                     * 获取Function Class Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ClassName Function Class Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetClassName() const;

                    /**
                     * 设置Function Class Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _className Function Class Name
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Function Resource List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ResourceList Function Resource List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<FunctionVersion> GetResourceList() const;

                    /**
                     * 设置Function Resource List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _resourceList Function Resource List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetResourceList(const std::vector<FunctionVersion>& _resourceList);

                    /**
                     * 判断参数 ResourceList 是否已赋值
                     * @return ResourceList 是否已赋值
                     * 
                     */
                    bool ResourceListHasBeenSet() const;

                    /**
                     * 获取Operator ID List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OperatorUserIds Operator ID List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetOperatorUserIds() const;

                    /**
                     * 设置Operator ID List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _operatorUserIds Operator ID List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOperatorUserIds(const std::vector<int64_t>& _operatorUserIds);

                    /**
                     * 判断参数 OperatorUserIds 是否已赋值
                     * @return OperatorUserIds 是否已赋值
                     * 
                     */
                    bool OperatorUserIdsHasBeenSet() const;

                    /**
                     * 获取Public cloud Owner ID list
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OwnerUserIds Public cloud Owner ID list
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetOwnerUserIds() const;

                    /**
                     * 设置Public cloud Owner ID list
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ownerUserIds Public cloud Owner ID list
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOwnerUserIds(const std::vector<int64_t>& _ownerUserIds);

                    /**
                     * 判断参数 OwnerUserIds 是否已赋值
                     * @return OwnerUserIds 是否已赋值
                     * 
                     */
                    bool OwnerUserIdsHasBeenSet() const;

                    /**
                     * 获取Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return DbName Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _dbName Database nameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Submission failed error message
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SubmitErrorMsg Submission failed error message
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSubmitErrorMsg() const;

                    /**
                     * 设置Submission failed error message
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _submitErrorMsg Submission failed error message
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSubmitErrorMsg(const std::string& _submitErrorMsg);

                    /**
                     * 判断参数 SubmitErrorMsg 是否已赋值
                     * @return SubmitErrorMsg 是否已赋值
                     * 
                     */
                    bool SubmitErrorMsgHasBeenSet() const;

                    /**
                     * 获取Pattern nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return SchemaName Pattern nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置Pattern nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _schemaName Pattern nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取Function Command FormatNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CommandFormat Function Command FormatNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCommandFormat() const;

                    /**
                     * 设置Function Command FormatNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _commandFormat Function Command FormatNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCommandFormat(const std::string& _commandFormat);

                    /**
                     * 判断参数 CommandFormat 是否已赋值
                     * @return CommandFormat 是否已赋值
                     * 
                     */
                    bool CommandFormatHasBeenSet() const;

                    /**
                     * 获取NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return OwnerName NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _ownerName NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOwnerName(const std::string& _ownerName);

                    /**
                     * 判断参数 OwnerName 是否已赋值
                     * @return OwnerName 是否已赋值
                     * 
                     */
                    bool OwnerNameHasBeenSet() const;

                    /**
                     * 获取TimestampNote: This field may return null, indicating that no valid value can be obtained.
                     * @return SubmitTimestamp TimestampNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSubmitTimestamp() const;

                    /**
                     * 设置TimestampNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _submitTimestamp TimestampNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSubmitTimestamp(const std::string& _submitTimestamp);

                    /**
                     * 判断参数 SubmitTimestamp 是否已赋值
                     * @return SubmitTimestamp 是否已赋值
                     * 
                     */
                    bool SubmitTimestampHasBeenSet() const;

                    /**
                     * 获取Function tag
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Tag Function tag
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置Function tag
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tag Function tag
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取
                     * @return OperatorUserIdsStr 
                     * 
                     */
                    std::vector<std::string> GetOperatorUserIdsStr() const;

                    /**
                     * 设置
                     * @param _operatorUserIdsStr 
                     * 
                     */
                    void SetOperatorUserIdsStr(const std::vector<std::string>& _operatorUserIdsStr);

                    /**
                     * 判断参数 OperatorUserIdsStr 是否已赋值
                     * @return OperatorUserIdsStr 是否已赋值
                     * 
                     */
                    bool OperatorUserIdsStrHasBeenSet() const;

                    /**
                     * 获取
                     * @return OwnerUserIdsStr 
                     * 
                     */
                    std::vector<std::string> GetOwnerUserIdsStr() const;

                    /**
                     * 设置
                     * @param _ownerUserIdsStr 
                     * 
                     */
                    void SetOwnerUserIdsStr(const std::vector<std::string>& _ownerUserIdsStr);

                    /**
                     * 判断参数 OwnerUserIdsStr 是否已赋值
                     * @return OwnerUserIdsStr 是否已赋值
                     * 
                     */
                    bool OwnerUserIdsStrHasBeenSet() const;

                private:

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Display Name
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * Hierarchical Path
                     */
                    std::string m_layerPath;
                    bool m_layerPathHasBeenSet;

                    /**
                     * Parent Hierarchical Path
                     */
                    std::string m_parentLayerPath;
                    bool m_parentLayerPathHasBeenSet;

                    /**
                     * Function Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Function Classification: Window functions, Aggregation functions, Date functions...
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * Function Category: System functions, Custom Definition functions
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Function Status
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Function DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Function Usage
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * Function Parameter Description
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_paramDesc;
                    bool m_paramDescHasBeenSet;

                    /**
                     * Function Return Value Description
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_returnDesc;
                    bool m_returnDescHasBeenSet;

                    /**
                     * Function Example
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_example;
                    bool m_exampleHasBeenSet;

                    /**
                     * Cluster Instance Engine IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_clusterIdentifier;
                    bool m_clusterIdentifierHasBeenSet;

                    /**
                     * Function IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_funcId;
                    bool m_funcIdHasBeenSet;

                    /**
                     * Function Class Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_className;
                    bool m_classNameHasBeenSet;

                    /**
                     * Function Resource List
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<FunctionVersion> m_resourceList;
                    bool m_resourceListHasBeenSet;

                    /**
                     * Operator ID List
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<int64_t> m_operatorUserIds;
                    bool m_operatorUserIdsHasBeenSet;

                    /**
                     * Public cloud Owner ID list
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<int64_t> m_ownerUserIds;
                    bool m_ownerUserIdsHasBeenSet;

                    /**
                     * Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Submission failed error message
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_submitErrorMsg;
                    bool m_submitErrorMsgHasBeenSet;

                    /**
                     * Pattern nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * Function Command FormatNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_commandFormat;
                    bool m_commandFormatHasBeenSet;

                    /**
                     * NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                    /**
                     * TimestampNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_submitTimestamp;
                    bool m_submitTimestampHasBeenSet;

                    /**
                     * Function tag
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_operatorUserIdsStr;
                    bool m_operatorUserIdsStrHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_ownerUserIdsStr;
                    bool m_ownerUserIdsStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ORGANIZATIONALFUNCTION_H_
