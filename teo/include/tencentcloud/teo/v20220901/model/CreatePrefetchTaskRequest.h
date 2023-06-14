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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPREFETCHTASKREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPREFETCHTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Header.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreatePrefetchTask request structure.
                */
                class CreatePrefetchTaskRequest : public AbstractModel
                {
                public:
                    CreatePrefetchTaskRequest();
                    ~CreatePrefetchTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the site.
                     * @return ZoneId ID of the site.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site.
                     * @param _zoneId ID of the site.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取List of resources to be pre-warmed, for example:
http://www.example.com/example.txt
                     * @return Targets List of resources to be pre-warmed, for example:
http://www.example.com/example.txt
                     * 
                     */
                    std::vector<std::string> GetTargets() const;

                    /**
                     * 设置List of resources to be pre-warmed, for example:
http://www.example.com/example.txt
                     * @param _targets List of resources to be pre-warmed, for example:
http://www.example.com/example.txt
                     * 
                     */
                    void SetTargets(const std::vector<std::string>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取Whether to encode a URL according to RFC3986. Enable this field when the URL contains non-ASCII characters.
                     * @return EncodeUrl Whether to encode a URL according to RFC3986. Enable this field when the URL contains non-ASCII characters.
                     * 
                     */
                    bool GetEncodeUrl() const;

                    /**
                     * 设置Whether to encode a URL according to RFC3986. Enable this field when the URL contains non-ASCII characters.
                     * @param _encodeUrl Whether to encode a URL according to RFC3986. Enable this field when the URL contains non-ASCII characters.
                     * 
                     */
                    void SetEncodeUrl(const bool& _encodeUrl);

                    /**
                     * 判断参数 EncodeUrl 是否已赋值
                     * @return EncodeUrl 是否已赋值
                     * 
                     */
                    bool EncodeUrlHasBeenSet() const;

                    /**
                     * 获取HTTP header information
                     * @return Headers HTTP header information
                     * 
                     */
                    std::vector<Header> GetHeaders() const;

                    /**
                     * 设置HTTP header information
                     * @param _headers HTTP header information
                     * 
                     */
                    void SetHeaders(const std::vector<Header>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                private:

                    /**
                     * ID of the site.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * List of resources to be pre-warmed, for example:
http://www.example.com/example.txt
                     */
                    std::vector<std::string> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * Whether to encode a URL according to RFC3986. Enable this field when the URL contains non-ASCII characters.
                     */
                    bool m_encodeUrl;
                    bool m_encodeUrlHasBeenSet;

                    /**
                     * HTTP header information
                     */
                    std::vector<Header> m_headers;
                    bool m_headersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPREFETCHTASKREQUEST_H_
