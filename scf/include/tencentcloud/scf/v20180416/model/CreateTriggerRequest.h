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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_CREATETRIGGERREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_CREATETRIGGERREQUEST_H_

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
                * CreateTrigger request structure.
                */
                class CreateTriggerRequest : public AbstractModel
                {
                public:
                    CreateTriggerRequest();
                    ~CreateTriggerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Function name bound to the created trigger
                     * @return FunctionName Function name bound to the created trigger
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Function name bound to the created trigger
                     * @param _functionName Function name bound to the created trigger
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
                     * 获取Name of the trigger to create. If it is a scheduled trigger, the name supports English letters, digits, hyphens, and underscores, up to 100 characters. If it is a COS trigger, it must be the access domain of the corresponding COS storage bucket suitable for the XML API (for example, 5401-5ff414-12345.cos.ap-shanghai.myqcloud.com). For other triggers, see the parameter description of the specific trigger binding.
                     * @return TriggerName Name of the trigger to create. If it is a scheduled trigger, the name supports English letters, digits, hyphens, and underscores, up to 100 characters. If it is a COS trigger, it must be the access domain of the corresponding COS storage bucket suitable for the XML API (for example, 5401-5ff414-12345.cos.ap-shanghai.myqcloud.com). For other triggers, see the parameter description of the specific trigger binding.
                     * 
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置Name of the trigger to create. If it is a scheduled trigger, the name supports English letters, digits, hyphens, and underscores, up to 100 characters. If it is a COS trigger, it must be the access domain of the corresponding COS storage bucket suitable for the XML API (for example, 5401-5ff414-12345.cos.ap-shanghai.myqcloud.com). For other triggers, see the parameter description of the specific trigger binding.
                     * @param _triggerName Name of the trigger to create. If it is a scheduled trigger, the name supports English letters, digits, hyphens, and underscores, up to 100 characters. If it is a COS trigger, it must be the access domain of the corresponding COS storage bucket suitable for the XML API (for example, 5401-5ff414-12345.cos.ap-shanghai.myqcloud.com). For other triggers, see the parameter description of the specific trigger binding.
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
                     * 获取Trigger type. Currently supports cos, cls, timer, ckafka, and http types. To create a function URL, please use the http type. See [Creating a Function URL](https://www.tencentcloud.com/document/product/583/100227?from_cn_redirect=1#33bbbda4-9131-48a6-ac37-ac62ffe01424). To create a cls trigger, see CLS Creating Delivery SCF Task.
                     * @return Type Trigger type. Currently supports cos, cls, timer, ckafka, and http types. To create a function URL, please use the http type. See [Creating a Function URL](https://www.tencentcloud.com/document/product/583/100227?from_cn_redirect=1#33bbbda4-9131-48a6-ac37-ac62ffe01424). To create a cls trigger, see CLS Creating Delivery SCF Task.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Trigger type. Currently supports cos, cls, timer, ckafka, and http types. To create a function URL, please use the http type. See [Creating a Function URL](https://www.tencentcloud.com/document/product/583/100227?from_cn_redirect=1#33bbbda4-9131-48a6-ac37-ac62ffe01424). To create a cls trigger, see CLS Creating Delivery SCF Task.
                     * @param _type Trigger type. Currently supports cos, cls, timer, ckafka, and http types. To create a function URL, please use the http type. See [Creating a Function URL](https://www.tencentcloud.com/document/product/583/100227?from_cn_redirect=1#33bbbda4-9131-48a6-ac37-ac62ffe01424). To create a cls trigger, see CLS Creating Delivery SCF Task.
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
                     * 获取Parameters corresponding to the trigger. For details, see [Trigger Description](https://www.tencentcloud.com/document/product/583/39901?from_cn_redirect=1).
                     * @return TriggerDesc Parameters corresponding to the trigger. For details, see [Trigger Description](https://www.tencentcloud.com/document/product/583/39901?from_cn_redirect=1).
                     * 
                     */
                    std::string GetTriggerDesc() const;

                    /**
                     * 设置Parameters corresponding to the trigger. For details, see [Trigger Description](https://www.tencentcloud.com/document/product/583/39901?from_cn_redirect=1).
                     * @param _triggerDesc Parameters corresponding to the trigger. For details, see [Trigger Description](https://www.tencentcloud.com/document/product/583/39901?from_cn_redirect=1).
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
                     * 获取Version or alias that the trigger takes effect on. It is recommended to fill in $DEFAULT for future grayscale release. Default value: $LATEST.
                     * @return Qualifier Version or alias that the trigger takes effect on. It is recommended to fill in $DEFAULT for future grayscale release. Default value: $LATEST.
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置Version or alias that the trigger takes effect on. It is recommended to fill in $DEFAULT for future grayscale release. Default value: $LATEST.
                     * @param _qualifier Version or alias that the trigger takes effect on. It is recommended to fill in $DEFAULT for future grayscale release. Default value: $LATEST.
                     * 
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     * 
                     */
                    bool QualifierHasBeenSet() const;

                    /**
                     * 获取Initial status of the trigger. OPEN means enabling, and CLOSE means disabling.
                     * @return Enable Initial status of the trigger. OPEN means enabling, and CLOSE means disabling.
                     * 
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置Initial status of the trigger. OPEN means enabling, and CLOSE means disabling.
                     * @param _enable Initial status of the trigger. OPEN means enabling, and CLOSE means disabling.
                     * 
                     */
                    void SetEnable(const std::string& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取User-defined parameter. Only timer triggers are supported.
                     * @return CustomArgument User-defined parameter. Only timer triggers are supported.
                     * 
                     */
                    std::string GetCustomArgument() const;

                    /**
                     * 设置User-defined parameter. Only timer triggers are supported.
                     * @param _customArgument User-defined parameter. Only timer triggers are supported.
                     * 
                     */
                    void SetCustomArgument(const std::string& _customArgument);

                    /**
                     * 判断参数 CustomArgument 是否已赋值
                     * @return CustomArgument 是否已赋值
                     * 
                     */
                    bool CustomArgumentHasBeenSet() const;

                    /**
                     * 获取Trigger description.
                     * @return Description Trigger description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Trigger description.
                     * @param _description Trigger description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Function name bound to the created trigger
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Name of the trigger to create. If it is a scheduled trigger, the name supports English letters, digits, hyphens, and underscores, up to 100 characters. If it is a COS trigger, it must be the access domain of the corresponding COS storage bucket suitable for the XML API (for example, 5401-5ff414-12345.cos.ap-shanghai.myqcloud.com). For other triggers, see the parameter description of the specific trigger binding.
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * Trigger type. Currently supports cos, cls, timer, ckafka, and http types. To create a function URL, please use the http type. See [Creating a Function URL](https://www.tencentcloud.com/document/product/583/100227?from_cn_redirect=1#33bbbda4-9131-48a6-ac37-ac62ffe01424). To create a cls trigger, see CLS Creating Delivery SCF Task.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Parameters corresponding to the trigger. For details, see [Trigger Description](https://www.tencentcloud.com/document/product/583/39901?from_cn_redirect=1).
                     */
                    std::string m_triggerDesc;
                    bool m_triggerDescHasBeenSet;

                    /**
                     * Namespace of the function
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Version or alias that the trigger takes effect on. It is recommended to fill in $DEFAULT for future grayscale release. Default value: $LATEST.
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * Initial status of the trigger. OPEN means enabling, and CLOSE means disabling.
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * User-defined parameter. Only timer triggers are supported.
                     */
                    std::string m_customArgument;
                    bool m_customArgumentHasBeenSet;

                    /**
                     * Trigger description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_CREATETRIGGERREQUEST_H_
