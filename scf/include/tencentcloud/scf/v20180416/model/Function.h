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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_FUNCTION_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_FUNCTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/Tag.h>
#include <tencentcloud/scf/v20180416/model/StatusReason.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Function list
                */
                class Function : public AbstractModel
                {
                public:
                    Function();
                    ~Function() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Modification time
                     * @return ModTime Modification time
                     * 
                     */
                    std::string GetModTime() const;

                    /**
                     * 设置Modification time
                     * @param _modTime Modification time
                     * 
                     */
                    void SetModTime(const std::string& _modTime);

                    /**
                     * 判断参数 ModTime 是否已赋值
                     * @return ModTime 是否已赋值
                     * 
                     */
                    bool ModTimeHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return AddTime Creation time
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置Creation time
                     * @param _addTime Creation time
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取Runtime 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @return Runtime Runtime 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置Runtime 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @param _runtime Runtime 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRuntime(const std::string& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     * 
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取Function name
                     * @return FunctionName Function name
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Function name
                     * @param _functionName Function name
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取Function ID
                     * @return FunctionId Function ID
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置Function ID
                     * @param _functionId Function ID
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
                     * 获取Namespace
                     * @return Namespace Namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace
                     * @param _namespace Namespace
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Function status. For valid values and status change process, please see [here](https://intl.cloud.tencent.com/document/product/583/47175?from_cn_redirect=1)
                     * @return Status Function status. For valid values and status change process, please see [here](https://intl.cloud.tencent.com/document/product/583/47175?from_cn_redirect=1)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Function status. For valid values and status change process, please see [here](https://intl.cloud.tencent.com/document/product/583/47175?from_cn_redirect=1)
                     * @param _status Function status. For valid values and status change process, please see [here](https://intl.cloud.tencent.com/document/product/583/47175?from_cn_redirect=1)
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
                     * 获取Function status details
                     * @return StatusDesc Function status details
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置Function status details
                     * @param _statusDesc Function status details
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取Function description
                     * @return Description Function description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Function description
                     * @param _description Function description
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
                     * 获取Function tag
                     * @return Tags Function tag
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Function tag
                     * @param _tags Function tag
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Function type. The value is `HTTP` or `Event`.
                     * @return Type Function type. The value is `HTTP` or `Event`.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Function type. The value is `HTTP` or `Event`.
                     * @param _type Function type. The value is `HTTP` or `Event`.
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
                     * 获取Cause of function failure
                     * @return StatusReasons Cause of function failure
                     * 
                     */
                    std::vector<StatusReason> GetStatusReasons() const;

                    /**
                     * 设置Cause of function failure
                     * @param _statusReasons Cause of function failure
                     * 
                     */
                    void SetStatusReasons(const std::vector<StatusReason>& _statusReasons);

                    /**
                     * 判断参数 StatusReasons 是否已赋值
                     * @return StatusReasons 是否已赋值
                     * 
                     */
                    bool StatusReasonsHasBeenSet() const;

                    /**
                     * 获取Sum of provisioned concurrence memory for all function versions
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TotalProvisionedConcurrencyMem Sum of provisioned concurrence memory for all function versions
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTotalProvisionedConcurrencyMem() const;

                    /**
                     * 设置Sum of provisioned concurrence memory for all function versions
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _totalProvisionedConcurrencyMem Sum of provisioned concurrence memory for all function versions
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalProvisionedConcurrencyMem(const uint64_t& _totalProvisionedConcurrencyMem);

                    /**
                     * 判断参数 TotalProvisionedConcurrencyMem 是否已赋值
                     * @return TotalProvisionedConcurrencyMem 是否已赋值
                     * 
                     */
                    bool TotalProvisionedConcurrencyMemHasBeenSet() const;

                    /**
                     * 获取Reserved memory for function concurrence
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ReservedConcurrencyMem Reserved memory for function concurrence
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetReservedConcurrencyMem() const;

                    /**
                     * 设置Reserved memory for function concurrence
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _reservedConcurrencyMem Reserved memory for function concurrence
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReservedConcurrencyMem(const uint64_t& _reservedConcurrencyMem);

                    /**
                     * 判断参数 ReservedConcurrencyMem 是否已赋值
                     * @return ReservedConcurrencyMem 是否已赋值
                     * 
                     */
                    bool ReservedConcurrencyMemHasBeenSet() const;

                    /**
                     * 获取Asynchronization attribute of the function. Values: `TRUE` and `FALSE`.
                     * @return AsyncRunEnable Asynchronization attribute of the function. Values: `TRUE` and `FALSE`.
                     * 
                     */
                    std::string GetAsyncRunEnable() const;

                    /**
                     * 设置Asynchronization attribute of the function. Values: `TRUE` and `FALSE`.
                     * @param _asyncRunEnable Asynchronization attribute of the function. Values: `TRUE` and `FALSE`.
                     * 
                     */
                    void SetAsyncRunEnable(const std::string& _asyncRunEnable);

                    /**
                     * 判断参数 AsyncRunEnable 是否已赋值
                     * @return AsyncRunEnable 是否已赋值
                     * 
                     */
                    bool AsyncRunEnableHasBeenSet() const;

                    /**
                     * 获取Whether to enable call tracing for ansynchronized functions. Values: `TRUE` and `FALSE`.
                     * @return TraceEnable Whether to enable call tracing for ansynchronized functions. Values: `TRUE` and `FALSE`.
                     * 
                     */
                    std::string GetTraceEnable() const;

                    /**
                     * 设置Whether to enable call tracing for ansynchronized functions. Values: `TRUE` and `FALSE`.
                     * @param _traceEnable Whether to enable call tracing for ansynchronized functions. Values: `TRUE` and `FALSE`.
                     * 
                     */
                    void SetTraceEnable(const std::string& _traceEnable);

                    /**
                     * 判断参数 TraceEnable 是否已赋值
                     * @return TraceEnable 是否已赋值
                     * 
                     */
                    bool TraceEnableHasBeenSet() const;

                private:

                    /**
                     * Modification time
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Runtime 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * Function name
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Function ID
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * Namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Function status. For valid values and status change process, please see [here](https://intl.cloud.tencent.com/document/product/583/47175?from_cn_redirect=1)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Function status details
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Function description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Function tag
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Function type. The value is `HTTP` or `Event`.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Cause of function failure
                     */
                    std::vector<StatusReason> m_statusReasons;
                    bool m_statusReasonsHasBeenSet;

                    /**
                     * Sum of provisioned concurrence memory for all function versions
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_totalProvisionedConcurrencyMem;
                    bool m_totalProvisionedConcurrencyMemHasBeenSet;

                    /**
                     * Reserved memory for function concurrence
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_reservedConcurrencyMem;
                    bool m_reservedConcurrencyMemHasBeenSet;

                    /**
                     * Asynchronization attribute of the function. Values: `TRUE` and `FALSE`.
                     */
                    std::string m_asyncRunEnable;
                    bool m_asyncRunEnableHasBeenSet;

                    /**
                     * Whether to enable call tracing for ansynchronized functions. Values: `TRUE` and `FALSE`.
                     */
                    std::string m_traceEnable;
                    bool m_traceEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_FUNCTION_H_
