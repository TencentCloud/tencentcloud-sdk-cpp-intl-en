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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATENETWORKAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATENETWORKAPPLICATIONREQUEST_H_

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
                * CreateNetworkApplication request structure.
                */
                class CreateNetworkApplicationRequest : public AbstractModel
                {
                public:
                    CreateNetworkApplicationRequest();
                    ~CreateNetworkApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Network application name: length not exceeding 64 characters, name must be unique.</p><ul><li>Can only contain the following characters:<ul><li>English letters (a-z and A-Z)</li><li>Digits</li><li>Underscore</li><li>Hyphen (minus sign)</li><li>Chinese characters</li></ul></li><li>At least one character</li><li>Must not contain spaces</li><li>Cannot contain other special characters (such as @, #, $, %, etc.)</li></ul>
                     * @return Name <p>Network application name: length not exceeding 64 characters, name must be unique.</p><ul><li>Can only contain the following characters:<ul><li>English letters (a-z and A-Z)</li><li>Digits</li><li>Underscore</li><li>Hyphen (minus sign)</li><li>Chinese characters</li></ul></li><li>At least one character</li><li>Must not contain spaces</li><li>Cannot contain other special characters (such as @, #, $, %, etc.)</li></ul>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Network application name: length not exceeding 64 characters, name must be unique.</p><ul><li>Can only contain the following characters:<ul><li>English letters (a-z and A-Z)</li><li>Digits</li><li>Underscore</li><li>Hyphen (minus sign)</li><li>Chinese characters</li></ul></li><li>At least one character</li><li>Must not contain spaces</li><li>Cannot contain other special characters (such as @, #, $, %, etc.)</li></ul>
                     * @param _name <p>Network application name: length not exceeding 64 characters, name must be unique.</p><ul><li>Can only contain the following characters:<ul><li>English letters (a-z and A-Z)</li><li>Digits</li><li>Underscore</li><li>Hyphen (minus sign)</li><li>Chinese characters</li></ul></li><li>At least one character</li><li>Must not contain spaces</li><li>Cannot contain other special characters (such as @, #, $, %, etc.)</li></ul>
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
                     * 获取<p>Log Set ID</p><ul><li>Obtain the Log Set ID through the <a href="https://www.tencentcloud.com/document/product/614/58624?from_cn_redirect=1">logset list</a>.</li></ul>
                     * @return LogsetId <p>Log Set ID</p><ul><li>Obtain the Log Set ID through the <a href="https://www.tencentcloud.com/document/product/614/58624?from_cn_redirect=1">logset list</a>.</li></ul>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置<p>Log Set ID</p><ul><li>Obtain the Log Set ID through the <a href="https://www.tencentcloud.com/document/product/614/58624?from_cn_redirect=1">logset list</a>.</li></ul>
                     * @param _logsetId <p>Log Set ID</p><ul><li>Obtain the Log Set ID through the <a href="https://www.tencentcloud.com/document/product/614/58624?from_cn_redirect=1">logset list</a>.</li></ul>
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取<p>Topic name. The limits are as follows:</p><ul><li>Cannot be an empty string</li><li>Cannot contain character '|'</li><li>Cannot use the following names ["cls_service_log","loglistener_status","loglistener_alarm","loglistener_business","cls_service_metric"]</li></ul>
                     * @return TopicName <p>Topic name. The limits are as follows:</p><ul><li>Cannot be an empty string</li><li>Cannot contain character '|'</li><li>Cannot use the following names ["cls_service_log","loglistener_status","loglistener_alarm","loglistener_business","cls_service_metric"]</li></ul>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>Topic name. The limits are as follows:</p><ul><li>Cannot be an empty string</li><li>Cannot contain character '|'</li><li>Cannot use the following names ["cls_service_log","loglistener_status","loglistener_alarm","loglistener_business","cls_service_metric"]</li></ul>
                     * @param _topicName <p>Topic name. The limits are as follows:</p><ul><li>Cannot be an empty string</li><li>Cannot contain character '|'</li><li>Cannot use the following names ["cls_service_log","loglistener_status","loglistener_alarm","loglistener_business","cls_service_metric"]</li></ul>
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                private:

                    /**
                     * <p>Network application name: length not exceeding 64 characters, name must be unique.</p><ul><li>Can only contain the following characters:<ul><li>English letters (a-z and A-Z)</li><li>Digits</li><li>Underscore</li><li>Hyphen (minus sign)</li><li>Chinese characters</li></ul></li><li>At least one character</li><li>Must not contain spaces</li><li>Cannot contain other special characters (such as @, #, $, %, etc.)</li></ul>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Log Set ID</p><ul><li>Obtain the Log Set ID through the <a href="https://www.tencentcloud.com/document/product/614/58624?from_cn_redirect=1">logset list</a>.</li></ul>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>Topic name. The limits are as follows:</p><ul><li>Cannot be an empty string</li><li>Cannot contain character '|'</li><li>Cannot use the following names ["cls_service_log","loglistener_status","loglistener_alarm","loglistener_business","cls_service_metric"]</li></ul>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATENETWORKAPPLICATIONREQUEST_H_
