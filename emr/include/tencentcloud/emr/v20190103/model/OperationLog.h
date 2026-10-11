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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_OPERATIONLOG_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_OPERATIONLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Operation log description.
                */
                class OperationLog : public AbstractModel
                {
                public:
                    OperationLog();
                    ~OperationLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>EMR instance ID.</p>
                     * @return InstanceId <p>EMR instance ID.</p>
                     * 
                     */
                    int64_t GetInstanceId() const;

                    /**
                     * 设置<p>EMR instance ID.</p>
                     * @param _instanceId <p>EMR instance ID.</p>
                     * 
                     */
                    void SetInstanceId(const int64_t& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Operation name.</p>
                     * @return Operation <p>Operation name.</p>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置<p>Operation name.</p>
                     * @param _operation <p>Operation name.</p>
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取<p>Operation type.</p>
                     * @return OperationType <p>Operation type.</p>
                     * 
                     */
                    int64_t GetOperationType() const;

                    /**
                     * 设置<p>Operation type.</p>
                     * @param _operationType <p>Operation type.</p>
                     * 
                     */
                    void SetOperationType(const int64_t& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取<p>User type.</p>
                     * @return UserType <p>User type.</p>
                     * 
                     */
                    int64_t GetUserType() const;

                    /**
                     * 设置<p>User type.</p>
                     * @param _userType <p>User type.</p>
                     * 
                     */
                    void SetUserType(const int64_t& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取<p>Operator.</p>
                     * @return Operator <p>Operator.</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>Operator.</p>
                     * @param _operator <p>Operator.</p>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取<p>Operation time.</p>
                     * @return CreateTime <p>Operation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Operation time.</p>
                     * @param _createTime <p>Operation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Operation object.</p>
                     * @return Operand <p>Operation object.</p>
                     * 
                     */
                    std::string GetOperand() const;

                    /**
                     * 设置<p>Operation object.</p>
                     * @param _operand <p>Operation object.</p>
                     * 
                     */
                    void SetOperand(const std::string& _operand);

                    /**
                     * 判断参数 Operand 是否已赋值
                     * @return Operand 是否已赋值
                     * 
                     */
                    bool OperandHasBeenSet() const;

                    /**
                     * 获取<p>Operation details.</p>
                     * @return OperationDesc <p>Operation details.</p>
                     * 
                     */
                    std::string GetOperationDesc() const;

                    /**
                     * 设置<p>Operation details.</p>
                     * @param _operationDesc <p>Operation details.</p>
                     * 
                     */
                    void SetOperationDesc(const std::string& _operationDesc);

                    /**
                     * 判断参数 OperationDesc 是否已赋值
                     * @return OperationDesc 是否已赋值
                     * 
                     */
                    bool OperationDescHasBeenSet() const;

                    /**
                     * 获取<p>Security level.</p>
                     * @return SecurityLevel <p>Security level.</p>
                     * 
                     */
                    std::string GetSecurityLevel() const;

                    /**
                     * 设置<p>Security level.</p>
                     * @param _securityLevel <p>Security level.</p>
                     * 
                     */
                    void SetSecurityLevel(const std::string& _securityLevel);

                    /**
                     * 判断参数 SecurityLevel 是否已赋值
                     * @return SecurityLevel 是否已赋值
                     * 
                     */
                    bool SecurityLevelHasBeenSet() const;

                    /**
                     * 获取<p>Operator name.</p>
                     * @return OperatorName <p>Operator name.</p>
                     * 
                     */
                    std::string GetOperatorName() const;

                    /**
                     * 设置<p>Operator name.</p>
                     * @param _operatorName <p>Operator name.</p>
                     * 
                     */
                    void SetOperatorName(const std::string& _operatorName);

                    /**
                     * 判断参数 OperatorName 是否已赋值
                     * @return OperatorName 是否已赋值
                     * 
                     */
                    bool OperatorNameHasBeenSet() const;

                private:

                    /**
                     * <p>EMR instance ID.</p>
                     */
                    int64_t m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Operation name.</p>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * <p>Operation type.</p>
                     */
                    int64_t m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * <p>User type.</p>
                     */
                    int64_t m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * <p>Operator.</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>Operation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Operation object.</p>
                     */
                    std::string m_operand;
                    bool m_operandHasBeenSet;

                    /**
                     * <p>Operation details.</p>
                     */
                    std::string m_operationDesc;
                    bool m_operationDescHasBeenSet;

                    /**
                     * <p>Security level.</p>
                     */
                    std::string m_securityLevel;
                    bool m_securityLevelHasBeenSet;

                    /**
                     * <p>Operator name.</p>
                     */
                    std::string m_operatorName;
                    bool m_operatorNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_OPERATIONLOG_H_
