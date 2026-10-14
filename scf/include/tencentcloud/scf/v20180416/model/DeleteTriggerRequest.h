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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_DELETETRIGGERREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_DELETETRIGGERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DeleteTrigger request structure.
                */
                class DeleteTriggerRequest : public AbstractModel
                {
                public:
                    DeleteTriggerRequest();
                    ~DeleteTriggerRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Trigger name to delete
                     * @return TriggerName Trigger name to delete
                     * 
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置Trigger name to delete
                     * @param _triggerName Trigger name to delete
                     * 
                     */
                    void SetTriggerName(const std::string& _triggerName);

                    /**
                     * 判断参数 TriggerName 是否已赋值
                     * @return TriggerName 是否已赋值
                     * 
                     */
                    bool TriggerNameHasBeenSet() const;

                    /**
                     * 获取Trigger type to delete. Currently only `timer`, `ckafka`, `apigw`, `cls`, `cos`, `cmq`, and `http` are supported.
                     * @return Type Trigger type to delete. Currently only `timer`, `ckafka`, `apigw`, `cls`, `cos`, `cmq`, and `http` are supported.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Trigger type to delete. Currently only `timer`, `ckafka`, `apigw`, `cls`, `cos`, `cmq`, and `http` are supported.
                     * @param _type Trigger type to delete. Currently only `timer`, `ckafka`, `apigw`, `cls`, `cos`, `cmq`, and `http` are supported.
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
                     * 获取Namespace of the function
                     * @return Namespace Namespace of the function
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace of the function
                     * @param _namespace Namespace of the function
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
                     * 获取If the trigger type to delete is COS trigger, this field must be specified, storing data in JSON format {"event":"cos:ObjectCreated:*"}. The data content is in the same format as this field in the SetTrigger API. If the trigger type to delete is scheduled trigger or CMQ trigger, this field can be unspecified.
                     * @return TriggerDesc If the trigger type to delete is COS trigger, this field must be specified, storing data in JSON format {"event":"cos:ObjectCreated:*"}. The data content is in the same format as this field in the SetTrigger API. If the trigger type to delete is scheduled trigger or CMQ trigger, this field can be unspecified.
                     * 
                     */
                    std::string GetTriggerDesc() const;

                    /**
                     * 设置If the trigger type to delete is COS trigger, this field must be specified, storing data in JSON format {"event":"cos:ObjectCreated:*"}. The data content is in the same format as this field in the SetTrigger API. If the trigger type to delete is scheduled trigger or CMQ trigger, this field can be unspecified.
                     * @param _triggerDesc If the trigger type to delete is COS trigger, this field must be specified, storing data in JSON format {"event":"cos:ObjectCreated:*"}. The data content is in the same format as this field in the SetTrigger API. If the trigger type to delete is scheduled trigger or CMQ trigger, this field can be unspecified.
                     * 
                     */
                    void SetTriggerDesc(const std::string& _triggerDesc);

                    /**
                     * 判断参数 TriggerDesc 是否已赋值
                     * @return TriggerDesc 是否已赋值
                     * 
                     */
                    bool TriggerDescHasBeenSet() const;

                    /**
                     * 获取The version or alias that the trigger to be deleted actually points to. Default value: $LATEST.
                     * @return Qualifier The version or alias that the trigger to be deleted actually points to. Default value: $LATEST.
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置The version or alias that the trigger to be deleted actually points to. Default value: $LATEST.
                     * @param _qualifier The version or alias that the trigger to be deleted actually points to. Default value: $LATEST.
                     * 
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     * 
                     */
                    bool QualifierHasBeenSet() const;

                private:

                    /**
                     * Function name
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Trigger name to delete
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * Trigger type to delete. Currently only `timer`, `ckafka`, `apigw`, `cls`, `cos`, `cmq`, and `http` are supported.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Namespace of the function
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * If the trigger type to delete is COS trigger, this field must be specified, storing data in JSON format {"event":"cos:ObjectCreated:*"}. The data content is in the same format as this field in the SetTrigger API. If the trigger type to delete is scheduled trigger or CMQ trigger, this field can be unspecified.
                     */
                    std::string m_triggerDesc;
                    bool m_triggerDescHasBeenSet;

                    /**
                     * The version or alias that the trigger to be deleted actually points to. Default value: $LATEST.
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_DELETETRIGGERREQUEST_H_
