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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_PUTPROVISIONEDCONCURRENCYCONFIGREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_PUTPROVISIONEDCONCURRENCYCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/TriggerAction.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * PutProvisionedConcurrencyConfig request structure.
                */
                class PutProvisionedConcurrencyConfigRequest : public AbstractModel
                {
                public:
                    PutProvisionedConcurrencyConfigRequest();
                    ~PutProvisionedConcurrencyConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the function for which to set the provisioned concurrency
                     * @return FunctionName Name of the function for which to set the provisioned concurrency
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Name of the function for which to set the provisioned concurrency
                     * @param FunctionName Name of the function for which to set the provisioned concurrency
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取Function version number. Note: the `$LATEST` version does not support provisioned concurrency
                     * @return Qualifier Function version number. Note: the `$LATEST` version does not support provisioned concurrency
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置Function version number. Note: the `$LATEST` version does not support provisioned concurrency
                     * @param Qualifier Function version number. Note: the `$LATEST` version does not support provisioned concurrency
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     */
                    bool QualifierHasBeenSet() const;

                    /**
                     * 获取Provisioned concurrency amount. Note: there is an upper limit for the sum of provisioned concurrency amounts of all versions, which currently is the function's maximum concurrency quota minus 100
                     * @return VersionProvisionedConcurrencyNum Provisioned concurrency amount. Note: there is an upper limit for the sum of provisioned concurrency amounts of all versions, which currently is the function's maximum concurrency quota minus 100
                     */
                    uint64_t GetVersionProvisionedConcurrencyNum() const;

                    /**
                     * 设置Provisioned concurrency amount. Note: there is an upper limit for the sum of provisioned concurrency amounts of all versions, which currently is the function's maximum concurrency quota minus 100
                     * @param VersionProvisionedConcurrencyNum Provisioned concurrency amount. Note: there is an upper limit for the sum of provisioned concurrency amounts of all versions, which currently is the function's maximum concurrency quota minus 100
                     */
                    void SetVersionProvisionedConcurrencyNum(const uint64_t& _versionProvisionedConcurrencyNum);

                    /**
                     * 判断参数 VersionProvisionedConcurrencyNum 是否已赋值
                     * @return VersionProvisionedConcurrencyNum 是否已赋值
                     */
                    bool VersionProvisionedConcurrencyNumHasBeenSet() const;

                    /**
                     * 获取Function namespace. Default value: `default`
                     * @return Namespace Function namespace. Default value: `default`
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Function namespace. Default value: `default`
                     * @param Namespace Function namespace. Default value: `default`
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Scheduled provisioned concurrency scaling action
                     * @return TriggerActions Scheduled provisioned concurrency scaling action
                     */
                    std::vector<TriggerAction> GetTriggerActions() const;

                    /**
                     * 设置Scheduled provisioned concurrency scaling action
                     * @param TriggerActions Scheduled provisioned concurrency scaling action
                     */
                    void SetTriggerActions(const std::vector<TriggerAction>& _triggerActions);

                    /**
                     * 判断参数 TriggerActions 是否已赋值
                     * @return TriggerActions 是否已赋值
                     */
                    bool TriggerActionsHasBeenSet() const;

                private:

                    /**
                     * Name of the function for which to set the provisioned concurrency
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Function version number. Note: the `$LATEST` version does not support provisioned concurrency
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * Provisioned concurrency amount. Note: there is an upper limit for the sum of provisioned concurrency amounts of all versions, which currently is the function's maximum concurrency quota minus 100
                     */
                    uint64_t m_versionProvisionedConcurrencyNum;
                    bool m_versionProvisionedConcurrencyNumHasBeenSet;

                    /**
                     * Function namespace. Default value: `default`
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Scheduled provisioned concurrency scaling action
                     */
                    std::vector<TriggerAction> m_triggerActions;
                    bool m_triggerActionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_PUTPROVISIONEDCONCURRENCYCONFIGREQUEST_H_
