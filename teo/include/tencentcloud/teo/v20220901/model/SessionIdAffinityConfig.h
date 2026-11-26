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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SESSIONIDAFFINITYCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SESSIONIDAFFINITYCONFIG_H_

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
                * Affinity configurations based on session ID.
                */
                class SessionIdAffinityConfig : public AbstractModel
                {
                public:
                    SessionIdAffinityConfig();
                    ~SessionIdAffinityConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Transmission location of the session ID parameter. If left empty, it defaults to Header.</p><p>Enumeration values:</p><ul><li>Header: Pass the parameter in the request header.</li></ul><p>Default value: Header.</p>
                     * @return Source <p>Transmission location of the session ID parameter. If left empty, it defaults to Header.</p><p>Enumeration values:</p><ul><li>Header: Pass the parameter in the request header.</li></ul><p>Default value: Header.</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>Transmission location of the session ID parameter. If left empty, it defaults to Header.</p><p>Enumeration values:</p><ul><li>Header: Pass the parameter in the request header.</li></ul><p>Default value: Header.</p>
                     * @param _source <p>Transmission location of the session ID parameter. If left empty, it defaults to Header.</p><p>Enumeration values:</p><ul><li>Header: Pass the parameter in the request header.</li></ul><p>Default value: Header.</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>Request header name for transmitting the session ID. Required when Source is Header.<br>If left empty, it defaults to EO-Infer-Session-Id.</p><p>Input limits: 1-64 characters in length. Only letters, digits, and hyphens are supported.</p><p>Default value: EO-Infer-Session-Id.</p>
                     * @return HeaderName <p>Request header name for transmitting the session ID. Required when Source is Header.<br>If left empty, it defaults to EO-Infer-Session-Id.</p><p>Input limits: 1-64 characters in length. Only letters, digits, and hyphens are supported.</p><p>Default value: EO-Infer-Session-Id.</p>
                     * 
                     */
                    std::string GetHeaderName() const;

                    /**
                     * 设置<p>Request header name for transmitting the session ID. Required when Source is Header.<br>If left empty, it defaults to EO-Infer-Session-Id.</p><p>Input limits: 1-64 characters in length. Only letters, digits, and hyphens are supported.</p><p>Default value: EO-Infer-Session-Id.</p>
                     * @param _headerName <p>Request header name for transmitting the session ID. Required when Source is Header.<br>If left empty, it defaults to EO-Infer-Session-Id.</p><p>Input limits: 1-64 characters in length. Only letters, digits, and hyphens are supported.</p><p>Default value: EO-Infer-Session-Id.</p>
                     * 
                     */
                    void SetHeaderName(const std::string& _headerName);

                    /**
                     * 判断参数 HeaderName 是否已赋值
                     * @return HeaderName 是否已赋值
                     * 
                     */
                    bool HeaderNameHasBeenSet() const;

                private:

                    /**
                     * <p>Transmission location of the session ID parameter. If left empty, it defaults to Header.</p><p>Enumeration values:</p><ul><li>Header: Pass the parameter in the request header.</li></ul><p>Default value: Header.</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>Request header name for transmitting the session ID. Required when Source is Header.<br>If left empty, it defaults to EO-Infer-Session-Id.</p><p>Input limits: 1-64 characters in length. Only letters, digits, and hyphens are supported.</p><p>Default value: EO-Infer-Session-Id.</p>
                     */
                    std::string m_headerName;
                    bool m_headerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SESSIONIDAFFINITYCONFIG_H_
