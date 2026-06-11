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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDELIVERCLOUDFUNCTIONREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDELIVERCLOUDFUNCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateDeliverCloudFunction request structure.
                */
                class CreateDeliverCloudFunctionRequest : public AbstractModel
                {
                public:
                    CreateDeliverCloudFunctionRequest();
                    ~CreateDeliverCloudFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TopicId to which the Shipping Rule belongs.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
-Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     * @return TopicId TopicId to which the Shipping Rule belongs.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
-Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置TopicId to which the Shipping Rule belongs.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
-Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     * @param _topicId TopicId to which the Shipping Rule belongs.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
-Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Name of the cloud function for delivery. Only event functions (https://www.tencentcloud.com/document/product/583/9694?from_cn_redirect=1#scf-.E4.BA.8B.E4.BB.B6.E5.87.BD.E6.95.B0) (function type selection (https://www.tencentcloud.com/document/product/583/73483?from_cn_redirect=1)) are supported.
Get function information by [getting the function list](https://www.tencentcloud.com/document/product/583/18582?from_cn_redirect=1).
                     * @return FunctionName Name of the cloud function for delivery. Only event functions (https://www.tencentcloud.com/document/product/583/9694?from_cn_redirect=1#scf-.E4.BA.8B.E4.BB.B6.E5.87.BD.E6.95.B0) (function type selection (https://www.tencentcloud.com/document/product/583/73483?from_cn_redirect=1)) are supported.
Get function information by [getting the function list](https://www.tencentcloud.com/document/product/583/18582?from_cn_redirect=1).
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Name of the cloud function for delivery. Only event functions (https://www.tencentcloud.com/document/product/583/9694?from_cn_redirect=1#scf-.E4.BA.8B.E4.BB.B6.E5.87.BD.E6.95.B0) (function type selection (https://www.tencentcloud.com/document/product/583/73483?from_cn_redirect=1)) are supported.
Get function information by [getting the function list](https://www.tencentcloud.com/document/product/583/18582?from_cn_redirect=1).
                     * @param _functionName Name of the cloud function for delivery. Only event functions (https://www.tencentcloud.com/document/product/583/9694?from_cn_redirect=1#scf-.E4.BA.8B.E4.BB.B6.E5.87.BD.E6.95.B0) (function type selection (https://www.tencentcloud.com/document/product/583/73483?from_cn_redirect=1)) are supported.
Get function information by [getting the function list](https://www.tencentcloud.com/document/product/583/18582?from_cn_redirect=1).
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
                     * 获取Namespace. See [Namespace management](https://www.tencentcloud.com/document/product/583/35913?from_cn_redirect=1).
-Obtain the Name by listing the namespace list (https://www.tencentcloud.com/document/product/583/37158?from_cn_redirect=1).
                     * @return Namespace Namespace. See [Namespace management](https://www.tencentcloud.com/document/product/583/35913?from_cn_redirect=1).
-Obtain the Name by listing the namespace list (https://www.tencentcloud.com/document/product/583/37158?from_cn_redirect=1).
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace. See [Namespace management](https://www.tencentcloud.com/document/product/583/35913?from_cn_redirect=1).
-Obtain the Name by listing the namespace list (https://www.tencentcloud.com/document/product/583/37158?from_cn_redirect=1).
                     * @param _namespace Namespace. See [Namespace management](https://www.tencentcloud.com/document/product/583/35913?from_cn_redirect=1).
-Obtain the Name by listing the namespace list (https://www.tencentcloud.com/document/product/583/37158?from_cn_redirect=1).
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
                     * 获取Function version.
-Get the function version by [querying the function version](https://www.tencentcloud.com/document/product/583/37162?from_cn_redirect=1).
                     * @return Qualifier Function version.
-Get the function version by [querying the function version](https://www.tencentcloud.com/document/product/583/37162?from_cn_redirect=1).
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置Function version.
-Get the function version by [querying the function version](https://www.tencentcloud.com/document/product/583/37162?from_cn_redirect=1).
                     * @param _qualifier Function version.
-Get the function version by [querying the function version](https://www.tencentcloud.com/document/product/583/37162?from_cn_redirect=1).
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
                     * 获取Maximum waiting time for delivery. Unit: seconds. Default: 60.
                     * @return Timeout Maximum waiting time for delivery. Unit: seconds. Default: 60.
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置Maximum waiting time for delivery. Unit: seconds. Default: 60.
                     * @param _timeout Maximum waiting time for delivery. Unit: seconds. Default: 60.
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取Maximum number of messages to deliver. Default is 100. Supported range [1,10000].
                     * @return MaxMsgNum Maximum number of messages to deliver. Default is 100. Supported range [1,10000].
                     * 
                     */
                    uint64_t GetMaxMsgNum() const;

                    /**
                     * 设置Maximum number of messages to deliver. Default is 100. Supported range [1,10000].
                     * @param _maxMsgNum Maximum number of messages to deliver. Default is 100. Supported range [1,10000].
                     * 
                     */
                    void SetMaxMsgNum(const uint64_t& _maxMsgNum);

                    /**
                     * 判断参数 MaxMsgNum 是否已赋值
                     * @return MaxMsgNum 是否已赋值
                     * 
                     */
                    bool MaxMsgNumHasBeenSet() const;

                private:

                    /**
                     * TopicId to which the Shipping Rule belongs.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
-Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Name of the cloud function for delivery. Only event functions (https://www.tencentcloud.com/document/product/583/9694?from_cn_redirect=1#scf-.E4.BA.8B.E4.BB.B6.E5.87.BD.E6.95.B0) (function type selection (https://www.tencentcloud.com/document/product/583/73483?from_cn_redirect=1)) are supported.
Get function information by [getting the function list](https://www.tencentcloud.com/document/product/583/18582?from_cn_redirect=1).
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Namespace. See [Namespace management](https://www.tencentcloud.com/document/product/583/35913?from_cn_redirect=1).
-Obtain the Name by listing the namespace list (https://www.tencentcloud.com/document/product/583/37158?from_cn_redirect=1).
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Function version.
-Get the function version by [querying the function version](https://www.tencentcloud.com/document/product/583/37162?from_cn_redirect=1).
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * Maximum waiting time for delivery. Unit: seconds. Default: 60.
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Maximum number of messages to deliver. Default is 100. Supported range [1,10000].
                     */
                    uint64_t m_maxMsgNum;
                    bool m_maxMsgNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDELIVERCLOUDFUNCTIONREQUEST_H_
