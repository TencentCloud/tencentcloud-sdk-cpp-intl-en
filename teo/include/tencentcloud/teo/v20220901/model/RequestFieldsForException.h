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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_REQUESTFIELDSFOREXCEPTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_REQUESTFIELDSFOREXCEPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Skipped field configuration in the exception rule
                */
                class RequestFieldsForException : public AbstractModel
                {
                public:
                    RequestFieldsForException();
                    ~RequestFieldsForException() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specific fields to skip. Supported values: <br/>
<li>body.json: parameter content in JSON requests. At this point, Condition supports key and value, and TargetField supports key and value. For example, { "Scope": "body.json", "Condition": "", "TargetField": "key" } means ALL parameters in the JSON request content skip WAF scan.</li>
<li style="margin-top:5px">cookie: Cookie; at this point, Condition supports key and value, and TargetField supports key and value, for example { "Scope": "cookie", "Condition": "${key} in ['account-id'] and ${value} like ['prefix-*']", "TargetField": "value" }, which means the cookie parameter name equals account-id and the parameter value wildcard matches prefix-* to skip WAF scan;</li>
<li style="margin-top:5px">header: HTTP header parameters. At this point, Condition supports key and value, and TargetField supports key and value. For example, { "Scope": "header", "Condition": "${key} like ['x-auth-*']", "TargetField": "value" } means the header parameter name wildcard match x-auth-* skips WAF scan.</li>
<li style="margin-top:5px">uri.query: URL-encoded content/query parameters. At this point, Condition supports key and value, and TargetField supports key and value. For example, { "Scope": "uri.query", "Condition": "${key} in ['action'] and ${value} in ['upload', 'delete']", "TargetField": "value" } means the parameter name of the URL-encoded content/query parameters is equal to action and the parameter value is equal to upload or delete, skip WAF scan;</li>
<li style="margin-top:5px">uri: request path URI. At this point, Condition must be empty, and TargetField supports query, path, and fullpath. For example, { "Scope": "uri", "Condition": "", "TargetField": "query" } means only query parameters in the request path URI skip WAF scan.</li>
<li style="margin-top:5px">body: request body content. At this point, Condition must be empty, and TargetField supports fullbody and multipart, for example { "Scope": "body",  "Condition": "", "TargetField": "fullbody" }, which means the request body content is the complete request body and skips WAF scan;</li>
                     * @return Scope Specific fields to skip. Supported values: <br/>
<li>body.json: parameter content in JSON requests. At this point, Condition supports key and value, and TargetField supports key and value. For example, { "Scope": "body.json", "Condition": "", "TargetField": "key" } means ALL parameters in the JSON request content skip WAF scan.</li>
<li style="margin-top:5px">cookie: Cookie; at this point, Condition supports key and value, and TargetField supports key and value, for example { "Scope": "cookie", "Condition": "${key} in ['account-id'] and ${value} like ['prefix-*']", "TargetField": "value" }, which means the cookie parameter name equals account-id and the parameter value wildcard matches prefix-* to skip WAF scan;</li>
<li style="margin-top:5px">header: HTTP header parameters. At this point, Condition supports key and value, and TargetField supports key and value. For example, { "Scope": "header", "Condition": "${key} like ['x-auth-*']", "TargetField": "value" } means the header parameter name wildcard match x-auth-* skips WAF scan.</li>
<li style="margin-top:5px">uri.query: URL-encoded content/query parameters. At this point, Condition supports key and value, and TargetField supports key and value. For example, { "Scope": "uri.query", "Condition": "${key} in ['action'] and ${value} in ['upload', 'delete']", "TargetField": "value" } means the parameter name of the URL-encoded content/query parameters is equal to action and the parameter value is equal to upload or delete, skip WAF scan;</li>
<li style="margin-top:5px">uri: request path URI. At this point, Condition must be empty, and TargetField supports query, path, and fullpath. For example, { "Scope": "uri", "Condition": "", "TargetField": "query" } means only query parameters in the request path URI skip WAF scan.</li>
<li style="margin-top:5px">body: request body content. At this point, Condition must be empty, and TargetField supports fullbody and multipart, for example { "Scope": "body",  "Condition": "", "TargetField": "fullbody" }, which means the request body content is the complete request body and skips WAF scan;</li>
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置Specific fields to skip. Supported values: <br/>
<li>body.json: parameter content in JSON requests. At this point, Condition supports key and value, and TargetField supports key and value. For example, { "Scope": "body.json", "Condition": "", "TargetField": "key" } means ALL parameters in the JSON request content skip WAF scan.</li>
<li style="margin-top:5px">cookie: Cookie; at this point, Condition supports key and value, and TargetField supports key and value, for example { "Scope": "cookie", "Condition": "${key} in ['account-id'] and ${value} like ['prefix-*']", "TargetField": "value" }, which means the cookie parameter name equals account-id and the parameter value wildcard matches prefix-* to skip WAF scan;</li>
<li style="margin-top:5px">header: HTTP header parameters. At this point, Condition supports key and value, and TargetField supports key and value. For example, { "Scope": "header", "Condition": "${key} like ['x-auth-*']", "TargetField": "value" } means the header parameter name wildcard match x-auth-* skips WAF scan.</li>
<li style="margin-top:5px">uri.query: URL-encoded content/query parameters. At this point, Condition supports key and value, and TargetField supports key and value. For example, { "Scope": "uri.query", "Condition": "${key} in ['action'] and ${value} in ['upload', 'delete']", "TargetField": "value" } means the parameter name of the URL-encoded content/query parameters is equal to action and the parameter value is equal to upload or delete, skip WAF scan;</li>
<li style="margin-top:5px">uri: request path URI. At this point, Condition must be empty, and TargetField supports query, path, and fullpath. For example, { "Scope": "uri", "Condition": "", "TargetField": "query" } means only query parameters in the request path URI skip WAF scan.</li>
<li style="margin-top:5px">body: request body content. At this point, Condition must be empty, and TargetField supports fullbody and multipart, for example { "Scope": "body",  "Condition": "", "TargetField": "fullbody" }, which means the request body content is the complete request body and skips WAF scan;</li>
                     * @param _scope Specific fields to skip. Supported values: <br/>
<li>body.json: parameter content in JSON requests. At this point, Condition supports key and value, and TargetField supports key and value. For example, { "Scope": "body.json", "Condition": "", "TargetField": "key" } means ALL parameters in the JSON request content skip WAF scan.</li>
<li style="margin-top:5px">cookie: Cookie; at this point, Condition supports key and value, and TargetField supports key and value, for example { "Scope": "cookie", "Condition": "${key} in ['account-id'] and ${value} like ['prefix-*']", "TargetField": "value" }, which means the cookie parameter name equals account-id and the parameter value wildcard matches prefix-* to skip WAF scan;</li>
<li style="margin-top:5px">header: HTTP header parameters. At this point, Condition supports key and value, and TargetField supports key and value. For example, { "Scope": "header", "Condition": "${key} like ['x-auth-*']", "TargetField": "value" } means the header parameter name wildcard match x-auth-* skips WAF scan.</li>
<li style="margin-top:5px">uri.query: URL-encoded content/query parameters. At this point, Condition supports key and value, and TargetField supports key and value. For example, { "Scope": "uri.query", "Condition": "${key} in ['action'] and ${value} in ['upload', 'delete']", "TargetField": "value" } means the parameter name of the URL-encoded content/query parameters is equal to action and the parameter value is equal to upload or delete, skip WAF scan;</li>
<li style="margin-top:5px">uri: request path URI. At this point, Condition must be empty, and TargetField supports query, path, and fullpath. For example, { "Scope": "uri", "Condition": "", "TargetField": "query" } means only query parameters in the request path URI skip WAF scan.</li>
<li style="margin-top:5px">body: request body content. At this point, Condition must be empty, and TargetField supports fullbody and multipart, for example { "Scope": "body",  "Condition": "", "TargetField": "fullbody" }, which means the request body content is the complete request body and skips WAF scan;</li>
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取Expression of the specific field to skip, which must comply with the expression grammar.<br />
Condition supports expression configuration syntax: <li> Write the filter condition expression syntax based on the rule, with support for referencing key and value.</li><li> Support in and like operators, and logical combination with and.</li>
For example: <li>${key} in ['x-trace-id']: The parameter name is equal to x-trace-id.</li><li>${key} in ['x-trace-id'] and ${value} like ['Bearer *']: The parameter name is equal to x-trace-id and the parameter value wildcard matches Bearer *.</li>
                     * @return Condition Expression of the specific field to skip, which must comply with the expression grammar.<br />
Condition supports expression configuration syntax: <li> Write the filter condition expression syntax based on the rule, with support for referencing key and value.</li><li> Support in and like operators, and logical combination with and.</li>
For example: <li>${key} in ['x-trace-id']: The parameter name is equal to x-trace-id.</li><li>${key} in ['x-trace-id'] and ${value} like ['Bearer *']: The parameter name is equal to x-trace-id and the parameter value wildcard matches Bearer *.</li>
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置Expression of the specific field to skip, which must comply with the expression grammar.<br />
Condition supports expression configuration syntax: <li> Write the filter condition expression syntax based on the rule, with support for referencing key and value.</li><li> Support in and like operators, and logical combination with and.</li>
For example: <li>${key} in ['x-trace-id']: The parameter name is equal to x-trace-id.</li><li>${key} in ['x-trace-id'] and ${value} like ['Bearer *']: The parameter name is equal to x-trace-id and the parameter value wildcard matches Bearer *.</li>
                     * @param _condition Expression of the specific field to skip, which must comply with the expression grammar.<br />
Condition supports expression configuration syntax: <li> Write the filter condition expression syntax based on the rule, with support for referencing key and value.</li><li> Support in and like operators, and logical combination with and.</li>
For example: <li>${key} in ['x-trace-id']: The parameter name is equal to x-trace-id.</li><li>${key} in ['x-trace-id'] and ${value} like ['Bearer *']: The parameter name is equal to x-trace-id and the parameter value wildcard matches Bearer *.</li>
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取When the Scope parameter takes different values, the supported values in the TargetField expression are as follows:
<li> body.json: supports key and value</li>
<li> cookie: supports key and value</li>
<li> header: supports key and value</li>
<li> uri.query: supports key and value</li>
<li> uri: supports path, query, and fullpath</li>
<li> body: supports fullbody and multipart</li>
                     * @return TargetField When the Scope parameter takes different values, the supported values in the TargetField expression are as follows:
<li> body.json: supports key and value</li>
<li> cookie: supports key and value</li>
<li> header: supports key and value</li>
<li> uri.query: supports key and value</li>
<li> uri: supports path, query, and fullpath</li>
<li> body: supports fullbody and multipart</li>
                     * 
                     */
                    std::string GetTargetField() const;

                    /**
                     * 设置When the Scope parameter takes different values, the supported values in the TargetField expression are as follows:
<li> body.json: supports key and value</li>
<li> cookie: supports key and value</li>
<li> header: supports key and value</li>
<li> uri.query: supports key and value</li>
<li> uri: supports path, query, and fullpath</li>
<li> body: supports fullbody and multipart</li>
                     * @param _targetField When the Scope parameter takes different values, the supported values in the TargetField expression are as follows:
<li> body.json: supports key and value</li>
<li> cookie: supports key and value</li>
<li> header: supports key and value</li>
<li> uri.query: supports key and value</li>
<li> uri: supports path, query, and fullpath</li>
<li> body: supports fullbody and multipart</li>
                     * 
                     */
                    void SetTargetField(const std::string& _targetField);

                    /**
                     * 判断参数 TargetField 是否已赋值
                     * @return TargetField 是否已赋值
                     * 
                     */
                    bool TargetFieldHasBeenSet() const;

                private:

                    /**
                     * Specific fields to skip. Supported values: <br/>
<li>body.json: parameter content in JSON requests. At this point, Condition supports key and value, and TargetField supports key and value. For example, { "Scope": "body.json", "Condition": "", "TargetField": "key" } means ALL parameters in the JSON request content skip WAF scan.</li>
<li style="margin-top:5px">cookie: Cookie; at this point, Condition supports key and value, and TargetField supports key and value, for example { "Scope": "cookie", "Condition": "${key} in ['account-id'] and ${value} like ['prefix-*']", "TargetField": "value" }, which means the cookie parameter name equals account-id and the parameter value wildcard matches prefix-* to skip WAF scan;</li>
<li style="margin-top:5px">header: HTTP header parameters. At this point, Condition supports key and value, and TargetField supports key and value. For example, { "Scope": "header", "Condition": "${key} like ['x-auth-*']", "TargetField": "value" } means the header parameter name wildcard match x-auth-* skips WAF scan.</li>
<li style="margin-top:5px">uri.query: URL-encoded content/query parameters. At this point, Condition supports key and value, and TargetField supports key and value. For example, { "Scope": "uri.query", "Condition": "${key} in ['action'] and ${value} in ['upload', 'delete']", "TargetField": "value" } means the parameter name of the URL-encoded content/query parameters is equal to action and the parameter value is equal to upload or delete, skip WAF scan;</li>
<li style="margin-top:5px">uri: request path URI. At this point, Condition must be empty, and TargetField supports query, path, and fullpath. For example, { "Scope": "uri", "Condition": "", "TargetField": "query" } means only query parameters in the request path URI skip WAF scan.</li>
<li style="margin-top:5px">body: request body content. At this point, Condition must be empty, and TargetField supports fullbody and multipart, for example { "Scope": "body",  "Condition": "", "TargetField": "fullbody" }, which means the request body content is the complete request body and skips WAF scan;</li>
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * Expression of the specific field to skip, which must comply with the expression grammar.<br />
Condition supports expression configuration syntax: <li> Write the filter condition expression syntax based on the rule, with support for referencing key and value.</li><li> Support in and like operators, and logical combination with and.</li>
For example: <li>${key} in ['x-trace-id']: The parameter name is equal to x-trace-id.</li><li>${key} in ['x-trace-id'] and ${value} like ['Bearer *']: The parameter name is equal to x-trace-id and the parameter value wildcard matches Bearer *.</li>
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * When the Scope parameter takes different values, the supported values in the TargetField expression are as follows:
<li> body.json: supports key and value</li>
<li> cookie: supports key and value</li>
<li> header: supports key and value</li>
<li> uri.query: supports key and value</li>
<li> uri: supports path, query, and fullpath</li>
<li> body: supports fullbody and multipart</li>
                     */
                    std::string m_targetField;
                    bool m_targetFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_REQUESTFIELDSFOREXCEPTION_H_
