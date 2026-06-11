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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_OPENCLAWSERVICEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_OPENCLAWSERVICEREQUEST_H_

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
                * OpenClawService request structure.
                */
                class OpenClawServiceRequest : public AbstractModel
                {
                public:
                    OpenClawServiceRequest();
                    ~OpenClawServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Tag type</p><p>Enumeration value:</p><ul><li>OpenClaw: OpenClaw type</li><li>ClawPro: ClawPro type</li></ul>
                     * @return Tag <p>Tag type</p><p>Enumeration value:</p><ul><li>OpenClaw: OpenClaw type</li><li>ClawPro: ClawPro type</li></ul>
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置<p>Tag type</p><p>Enumeration value:</p><ul><li>OpenClaw: OpenClaw type</li><li>ClawPro: ClawPro type</li></ul>
                     * @param _tag <p>Tag type</p><p>Enumeration value:</p><ul><li>OpenClaw: OpenClaw type</li><li>ClawPro: ClawPro type</li></ul>
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取<p>Whether to create a trace topic, default to false</p><p>Enumeration value:</p><ul><li>true: Creates a trace topic</li><li>false: Does not create a trace topic</li></ul>
                     * @return EnableTrace <p>Whether to create a trace topic, default to false</p><p>Enumeration value:</p><ul><li>true: Creates a trace topic</li><li>false: Does not create a trace topic</li></ul>
                     * 
                     */
                    bool GetEnableTrace() const;

                    /**
                     * 设置<p>Whether to create a trace topic, default to false</p><p>Enumeration value:</p><ul><li>true: Creates a trace topic</li><li>false: Does not create a trace topic</li></ul>
                     * @param _enableTrace <p>Whether to create a trace topic, default to false</p><p>Enumeration value:</p><ul><li>true: Creates a trace topic</li><li>false: Does not create a trace topic</li></ul>
                     * 
                     */
                    void SetEnableTrace(const bool& _enableTrace);

                    /**
                     * 判断参数 EnableTrace 是否已赋值
                     * @return EnableTrace 是否已赋值
                     * 
                     */
                    bool EnableTraceHasBeenSet() const;

                private:

                    /**
                     * <p>Tag type</p><p>Enumeration value:</p><ul><li>OpenClaw: OpenClaw type</li><li>ClawPro: ClawPro type</li></ul>
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>Whether to create a trace topic, default to false</p><p>Enumeration value:</p><ul><li>true: Creates a trace topic</li><li>false: Does not create a trace topic</li></ul>
                     */
                    bool m_enableTrace;
                    bool m_enableTraceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_OPENCLAWSERVICEREQUEST_H_
