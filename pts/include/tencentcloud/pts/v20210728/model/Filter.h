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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_FILTER_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Metric query filter.
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Equals: 0, not equals: 1.
                     * @return Operator Equals: 0, not equals: 1.
                     * 
                     */
                    int64_t GetOperator() const;

                    /**
                     * 设置Equals: 0, not equals: 1.
                     * @param _operator Equals: 0, not equals: 1.
                     * 
                     */
                    void SetOperator(const int64_t& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Tag name, optional values include:
1. method, request method name;
2. proto: protocol name;
3. service: service name;
4. status: response status code;
5.result: response details
6.check: check name.
                     * @return LabelName Tag name, optional values include:
1. method, request method name;
2. proto: protocol name;
3. service: service name;
4. status: response status code;
5.result: response details
6.check: check name.
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置Tag name, optional values include:
1. method, request method name;
2. proto: protocol name;
3. service: service name;
4. status: response status code;
5.result: response details
6.check: check name.
                     * @param _labelName Tag name, optional values include:
1. method, request method name;
2. proto: protocol name;
3. service: service name;
4. status: response status code;
5.result: response details
6.check: check name.
                     * 
                     */
                    void SetLabelName(const std::string& _labelName);

                    /**
                     * 判断参数 LabelName 是否已赋值
                     * @return LabelName 是否已赋值
                     * 
                     */
                    bool LabelNameHasBeenSet() const;

                    /**
                     * 获取Tag value, optional values include:
1.method: request method name, for example, GET, POST, PUT, etc.
2.proto: protocol name, for example, HTTP/1.1, HTTP/2, etc.
3.service: service name, for example, the request URL such as http://httpbin.org/get
4.status: response status code, for example, 200, 404, 500, etc.
5.result: response details, used to determine whether the request was successful or failed; if successful, the result Tag value is ok; if failed, the result Tag carries an error code and description.
6.check: check name, the Tag value is the checkpoint name set by the user.
                     * @return LabelValue Tag value, optional values include:
1.method: request method name, for example, GET, POST, PUT, etc.
2.proto: protocol name, for example, HTTP/1.1, HTTP/2, etc.
3.service: service name, for example, the request URL such as http://httpbin.org/get
4.status: response status code, for example, 200, 404, 500, etc.
5.result: response details, used to determine whether the request was successful or failed; if successful, the result Tag value is ok; if failed, the result Tag carries an error code and description.
6.check: check name, the Tag value is the checkpoint name set by the user.
                     * 
                     */
                    std::string GetLabelValue() const;

                    /**
                     * 设置Tag value, optional values include:
1.method: request method name, for example, GET, POST, PUT, etc.
2.proto: protocol name, for example, HTTP/1.1, HTTP/2, etc.
3.service: service name, for example, the request URL such as http://httpbin.org/get
4.status: response status code, for example, 200, 404, 500, etc.
5.result: response details, used to determine whether the request was successful or failed; if successful, the result Tag value is ok; if failed, the result Tag carries an error code and description.
6.check: check name, the Tag value is the checkpoint name set by the user.
                     * @param _labelValue Tag value, optional values include:
1.method: request method name, for example, GET, POST, PUT, etc.
2.proto: protocol name, for example, HTTP/1.1, HTTP/2, etc.
3.service: service name, for example, the request URL such as http://httpbin.org/get
4.status: response status code, for example, 200, 404, 500, etc.
5.result: response details, used to determine whether the request was successful or failed; if successful, the result Tag value is ok; if failed, the result Tag carries an error code and description.
6.check: check name, the Tag value is the checkpoint name set by the user.
                     * 
                     */
                    void SetLabelValue(const std::string& _labelValue);

                    /**
                     * 判断参数 LabelValue 是否已赋值
                     * @return LabelValue 是否已赋值
                     * 
                     */
                    bool LabelValueHasBeenSet() const;

                private:

                    /**
                     * Equals: 0, not equals: 1.
                     */
                    int64_t m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Tag name, optional values include:
1. method, request method name;
2. proto: protocol name;
3. service: service name;
4. status: response status code;
5.result: response details
6.check: check name.
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * Tag value, optional values include:
1.method: request method name, for example, GET, POST, PUT, etc.
2.proto: protocol name, for example, HTTP/1.1, HTTP/2, etc.
3.service: service name, for example, the request URL such as http://httpbin.org/get
4.status: response status code, for example, 200, 404, 500, etc.
5.result: response details, used to determine whether the request was successful or failed; if successful, the result Tag value is ok; if failed, the result Tag carries an error code and description.
6.check: check name, the Tag value is the checkpoint name set by the user.
                     */
                    std::string m_labelValue;
                    bool m_labelValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_FILTER_H_
