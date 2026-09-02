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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYWEBHOOKRECEIVERREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYWEBHOOKRECEIVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyWebhookReceiver request structure.
                */
                class ModifyWebhookReceiverRequest : public AbstractModel
                {
                public:
                    ModifyWebhookReceiverRequest();
                    ~ModifyWebhookReceiverRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Bot name<br>Input limits: 1-20 characters in length, tenant-unique</p>
                     * @return Name <p>Bot name<br>Input limits: 1-20 characters in length, tenant-unique</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Bot name<br>Input limits: 1-20 characters in length, tenant-unique</p>
                     * @param _name <p>Bot name<br>Input limits: 1-20 characters in length, tenant-unique</p>
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
                     * 获取<p>Robot type<br>Enumeration values:<br>WEBHOOK: webhook type<br>SCF: function type</p>
                     * @return Type <p>Robot type<br>Enumeration values:<br>WEBHOOK: webhook type<br>SCF: function type</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Robot type<br>Enumeration values:<br>WEBHOOK: webhook type<br>SCF: function type</p>
                     * @param _type <p>Robot type<br>Enumeration values:<br>WEBHOOK: webhook type<br>SCF: function type</p>
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
                     * 获取<p>Robot ID. More than 0 means modifying existing records; equal to 0 or not passed means adding new<br>Default value: 0</p>
                     * @return ID <p>Robot ID. More than 0 means modifying existing records; equal to 0 or not passed means adding new<br>Default value: 0</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>Robot ID. More than 0 means modifying existing records; equal to 0 or not passed means adding new<br>Default value: 0</p>
                     * @param _iD <p>Robot ID. More than 0 means modifying existing records; equal to 0 or not passed means adding new<br>Default value: 0</p>
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>Webhook address<br>Input parameter limit: required when Type=WEBHOOK, length 1-2048, must be a valid http(s) URL, and intranet addresses are not allowed</p>
                     * @return WebhookAddr <p>Webhook address<br>Input parameter limit: required when Type=WEBHOOK, length 1-2048, must be a valid http(s) URL, and intranet addresses are not allowed</p>
                     * 
                     */
                    std::string GetWebhookAddr() const;

                    /**
                     * 设置<p>Webhook address<br>Input parameter limit: required when Type=WEBHOOK, length 1-2048, must be a valid http(s) URL, and intranet addresses are not allowed</p>
                     * @param _webhookAddr <p>Webhook address<br>Input parameter limit: required when Type=WEBHOOK, length 1-2048, must be a valid http(s) URL, and intranet addresses are not allowed</p>
                     * 
                     */
                    void SetWebhookAddr(const std::string& _webhookAddr);

                    /**
                     * 判断参数 WebhookAddr 是否已赋值
                     * @return WebhookAddr 是否已赋值
                     * 
                     */
                    bool WebhookAddrHasBeenSet() const;

                    /**
                     * 获取<p>Function region, for example, ap-guangzhou<br>Input limit: required when Type is SCF</p>
                     * @return SCFRegion <p>Function region, for example, ap-guangzhou<br>Input limit: required when Type is SCF</p>
                     * 
                     */
                    std::string GetSCFRegion() const;

                    /**
                     * 设置<p>Function region, for example, ap-guangzhou<br>Input limit: required when Type is SCF</p>
                     * @param _sCFRegion <p>Function region, for example, ap-guangzhou<br>Input limit: required when Type is SCF</p>
                     * 
                     */
                    void SetSCFRegion(const std::string& _sCFRegion);

                    /**
                     * 判断参数 SCFRegion 是否已赋值
                     * @return SCFRegion 是否已赋值
                     * 
                     */
                    bool SCFRegionHasBeenSet() const;

                    /**
                     * 获取<p>Function namespace<br>Input parameter limit: required when Type=SCF<br>Value for reference: obtain through the DescribeSCFNamespaceList API</p>
                     * @return Namespace <p>Function namespace<br>Input parameter limit: required when Type=SCF<br>Value for reference: obtain through the DescribeSCFNamespaceList API</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>Function namespace<br>Input parameter limit: required when Type=SCF<br>Value for reference: obtain through the DescribeSCFNamespaceList API</p>
                     * @param _namespace <p>Function namespace<br>Input parameter limit: required when Type=SCF<br>Value for reference: obtain through the DescribeSCFNamespaceList API</p>
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
                     * 获取<p>SCF function name<br>Input parameter limit: required when Type=SCF<br>Parameter value reference: obtain through the DescribeSCFFunctionList API</p>
                     * @return FunctionName <p>SCF function name<br>Input parameter limit: required when Type=SCF<br>Parameter value reference: obtain through the DescribeSCFFunctionList API</p>
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置<p>SCF function name<br>Input parameter limit: required when Type=SCF<br>Parameter value reference: obtain through the DescribeSCFFunctionList API</p>
                     * @param _functionName <p>SCF function name<br>Input parameter limit: required when Type=SCF<br>Parameter value reference: obtain through the DescribeSCFFunctionList API</p>
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
                     * 获取<p>Function version<br>Input parameter limit: required when Type is SCF, for example $LATEST<br>Parameter value for reference: obtain through the DescribeSCFFunctionVersionList API</p>
                     * @return FunctionVersion <p>Function version<br>Input parameter limit: required when Type is SCF, for example $LATEST<br>Parameter value for reference: obtain through the DescribeSCFFunctionVersionList API</p>
                     * 
                     */
                    std::string GetFunctionVersion() const;

                    /**
                     * 设置<p>Function version<br>Input parameter limit: required when Type is SCF, for example $LATEST<br>Parameter value for reference: obtain through the DescribeSCFFunctionVersionList API</p>
                     * @param _functionVersion <p>Function version<br>Input parameter limit: required when Type is SCF, for example $LATEST<br>Parameter value for reference: obtain through the DescribeSCFFunctionVersionList API</p>
                     * 
                     */
                    void SetFunctionVersion(const std::string& _functionVersion);

                    /**
                     * 判断参数 FunctionVersion 是否已赋值
                     * @return FunctionVersion 是否已赋值
                     * 
                     */
                    bool FunctionVersionHasBeenSet() const;

                    /**
                     * 获取<p>Function alias<br>Input parameter limit: required when Type=SCF, for example, $DEFAULT<br>Parameter value for reference: obtain through the DescribeSCFAliasList API</p>
                     * @return Alias <p>Function alias<br>Input parameter limit: required when Type=SCF, for example, $DEFAULT<br>Parameter value for reference: obtain through the DescribeSCFAliasList API</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>Function alias<br>Input parameter limit: required when Type=SCF, for example, $DEFAULT<br>Parameter value for reference: obtain through the DescribeSCFAliasList API</p>
                     * @param _alias <p>Function alias<br>Input parameter limit: required when Type=SCF, for example, $DEFAULT<br>Parameter value for reference: obtain through the DescribeSCFAliasList API</p>
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                private:

                    /**
                     * <p>Bot name<br>Input limits: 1-20 characters in length, tenant-unique</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Robot type<br>Enumeration values:<br>WEBHOOK: webhook type<br>SCF: function type</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Robot ID. More than 0 means modifying existing records; equal to 0 or not passed means adding new<br>Default value: 0</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Webhook address<br>Input parameter limit: required when Type=WEBHOOK, length 1-2048, must be a valid http(s) URL, and intranet addresses are not allowed</p>
                     */
                    std::string m_webhookAddr;
                    bool m_webhookAddrHasBeenSet;

                    /**
                     * <p>Function region, for example, ap-guangzhou<br>Input limit: required when Type is SCF</p>
                     */
                    std::string m_sCFRegion;
                    bool m_sCFRegionHasBeenSet;

                    /**
                     * <p>Function namespace<br>Input parameter limit: required when Type=SCF<br>Value for reference: obtain through the DescribeSCFNamespaceList API</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>SCF function name<br>Input parameter limit: required when Type=SCF<br>Parameter value reference: obtain through the DescribeSCFFunctionList API</p>
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * <p>Function version<br>Input parameter limit: required when Type is SCF, for example $LATEST<br>Parameter value for reference: obtain through the DescribeSCFFunctionVersionList API</p>
                     */
                    std::string m_functionVersion;
                    bool m_functionVersionHasBeenSet;

                    /**
                     * <p>Function alias<br>Input parameter limit: required when Type=SCF, for example, $DEFAULT<br>Parameter value for reference: obtain through the DescribeSCFAliasList API</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYWEBHOOKRECEIVERREQUEST_H_
