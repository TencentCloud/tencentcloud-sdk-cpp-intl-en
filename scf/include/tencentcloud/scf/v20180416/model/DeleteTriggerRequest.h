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
                     * 获取Name of the trigger to be deleted
                     * @return TriggerName Name of the trigger to be deleted
                     * 
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置Name of the trigger to be deleted
                     * @param _triggerName Name of the trigger to be deleted
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
                     * 获取Type of the trigger to be deleted. Currently, COS, CMQ, timer, and ckafka triggers are supported.
                     * @return Type Type of the trigger to be deleted. Currently, COS, CMQ, timer, and ckafka triggers are supported.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of the trigger to be deleted. Currently, COS, CMQ, timer, and ckafka triggers are supported.
                     * @param _type Type of the trigger to be deleted. Currently, COS, CMQ, timer, and ckafka triggers are supported.
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
                     * 获取This field is required if a COS trigger is to be deleted. It stores the data {"event":"cos:ObjectCreated:*"} in the JSON format. The data content of this field is in the same format as that of SetTrigger. This field is optional if a scheduled trigger or CMQ trigger is to be deleted.
                     * @return TriggerDesc This field is required if a COS trigger is to be deleted. It stores the data {"event":"cos:ObjectCreated:*"} in the JSON format. The data content of this field is in the same format as that of SetTrigger. This field is optional if a scheduled trigger or CMQ trigger is to be deleted.
                     * 
                     */
                    std::string GetTriggerDesc() const;

                    /**
                     * 设置This field is required if a COS trigger is to be deleted. It stores the data {"event":"cos:ObjectCreated:*"} in the JSON format. The data content of this field is in the same format as that of SetTrigger. This field is optional if a scheduled trigger or CMQ trigger is to be deleted.
                     * @param _triggerDesc This field is required if a COS trigger is to be deleted. It stores the data {"event":"cos:ObjectCreated:*"} in the JSON format. The data content of this field is in the same format as that of SetTrigger. This field is optional if a scheduled trigger or CMQ trigger is to be deleted.
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

                private:

                    /**
                     * Function name
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Name of the trigger to be deleted
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * Type of the trigger to be deleted. Currently, COS, CMQ, timer, and ckafka triggers are supported.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Function namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * This field is required if a COS trigger is to be deleted. It stores the data {"event":"cos:ObjectCreated:*"} in the JSON format. The data content of this field is in the same format as that of SetTrigger. This field is optional if a scheduled trigger or CMQ trigger is to be deleted.
                     */
                    std::string m_triggerDesc;
                    bool m_triggerDescHasBeenSet;

                    /**
                     * Function version. It defaults to `$LATEST`. It’s recommended to use `[$DEFAULT](https://intl.cloud.tencent.com/document/product/583/36149?from_cn_redirect=1#.E9.BB.98.E8.AE.A4.E5.88.AB.E5.90.8D)` for canary release.
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_DELETETRIGGERREQUEST_H_
