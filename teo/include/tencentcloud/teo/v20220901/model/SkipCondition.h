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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SKIPCONDITION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SKIPCONDITION_H_

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
                * Skip match condition of the exception rule. In case of an exception, skip the specified field and content based on this match condition.
                */
                class SkipCondition : public AbstractModel
                {
                public:
                    SkipCondition();
                    ~SkipCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Exception skip type. Value:
<li>header_fields: HTTP request header;</li>
<li>cookie: HTTP request cookie;</li>
<li>query_string: The query parameter in the HTTP Request URL;</li>
<li>uri: HTTP request URI;</li>
<li>body_raw: HTTP request body;</li>
<li>body_json: HTTP Body in JSON format.</li>
                     * @return Type Exception skip type. Value:
<li>header_fields: HTTP request header;</li>
<li>cookie: HTTP request cookie;</li>
<li>query_string: The query parameter in the HTTP Request URL;</li>
<li>uri: HTTP request URI;</li>
<li>body_raw: HTTP request body;</li>
<li>body_json: HTTP Body in JSON format.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Exception skip type. Value:
<li>header_fields: HTTP request header;</li>
<li>cookie: HTTP request cookie;</li>
<li>query_string: The query parameter in the HTTP Request URL;</li>
<li>uri: HTTP request URI;</li>
<li>body_raw: HTTP request body;</li>
<li>body_json: HTTP Body in JSON format.</li>
                     * @param _type Exception skip type. Value:
<li>header_fields: HTTP request header;</li>
<li>cookie: HTTP request cookie;</li>
<li>query_string: The query parameter in the HTTP Request URL;</li>
<li>uri: HTTP request URI;</li>
<li>body_raw: HTTP request body;</li>
<li>body_json: HTTP Body in JSON format.</li>
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
                     * 获取Field to skip. Value:
<li>args: select query parameter under uri: ?name1=jack&age=12;</li>
<li>path: Select a path under the uri: /path/to/resource.jpg;</li>
<li>full: select the full path under uri: example.com/path/to/resource.jpg?name1=jack&age=12;</li>
<li>upload_filename: Segmented file name, that is, when transferring files in segments;</li>
<li>keys: all keys;</li>
<li>values: The value corresponding to the match Key;</li>
<li>key_value: Match key and match value.</li>
                     * @return Selector Field to skip. Value:
<li>args: select query parameter under uri: ?name1=jack&age=12;</li>
<li>path: Select a path under the uri: /path/to/resource.jpg;</li>
<li>full: select the full path under uri: example.com/path/to/resource.jpg?name1=jack&age=12;</li>
<li>upload_filename: Segmented file name, that is, when transferring files in segments;</li>
<li>keys: all keys;</li>
<li>values: The value corresponding to the match Key;</li>
<li>key_value: Match key and match value.</li>
                     * 
                     */
                    std::string GetSelector() const;

                    /**
                     * 设置Field to skip. Value:
<li>args: select query parameter under uri: ?name1=jack&age=12;</li>
<li>path: Select a path under the uri: /path/to/resource.jpg;</li>
<li>full: select the full path under uri: example.com/path/to/resource.jpg?name1=jack&age=12;</li>
<li>upload_filename: Segmented file name, that is, when transferring files in segments;</li>
<li>keys: all keys;</li>
<li>values: The value corresponding to the match Key;</li>
<li>key_value: Match key and match value.</li>
                     * @param _selector Field to skip. Value:
<li>args: select query parameter under uri: ?name1=jack&age=12;</li>
<li>path: Select a path under the uri: /path/to/resource.jpg;</li>
<li>full: select the full path under uri: example.com/path/to/resource.jpg?name1=jack&age=12;</li>
<li>upload_filename: Segmented file name, that is, when transferring files in segments;</li>
<li>keys: all keys;</li>
<li>values: The value corresponding to the match Key;</li>
<li>key_value: Match key and match value.</li>
                     * 
                     */
                    void SetSelector(const std::string& _selector);

                    /**
                     * 判断参数 Selector 是否已赋值
                     * @return Selector 是否已赋值
                     * 
                     */
                    bool SelectorHasBeenSet() const;

                    /**
                     * 获取Match mode used by the match Key. Value:
<li>equal: exact match, equal to;</li>
<li>wildcard: wildcard match, supports * wildcard.</li>
                     * @return MatchFromType Match mode used by the match Key. Value:
<li>equal: exact match, equal to;</li>
<li>wildcard: wildcard match, supports * wildcard.</li>
                     * 
                     */
                    std::string GetMatchFromType() const;

                    /**
                     * 设置Match mode used by the match Key. Value:
<li>equal: exact match, equal to;</li>
<li>wildcard: wildcard match, supports * wildcard.</li>
                     * @param _matchFromType Match mode used by the match Key. Value:
<li>equal: exact match, equal to;</li>
<li>wildcard: wildcard match, supports * wildcard.</li>
                     * 
                     */
                    void SetMatchFromType(const std::string& _matchFromType);

                    /**
                     * 判断参数 MatchFromType 是否已赋值
                     * @return MatchFromType 是否已赋值
                     * 
                     */
                    bool MatchFromTypeHasBeenSet() const;

                    /**
                     * 获取Value of the match Key.
                     * @return MatchFrom Value of the match Key.
                     * 
                     */
                    std::vector<std::string> GetMatchFrom() const;

                    /**
                     * 设置Value of the match Key.
                     * @param _matchFrom Value of the match Key.
                     * 
                     */
                    void SetMatchFrom(const std::vector<std::string>& _matchFrom);

                    /**
                     * 判断参数 MatchFrom 是否已赋值
                     * @return MatchFrom 是否已赋值
                     * 
                     */
                    bool MatchFromHasBeenSet() const;

                    /**
                     * 获取Match mode used by Content. Value:
<li>equal: exact match, equal to;</li>
<li>wildcard: wildcard match, supports * wildcard.</li>
                     * @return MatchContentType Match mode used by Content. Value:
<li>equal: exact match, equal to;</li>
<li>wildcard: wildcard match, supports * wildcard.</li>
                     * 
                     */
                    std::string GetMatchContentType() const;

                    /**
                     * 设置Match mode used by Content. Value:
<li>equal: exact match, equal to;</li>
<li>wildcard: wildcard match, supports * wildcard.</li>
                     * @param _matchContentType Match mode used by Content. Value:
<li>equal: exact match, equal to;</li>
<li>wildcard: wildcard match, supports * wildcard.</li>
                     * 
                     */
                    void SetMatchContentType(const std::string& _matchContentType);

                    /**
                     * 判断参数 MatchContentType 是否已赋值
                     * @return MatchContentType 是否已赋值
                     * 
                     */
                    bool MatchContentTypeHasBeenSet() const;

                    /**
                     * 获取Value of the match Value.
                     * @return MatchContent Value of the match Value.
                     * 
                     */
                    std::vector<std::string> GetMatchContent() const;

                    /**
                     * 设置Value of the match Value.
                     * @param _matchContent Value of the match Value.
                     * 
                     */
                    void SetMatchContent(const std::vector<std::string>& _matchContent);

                    /**
                     * 判断参数 MatchContent 是否已赋值
                     * @return MatchContent 是否已赋值
                     * 
                     */
                    bool MatchContentHasBeenSet() const;

                private:

                    /**
                     * Exception skip type. Value:
<li>header_fields: HTTP request header;</li>
<li>cookie: HTTP request cookie;</li>
<li>query_string: The query parameter in the HTTP Request URL;</li>
<li>uri: HTTP request URI;</li>
<li>body_raw: HTTP request body;</li>
<li>body_json: HTTP Body in JSON format.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Field to skip. Value:
<li>args: select query parameter under uri: ?name1=jack&age=12;</li>
<li>path: Select a path under the uri: /path/to/resource.jpg;</li>
<li>full: select the full path under uri: example.com/path/to/resource.jpg?name1=jack&age=12;</li>
<li>upload_filename: Segmented file name, that is, when transferring files in segments;</li>
<li>keys: all keys;</li>
<li>values: The value corresponding to the match Key;</li>
<li>key_value: Match key and match value.</li>
                     */
                    std::string m_selector;
                    bool m_selectorHasBeenSet;

                    /**
                     * Match mode used by the match Key. Value:
<li>equal: exact match, equal to;</li>
<li>wildcard: wildcard match, supports * wildcard.</li>
                     */
                    std::string m_matchFromType;
                    bool m_matchFromTypeHasBeenSet;

                    /**
                     * Value of the match Key.
                     */
                    std::vector<std::string> m_matchFrom;
                    bool m_matchFromHasBeenSet;

                    /**
                     * Match mode used by Content. Value:
<li>equal: exact match, equal to;</li>
<li>wildcard: wildcard match, supports * wildcard.</li>
                     */
                    std::string m_matchContentType;
                    bool m_matchContentTypeHasBeenSet;

                    /**
                     * Value of the match Value.
                     */
                    std::vector<std::string> m_matchContent;
                    bool m_matchContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SKIPCONDITION_H_
