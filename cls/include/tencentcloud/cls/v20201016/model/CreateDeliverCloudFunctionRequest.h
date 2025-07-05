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
                     * 获取Topic id belonging to the delivery rule
                     * @return TopicId Topic id belonging to the delivery rule
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Topic id belonging to the delivery rule
                     * @param _topicId Topic id belonging to the delivery rule
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
                     * 获取Cloud Function name for delivery
                     * @return FunctionName Cloud Function name for delivery
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Cloud Function name for delivery
                     * @param _functionName Cloud Function name for delivery
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
                     * 获取Namespace
                     * @return Namespace Namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace
                     * @param _namespace Namespace
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
                     * 获取Function version
                     * @return Qualifier Function version
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置Function version
                     * @param _qualifier Function version
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
                     * 获取Maximum waiting time for delivery. Unit: seconds
                     * @return Timeout Maximum waiting time for delivery. Unit: seconds
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置Maximum waiting time for delivery. Unit: seconds
                     * @param _timeout Maximum waiting time for delivery. Unit: seconds
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
                     * 获取Maximum number of messages to deliver
                     * @return MaxMsgNum Maximum number of messages to deliver
                     * 
                     */
                    uint64_t GetMaxMsgNum() const;

                    /**
                     * 设置Maximum number of messages to deliver
                     * @param _maxMsgNum Maximum number of messages to deliver
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
                     * Topic id belonging to the delivery rule
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Cloud Function name for delivery
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Function version
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * Maximum waiting time for delivery. Unit: seconds
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Maximum number of messages to deliver
                     */
                    uint64_t m_maxMsgNum;
                    bool m_maxMsgNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDELIVERCLOUDFUNCTIONREQUEST_H_
