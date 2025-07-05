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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_INVOKEAPI_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_INVOKEAPI_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/StrValue.h>
#include <tencentcloud/lke/v20231130/model/ValueInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Information of the requested API.
                */
                class InvokeAPI : public AbstractModel
                {
                public:
                    InvokeAPI();
                    ~InvokeAPI() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Request method, such as get/post.
                     * @return Method Request method, such as get/post.
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Request method, such as get/post.
                     * @param _method Request method, such as get/post.
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Request address.
                     * @return Url Request address.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Request address.
                     * @param _url Request address.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Header parameter.
                     * @return HeaderValues Header parameter.
                     * 
                     */
                    std::vector<StrValue> GetHeaderValues() const;

                    /**
                     * 设置Header parameter.
                     * @param _headerValues Header parameter.
                     * 
                     */
                    void SetHeaderValues(const std::vector<StrValue>& _headerValues);

                    /**
                     * 判断参数 HeaderValues 是否已赋值
                     * @return HeaderValues 是否已赋值
                     * 
                     */
                    bool HeaderValuesHasBeenSet() const;

                    /**
                     * 获取Input parameter Query.
                     * @return QueryValues Input parameter Query.
                     * 
                     */
                    std::vector<StrValue> GetQueryValues() const;

                    /**
                     * 设置Input parameter Query.
                     * @param _queryValues Input parameter Query.
                     * 
                     */
                    void SetQueryValues(const std::vector<StrValue>& _queryValues);

                    /**
                     * 判断参数 QueryValues 是否已赋值
                     * @return QueryValues 是否已赋值
                     * 
                     */
                    bool QueryValuesHasBeenSet() const;

                    /**
                     * 获取Original data of a Post request.
                     * @return RequestPostBody Original data of a Post request.
                     * 
                     */
                    std::string GetRequestPostBody() const;

                    /**
                     * 设置Original data of a Post request.
                     * @param _requestPostBody Original data of a Post request.
                     * 
                     */
                    void SetRequestPostBody(const std::string& _requestPostBody);

                    /**
                     * 判断参数 RequestPostBody 是否已赋值
                     * @return RequestPostBody 是否已赋值
                     * 
                     */
                    bool RequestPostBodyHasBeenSet() const;

                    /**
                     * 获取Returned original data.
                     * @return ResponseBody Returned original data.
                     * 
                     */
                    std::string GetResponseBody() const;

                    /**
                     * 设置Returned original data.
                     * @param _responseBody Returned original data.
                     * 
                     */
                    void SetResponseBody(const std::string& _responseBody);

                    /**
                     * 判断参数 ResponseBody 是否已赋值
                     * @return ResponseBody 是否已赋值
                     * 
                     */
                    bool ResponseBodyHasBeenSet() const;

                    /**
                     * 获取Output parameter.
                     * @return ResponseValues Output parameter.
                     * 
                     */
                    std::vector<ValueInfo> GetResponseValues() const;

                    /**
                     * 设置Output parameter.
                     * @param _responseValues Output parameter.
                     * 
                     */
                    void SetResponseValues(const std::vector<ValueInfo>& _responseValues);

                    /**
                     * 判断参数 ResponseValues 是否已赋值
                     * @return ResponseValues 是否已赋值
                     * 
                     */
                    bool ResponseValuesHasBeenSet() const;

                    /**
                     * 获取Exception information.
                     * @return FailMessage Exception information.
                     * 
                     */
                    std::string GetFailMessage() const;

                    /**
                     * 设置Exception information.
                     * @param _failMessage Exception information.
                     * 
                     */
                    void SetFailMessage(const std::string& _failMessage);

                    /**
                     * 判断参数 FailMessage 是否已赋值
                     * @return FailMessage 是否已赋值
                     * 
                     */
                    bool FailMessageHasBeenSet() const;

                private:

                    /**
                     * Request method, such as get/post.
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Request address.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Header parameter.
                     */
                    std::vector<StrValue> m_headerValues;
                    bool m_headerValuesHasBeenSet;

                    /**
                     * Input parameter Query.
                     */
                    std::vector<StrValue> m_queryValues;
                    bool m_queryValuesHasBeenSet;

                    /**
                     * Original data of a Post request.
                     */
                    std::string m_requestPostBody;
                    bool m_requestPostBodyHasBeenSet;

                    /**
                     * Returned original data.
                     */
                    std::string m_responseBody;
                    bool m_responseBodyHasBeenSet;

                    /**
                     * Output parameter.
                     */
                    std::vector<ValueInfo> m_responseValues;
                    bool m_responseValuesHasBeenSet;

                    /**
                     * Exception information.
                     */
                    std::string m_failMessage;
                    bool m_failMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_INVOKEAPI_H_
