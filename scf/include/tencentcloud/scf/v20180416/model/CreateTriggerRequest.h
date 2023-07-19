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
                     * 获取Name of the function bound to the new trigger
                     * @return FunctionName Name of the function bound to the new trigger
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Name of the function bound to the new trigger
                     * @param _functionName Name of the function bound to the new trigger
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
                     * 获取Name of a new trigger. For a timer trigger, the name can contain up to 100 letters, digits, dashes, and underscores; for a COS trigger, it should be an access domain name of the corresponding COS bucket applicable to the XML API (e.g., 5401-5ff414-12345.cos.ap-shanghai.myqcloud.com); for other triggers, please see the descriptions of parameters bound to the specific trigger.
                     * @return TriggerName Name of a new trigger. For a timer trigger, the name can contain up to 100 letters, digits, dashes, and underscores; for a COS trigger, it should be an access domain name of the corresponding COS bucket applicable to the XML API (e.g., 5401-5ff414-12345.cos.ap-shanghai.myqcloud.com); for other triggers, please see the descriptions of parameters bound to the specific trigger.
                     * 
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置Name of a new trigger. For a timer trigger, the name can contain up to 100 letters, digits, dashes, and underscores; for a COS trigger, it should be an access domain name of the corresponding COS bucket applicable to the XML API (e.g., 5401-5ff414-12345.cos.ap-shanghai.myqcloud.com); for other triggers, please see the descriptions of parameters bound to the specific trigger.
                     * @param _triggerName Name of a new trigger. For a timer trigger, the name can contain up to 100 letters, digits, dashes, and underscores; for a COS trigger, it should be an access domain name of the corresponding COS bucket applicable to the XML API (e.g., 5401-5ff414-12345.cos.ap-shanghai.myqcloud.com); for other triggers, please see the descriptions of parameters bound to the specific trigger.
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
                     * 获取Type of trigger. Values: `cos`, `cmq`, `timer`, `ckafka` and `apigw`. To create a CLS trigger, please refer to [Creating Shipping Task (SCF)](https://intl.cloud.tencent.com/document/product/614/61096?from_cn_redirect=1).
                     * @return Type Type of trigger. Values: `cos`, `cmq`, `timer`, `ckafka` and `apigw`. To create a CLS trigger, please refer to [Creating Shipping Task (SCF)](https://intl.cloud.tencent.com/document/product/614/61096?from_cn_redirect=1).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of trigger. Values: `cos`, `cmq`, `timer`, `ckafka` and `apigw`. To create a CLS trigger, please refer to [Creating Shipping Task (SCF)](https://intl.cloud.tencent.com/document/product/614/61096?from_cn_redirect=1).
                     * @param _type Type of trigger. Values: `cos`, `cmq`, `timer`, `ckafka` and `apigw`. To create a CLS trigger, please refer to [Creating Shipping Task (SCF)](https://intl.cloud.tencent.com/document/product/614/61096?from_cn_redirect=1).
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
                     * 获取For parameters of triggers, see [Trigger Description](https://intl.cloud.tencent.com/document/product/583/39901?from_cn_redirect=1)
                     * @return TriggerDesc For parameters of triggers, see [Trigger Description](https://intl.cloud.tencent.com/document/product/583/39901?from_cn_redirect=1)
                     * 
                     */
                    std::string GetTriggerDesc() const;

                    /**
                     * 设置For parameters of triggers, see [Trigger Description](https://intl.cloud.tencent.com/document/product/583/39901?from_cn_redirect=1)
                     * @param _triggerDesc For parameters of triggers, see [Trigger Description](https://intl.cloud.tencent.com/document/product/583/39901?from_cn_redirect=1)
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
                     * 获取Function namespace
                     * @return Namespace Function namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Function namespace
                     * @param _namespace Function namespace
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
                     * 获取Function version. It defaults to `$LATEST`. It’s recommended to use `[$DEFAULT](https://intl.cloud.tencent.com/document/product/583/36149?from_cn_redirect=1#.E9.BB.98.E8.AE.A4.E5.88.AB.E5.90.8D)` for canary release.
                     * @return Qualifier Function version. It defaults to `$LATEST`. It’s recommended to use `[$DEFAULT](https://intl.cloud.tencent.com/document/product/583/36149?from_cn_redirect=1#.E9.BB.98.E8.AE.A4.E5.88.AB.E5.90.8D)` for canary release.
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置Function version. It defaults to `$LATEST`. It’s recommended to use `[$DEFAULT](https://intl.cloud.tencent.com/document/product/583/36149?from_cn_redirect=1#.E9.BB.98.E8.AE.A4.E5.88.AB.E5.90.8D)` for canary release.
                     * @param _qualifier Function version. It defaults to `$LATEST`. It’s recommended to use `[$DEFAULT](https://intl.cloud.tencent.com/document/product/583/36149?from_cn_redirect=1#.E9.BB.98.E8.AE.A4.E5.88.AB.E5.90.8D)` for canary release.
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
                     * 获取Initial enabling status of the trigger. `OPEN` indicates enabled, and `CLOSE` indicates disabled.
                     * @return Enable Initial enabling status of the trigger. `OPEN` indicates enabled, and `CLOSE` indicates disabled.
                     * 
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置Initial enabling status of the trigger. `OPEN` indicates enabled, and `CLOSE` indicates disabled.
                     * @param _enable Initial enabling status of the trigger. `OPEN` indicates enabled, and `CLOSE` indicates disabled.
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
                     * 获取Custom argument, supporting only the timer trigger.
                     * @return CustomArgument Custom argument, supporting only the timer trigger.
                     * 
                     */
                    std::string GetCustomArgument() const;

                    /**
                     * 设置Custom argument, supporting only the timer trigger.
                     * @param _customArgument Custom argument, supporting only the timer trigger.
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
                     * 获取Trigger description
                     * @return Description Trigger description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Trigger description
                     * @param _description Trigger description
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
                     * Name of the function bound to the new trigger
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Name of a new trigger. For a timer trigger, the name can contain up to 100 letters, digits, dashes, and underscores; for a COS trigger, it should be an access domain name of the corresponding COS bucket applicable to the XML API (e.g., 5401-5ff414-12345.cos.ap-shanghai.myqcloud.com); for other triggers, please see the descriptions of parameters bound to the specific trigger.
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * Type of trigger. Values: `cos`, `cmq`, `timer`, `ckafka` and `apigw`. To create a CLS trigger, please refer to [Creating Shipping Task (SCF)](https://intl.cloud.tencent.com/document/product/614/61096?from_cn_redirect=1).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * For parameters of triggers, see [Trigger Description](https://intl.cloud.tencent.com/document/product/583/39901?from_cn_redirect=1)
                     */
                    std::string m_triggerDesc;
                    bool m_triggerDescHasBeenSet;

                    /**
                     * Function namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Function version. It defaults to `$LATEST`. It’s recommended to use `[$DEFAULT](https://intl.cloud.tencent.com/document/product/583/36149?from_cn_redirect=1#.E9.BB.98.E8.AE.A4.E5.88.AB.E5.90.8D)` for canary release.
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * Initial enabling status of the trigger. `OPEN` indicates enabled, and `CLOSE` indicates disabled.
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Custom argument, supporting only the timer trigger.
                     */
                    std::string m_customArgument;
                    bool m_customArgumentHasBeenSet;

                    /**
                     * Trigger description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_CREATETRIGGERREQUEST_H_
