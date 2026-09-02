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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKRECEIVER_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKRECEIVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Receiving robot info
                */
                class WebhookReceiver : public AbstractModel
                {
                public:
                    WebhookReceiver();
                    ~WebhookReceiver() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Robot ID</p>
                     * @return ID <p>Robot ID</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>Robot ID</p>
                     * @param _iD <p>Robot ID</p>
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
                     * 获取<p>Bot name<br>Input limit: 1-20 characters in length</p>
                     * @return Name <p>Bot name<br>Input limit: 1-20 characters in length</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Bot name<br>Input limit: 1-20 characters in length</p>
                     * @param _name <p>Bot name<br>Input limit: 1-20 characters in length</p>
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
                     * 获取<p>Webhook address, returned only if Type=WEBHOOK; otherwise empty</p>
                     * @return WebhookAddr <p>Webhook address, returned only if Type=WEBHOOK; otherwise empty</p>
                     * 
                     */
                    std::string GetWebhookAddr() const;

                    /**
                     * 设置<p>Webhook address, returned only if Type=WEBHOOK; otherwise empty</p>
                     * @param _webhookAddr <p>Webhook address, returned only if Type=WEBHOOK; otherwise empty</p>
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
                     * 获取<p>Function region. It is returned only when Type is SCF.</p>
                     * @return SCFRegion <p>Function region. It is returned only when Type is SCF.</p>
                     * 
                     */
                    std::string GetSCFRegion() const;

                    /**
                     * 设置<p>Function region. It is returned only when Type is SCF.</p>
                     * @param _sCFRegion <p>Function region. It is returned only when Type is SCF.</p>
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
                     * 获取<p>Function namespace, returned only when Type is SCF</p>
                     * @return Namespace <p>Function namespace, returned only when Type is SCF</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>Function namespace, returned only when Type is SCF</p>
                     * @param _namespace <p>Function namespace, returned only when Type is SCF</p>
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
                     * 获取<p>SCF function name. It is returned only when Type is SCF.</p>
                     * @return FunctionName <p>SCF function name. It is returned only when Type is SCF.</p>
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置<p>SCF function name. It is returned only when Type is SCF.</p>
                     * @param _functionName <p>SCF function name. It is returned only when Type is SCF.</p>
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
                     * 获取<p>Function version of the cloud function. It is returned only when Type is SCF.</p>
                     * @return FunctionVersion <p>Function version of the cloud function. It is returned only when Type is SCF.</p>
                     * 
                     */
                    std::string GetFunctionVersion() const;

                    /**
                     * 设置<p>Function version of the cloud function. It is returned only when Type is SCF.</p>
                     * @param _functionVersion <p>Function version of the cloud function. It is returned only when Type is SCF.</p>
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
                     * 获取<p>SCF function alias, returned only when Type is SCF</p>
                     * @return Alias <p>SCF function alias, returned only when Type is SCF</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>SCF function alias, returned only when Type is SCF</p>
                     * @param _alias <p>SCF function alias, returned only when Type is SCF</p>
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
                     * <p>Robot ID</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Bot name<br>Input limit: 1-20 characters in length</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Robot type<br>Enumeration values:<br>WEBHOOK: webhook type<br>SCF: function type</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Webhook address, returned only if Type=WEBHOOK; otherwise empty</p>
                     */
                    std::string m_webhookAddr;
                    bool m_webhookAddrHasBeenSet;

                    /**
                     * <p>Function region. It is returned only when Type is SCF.</p>
                     */
                    std::string m_sCFRegion;
                    bool m_sCFRegionHasBeenSet;

                    /**
                     * <p>Function namespace, returned only when Type is SCF</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>SCF function name. It is returned only when Type is SCF.</p>
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * <p>Function version of the cloud function. It is returned only when Type is SCF.</p>
                     */
                    std::string m_functionVersion;
                    bool m_functionVersionHasBeenSet;

                    /**
                     * <p>SCF function alias, returned only when Type is SCF</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKRECEIVER_H_
