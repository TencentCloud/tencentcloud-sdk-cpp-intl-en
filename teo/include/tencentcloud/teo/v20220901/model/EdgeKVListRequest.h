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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVLISTREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * EdgeKVList request structure.
                */
                class EdgeKVListRequest : public AbstractModel
                {
                public:
                    EdgeKVListRequest();
                    ~EdgeKVListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
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
                     * 获取Namespace name.
                     * @return Namespace Namespace name.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace name.
                     * @param _namespace Namespace name.
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
                     * 获取Prefix filtering for key names. Only return key names that begin with the specified prefix, with a length of 1-512 characters. Not specified means return all key names; does not allow input of empty string.
                     * @return Prefix Prefix filtering for key names. Only return key names that begin with the specified prefix, with a length of 1-512 characters. Not specified means return all key names; does not allow input of empty string.
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置Prefix filtering for key names. Only return key names that begin with the specified prefix, with a length of 1-512 characters. Not specified means return all key names; does not allow input of empty string.
                     * @param _prefix Prefix filtering for key names. Only return key names that begin with the specified prefix, with a length of 1-512 characters. Not specified means return all key names; does not allow input of empty string.
                     * 
                     */
                    void SetPrefix(const std::string& _prefix);

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     * 
                     */
                    bool PrefixHasBeenSet() const;

                    /**
                     * 获取Cursor position. Indicates the starting position of the current query for traversing large amounts of data. Do not fill in during the initial query, start traversal from the beginning. Fill in the Cursor value returned last time during follow-up queries to proceed with traversal from that position.

                     * @return Cursor Cursor position. Indicates the starting position of the current query for traversing large amounts of data. Do not fill in during the initial query, start traversal from the beginning. Fill in the Cursor value returned last time during follow-up queries to proceed with traversal from that position.

                     * 
                     */
                    std::string GetCursor() const;

                    /**
                     * 设置Cursor position. Indicates the starting position of the current query for traversing large amounts of data. Do not fill in during the initial query, start traversal from the beginning. Fill in the Cursor value returned last time during follow-up queries to proceed with traversal from that position.

                     * @param _cursor Cursor position. Indicates the starting position of the current query for traversing large amounts of data. Do not fill in during the initial query, start traversal from the beginning. Fill in the Cursor value returned last time during follow-up queries to proceed with traversal from that position.

                     * 
                     */
                    void SetCursor(const std::string& _cursor);

                    /**
                     * 判断参数 Cursor 是否已赋值
                     * @return Cursor 是否已赋值
                     * 
                     */
                    bool CursorHasBeenSet() const;

                    /**
                     * 获取Number of key names returned. Default value: 20. Maximum value: 1000.
                     * @return Limit Number of key names returned. Default value: 20. Maximum value: 1000.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of key names returned. Default value: 20. Maximum value: 1000.
                     * @param _limit Number of key names returned. Default value: 20. Maximum value: 1000.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Namespace name.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Prefix filtering for key names. Only return key names that begin with the specified prefix, with a length of 1-512 characters. Not specified means return all key names; does not allow input of empty string.
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * Cursor position. Indicates the starting position of the current query for traversing large amounts of data. Do not fill in during the initial query, start traversal from the beginning. Fill in the Cursor value returned last time during follow-up queries to proceed with traversal from that position.

                     */
                    std::string m_cursor;
                    bool m_cursorHasBeenSet;

                    /**
                     * Number of key names returned. Default value: 20. Maximum value: 1000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVLISTREQUEST_H_
